// OoT3D decomp @ 004c00ac  name=FUN_004c00ac  size=180

void FUN_004c00ac(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;

  iVar2 = FUN_0036b4ec(param_1 + 0x254);
  if (iVar2 != 0) {
    FUN_0036b2d4(DAT_004c0160,param_1,param_2);
    return;
  }
  iVar2 = FUN_0036b1e0(DAT_004c0164,param_1 + 0x254);
  uVar1 = DAT_004c0168;
  if (iVar2 == 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0x1224);
  *(undefined2 *)(iVar2 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
  *(undefined4 *)(iVar2 + 0x6c) = uVar1;
  *(undefined4 *)(iVar2 + 100) = DAT_004c016c;
  FUN_0036aef0(param_2,param_1);
  FUN_0036f59c(param_1,DAT_004c0170);
  if (*(char *)(param_1 + 2) == '\x02') {
    FUN_0036f59c(param_1,DAT_004c0174 + (uint)*(ushort *)(*(int *)(param_1 + 0x170c) + 0xf4));
    return;
  }
  FUN_0037547c(DAT_004c0174,param_1 + 0x28,4,DAT_0036aee8 + 0x60);
  return;
}
