// OoT3D decomp @ 003de4c0  name=FUN_003de4c0  size=188

void FUN_003de4c0(int param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;

  FUN_003731e0(param_1 + 0x1a4);
  iVar3 = DAT_003de57c;
  if (*(short *)(param_1 + 0x66a) != 0) {
    *(short *)(param_1 + 0x66a) = *(short *)(param_1 + 0x66a) + -1;
  }
  lVar1 = (longlong)iVar3 * (longlong)(int)*(short *)(param_1 + 0x66a);
  iVar3 = (int)((ulonglong)lVar1 >> 0x20);
  iVar3 = iVar3 - (iVar3 >> 0x1f);
  if ((int)*(short *)(param_1 + 0x66a) + iVar3 * -6 == 0) {
    fVar4 = (float)FUN_003738a8(DAT_003de580,0,iVar3 * -3,(int)lVar1);
    fVar5 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x36),(byte)(in_fpscr >> 0x15) & 3)
    ;
    *(short *)(param_1 + 0x36) = (short)(int)(fVar4 + fVar5);
  }
  FUN_0036f21c(param_1);
  if (*(short *)(param_1 + 0x66a) == 0) {
    *(undefined2 *)(param_1 + 0x66a) = 0x30;
  }
  uVar2 = DAT_003de590;
  if ((*(int *)(param_1 + 0x98) < DAT_003de584) &&
     ((int)ABS(*(float *)(param_1 + 0x9c)) < DAT_003de588)) {
    *(undefined4 *)(param_1 + 0x6c) = DAT_003de58c;
    *(undefined4 *)(param_1 + 0x664) = uVar2;
  }
  return;
}
