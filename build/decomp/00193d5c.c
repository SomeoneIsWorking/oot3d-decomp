// OoT3D decomp @ 00193d5c  name=FUN_00193d5c  size=60

void FUN_00193d5c(int param_1,undefined4 param_2)

{
  int iVar1;

  iVar1 = FUN_0036c940();
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x270) = DAT_00193d9c;
    FUN_0016e398(param_1,param_2);
    return;
  }
  *(undefined4 *)(param_1 + 100) = DAT_00193d98;
  return;
}
