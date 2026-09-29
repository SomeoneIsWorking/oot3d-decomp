// OoT3D decomp @ 00466420  name=FUN_00466420  size=192

undefined4 FUN_00466420(void)

{
  undefined4 *puVar1;
  int iVar2;
  int extraout_r1;
  int local_10;
  int local_c;

  iVar2 = FUN_002d37ac();
  if ((iVar2 == 0) || (iVar2 = FUN_002d37ac(), iVar2 == 2)) {
    FUN_002d36e0(0);
  }
  if (*(code **)(DAT_004664e0 + 0x38) != (code *)0x0) {
    (**(code **)(DAT_004664e0 + 0x38))(*(undefined4 *)(DAT_004664e0 + 0x78));
  }
  FUN_0047dedc(2,0,&local_c,&local_10,0);
  puVar1 = DAT_004664e4;
  iVar2 = extraout_r1;
  if (local_c != 0) {
    iVar2 = local_10;
  }
  if (local_c != 0 && local_c != iVar2) {
    FUN_0047e14c();
    FUN_0047df94(local_c,0,0,*puVar1);
  }
  else {
    FUN_002d36c0();
    FUN_002d349c(0,0,*puVar1);
  }
  return 1;
}
