// OoT3D decomp @ 00464d8c  name=FUN_00464d8c  size=60

int * FUN_00464d8c(int *param_1)

{
  undefined4 uVar1;

  if (*param_1 != 0) {
    uVar1 = FUN_0047fe0c();
    (**(code **)(*(int *)*DAT_00464dc8 + 0x10))((int *)*DAT_00464dc8,uVar1);
  }
  return param_1;
}
