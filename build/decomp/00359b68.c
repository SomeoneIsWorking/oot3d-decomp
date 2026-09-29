// OoT3D decomp @ 00359b68  name=FUN_00359b68  size=160

void FUN_00359b68(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint in_fpscr;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;

  iVar1 = *(int *)(&DAT_000022dc + param_2 + param_3 * 4);
  fVar3 = (float)VectorSignedToFloat(*(undefined4 *)(iVar1 + 0xc),(byte)(in_fpscr >> 0x15) & 3);
  fVar4 = (float)VectorSignedToFloat(*(undefined4 *)(iVar1 + 0x10),(byte)(in_fpscr >> 0x15) & 3);
  fVar5 = (float)VectorSignedToFloat(*(undefined4 *)(iVar1 + 0x14),(byte)(in_fpscr >> 0x15) & 3);
  fVar7 = (float)VectorSignedToFloat(*(undefined4 *)(iVar1 + 0x18),(byte)(in_fpscr >> 0x15) & 3);
  fVar6 = (float)VectorSignedToFloat(*(undefined4 *)(iVar1 + 0x1c),(byte)(in_fpscr >> 0x15) & 3);
  fVar8 = (float)VectorSignedToFloat(*(undefined4 *)(iVar1 + 0x20),(byte)(in_fpscr >> 0x15) & 3);
  fVar2 = (float)FUN_00361490(*(undefined2 *)(iVar1 + 4),*(undefined2 *)(iVar1 + 2),
                              *(undefined2 *)(param_2 + 0x22b8));
  *(float *)(param_1 + 0x28) = fVar3 + (fVar7 - fVar3) * fVar2;
  *(float *)(param_1 + 0x2c) = fVar4 + (fVar6 - fVar4) * fVar2;
  *(float *)(param_1 + 0x30) = fVar5 + (fVar8 - fVar5) * fVar2;
  return;
}
