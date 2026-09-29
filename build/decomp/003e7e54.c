// OoT3D decomp @ 003e7e54  name=FUN_003e7e54  size=68

void FUN_003e7e54(int param_1,undefined4 param_2)

{
  int iVar1;

  iVar1 = FUN_0036cf6c(param_2,(int)*(char *)(param_1 + 3));
  if ((iVar1 != 0) && (iVar1 = FUN_0036adf4(param_1), iVar1 != 0)) {
    *(undefined2 *)(param_1 + 0x1c2) = 0xd2;
    *(undefined4 *)(param_1 + 0x1bc) = DAT_003e7e98;
  }
  return;
}
