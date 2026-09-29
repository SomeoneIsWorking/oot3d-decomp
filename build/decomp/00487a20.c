// OoT3D decomp @ 00487a20  name=FUN_00487a20  size=108

void FUN_00487a20(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;

  uVar1 = FUN_00306994();
  FUN_00306994();
  if (*(char *)(param_1 + 4) != '\0') {
    FUN_002e69d0();
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
    *(undefined1 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  iVar2 = FUN_0048b2cc(uVar1,param_3);
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0x10) = param_2;
    *(undefined1 *)(param_1 + 4) = 1;
  }
  return;
}
