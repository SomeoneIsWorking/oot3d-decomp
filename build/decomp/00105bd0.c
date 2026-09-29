// OoT3D decomp @ 00105bd0  name=FUN_00105bd0  size=556

void FUN_00105bd0(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;

  iVar5 = *(int *)(DAT_00105dfc + param_2);
  FUN_00370d60(param_1);
  if (*(short *)(param_1 + 0x450) == 0) {
    *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x92);
    *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x92);
    uVar3 = FUN_003758b0(*(float *)(iVar5 + 0x30) - *(float *)(param_1 + 0x10),
                         *(float *)(iVar5 + 0x28) - *(float *)(param_1 + 8));
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 8);
    fVar7 = (float)FUN_002cfca0();
    fVar8 = DAT_00105e00;
    *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + fVar7 * DAT_00105e00;
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x10);
    fVar7 = (float)FUN_00338f60(uVar3);
    *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) + fVar7 * fVar8;
    fVar7 = (float)VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
    fVar8 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x92),(byte)(in_fpscr >> 0x15) & 3)
    ;
    fVar7 = ABS(fVar8 - fVar7) * DAT_00105e04 * DAT_00105e08;
    fVar8 = DAT_00105e0c;
    if ((0x3f7fffff < (int)fVar7) && (fVar8 = fVar7, DAT_00105e10 < (int)fVar7)) {
      fVar8 = DAT_00105e08;
    }
    *(float *)(param_1 + 0x1e4) = fVar8;
  }
  iVar2 = DAT_00105e1c;
  if (*(short *)(param_1 + 0x450) != 2) {
    if (*(int *)(param_1 + 0x1d4) == 0) {
      FUN_00370f5c(param_2,param_1 + 0x484,param_1 + 0x4a8,0x12);
    }
    sVar1 = *(short *)(param_1 + 0x450);
    bVar6 = sVar1 != 0;
    if (!bVar6) {
      sVar1 = *(short *)(param_2 + 0x104);
    }
    if (bVar6 || sVar1 != 0x5b) {
      return;
    }
    uVar4 = *(uint *)(iVar5 + 0x1714);
    if ((uVar4 & 0x1000000) == 0) {
      if (*(float *)(param_1 + 0x98) < *(float *)(param_1 + 0x438) + DAT_00105e2c) {
        *(uint *)(iVar5 + 0x1714) = uVar4 | 0x800000;
      }
      return;
    }
    *(uint *)(iVar5 + 0x1714) = uVar4 | 0x2000000;
    *(int *)(iVar5 + 0x1740) = param_1;
    FUN_0037073c(param_2,0x22);
    uVar3 = DAT_00105e28;
    goto LAB_00105dc8;
  }
  if (((*(uint *)(DAT_00105e14 + 0xbc) & *(uint *)(DAT_00105e18 + 0x48)) == 0) ||
     ((*(ushort *)(DAT_00105e1c + 0xee) & 0x1000) != 0)) {
LAB_00105d04:
    if (*(short *)(param_2 + 0x104) == 0x55) {
      *(ushort *)(iVar2 + 0xec) = *(ushort *)(iVar2 + 0xec) | 0x10;
    }
  }
  else if (*(short *)(param_2 + 0x104) == 0x55) {
    FUN_00370778(param_2);
    goto LAB_00105d04;
  }
  if (*(short *)(param_2 + 0x104) == 0x5b) {
    *(ushort *)(iVar2 + 0xec) = *(ushort *)(iVar2 + 0xec) | 0x400;
  }
  *(undefined1 *)(param_1 + 0x47b) = 3;
  *(undefined1 *)(param_1 + 0x47a) = 0;
  FUN_00370818(param_1);
  *(undefined4 *)(param_1 + 0x6c) = DAT_00105e20;
  *(undefined2 *)(param_1 + 0x482) = 1;
  uVar3 = DAT_00105e24;
  *(undefined2 *)(param_1 + 0x450) = 0;
LAB_00105dc8:
  *(undefined4 *)(param_1 + 0x3f4) = uVar3;
  return;
}
