// OoT3D decomp @ 00334fa0  name=FUN_00334fa0  size=160

void FUN_00334fa0(int param_1)

{
  int iVar1;
  int iVar2;

  FUN_00340bdc(param_1,*(byte *)(param_1 + 0x2a90) + 1);
  iVar1 = DAT_00335040;
  if (*(char *)(param_1 + 0x2a90) == '.') {
    FUN_003523dc(1);
    iVar2 = FUN_003371d8();
    *(int *)(param_1 + 0x2a80) = iVar2;
    *(undefined2 *)(iVar1 + 2) = 0;
    *(undefined1 *)(iVar2 + 2) = 0;
    FUN_0033704c(0xa000);
    *(undefined2 *)(param_1 + 0x2b5e) = *(undefined2 *)(param_1 + 0x2b60);
  }
  else if (*(char *)(param_1 + 0x2a90) == ',') {
    FUN_003523dc(6);
    iVar2 = FUN_0033f400();
    *(int *)(param_1 + 0x2a80) = iVar2;
    *(undefined2 *)(iVar1 + 2) = 0;
    *(undefined1 *)(iVar2 + 2) = 0;
    FUN_0033f248(0xe,1);
    *(undefined1 *)(param_1 + 0x2b73) = 3;
  }
  FUN_0033f2d8();
  return;
}
