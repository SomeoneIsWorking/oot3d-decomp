// OoT3D decomp @ 0035b818  name=FUN_0035b818  size=100

void FUN_0035b818(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  uint in_fpscr;
  float fVar3;

  uVar2 = FUN_0036ae14(param_1 + 0x1e0,7);
  uVar2 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(DAT_0035b934,DAT_0035b930,uVar2,DAT_0035b930,param_1 + 0x1e0,7,1);
  fVar3 = (float)FUN_003738a8(DAT_0035b938);
  fVar1 = DAT_0035b93c;
  *(float *)(param_1 + 0x6c) = fVar3;
  *(float *)(param_1 + 0x220) = fVar3 * fVar1;
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
