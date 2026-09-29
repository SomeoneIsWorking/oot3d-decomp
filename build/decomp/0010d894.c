// OoT3D decomp @ 0010d894  name=FUN_0010d894  size=244

void FUN_0010d894(int param_1,undefined4 param_2)

{
  undefined4 uVar1;

  uVar1 = DAT_0010d98c;
  if (((int)(short)(*(short *)(param_1 + 0x92) - *(short *)(param_1 + 0xbe)) + 0x4300U < 0x8601) &&
     (*(int *)(param_1 + 0x98) < DAT_0010d988)) {
    FUN_0036bcc8(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),
                 *(undefined4 *)(param_1 + 0x44),param_2,param_1,param_1 + 0x96c,param_1 + 0x972,
                 0x4300);
    return;
  }
  FUN_00375a18(param_1 + 0x96c,0,6,DAT_0010d98c,100);
  FUN_00375a18(param_1 + 0x96e,0,6,uVar1,100);
  FUN_00375a18(param_1 + 0x972,0,6,uVar1,100);
  FUN_00375a18(param_1 + 0x974,0,6,uVar1,100);
  return;
}
