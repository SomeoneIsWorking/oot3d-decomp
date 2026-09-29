// OoT3D decomp @ 0046a2e4  name=FUN_0046a2e4  size=436

void FUN_0046a2e4(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint in_fpscr;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;

  iVar2 = FUN_00303ea8(param_1[5]);
  fVar1 = DAT_0046a498;
  iVar5 = 0;
  do {
    if (*(char *)(iVar2 + iVar5 * 0x2c) == '\0') {
      param_1[iVar5 + 0x149] = 0;
    }
    else {
      iVar3 = (**(code **)(*param_1 + 8))(param_1,0xb4);
      iVar4 = 0;
      if (iVar3 != 0) {
        iVar4 = FUN_002db1f0();
      }
      iVar3 = iVar2 + iVar5 * 0x2c;
      FUN_002db0d8(iVar4,param_1 + 0x49,*(undefined1 *)(iVar3 + 1));
      *(uint *)(iVar4 + 0x7c) = (uint)(*(char *)(iVar3 + 2) != '\0');
      uVar7 = *(undefined4 *)(iVar3 + 8);
      uVar8 = *(undefined4 *)(iVar3 + 0xc);
      *(undefined4 *)(iVar4 + 0x80) = *(undefined4 *)(iVar3 + 4);
      *(undefined4 *)(iVar4 + 0x84) = uVar7;
      *(undefined4 *)(iVar4 + 0x88) = uVar8;
      uVar7 = *(undefined4 *)(iVar3 + 0x14);
      *(undefined4 *)(iVar4 + 0x8c) = *(undefined4 *)(iVar3 + 0x10);
      *(undefined4 *)(iVar4 + 0x90) = uVar7;
      *(undefined4 *)(iVar4 + 0x94) = *(undefined4 *)(iVar3 + 0x18);
      uVar7 = *(undefined4 *)(iVar3 + 0x20);
      *(undefined4 *)(iVar4 + 0x98) = *(undefined4 *)(iVar3 + 0x1c);
      *(undefined4 *)(iVar4 + 0x9c) = uVar7;
      local_34 = (float)VectorUnsignedToFloat
                                  ((uint)*(byte *)(iVar3 + 0x28),(byte)(in_fpscr >> 0x15) & 3);
      local_34 = local_34 * fVar1;
      local_30 = (float)VectorUnsignedToFloat
                                  ((uint)*(byte *)(iVar3 + 0x29),(byte)(in_fpscr >> 0x15) & 3);
      local_30 = local_30 * fVar1;
      local_2c = (float)VectorUnsignedToFloat
                                  ((uint)*(byte *)(iVar3 + 0x2a),(byte)(in_fpscr >> 0x15) & 3);
      local_2c = local_2c * fVar1;
      local_28 = (float)VectorUnsignedToFloat
                                  ((uint)*(byte *)(iVar3 + 0x2b),(byte)(in_fpscr >> 0x15) & 3);
      local_28 = local_28 * fVar1;
      FUN_002db07c(iVar4,&local_34);
      fVar6 = *(float *)(iVar3 + 0x24);
      uVar7 = 0;
      if (*(char *)(iVar3 + 3) != '\0') {
        if (*(char *)(iVar3 + 3) == '\x02') {
          uVar7 = 2;
        }
        else {
          uVar7 = 1;
        }
      }
      *(undefined4 *)(iVar4 + 0xa4) = uVar7;
      *(int *)(iVar4 + 0xa8) = (int)fVar6;
      param_1[iVar5 + 0x149] = iVar4;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x100);
  iVar2 = (**(code **)(*param_1 + 8))(param_1,0xb4);
  param_1[0x248] = iVar2;
  if (iVar2 != 0) {
    FUN_002db1f0();
  }
  return;
}
