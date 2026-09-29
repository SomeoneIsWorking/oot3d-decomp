// OoT3D decomp @ 0026967c  name=FUN_0026967c  size=168

void FUN_0026967c(int param_1)

{
  int iVar1;
  undefined4 uVar2;

  if (*(int *)(param_1 + 0x1764) != 0) {
    if (((*DAT_00269724 & 1) == 0) && (iVar1 = FUN_003679b4(DAT_00269724), iVar1 != 0)) {
      FUN_0036788c(DAT_00269728);
    }
    FUN_00348904(*(undefined4 *)(DAT_00269734 + 0x47c),*(undefined4 *)(param_1 + 0x1764));
    *(undefined4 *)(param_1 + 0x1764) = 0;
  }
  if (*(int *)(param_1 + 0x1760) != 0) {
    uVar2 = FUN_003488e4();
    (**(code **)(*(int *)*DAT_00269738 + 0x10))((int *)*DAT_00269738,uVar2);
    *(undefined4 *)(param_1 + 0x1760) = 0;
  }
  FUN_003445a8(param_1 + 0x1768);
  return;
}
