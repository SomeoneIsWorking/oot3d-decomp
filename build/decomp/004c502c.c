// OoT3D decomp @ 004c502c  name=FUN_004c502c  size=444

void FUN_004c502c(int param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined2 uVar8;
  short sVar9;
  float fVar10;
  float fVar11;

  fVar2 = DAT_004c51f0;
  fVar1 = DAT_004c51e8;
  *(uint *)(param_1 + 0x1714) = *(uint *)(param_1 + 0x1714) | 0x40;
  if ((*(float *)(param_1 + 0x2264) != fVar2) &&
     (fVar10 = (float)FUN_0036b4d0(DAT_004c51ec,param_1 + 0x254), fVar2 <= fVar10)) {
    fVar11 = *(float *)(param_1 + 0x2264);
    fVar10 = fVar11;
    if (fVar1 < ABS(fVar11)) {
      fVar10 = fVar1;
      if (fVar11 < fVar2) {
        fVar10 = DAT_004c51f4;
      }
      fVar10 = fVar10 * fVar1;
    }
    *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) + fVar10;
    *(float *)(param_1 + 0x2264) = fVar11 - fVar10;
  }
  iVar5 = FUN_0036b4ec(param_1 + 0x254,param_2);
  if (iVar5 != 0) {
    iVar5 = *(int *)(param_1 + 0x12b8);
    sVar9 = 0;
    if (*(int *)(param_1 + 0x284) == 0x24) {
      sVar9 = 0x4000;
    }
    else if (*(int *)(param_1 + 0x284) == 0x26) {
      sVar9 = (short)DAT_004c51f8;
    }
    FUN_002c0948(param_1,param_2);
    *(short *)(param_1 + 0xbe) = *(short *)(param_1 + 0xbe) + sVar9;
    *(uint *)(param_1 + 0x1710) = *(uint *)(param_1 + 0x1710) & 0xff7fffff;
    *(undefined4 *)(param_1 + 0x124) = 0;
    piVar3 = DAT_004c51fc;
    *(undefined2 *)(*DAT_004c51fc + 0xe60) = 0;
    iVar6 = FUN_00350cf4(0x18);
    iVar4 = DAT_004c5200;
    if ((iVar6 != 0) || (*(short *)(*piVar3 + 0x556) != 0)) {
      *(short *)(DAT_004c5200 + 0x66) = (short)(int)*(float *)(iVar5 + 0x28);
      *(short *)(iVar4 + 0x68) = (short)(int)*(float *)(iVar5 + 0x2c);
      *(short *)(iVar4 + 0x6a) = (short)(int)*(float *)(iVar5 + 0x30);
      *(undefined2 *)(iVar4 + 0x6c) = *(undefined2 *)(iVar5 + 0xbe);
    }
    return;
  }
  uVar7 = FUN_0036c5bc(param_2,0);
  FUN_0033885c(uVar7,1);
  if (*(char *)(DAT_004c5204 + param_1) < '\0') {
    uVar8 = (undefined2)DAT_004c5210;
  }
  else {
    uVar8 = (undefined2)DAT_004c520c;
  }
  *(undefined2 *)(DAT_004c5208 + 4) = uVar8;
  FUN_00360a1c(param_1,DAT_004c5208);
  return;
}
