// OoT3D decomp @ 00369a68  name=FUN_00369a68  size=232

void FUN_00369a68(int param_1,undefined4 param_2)

{
  undefined4 uVar1;

  uVar1 = DAT_00369b54;
  if (((int)(short)(*(short *)(param_1 + 0x92) - *(short *)(param_1 + 0xbe)) + 0x4300U < 0x8601) &&
     (*(int *)(param_1 + 0x98) < DAT_00369b50)) {
    FUN_0036bcc8(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),
                 *(undefined4 *)(param_1 + 0x44),param_2,param_1,param_1 + 0x28a,param_1 + 0x290,
                 0x4300);
    return;
  }
  FUN_00375a18(param_1 + 0x28a,0,6,DAT_00369b54,100);
  FUN_00375a18(param_1 + 0x28c,0,6,uVar1,100);
  FUN_00375a18(param_1 + 0x290,0,6,uVar1,100);
  FUN_00375a18(param_1 + 0x292,0,6,uVar1,100);
  return;
}
