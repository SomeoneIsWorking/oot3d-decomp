// OoT3D decomp @ 00326b20  name=FUN_00326b20  size=152

undefined4 FUN_00326b20(int param_1,int param_2)

{
  int iVar1;
  int iVar2;

  iVar2 = *(int *)(DAT_00326bb8 + param_2);
  if ((((((*(uint *)(iVar2 + 0x1710) & 1) == 0) && (iVar1 = FUN_0033bd6c(iVar2), iVar1 != 1)) &&
       ((*(uint *)(iVar2 + 0x1710) & 0x100000) == 0)) &&
      (((*(uint *)(param_1 + 0xe54) & 0x80000) == 0 || (*(int *)(DAT_00326bbc + param_1) != 0)))) &&
     ((*(char *)(param_1 + 0x1a4) != '\x12' &&
      (((*(uint *)(iVar2 + 4) & 0x100) == 0 && (iVar2 = FUN_0037571c(param_2), iVar2 == 0)))))) {
    return 1;
  }
  return 0;
}
