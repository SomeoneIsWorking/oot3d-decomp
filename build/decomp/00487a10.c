// OoT3D decomp @ 00487a10  name=FUN_00487a10  size=16

void FUN_00487a10(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;

  uVar1 = FUN_00306994();
  FUN_00306994();
  if (*(char *)(param_1 + 0xc) != '\0') {
    FUN_002e69d0();
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
    *(undefined1 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  iVar2 = FUN_0048b2cc(uVar1,param_2);
  if (iVar2 != 0) {
    *(int *)(param_1 + 0x18) = param_1;
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  return;
}
