// OoT3D decomp @ 003084e4  name=thunk_FUN_002c83fc  size=4

int thunk_FUN_002c83fc(int param_1)

{
  int iVar1;

  iVar1 = 0;
  if (param_1 + 0xec000000U < 0x8000000) {
    iVar1 = param_1 + 0xc000000;
  }
  else if ((param_1 + 0xe1000000U < 0x600000) || (param_1 == 0x1f600000)) {
    iVar1 = param_1 + -0x7000000;
  }
  return iVar1;
}
