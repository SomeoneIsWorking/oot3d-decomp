// OoT3D decomp @ 00498e8c  name=FUN_00498e8c  size=44

int FUN_00498e8c(ushort *param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;

  uVar2 = (uint)*param_1;
  bVar3 = uVar2 == 0;
  if (!bVar3) {
    uVar2 = uVar2 - 0x220c;
    bVar3 = uVar2 == 0;
  }
  if ((bVar3) || (uVar2 != 1)) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)param_1 + *(int *)(param_1 + 2);
  }
  return iVar1;
}
