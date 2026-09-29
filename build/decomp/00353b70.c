// OoT3D decomp @ 00353b70  name=FUN_00353b70  size=56

void FUN_00353b70(int param_1)

{
  undefined4 uVar1;

  FUN_00370350(param_1 + 0x1a4,0xf);
  uVar1 = DAT_00353c5c;
  *(undefined4 *)(param_1 + 0x238) = DAT_00353c58;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
  *(undefined4 *)(param_1 + 0x274) = uVar1;
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
