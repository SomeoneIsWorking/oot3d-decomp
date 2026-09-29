// OoT3D decomp @ 00364aa4  name=FUN_00364aa4  size=100

void FUN_00364aa4(int param_1)

{
  undefined4 uVar1;
  int iVar2;

  FUN_0034c3e4(param_1 + 0x1e0,DAT_00364b08);
  uVar1 = DAT_00364b0c;
  *(byte *)(param_1 + 0xcf8) = *(byte *)(param_1 + 0xcf8) & 0xfb;
  *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x92);
  FUN_0037043c(uVar1,param_1 + 0x1e0);
  iVar2 = DAT_00364b14;
  uVar1 = DAT_00364b10;
  *(undefined4 *)(param_1 + 0xcb8) = 8;
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  *(undefined2 *)(iVar2 + param_1) = 0;
  *(undefined4 *)(param_1 + 0xccc) = 0xb;
  *(undefined4 *)(param_1 + 0xcc0) = DAT_00364b18;
  return;
}
