// OoT3D decomp @ 0047d5e0  name=FUN_0047d5e0  size=132

void FUN_0047d5e0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;

  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == *(int *)(param_1 + 8)) {
    FUN_002ce904(DAT_0047d664,param_1,param_2,param_3,iVar1,0);
    return;
  }
  FUN_002ce904(DAT_0047d664 - *(float *)(param_1 + 0xc),param_1,param_2,param_3,iVar1,0);
  FUN_002ce904(*(undefined4 *)(param_1 + 0xc),param_1,param_2,param_3,*(undefined4 *)(param_1 + 8),1
              );
  return;
}
