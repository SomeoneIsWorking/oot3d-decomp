// OoT3D decomp @ 00111cb0  name=FUN_00111cb0  size=76

int FUN_00111cb0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;

  if (0 < *(short *)(param_1 + 0x1c)) {
    uVar1 = FUN_002cfca0((int)(short)(*(short *)(param_1 + 0x18) * *(short *)(param_1 + 0x1c)));
    FUN_00369d44(uVar1,uVar1,param_1,param_2);
    *(short *)(param_1 + 0x1c) = *(short *)(param_1 + 0x1c) + -1;
  }
  return (int)*(short *)(param_1 + 0x1c);
}
