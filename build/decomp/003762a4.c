// OoT3D decomp @ 003762a4  name=FUN_003762a4  size=132

int FUN_003762a4(undefined4 param_1,int param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = FUN_00366738();
  if (iVar1 != 1) {
    (**(code **)(DAT_00376328 + (uint)*(byte *)((int)param_3 + 0x15) * 4))(param_1,param_3);
    if ((((*param_3 == 0) || (*(int *)(*param_3 + 0x13c) != 0)) &&
        (iVar1 = *(int *)(param_2 + 0x1c0), iVar1 < 0x32)) && ((*(ushort *)(param_2 + 2) & 1) == 0))
    {
      *(int **)(param_2 + iVar1 * 4 + 0x1c4) = param_3;
      *(int *)(param_2 + 0x1c0) = *(int *)(param_2 + 0x1c0) + 1;
      return iVar1;
    }
  }
  return -1;
}

