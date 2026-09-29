// OoT3D decomp @ 00208d64  name=FUN_00208d64  size=136

undefined4 FUN_00208d64(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;

  if (((*(int *)(param_1 + 0x1744) != 0) &&
      (iVar2 = FUN_00343f0c(param_2,param_2 + 0x224c), iVar2 != 0)) &&
     ((*(uint *)(*(int *)(param_1 + 0x29c8) + 4) & *DAT_00208dec) != 0)) {
    *(undefined1 *)(*(int *)(param_1 + 0x1744) + 0x3ed) = 1;
    uVar1 = DAT_00208df0;
    *(uint *)(param_1 + 0x29b8) = *(uint *)(param_1 + 0x29b8) | 0x80;
    FUN_0035976c(param_2,param_1,uVar1);
    return 1;
  }
  return 0;
}
