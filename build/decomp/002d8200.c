// OoT3D decomp @ 002d8200  name=FUN_002d8200  size=252

void FUN_002d8200(int *param_1)

{
  int iVar1;
  undefined4 uVar2;

  if (param_1[0x4a] != 0) {
    if (((*DAT_002d82fc & 1) == 0) && (iVar1 = FUN_003679b4(DAT_002d82fc), iVar1 != 0)) {
      FUN_0036788c(DAT_002d8300);
    }
    FUN_00348904(*(undefined4 *)(DAT_002d830c + 0x47c),param_1[0x4a]);
    param_1[0x4a] = 0;
  }
  if (param_1[0x48] != 0) {
    uVar2 = FUN_003488e4();
    (**(code **)(*(int *)*DAT_002d8310 + 0x10))((int *)*DAT_002d8310,uVar2);
  }
  if (param_1[0x49] != 0) {
    uVar2 = FUN_00307674();
    (**(code **)(*(int *)*DAT_002d8314 + 0x10))((int *)*DAT_002d8314,uVar2);
  }
  FUN_00305364(*param_1);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 4))();
  }
  if ((int *)param_1[1] == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x002d82f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)param_1[1] + 4))();
  return;
}
