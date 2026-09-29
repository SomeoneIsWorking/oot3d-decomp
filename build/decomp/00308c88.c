// OoT3D decomp @ 00308c88  name=FUN_00308c88  size=136

void FUN_00308c88(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;

  uVar2 = 2;
  if (param_2 == 0) {
    FUN_0030a40c();
  }
  else if (param_2 == 1) {
    uVar2 = 3;
    FUN_0030a40c();
  }
  else if (param_2 == 2 || param_2 == 3) {
    uVar2 = 1;
  }
  if (*(code **)(param_3 + 300) != (code *)0x0) {
    (**(code **)(param_3 + 300))(param_3,uVar2,*(undefined4 *)(param_3 + 0x130));
  }
  *(undefined4 *)(param_3 + 0x134) = 0;
  *(undefined1 *)(param_3 + 0xc5) = 0;
  *(undefined1 *)(param_3 + 0xc6) = 0;
  *(undefined1 *)(param_3 + 199) = 0;
  iVar1 = FUN_0030c758();
                    /* WARNING: Subroutine does not return */
  FUN_0030c9b8(iVar1 + 4,param_3 + 0x13c);
}
