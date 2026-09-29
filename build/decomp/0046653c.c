// OoT3D decomp @ 0046653c  name=FUN_0046653c  size=164

undefined4 FUN_0046653c(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;

  iVar1 = DAT_004665e0;
  uVar2 = 0;
  if ((*(char *)(DAT_004665e0 + 1) == '\x01' || *(char *)(DAT_004665e0 + 1) == '\x02') ||
     (*(char *)(DAT_004665e0 + 2) != '\0')) {
    iVar3 = FUN_0047e118(1);
    uVar2 = 0;
    if (iVar3 != 0) {
      *(undefined1 *)(iVar1 + 2) = 0;
      iVar3 = FUN_002d37ac();
      if ((iVar3 == 0) || (iVar3 = FUN_002d37ac(), iVar3 == 2)) {
        FUN_002d36e0(0);
        if (*(code **)(iVar1 + 0x38) != (code *)0x0) {
          (**(code **)(iVar1 + 0x38))(*(undefined4 *)(iVar1 + 0x78));
        }
      }
      FUN_002d36c0();
      FUN_002d349c(0,0,*DAT_004665e4);
      uVar2 = 1;
    }
  }
  return uVar2;
}
