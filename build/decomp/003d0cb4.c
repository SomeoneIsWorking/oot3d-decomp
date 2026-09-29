// OoT3D decomp @ 003d0cb4  name=FUN_003d0cb4  size=84

void FUN_003d0cb4(int param_1,int param_2)

{
  int iVar1;

  iVar1 = FUN_003769d8(param_2 + 0x28a0);
  if ((iVar1 == 5) && (iVar1 = FUN_00346964(param_2), iVar1 != 0)) {
    FUN_003725e0(param_2);
    *(undefined4 *)(param_1 + 0x444) = DAT_003d0d08;
  }
  *(ushort *)(param_1 + 0x440) = *(ushort *)(param_1 + 0x440) | 1;
  return;
}
