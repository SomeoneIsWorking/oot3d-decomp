// OoT3D decomp @ 00454028  name=FUN_00454028  size=40

int FUN_00454028(void)

{
  undefined4 *puVar1;
  int iVar2;

  puVar1 = (undefined4 *)FUN_002dbe64();
  *puVar1 = DAT_00454050;
  puVar1[0x43] = 0;
  iVar2 = FUN_002dbe50(puVar1 + 0x44);
  return iVar2 + -0x110;
}
