// OoT3D decomp @ 00494410  name=FUN_00494410  size=100

void FUN_00494410(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;

  piVar1 = (int *)FUN_002c17f4();
  iVar3 = DAT_00494474;
  piVar1[0x10] = 0;
  piVar1[0x11] = 0;
  piVar1[0x13] = 0;
  *piVar1 = iVar3;
  piVar1[0xf] = iVar3 + 0x34;
  piVar1[0x14] = 0;
  piVar1[0x12] = iVar3 + 0x48;
  iVar2 = 0;
  iVar3 = 0;
  do {
    piVar1[iVar3 + 0x21] = 0;
    iVar2 = iVar2 + 2;
    piVar1[iVar3 + 0x22] = 0;
    iVar3 = iVar3 + 2;
  } while (iVar2 < 0x10);
  return;
}
