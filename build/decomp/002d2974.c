// OoT3D decomp @ 002d2974  name=FUN_002d2974  size=520

int FUN_002d2974(int param_1,int param_2,undefined4 param_3,int param_4)

{
  byte bVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint in_fpscr;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;

  fVar2 = DAT_002d2b7c;
  if (param_2 == 0) {
    return param_1;
  }
  iVar5 = 0;
  iVar6 = param_1 + param_4 * 0x400;
  do {
    if (*(char *)(param_2 + iVar5 * 0x2c) == '\0') {
      *(undefined4 *)(iVar6 + iVar5 * 4 + 0x418) = 0;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x14);
      if ((uint)(*(int *)(param_1 + 0x10) - iVar3) < 0xb4) {
        iVar3 = 0;
      }
      else {
        *(int *)(param_1 + 0x14) = iVar3 + 0xb4;
        iVar3 = iVar3 + *(int *)(param_1 + 0xc);
      }
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_002db1f0();
      }
      if (iVar3 == 0) {
        return 0;
      }
      iVar4 = param_2 + iVar5 * 0x2c;
      FUN_002db0d8(iVar3,param_1 + 0x18,*(undefined1 *)(iVar4 + 1));
      *(uint *)(iVar3 + 0x7c) = (uint)*(byte *)(iVar4 + 2);
      uVar8 = *(undefined4 *)(iVar4 + 8);
      uVar9 = *(undefined4 *)(iVar4 + 0xc);
      *(undefined4 *)(iVar3 + 0x80) = *(undefined4 *)(iVar4 + 4);
      *(undefined4 *)(iVar3 + 0x84) = uVar8;
      *(undefined4 *)(iVar3 + 0x88) = uVar9;
      uVar8 = *(undefined4 *)(iVar4 + 0x14);
      *(undefined4 *)(iVar3 + 0x8c) = *(undefined4 *)(iVar4 + 0x10);
      *(undefined4 *)(iVar3 + 0x90) = uVar8;
      *(undefined4 *)(iVar3 + 0x94) = *(undefined4 *)(iVar4 + 0x18);
      uVar8 = *(undefined4 *)(iVar4 + 0x20);
      *(undefined4 *)(iVar3 + 0x98) = *(undefined4 *)(iVar4 + 0x1c);
      *(undefined4 *)(iVar3 + 0x9c) = uVar8;
      local_3c = (float)VectorUnsignedToFloat
                                  ((uint)*(byte *)(iVar4 + 0x28),(byte)(in_fpscr >> 0x15) & 3);
      local_3c = local_3c * fVar2;
      local_38 = (float)VectorUnsignedToFloat
                                  ((uint)*(byte *)(iVar4 + 0x29),(byte)(in_fpscr >> 0x15) & 3);
      local_38 = local_38 * fVar2;
      local_34 = (float)VectorUnsignedToFloat
                                  ((uint)*(byte *)(iVar4 + 0x2a),(byte)(in_fpscr >> 0x15) & 3);
      local_34 = local_34 * fVar2;
      local_30 = (float)VectorUnsignedToFloat
                                  ((uint)*(byte *)(iVar4 + 0x2b),(byte)(in_fpscr >> 0x15) & 3);
      local_30 = local_30 * fVar2;
      FUN_002db07c(iVar3,&local_3c);
      bVar1 = *(byte *)(iVar4 + 3);
      if (bVar1 < 3) {
        fVar7 = *(float *)(iVar4 + 0x24);
        if (bVar1 == 0) {
          uVar8 = 0;
        }
        else if (bVar1 == 2) {
          uVar8 = 2;
        }
        else {
          uVar8 = 1;
        }
        *(undefined4 *)(iVar3 + 0xa4) = uVar8;
        *(int *)(iVar3 + 0xa8) = (int)fVar7;
      }
      else {
        local_4c = *DAT_002d2b80;
        uStack_48 = DAT_002d2b80[1];
        uStack_44 = DAT_002d2b80[2];
        uStack_40 = DAT_002d2b80[3];
        *(undefined4 *)(iVar3 + 0xa4) = 3;
        *(undefined4 *)(iVar3 + 0xa8) = 0;
        FUN_0035bad0(iVar3,&local_4c,0);
      }
      if ((*(byte *)(iVar4 + 2) & 2) != 0) {
        FUN_0046aa44(iVar3);
      }
      if ((*(byte *)(iVar4 + 2) & 4) != 0) {
        FUN_0046aa80(iVar3);
      }
      *(int *)(iVar6 + iVar5 * 4 + 0x418) = iVar3;
    }
    iVar5 = iVar5 + 1;
    if (0xff < iVar5) {
      return 1;
    }
  } while( true );
}
