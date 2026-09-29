// OoT3D decomp @ 00417d00  name=FUN_00417d00  size=144

void FUN_00417d00(void)

{
  bool bVar1;
  undefined4 *puVar2;

  puVar2 = DAT_00417d10;
  if (DAT_00417d10 != (undefined4 *)0x0) {
    *DAT_00417d10 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[5] = 0xffffffff;
    puVar2[4] = 0;
  }
  do {
    bVar1 = (bool)hasExclusiveAccess(puVar2 + 3);
  } while (!bVar1);
  puVar2[3] = 1;
  puVar2[4] = 0;
  puVar2[5] = 0;
  *puVar2 = 0x10000000;
  puVar2[1] = 0x14000000;
  return;
}
