// OoT3D decomp @ 00454858  name=FUN_00454858  size=164

int FUN_00454858(int param_1)

{
  int iVar1;
  undefined4 uVar2;

  if (((*DAT_004548fc & 1) == 0) && (iVar1 = FUN_003679b4(DAT_004548fc), iVar1 != 0)) {
    FUN_0036788c(DAT_00454900);
  }
  FUN_00348904(*(undefined4 *)(DAT_0045490c + 0x47c),*(undefined4 *)(param_1 + 0x10));
  if (*(int *)(param_1 + 0xc) != 0) {
    uVar2 = FUN_003488e4();
    (**(code **)(*(int *)*DAT_00454910 + 0x10))((int *)*DAT_00454910,uVar2);
  }
  if (*(int *)(param_1 + 8) != 0) {
    FUN_002e7ca4();
    FUN_003525d4();
  }
  return param_1;
}
