// OoT3D decomp @ 00285fa4  name=FUN_00285fa4  size=56

void FUN_00285fa4(void)

{
  int iVar1;

  iVar1 = DAT_00285fdc;
  if (*(int *)(DAT_00285fdc + 0x70) != -1) {
    FUN_0034bdb8(0);
    FUN_0036ec40(0,*(undefined4 *)(iVar1 + 0x70));
  }
  *(undefined4 *)(iVar1 + 0x70) = 0xffffffff;
  return;
}
