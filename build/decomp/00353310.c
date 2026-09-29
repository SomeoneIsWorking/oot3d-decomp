// OoT3D decomp @ 00353310  name=FUN_00353310  size=352

void FUN_00353310(int param_1,int param_2,int param_3)

{
  float fVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;

  fVar4 = DAT_00353470;
  iVar2 = *(int *)(&DAT_000022dc + param_2 + param_3 * 4);
  fVar7 = (float)VectorSignedToFloat(*(undefined4 *)(iVar2 + 0xc),(byte)(in_fpscr >> 0x15) & 3);
  fVar5 = (float)VectorSignedToFloat(*(undefined4 *)(iVar2 + 0x10),(byte)(in_fpscr >> 0x15) & 3);
  fVar6 = (float)VectorSignedToFloat(*(undefined4 *)(iVar2 + 0x14),(byte)(in_fpscr >> 0x15) & 3);
  fVar10 = (float)VectorSignedToFloat(*(undefined4 *)(iVar2 + 0x18),(byte)(in_fpscr >> 0x15) & 3);
  fVar9 = (float)VectorSignedToFloat(*(undefined4 *)(iVar2 + 0x1c),(byte)(in_fpscr >> 0x15) & 3);
  fVar8 = (float)VectorSignedToFloat(*(undefined4 *)(iVar2 + 0x20),(byte)(in_fpscr >> 0x15) & 3);
  fVar3 = (float)FUN_00361490(*(undefined2 *)(iVar2 + 4),*(undefined2 *)(iVar2 + 2),
                              *(undefined2 *)(param_2 + 0x22b8));
  fVar1 = DAT_00353474;
  if (0x3f800000 < (int)fVar3) {
    fVar3 = DAT_00353474;
  }
  fVar7 = ((fVar7 + (fVar10 - fVar7) * fVar3) - *(float *)(param_1 + 0x28)) * fVar4;
  fVar9 = ((fVar5 + (fVar9 - fVar5) * fVar3) - *(float *)(param_1 + 0x2c)) * fVar4;
  fVar4 = ((fVar6 + (fVar8 - fVar6) * fVar3) - *(float *)(param_1 + 0x30)) * fVar4;
  fVar5 = SQRT(fVar7 * fVar7 + fVar9 * fVar9 + fVar4 * fVar4);
  fVar3 = DAT_00353478;
  if ((DAT_00353478 <= fVar5) && (fVar3 = fVar5, DAT_0035347c < (int)fVar5)) {
    fVar3 = DAT_00353480;
  }
  if (fVar5 != fVar3 && fVar5 != DAT_00353478) {
    fVar3 = fVar3 / fVar5;
    fVar7 = fVar7 * fVar3;
    fVar9 = fVar9 * fVar3;
    fVar4 = fVar4 * fVar3;
  }
  FUN_003705a0(fVar7,DAT_00353474,param_1 + 0x60);
  FUN_003705a0(fVar9,fVar1,param_1 + 100);
  FUN_003705a0(fVar4,fVar1,param_1 + 0x68);
  FUN_0036b96c(param_1);
  return;
}
