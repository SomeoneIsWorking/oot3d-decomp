// OoT3D decomp @ 00376168  name=FUN_00376168  size=132

int FUN_00376168(undefined4 param_1,int param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = FUN_00366738();
  if (iVar1 != 1) {
    (**(code **)(DAT_003761ec + (uint)*(byte *)((int)param_3 + 0x15) * 4))(param_1,param_3);
    if ((((*param_3 == 0) || (*(int *)(*param_3 + 0x13c) != 0)) &&
        (iVar1 = *(int *)(param_2 + 0xcc), iVar1 < 0x3c)) && ((*(ushort *)(param_2 + 2) & 1) == 0))
    {
      *(int **)(param_2 + iVar1 * 4 + 0xd0) = param_3;
      *(int *)(param_2 + 0xcc) = *(int *)(param_2 + 0xcc) + 1;
      return iVar1;
    }
  }
  return -1;
}

