// OoT3D decomp @ 0046b974  name=FUN_0046b974  size=44

void FUN_0046b974(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;

  iVar1 = *(int *)(param_2 + 4) + param_3 * 0x124;
  param_1[1] = *(int *)(iVar1 + 0x11c);
  *param_1 = iVar1 + param_4 * 0x18 + 0xd0;
  return;
}
