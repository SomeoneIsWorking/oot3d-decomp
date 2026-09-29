// OoT3D decomp @ 00462930  name=FUN_00462930  size=100

void FUN_00462930(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;

  iVar1 = DAT_00462994;
  iVar3 = 0;
  if (0 < *(int *)(param_2 + 0xcc)) {
    do {
      iVar2 = *(int *)(param_2 + iVar3 * 4 + 0xd0);
      if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0x11) & 0x40) == 0)) {
        (**(code **)(iVar1 + (uint)*(byte *)(iVar2 + 0x15) * 4))(param_1,param_2);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_2 + 0xcc));
  }
  return;
}
