// OoT3D decomp @ 004c7c44  name=FUN_004c7c44  size=56

void FUN_004c7c44(undefined4 param_1,int param_2,undefined1 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;

  iVar1 = DAT_004c7c7c;
  *(undefined1 *)(param_2 + 0x1c) = 3;
  *(char *)(param_2 + 8) = (char)*(undefined4 *)(iVar1 + 8);
  *(undefined1 *)(param_2 + 9) = param_3;
  *(undefined4 *)(param_2 + 0xc) = param_4;
  *(undefined4 *)(param_2 + 0x10) = param_5;
  *(undefined4 *)(param_2 + 0x14) = param_6;
  *(undefined4 *)(param_2 + 0x18) = param_1;
  return;
}
