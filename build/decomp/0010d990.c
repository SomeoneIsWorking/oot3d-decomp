// OoT3D decomp @ 0010d990  name=FUN_0010d990  size=244

void FUN_0010d990(int param_1,undefined4 param_2)

{
  undefined4 uVar1;

  uVar1 = DAT_0010da88;
  if (((int)(short)(*(short *)(param_1 + 0x92) - *(short *)(param_1 + 0xbe)) + 0x2300U < 0x4601) &&
     (*(int *)(param_1 + 0x98) < DAT_0010da84)) {
    FUN_0036bcc8(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),
                 *(undefined4 *)(param_1 + 0x44),param_2,param_1,param_1 + 0xa3c,param_1 + 0xa42,
                 0x4300);
    return;
  }
  FUN_00375a18(param_1 + 0xa3c,0,6,DAT_0010da88,100);
  FUN_00375a18(param_1 + 0xa3e,0,6,uVar1,100);
  FUN_00375a18(param_1 + 0xa42,0,6,uVar1,100);
  FUN_00375a18(param_1 + 0xa44,0,6,uVar1,100);
  return;
}
