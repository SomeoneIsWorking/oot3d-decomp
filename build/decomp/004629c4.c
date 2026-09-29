// OoT3D decomp @ 004629c4  name=FUN_004629c4  size=180

void FUN_004629c4(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;

  piVar1 = DAT_00462a78;
  if (DAT_00462a78[1] != 0) {
    if (((*DAT_00462a7c & 1) == 0) && (iVar3 = FUN_003679b4(DAT_00462a7c), iVar3 != 0)) {
      FUN_0036788c(DAT_00462a80);
    }
    FUN_00348904(*(undefined4 *)(DAT_00462a8c + 0x47c),piVar1[1]);
    piVar1[1] = 0;
  }
  if (*piVar1 != 0) {
    uVar4 = FUN_003488e4();
    (**(code **)(*(int *)*DAT_00462a90 + 0x10))((int *)*DAT_00462a90,uVar4);
    *piVar1 = 0;
  }
  puVar2 = DAT_00462a94;
  *DAT_00462a94 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  return;
}
