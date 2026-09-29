// OoT3D decomp @ 00413b78  name=FUN_00413b78  size=156

void FUN_00413b78(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;

  iVar2 = DAT_00413c18;
  iVar1 = DAT_00413c14;
  FUN_0034338c(DAT_00413c18 + 0x28,DAT_00413c14,0x28);
  FUN_0034338c(iVar2 + 0x50,iVar1 + 0x28,0x28);
  FUN_0034338c(iVar2 + 0x78,iVar1 + 0x50,0x28);
  uVar3 = DAT_00413c1c;
  FUN_0034338c(iVar2 + 0x140,DAT_00413c1c,0x28);
  FUN_0034338c(iVar2 + 600,iVar1,0x28);
  FUN_0034338c(iVar2 + 0x280,iVar1 + 0x28,0x28);
  FUN_0034338c(iVar2 + 0x2a8,iVar1 + 0x50,0x28);
  FUN_0034338c(iVar2 + 0x370,uVar3,0x28);
  return;
}
