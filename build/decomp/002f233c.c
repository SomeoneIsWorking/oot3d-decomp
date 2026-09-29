// OoT3D decomp @ 002f233c  name=FUN_002f233c  size=236

void FUN_002f233c(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;

  piVar1 = DAT_002f2428;
  if (DAT_002f2428[2] != 0) {
    if (((*DAT_002f242c & 1) == 0) && (iVar2 = FUN_003679b4(DAT_002f242c), iVar2 != 0)) {
      FUN_0036788c(DAT_002f2430);
    }
    FUN_00348904(*(undefined4 *)(DAT_002f243c + 0x47c),piVar1[2]);
    piVar1[2] = 0;
  }
  if (piVar1[1] != 0) {
    uVar3 = FUN_003488e4();
    (**(code **)(*(int *)*DAT_002f2440 + 0x10))((int *)*DAT_002f2440,uVar3);
    piVar1[1] = 0;
  }
  if (*piVar1 != 0) {
    uVar3 = FUN_00307674();
    (**(code **)(*(int *)*DAT_002f2444 + 0x10))((int *)*DAT_002f2444,uVar3);
    *piVar1 = 0;
  }
  if (piVar1[6] != 0) {
    FUN_002e7ca4();
    FUN_003525d4();
    piVar1[6] = 0;
  }
  return;
}
