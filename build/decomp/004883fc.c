// OoT3D decomp @ 004883fc  name=FUN_004883fc  size=20

undefined4 FUN_004883fc(int param_1,int param_2)

{
  undefined4 uVar1;

  if (param_2 < 0x10) {
    uVar1 = *(undefined4 *)(param_1 + param_2 * 4 + 0x84);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
