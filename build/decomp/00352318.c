// OoT3D decomp @ 00352318  name=FUN_00352318  size=124

void FUN_00352318(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;

  iVar2 = FUN_00366684(0);
  iVar1 = DAT_00352394;
  if (iVar2 == -1) {
    iVar3 = FUN_0032e658();
    if (iVar3 == 0) goto LAB_0035235c;
    iVar2 = *(int *)(iVar1 + 0xb8);
  }
  iVar3 = DAT_00352398;
  if (iVar2 != DAT_00352398) {
    iVar3 = DAT_00352398 + 0x33;
  }
  if (iVar2 == DAT_00352398 || iVar2 == iVar3) {
    return;
  }
LAB_0035235c:
  if (iVar2 == param_1) {
    return;
  }
  FUN_0032e780(3);
  if (iVar2 != -1) {
    *(int *)(iVar1 + 0x70) = iVar2;
  }
  FUN_0034bdb8(0);
  FUN_0036ec40(0,param_1);
  return;
}
