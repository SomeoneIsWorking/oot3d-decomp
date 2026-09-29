// OoT3D decomp @ 0047e44c  name=FUN_0047e44c  size=84

void FUN_0047e44c(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;

  puVar2 = (undefined4 *)FUN_002dbe64();
  *puVar2 = DAT_0047e4a0;
  iVar3 = FUN_002dbe50(puVar2 + 0x43);
  *(undefined4 *)(iVar3 + 0x48) = 0;
  piVar1 = DAT_0047e4a4;
  *(undefined4 *)(iVar3 + 0x4c) = 0;
  *(undefined4 *)(iVar3 + 0x50) = 0;
  *(undefined4 *)(iVar3 + 0x54) = 0;
  *(undefined4 *)(iVar3 + 0x58) = 0;
  iVar4 = *piVar1;
  *(int *)(iVar3 + 0x44) = iVar4;
  *(int *)(iVar3 + 0x44 + *(int *)(iVar4 + -0x30)) = piVar1[3];
  *(undefined1 *)(iVar3 + 0x5c) = 0;
  return;
}
