// OoT3D decomp @ 0039d788  name=FUN_0039d788  size=68

void FUN_0039d788(int param_1,int param_2)

{
  int iVar1;

  FUN_0031a3dc();
  iVar1 = FUN_003769d8(param_2 + 0x28a0);
  if (iVar1 != 2) {
    return;
  }
  if (*(int *)(param_1 + 0xbe4) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0xbe4) + 0x21c) = 4;
  }
  FUN_00374428(param_1);
  return;
}
