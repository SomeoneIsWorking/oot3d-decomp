// OoT3D decomp @ 0028534c  name=FUN_0028534c  size=360

void FUN_0028534c(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;

  FUN_0037547c(DAT_002854bc,param_1 + 0x28,4,DAT_002854b8,DAT_002854b8,DAT_002854b4);
  FUN_00376340(DAT_002854c4,DAT_002854c0,DAT_002854c0,param_2,param_1,5);
  FUN_00370734(param_1 + 0x1a4);
  iVar2 = FUN_0037571c(param_2);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(&DAT_000022dc + param_2);
  }
  if (iVar2 != 0) {
    fVar3 = (float)FUN_0032c66c(*(undefined2 *)(iVar2 + 4),*(undefined2 *)(iVar2 + 2),
                                *(undefined2 *)(param_2 + 0x22b8),8,8);
    fVar4 = (float)VectorSignedToFloat(*(undefined4 *)(iVar2 + 0xc),(byte)(in_fpscr >> 0x15) & 3);
    fVar5 = (float)VectorSignedToFloat(*(undefined4 *)(iVar2 + 0x10),(byte)(in_fpscr >> 0x15) & 3);
    fVar6 = (float)VectorSignedToFloat(*(undefined4 *)(iVar2 + 0x14),(byte)(in_fpscr >> 0x15) & 3);
    fVar9 = (float)VectorSignedToFloat(*(undefined4 *)(iVar2 + 0x18),(byte)(in_fpscr >> 0x15) & 3);
    fVar7 = (float)VectorSignedToFloat(*(undefined4 *)(iVar2 + 0x1c),(byte)(in_fpscr >> 0x15) & 3);
    fVar8 = (float)VectorSignedToFloat(*(undefined4 *)(iVar2 + 0x20),(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x28) = fVar4 + (fVar9 - fVar4) * fVar3;
    *(float *)(param_1 + 0x2c) = fVar5 + (fVar7 - fVar5) * fVar3;
    *(float *)(param_1 + 0x30) = fVar6 + (fVar8 - fVar6) * fVar3;
  }
  fVar3 = DAT_002854cc;
  piVar1 = DAT_002854c8;
  iVar2 = *(int *)(param_1 + 0x128);
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0x28) = *(undefined4 *)(param_1 + 0x28);
    fVar4 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x145e),
                                       (byte)(in_fpscr >> 0x15) & 3);
    *(float *)(iVar2 + 0x2c) = *(float *)(param_1 + 0x2c) + fVar4 + fVar3;
    *(undefined4 *)(iVar2 + 0x30) = *(undefined4 *)(param_1 + 0x30);
  }
  FUN_00328664(param_1,param_2);
  *(undefined1 *)(param_1 + 0xd0) = 0;
  return;
}
