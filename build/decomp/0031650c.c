// OoT3D decomp @ 0031650c  name=FUN_0031650c  size=192

void FUN_0031650c(int param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  float fStack_5c;
  float fStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;

  fStack_5c = *(float *)(param_1 + 0x28);
  uStack_54 = *(undefined4 *)(param_1 + 0x30);
  fStack_58 = *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x88);
  uStack_50 = param_2;
  FUN_0036e670(param_2,&fStack_5c,0,0,0,400);
  fVar1 = fRam003166f4;
  if (0 < *(int *)(iRam003166f0 + 8)) {
    fVar2 = (float)FUN_002cfca0(0);
    FUN_00338f60(0);
    fStack_5c = fVar2 * fVar1;
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  return;
}
