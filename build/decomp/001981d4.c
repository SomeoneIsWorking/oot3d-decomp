// OoT3D decomp @ 001981d4  name=FUN_001981d4  size=88

void FUN_001981d4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint in_fpscr;

  FUN_003731e0(param_1 + 0x1a4);
  iVar1 = FUN_003736fc(*(undefined4 *)(param_1 + 0x2b8),param_1 + 0x1a4);
  if (iVar1 != 0) {
    uVar2 = FUN_0036ae14(param_1 + 0x1a4,0x11);
    VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
                    /* WARNING: Subroutine does not return */
    FUN_003702c8(uVar2,0x14,0x1e);
  }
  return;
}
