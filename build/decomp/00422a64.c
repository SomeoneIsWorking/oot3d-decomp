// OoT3D decomp @ 00422a64  name=FUN_00422a64  size=108

undefined4 FUN_00422a64(short *param_1)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_18;
  short *psStack_14;
  int local_10;

  piVar2 = (int *)FUN_002fa834();
  if (piVar2 != (int *)0x0) {
    do {
      psStack_14 = param_1 + 1;
      sVar1 = *param_1;
      param_1 = psStack_14;
    } while (sVar1 != 0x3a);
    local_18 = 4;
    iVar3 = FUN_003062f8(psStack_14);
    local_10 = (iVar3 + 1) * 2;
    uVar4 = (**(code **)(*piVar2 + 8))(piVar2,&local_18);
    return uVar4;
  }
  return DAT_00422ad0;
}
