// OoT3D decomp @ 0029c130  name=FUN_0029c130  size=152

void FUN_0029c130(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_r4;
  undefined1 *unaff_r5;
  bool in_ZR;

  if (!in_ZR) {
    param_1 = FUN_00347258();
  }
  *(undefined4 *)(unaff_r4 + 0x1dc) = param_1;
  func_0x00340e14();
  uVar2 = func_0x00372f0c();
  func_0x00372d94(*(undefined4 *)(*(int *)(unaff_r4 + 0x1cc) + 0xc),uVar2);
  iVar1 = iRam0029c218;
  *(undefined1 *)(*(int *)(*(int *)(unaff_r4 + 0x1cc) + 0xc) + 0x10) = 1;
  *(undefined2 *)(unaff_r4 + 0x1a8) = *(undefined2 *)(iVar1 + 0x10);
  *(undefined2 *)(unaff_r4 + 0x1b0) = *(undefined2 *)(iVar1 + 0x24);
  *(undefined1 *)(unaff_r4 + 3) = 0xff;
  *unaff_r5 = 1;
  *(undefined1 *)(unaff_r4 + 0x1b5) = 1;
  *(undefined4 *)(unaff_r4 + 0x1c4) = 0xffffffff;
  return;
}
