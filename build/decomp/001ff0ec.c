// OoT3D decomp @ 001ff0ec  name=FUN_001ff0ec  size=64

void FUN_001ff0ec(int param_1,undefined4 param_2)

{
  int iVar1;

  FUN_003510b0(param_1,DAT_001ff12c);
  iVar1 = FUN_0037571c(param_2);
  if (iVar1 != 0) {
    *(float *)(param_1 + 0xfc) = *(float *)(param_1 + 0xfc) + DAT_001ff130;
  }
  *(undefined4 *)(param_1 + 0x1a4) = DAT_001ff134;
  return;
}
