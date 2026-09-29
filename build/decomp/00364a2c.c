// OoT3D decomp @ 00364a2c  name=FUN_00364a2c  size=96

void FUN_00364a2c(int param_1)

{
  int iVar1;
  undefined4 uVar2;

  FUN_0035a49c(DAT_00364a8c,param_1 + 0x1e0,DAT_00364a90);
  iVar1 = DAT_00364a94;
  *(undefined4 *)(param_1 + 0xccc) = 0;
  uVar2 = DAT_00364a98;
  *(undefined2 *)(iVar1 + param_1) = 1;
  *(undefined4 *)(param_1 + 0x6c) = uVar2;
  *(undefined4 *)(param_1 + 0xcb8) = 5;
  uVar2 = DAT_00364a9c;
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x92);
  *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x92);
  FUN_00375bcc(param_1,uVar2);
  *(undefined4 *)(param_1 + 0xcc0) = DAT_00364aa0;
  return;
}
