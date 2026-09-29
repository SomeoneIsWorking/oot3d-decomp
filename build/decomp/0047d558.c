// OoT3D decomp @ 0047d558  name=FUN_0047d558  size=132

void FUN_0047d558(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;

  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == *(int *)(param_1 + 8)) {
    FUN_002cebd0(DAT_0047d5dc,param_1,param_2,param_3,iVar1,0);
    return;
  }
  FUN_002cebd0(DAT_0047d5dc - *(float *)(param_1 + 0xc),param_1,param_2,param_3,iVar1,0);
  FUN_002cebd0(*(undefined4 *)(param_1 + 0xc),param_1,param_2,param_3,*(undefined4 *)(param_1 + 8),1
              );
  return;
}
