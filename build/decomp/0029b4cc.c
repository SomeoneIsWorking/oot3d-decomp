// OoT3D decomp @ 0029b4cc  name=FUN_0029b4cc  size=1020

void FUN_0029b4cc(int param_1,int param_2)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  undefined4 local_4c;
  int local_48;

  local_4c = 0;
  local_48 = param_2;
  FUN_003532e8(param_1,1);
  FUN_003510b0(param_1,DAT_0029b8c8);
  if ((*(ushort *)(param_1 + 0x1c) & 0xff) == 0) {
    FUN_0034f910(param_2,param_1 + 0x1bc);
    FUN_0034f760(param_2,param_1 + 0x1bc,param_1,DAT_0029b8cc,param_1 + 0x1dc);
    iVar6 = DAT_0029b8cc;
    iVar7 = 0;
    do {
      iVar4 = *(int *)(iVar6 + 0xc);
      local_70 = *(float *)(iVar7 * 0x3c + 0x18 + iVar4) + *(float *)(param_1 + 8);
      local_6c = *(float *)(iVar7 * 0x3c + 0x1c + iVar4) + *(float *)(param_1 + 0xc);
      local_68 = *(float *)(iVar7 * 0x3c + 0x20 + iVar4) + *(float *)(param_1 + 0x10);
      local_64 = *(float *)(iVar7 * 0x3c + 0x24 + iVar4) + *(float *)(param_1 + 8);
      local_60 = *(float *)(iVar7 * 0x3c + 0x28 + iVar4) + *(float *)(param_1 + 0xc);
      local_5c = *(float *)(iVar7 * 0x3c + 0x2c + iVar4) + *(float *)(param_1 + 0x10);
      local_58 = *(float *)(iVar7 * 0x3c + 0x30 + iVar4) + *(float *)(param_1 + 8);
      local_54 = *(float *)(iVar7 * 0x3c + 0x34 + iVar4) + *(float *)(param_1 + 0xc);
      local_50 = *(float *)(iVar4 + iVar7 * 0x3c + 0x38) + *(float *)(param_1 + 0x10);
      FUN_00362434(param_1 + 0x1bc,iVar7,&local_70,&local_64,&local_58);
      iVar7 = iVar7 + 1;
    } while (iVar7 < 2);
  }
  FUN_00372f38(param_1,param_2,param_1 + 0x2a0,10,param_1 + 0x2a4,9,0);
  if ((*(ushort *)(param_1 + 0x1c) & 0xff) == 0) {
    local_4c = FUN_00353fd4(param_1,param_2,6);
  }
  else {
    local_4c = FUN_00353fd4(param_1,param_2,5);
  }
  uVar5 = FUN_00353ec8(param_2,local_48 + 0xae8,param_1,local_4c);
  *(undefined4 *)(param_1 + 0x1a4) = uVar5;
  iVar6 = FUN_0036e864(local_48,((uint)*(ushort *)(param_1 + 0x1c) << 0x10) >> 0x18);
  puVar1 = DAT_0029b8d0;
  if (iVar6 == 0) {
    if ((*(ushort *)(param_1 + 0x1c) & 0xff) == 0) {
      *(undefined4 *)(param_1 + 0x298) = 0;
      *(undefined4 *)(param_1 + 0x294) = *puVar1;
    }
    else {
      *(undefined4 *)(param_1 + 0x298) = 2;
      *(undefined4 *)(param_1 + 0x294) = puVar1[2];
    }
  }
  else if (((int)*(short *)(param_1 + 0x1c) & 0xffU) == 0) {
    *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0xc) + DAT_0029b8d4;
    *(undefined4 *)(param_1 + 0x298) = 4;
    *(undefined4 *)(param_1 + 0x294) = puVar1[4];
  }
  else {
    *(float *)(param_1 + 0x2c) =
         *(float *)(param_1 + 0xc) +
         *(float *)(DAT_0029b8d8 + ((int)*(short *)(param_1 + 0x1c) & 0xffU) * 4 + -4);
    *(undefined4 *)(param_1 + 0x298) = 4;
    *(undefined4 *)(param_1 + 0x294) = puVar1[4];
  }
  *(undefined4 *)(param_1 + 0x70) = DAT_0029b8dc;
  *(undefined4 *)(param_1 + 0x74) = DAT_0029b8e0;
  if ((*(ushort *)(param_1 + 0x1c) & 0xff) == 0) {
    fVar11 = *(float *)(param_1 + 0xc) - DAT_0029b8e4;
    fVar8 = (float)FUN_002cfca0((int)(short)(*(short *)(param_1 + 0xbe) + -0x8000));
    fVar9 = (float)FUN_00338f60((int)(short)(*(short *)(param_1 + 0xbe) + -0x8000));
    fVar3 = DAT_0029b8ec;
    fVar2 = DAT_0029b8e8;
    iVar7 = 0;
    iVar6 = param_1;
    do {
      fVar10 = (float)VectorSignedToFloat(iVar7,(byte)(in_fpscr >> 0x15) & 3);
      fVar10 = fVar3 + fVar10 * fVar2;
      iVar6 = FUN_0036aa20(*(float *)(param_1 + 8) + fVar10 * fVar8,fVar11,
                           *(float *)(param_1 + 0x10) + fVar10 * fVar9,param_2 + 0x208c,iVar6,
                           param_2,0x71,(int)*(short *)(param_1 + 0x34),
                           (int)*(short *)(param_1 + 0x36),(int)*(short *)(param_1 + 0x38),
                           (int)(short)((short)iVar7 + 1U & 0xff |
                                       *(ushort *)(param_1 + 0x1c) & 0xff00));
      if (iVar6 == 0) {
        for (; param_1 != 0; param_1 = *(int *)(param_1 + 0x128)) {
          FUN_00374428(param_1);
        }
        return;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 5);
  }
  return;
}
