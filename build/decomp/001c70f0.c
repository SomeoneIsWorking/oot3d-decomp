// OoT3D decomp @ 001c70f0  name=FUN_001c70f0  size=272

void FUN_001c70f0(int param_1,undefined4 param_2)

{
  short sVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  bool bVar7;

  uVar4 = DAT_001c7218;
  uVar3 = DAT_001c7214;
  fVar2 = DAT_001c720c;
  iVar6 = DAT_001c7204;
  if (*(int *)(param_1 + 0xccc) < 9) {
    if (*(int *)(param_1 + 0xccc) == 0) {
      iVar6 = FUN_00370734(param_1 + 0x1e0);
      if (iVar6 != 0) {
        *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x54);
        *(undefined4 *)(param_1 + 0x70) = DAT_001c7228;
        FUN_00364938(param_1);
        return;
      }
    }
    else {
      *(float *)(param_1 + 0x58) =
           *(float *)(param_1 + 0x58) + *(float *)(param_1 + 0x54) * DAT_001c7208 * DAT_001c7210;
      uVar5 = DAT_001c721c;
      *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) + fVar2;
      FUN_0036e168(DAT_001c7220,uVar5,uVar4,uVar3,param_1 + 0xcc);
      iVar6 = *(int *)(param_1 + 0xccc) + -1;
      *(int *)(param_1 + 0xccc) = iVar6;
      if (iVar6 == 0) {
        FUN_00375bcc(param_1,DAT_001c7224);
        return;
      }
    }
  }
  else {
    *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0xc) - DAT_001c7200;
    if (*(int *)(param_1 + 0x98) < iVar6) {
      *(undefined4 *)(param_1 + 0xccc) = 8;
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
      bVar7 = *(short *)(param_1 + 0x1c) != 0;
      sVar1 = 0;
      if (bVar7) {
        sVar1 = *(short *)(param_1 + 0xce0);
      }
      if (bVar7 && sVar1 != 0xff) {
        FUN_0034f724(param_2);
        return;
      }
    }
  }
  return;
}
