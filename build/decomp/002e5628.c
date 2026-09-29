// OoT3D decomp @ 002e5628  name=FUN_002e5628  size=176

undefined4 FUN_002e5628(int param_1,int param_2)

{
  int iVar1;

  if (*(char *)(param_2 + 0x7d1) != '\x01') {
    if (*(char *)(param_2 + 0x7d1) == '\x02') {
      *(undefined1 *)(param_2 + 0x7d1) = 0;
    }
    return 1;
  }
  if ((*(int *)(param_2 + 0x7bc) != 0) &&
     (iVar1 = FUN_0031b9c0(*(int *)(param_2 + 0x7bc),0), iVar1 != 0)) {
    FUN_0031b99c(*(undefined4 *)(param_2 + 0x7bc));
    *(undefined4 *)(param_2 + 0x7bc) = 0;
    FUN_00463510();
    iVar1 = *(int *)(param_2 + 0x7b8) + 0x10;
    *(int *)(param_2 + 0x3cc) = iVar1;
    FUN_002e4de4(iVar1,param_1,iVar1);
    FUN_0045876c(param_1,param_2);
    FUN_003589dc(param_1,*(undefined4 *)(DAT_002e56d8 + param_1));
    FUN_0032525c(param_1,param_1 + 0x208c);
    *(undefined1 *)(param_2 + 0x7d1) = 0;
  }
  return 0;
}
