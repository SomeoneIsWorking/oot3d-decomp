// OoT3D decomp @ 00235940  name=FUN_00235940  size=148

void FUN_00235940(undefined4 param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;

  FUN_0036b4ec(param_2 + 0x254,param_1);
  iVar2 = FUN_0036b1e0(DAT_002359d4,param_2 + 0x254);
  if (iVar2 != 0) {
    *(undefined1 *)(param_2 + 0x1ac) = 0;
    *(undefined1 *)(param_2 + 0x1a9) = 0;
    *(undefined1 *)(param_2 + 0x1aa) = 0xff;
    uVar1 = FUN_0033b548(param_2,0);
    *(undefined1 *)(param_2 + 0x1b1) = uVar1;
    *(undefined1 *)(param_2 + 0x1b0) = uVar1;
    *(undefined4 *)(param_2 + 0x1c0) = DAT_002359d8;
    FUN_0033187c(0,2);
    *(undefined1 *)(DAT_002359dc + 0x80) = 0x3c;
    FUN_0035d190(param_1,0);
    *(uint *)(param_2 + 0x29b8) = *(uint *)(param_2 + 0x29b8) | 0x80000;
  }
  return;
}
