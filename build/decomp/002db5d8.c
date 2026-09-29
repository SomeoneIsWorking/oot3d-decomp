// OoT3D decomp @ 002db5d8  name=FUN_002db5d8  size=176

int * FUN_002db5d8(int *param_1)

{
  int iVar1;
  undefined4 uVar2;

  if (((*DAT_002db688 & 1) == 0) && (iVar1 = FUN_003679b4(DAT_002db688), iVar1 != 0)) {
    FUN_0036788c(DAT_002db68c);
  }
  FUN_00348904(*(undefined4 *)(DAT_002db698 + 0x47c),param_1[1]);
  if (*param_1 != 0) {
    uVar2 = FUN_003488e4();
    (**(code **)(*(int *)*DAT_002db69c + 0x10))((int *)*DAT_002db69c,uVar2);
  }
  *param_1 = 0;
  if (param_1[2] != 0) {
    FUN_002e7ca4();
    FUN_003525d4();
  }
  param_1[2] = 0;
  return param_1;
}
