// OoT3D decomp @ 00413ac0  name=FUN_00413ac0  size=176

void FUN_00413ac0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  iVar2 = DAT_00413b74;
  iVar1 = DAT_00413b70;
  FUN_0034338c(DAT_00413b74 + 0x28,DAT_00413b70,0x28);
  iVar3 = iVar1 + 0x28;
  FUN_0034338c(iVar2 + 0x50,iVar3,0x28);
  iVar4 = iVar1 + 0x50;
  FUN_0034338c(iVar2 + 0x78,iVar4,0x28);
  FUN_0034338c(iVar2 + 0x140,iVar1,0x28);
  FUN_0034338c(iVar2 + 0x168,iVar3,0x28);
  FUN_0034338c(iVar2 + 400,iVar4,0x28);
  FUN_0034338c(iVar2 + 600,iVar1,0x28);
  FUN_0034338c(iVar2 + 0x280,iVar3,0x28);
  FUN_0034338c(iVar2 + 0x2a8,iVar4,0x28);
  return;
}
