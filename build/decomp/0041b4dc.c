// OoT3D decomp @ 0041b4dc  name=FUN_0041b4dc  size=48

uint FUN_0041b4dc(void)

{
  int iVar1;
  uint local_8;

  local_8 = (uint)*DAT_0041b50c;
  iVar1 = FUN_00435f8c(&local_8,1,DAT_0041b510);
  if (iVar1 < 0) {
    FUN_003351b4();
  }
  return local_8 & 0xff;
}
