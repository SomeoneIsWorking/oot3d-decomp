// OoT3D decomp @ 002f2b60  name=FUN_002f2b60  size=176

int * FUN_002f2b60(int *param_1)

{
  int iVar1;
  undefined4 uVar2;

  if (param_1[1] != 0) {
    if (((*DAT_002f2c10 & 1) == 0) && (iVar1 = FUN_003679b4(DAT_002f2c10), iVar1 != 0)) {
      FUN_0036788c(DAT_002f2c14);
    }
    FUN_00348904(*(undefined4 *)(DAT_002f2c20 + 0x47c),param_1[1]);
    if (*param_1 != 0) {
      uVar2 = FUN_003488e4();
      (**(code **)(*(int *)*DAT_002f2c24 + 0x10))((int *)*DAT_002f2c24,uVar2);
    }
  }
  if (param_1[2] != 0) {
    FUN_002e7ca4();
    FUN_003525d4();
  }
  return param_1;
}
