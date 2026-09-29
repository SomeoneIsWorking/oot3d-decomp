// OoT3D decomp @ 00494358  name=FUN_00494358  size=168

int FUN_00494358(void)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;

  piVar2 = (int *)FUN_002c17f4();
  iVar4 = DAT_00494400;
  piVar2[0x10] = 0;
  *piVar2 = iVar4;
  piVar2[0xf] = iVar4 + 0x30;
  piVar2[0x11] = 0;
  puVar3 = (undefined4 *)FUN_002c2ff8(piVar2 + 0x35);
  *puVar3 = DAT_00494404;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = puVar3 + 0xb;
  puVar3[0xc] = puVar3 + 0xb;
  uVar1 = DAT_00494408;
  puVar3[0xd] = 0;
  iVar4 = FUN_00350820(puVar3 + 0xe,uVar1,0x68,0x20);
  iVar4 = FUN_00350820(iVar4 + 0xd10,DAT_0049440c,0x220,8);
  FUN_002ea050(iVar4 + -0xd14,iVar4 + -0xd10,0xd00,0x68);
  return iVar4 + -0xe1c;
}
