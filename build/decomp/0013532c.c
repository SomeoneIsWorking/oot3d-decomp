// OoT3D decomp @ 0013532c  name=FUN_0013532c  size=80

void FUN_0013532c(int param_1,int param_2)

{
  int iVar1;

  *(uint *)(*(int *)(DAT_0013537c + param_2) + 0x1714) =
       *(uint *)(*(int *)(DAT_0013537c + param_2) + 0x1714) | 0x800000;
  iVar1 = FUN_003769d8(param_2 + 0x28a0);
  if (iVar1 == 7) {
    FUN_0037073c(param_2,0x16);
    *(undefined4 *)(param_1 + 0xbac) = DAT_00135380;
  }
  return;
}
