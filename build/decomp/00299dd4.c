// OoT3D decomp @ 00299dd4  name=FUN_00299dd4  size=208

undefined4 FUN_00299dd4(int param_1,undefined4 param_2)

{
  int iVar1;

  iVar1 = FUN_0033b384(param_2,param_1);
  if (iVar1 == 0) {
    if ((*(uint *)(param_1 + 0x1710) & 0x2000000) != 0) {
      if (*(int *)(DAT_00299ebc + 0x4c) == 1) {
        *(uint *)(param_1 + 0x29b8) = *(uint *)(param_1 + 0x29b8) | 0x1000;
      }
      return 0;
    }
    FUN_0035d27c(param_1,DAT_00299ea4);
    FUN_003604f0(param_1 + 0x1764,param_2,DAT_00299ea8);
    *(int *)(param_1 + 0x1c0) = DAT_00299eb0 + *(int *)(DAT_00299eac + 4) * 4;
    FUN_0036f59c(param_1,DAT_00299eb4);
    if (*(char *)(param_1 + 2) == '\x02') {
      FUN_0036f59c(param_1,DAT_00299eb8 + (uint)*(ushort *)(*(int *)(param_1 + 0x170c) + 0xf4));
    }
    else {
      FUN_0036aeb4(param_1 + 0x28);
    }
  }
  return 1;
}
