// OoT3D decomp @ 002ea6c8  name=FUN_002ea6c8  size=24

undefined4 FUN_002ea6c8(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;

  if (param_2 == 0) {
    uVar1 = *param_1;
  }
  else {
    uVar1 = *(undefined4 *)((uint)*(ushort *)((int)param_1 + 10) + param_2 + 4);
  }
  return uVar1;
}
