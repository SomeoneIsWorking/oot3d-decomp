// OoT3D decomp @ 00306c78  name=FUN_00306c78  size=60

void FUN_00306c78(void)

{
  undefined4 *puVar1;

  puVar1 = DAT_00306cb4;
  *DAT_00306cb4 = 0;
  software_interrupt(0x23);
  if ((int)puVar1[-1] < 0) {
    FUN_003351b4();
  }
  *DAT_00306cbc = *DAT_00306cb8;
  return;
}
