// OoT3D decomp @ 0038a32c  name=FUN_0038a32c  size=108

void FUN_0038a32c(undefined4 param_1,int param_2)

{
  undefined4 uVar1;

  uVar1 = DAT_0038a398;
  *(byte *)(param_2 + 0x172a) = *(byte *)(param_2 + 0x172a) | 2;
  *(undefined4 *)(param_2 + 0x221c) = uVar1;
  *(undefined4 *)(param_2 + 100) = DAT_0038a39c;
  FUN_003604f0(param_2 + 0x254,param_1,0xe0);
  if (*(char *)(param_2 + 2) == '\x02') {
    FUN_0036f59c(param_2,DAT_0038a3a0 + (uint)*(ushort *)(*(int *)(param_2 + 0x170c) + 0xf4));
    return;
  }
  FUN_0037547c(DAT_0038a3a0,param_2 + 0x28,4,DAT_0036aee8 + 0x60);
  return;
}
