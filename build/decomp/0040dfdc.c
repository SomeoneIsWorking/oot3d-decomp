// OoT3D decomp @ 0040dfdc  name=FUN_0040dfdc  size=32

bool FUN_0040dfdc(undefined4 param_1,int *param_2)

{
  int iVar1;
  bool bVar2;

  iVar1 = *param_2;
  bVar2 = iVar1 == DAT_0040dffc;
  if (bVar2) {
    iVar1 = param_2[2];
  }
  return bVar2 && iVar1 == 0x2000000;
}
