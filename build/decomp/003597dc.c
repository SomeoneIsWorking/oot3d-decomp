// OoT3D decomp @ 003597dc  name=FUN_003597dc  size=212

bool FUN_003597dc(undefined4 param_1,int param_2)

{
  int iVar1;

  if (((*(ushort *)(param_2 + 0x90) & 0x200) != 0) &&
     (((*(uint *)(param_2 + 0x1714) & 0x10) != 0 ||
      ((*DAT_003598b4 & **(uint **)(DAT_003598b0 + param_2)) != 0)))) {
    iVar1 = 0;
    if (*(char *)(param_2 + 0x80) != '2') {
      iVar1 = FUN_00359690();
    }
    if (*(int *)(param_2 + 0x123c) == iVar1) {
      return (*(uint *)(param_2 + 0x1714) & 0x10) != 0;
    }
  }
  FUN_003518cc(param_2);
  FUN_0036055c(param_1,param_2);
  FUN_003604f0(param_2 + 0x254,param_1,0x72);
  *(uint *)(param_2 + 0x1714) = *(uint *)(param_2 + 0x1714) & 0xffffffef;
  return true;
}
