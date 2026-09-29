// OoT3D decomp @ 0032ae1c  name=FUN_0032ae1c  size=196

void FUN_0032ae1c(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;

  iVar2 = 0;
  iVar1 = FUN_0037571c(param_2);
  if (iVar1 != 0) {
    iVar2 = *(int *)(&DAT_000022dc + param_2 + param_3 * 4);
  }
  if (iVar2 != 0) {
    fVar3 = (float)FUN_0032c66c(*(undefined2 *)(iVar2 + 4),*(undefined2 *)(iVar2 + 2),
                                *(undefined2 *)(param_2 + 0x22b8),8,0);
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
  return;
}
