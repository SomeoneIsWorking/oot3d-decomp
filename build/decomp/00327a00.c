// OoT3D decomp @ 00327a00  name=FUN_00327a00  size=120

void FUN_00327a00(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;

  if ((*(uint *)(param_1 + 0x5bf4) & 0x7f) == 0xd) {
    uVar1 = FUN_0036f848(*(undefined4 *)(param_1 + *(short *)(param_1 + 0xa64) * 4 + 0xa54),2,
                         param_3,param_4,param_4);
    FUN_0036f7c0(uVar1,DAT_00327b30);
    FUN_0036f6b0(uVar1,4,0,0,0);
    FUN_0036f628(uVar1,0x7f);
  }
  if ((*(uint *)(param_1 + 0x5bf4) & 0x3f) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  return;
}
