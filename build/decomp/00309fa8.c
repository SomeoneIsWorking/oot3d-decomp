// OoT3D decomp @ 00309fa8  name=FUN_00309fa8  size=112

void FUN_00309fa8(int param_1)

{
  undefined4 uVar1;

  if (*(int *)(param_1 + 0x134) != 0) {
    FUN_0030a474();
    FUN_0030a40c(*(undefined4 *)(param_1 + 0x134));
    *(undefined4 *)(param_1 + 0x134) = 0;
    *(undefined1 *)(param_1 + 0xc5) = 0;
    *(undefined1 *)(param_1 + 0xc6) = 0;
    if (*(code **)(param_1 + 300) != (code *)0x0) {
      (**(code **)(param_1 + 300))(param_1,0,*(undefined4 *)(param_1 + 0x130));
    }
    if (*(char *)(param_1 + 199) != '\0') {
      *(undefined1 *)(param_1 + 199) = 0;
      uVar1 = FUN_0030c758();
      FUN_00308d10(uVar1,param_1);
      return;
    }
  }
  return;
}
