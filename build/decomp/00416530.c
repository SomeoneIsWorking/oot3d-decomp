// OoT3D decomp @ 00416530  name=FUN_00416530  size=36

void FUN_00416530(void)

{
  bool bVar1;
  undefined4 *puVar2;

  FUN_00417c9c();
  FUN_00417d00();
  puVar2 = DAT_00417cfc;
  if (DAT_00417cfc != (undefined4 *)0x0) {
    *DAT_00417cfc = 0;
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
  *puVar2 = 0xe000000;
  puVar2[1] = 0x10000000;
  return;
}
