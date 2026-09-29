// OoT3D decomp @ 0039d0a4  name=FUN_0039d0a4  size=288

void FUN_0039d0a4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;

  FUN_003731e0(param_1 + 0x1a4);
  FUN_00376340(DAT_0039d1c8,DAT_0039d1c4,DAT_0039d1c4,param_2,param_1,4);
  FUN_00319564(param_1,param_2);
  iVar2 = 0;
  iVar1 = FUN_0037571c(param_2);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_2 + 0x22ec);
  }
  if (iVar2 != 0) {
    fVar4 = (float)FUN_0032c66c(*(undefined2 *)(iVar2 + 4),*(undefined2 *)(iVar2 + 2),
                                *(undefined2 *)(param_2 + 0x22b8),0,0);
    fVar5 = (float)VectorSignedToFloat(*(undefined4 *)(iVar2 + 0xc),(byte)(in_fpscr >> 0x15) & 3);
    fVar6 = (float)VectorSignedToFloat(*(undefined4 *)(iVar2 + 0x10),(byte)(in_fpscr >> 0x15) & 3);
    fVar7 = (float)VectorSignedToFloat(*(undefined4 *)(iVar2 + 0x14),(byte)(in_fpscr >> 0x15) & 3);
    fVar10 = (float)VectorSignedToFloat(*(undefined4 *)(iVar2 + 0x18),(byte)(in_fpscr >> 0x15) & 3);
    fVar8 = (float)VectorSignedToFloat(*(undefined4 *)(iVar2 + 0x1c),(byte)(in_fpscr >> 0x15) & 3);
    fVar9 = (float)VectorSignedToFloat(*(undefined4 *)(iVar2 + 0x20),(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x28) = fVar5 + (fVar10 - fVar5) * fVar4;
    *(float *)(param_1 + 0x2c) = fVar6 + (fVar8 - fVar6) * fVar4;
    *(float *)(param_1 + 0x30) = fVar7 + (fVar9 - fVar7) * fVar4;
  }
  psVar3 = (short *)0x0;
  iVar1 = FUN_0037571c(param_2);
  if (iVar1 != 0) {
    psVar3 = *(short **)(param_2 + 0x22ec);
  }
  if ((psVar3 != (short *)0x0) && (*psVar3 == 9)) {
    *(undefined4 *)(param_1 + 3000) = 0x34;
    *(undefined4 *)(param_1 + 0xbbc) = 0;
  }
  return;
}
