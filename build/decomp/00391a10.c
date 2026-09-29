// OoT3D decomp @ 00391a10  name=FUN_00391a10  size=460

void FUN_00391a10(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;

  iVar2 = *(int *)(DAT_00391c78 + param_2);
  if (DAT_00391c7c < (int)(*(float *)(param_1 + 0x2c) - *(float *)(param_1 + 0x84))) {
    *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) - DAT_00391c80;
  }
  fVar3 = (float)FUN_00340698(*(undefined4 *)(param_1 + 0x66c));
  *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) + fVar3 * DAT_00391c84;
  fVar3 = (float)FUN_00340698(*(undefined4 *)(param_1 + 0x66c));
  fVar3 = fVar3 * DAT_00391c88;
  if (fVar3 < DAT_00391c8c) {
    fVar3 = -fVar3;
  }
  *(float *)(param_1 + 0x66c) = *(float *)(param_1 + 0x66c) + fVar3 + DAT_00391c90;
  iVar1 = *(int *)(param_1 + 0x660) + -1;
  *(int *)(param_1 + 0x660) = iVar1;
  if (0 < iVar1) {
    FUN_003731e0(param_1 + 0x1a4);
    *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x36) + *(short *)(param_1 + 0x680);
    if (*(short *)(param_1 + 0x684) < 1) {
      FUN_0039ac64(param_1);
      *(undefined2 *)(param_1 + 0x682) = 0x3c;
    }
    else {
      *(short *)(param_1 + 0x684) = *(short *)(param_1 + 0x684) + -1;
    }
    *(short *)(param_1 + 0xbe) = *(short *)(param_1 + 0xbe) + 0x15e;
    if ((*(int *)(DAT_00391ca8 + 0x10) != 0) ||
       (fVar4 = *(float *)(iVar2 + 0x28) - *(float *)(param_1 + 8),
       fVar3 = *(float *)(iVar2 + 0x30) - *(float *)(param_1 + 0x10),
       *(float *)(param_1 + 0x664) <= SQRT(fVar4 * fVar4 + fVar3 * fVar3))) {
      FUN_0039ac90(param_1);
    }
    else {
      *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x92);
      FUN_00323698(param_1);
      *(ushort *)(param_1 + 0x686) = (ushort)*(undefined4 *)(DAT_00391cac + param_2) & 1;
    }
    FUN_00375a18(param_1 + 0x67c,4000,1,500,0);
    *(short *)(param_1 + 0x67e) = *(short *)(param_1 + 0x67e) + *(short *)(param_1 + 0x67c);
    FUN_0036e168(DAT_00391cb4,param_1 + 0x678);
    FUN_00375bcc(param_1,DAT_00391cb8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
