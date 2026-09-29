// OoT3D decomp @ 003ae2a0  name=FUN_003ae2a0  size=316

void FUN_003ae2a0(int param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;

  if (*(float *)(param_1 + 0x88) <= *(float *)(param_1 + 600)) {
    FUN_00373264(param_1,DAT_003ae3dc);
  }
  fVar1 = DAT_003ae3e4;
  fVar5 = DAT_003ae3e0;
  fVar3 = DAT_003ae3e4;
  if (DAT_003ae3e0 < *(float *)(param_1 + 0x88)) {
    fVar3 = DAT_003ae3e8;
  }
  *(float *)(param_1 + 0x250) = fVar3 * DAT_003ae3ec;
  iVar2 = *(int *)(param_1 + 0x244);
  *(int *)(param_1 + 0x244) = iVar2 + -1;
  if ((iVar2 < 1) || (*(short *)(param_1 + 0x234) != 0)) {
    FUN_00375bcc(param_1,DAT_003ae3f0);
    uVar4 = DAT_003ae3f4;
    *(float *)(param_1 + 0x250) = fVar5;
    *(undefined4 *)(param_1 + 0x1a4) = uVar4;
  }
  else {
    FUN_00375a18(param_1 + 0xbe,(int)*(short *)(param_1 + 0x92),10,
                 (int)(short)(int)*(float *)(param_1 + 0x25c),0);
    FUN_00373500(DAT_003ae3fc,fVar1,DAT_003ae3f8,param_1 + 0x25c);
    *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
    uVar4 = FUN_003696ec(*(undefined4 *)(param_1 + 0x9c),*(undefined4 *)(param_1 + 0x98));
    fVar5 = (float)FUN_00372674();
    *(float *)(param_1 + 0x6c) = ABS(fVar5 * *(float *)(param_1 + 0x250));
    if (*(float *)(param_1 + 600) < *(float *)(param_1 + 0x88)) {
      fVar5 = (float)FUN_003727f0(uVar4);
      *(float *)(param_1 + 0x254) = fVar5 * *(float *)(param_1 + 0x250);
      return;
    }
  }
  return;
}
