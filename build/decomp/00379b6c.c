// OoT3D decomp @ 00379b6c  name=FUN_00379b6c  size=188

undefined4 FUN_00379b6c(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;

  if ((*DAT_00379c28 & **(uint **)(param_1 + 0x29c8)) == 0) {
    if ('\0' < *(char *)(param_1 + 0x2228)) {
      *(char *)(param_1 + 0x2228) = -*(char *)(param_1 + 0x2228);
    }
  }
  else if (((((*(uint *)(DAT_00379c2c + param_1) & 0x400000) == 0) &&
            (iVar1 = FUN_0033100c(param_1), iVar1 != 0)) && (*(char *)(param_1 + 0x2228) == '\x01'))
          && (uVar2 = (uint)*(char *)(DAT_00379c30 + param_1), uVar2 != 6)) {
    bVar3 = uVar2 == 5;
    if (bVar3) {
      uVar2 = (uint)*(ushort *)(DAT_00379c34 + 0x4a);
    }
    if (!bVar3 || uVar2 != 0) {
      FUN_0036055c(param_2,param_1,DAT_00379c38,1);
      FUN_0031fd60(param_2,param_1);
      return 1;
    }
  }
  return 0;
}
