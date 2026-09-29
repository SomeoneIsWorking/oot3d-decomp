// OoT3D decomp @ 0036e3a8  name=FUN_0036e3a8  size=76

void FUN_0036e3a8(int param_1)

{
  undefined4 uVar1;

  uVar1 = DAT_0036e5b4;
  *(undefined1 *)(param_1 + 0x7d8) = 1;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
  *(undefined4 *)(param_1 + 0x1a4) = DAT_0036e5b0;
  *(undefined4 *)(param_1 + 0x520) = uVar1;
  FUN_00370350(DAT_0036e5b8,param_1 + 0x5c0,0xb);
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
