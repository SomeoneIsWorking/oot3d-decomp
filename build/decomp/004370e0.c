// OoT3D decomp @ 004370e0  name=FUN_004370e0  size=68

void FUN_004370e0(int param_1)

{
  bool bVar1;

  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x270) = 0;
  do {
    bVar1 = (bool)hasExclusiveAccess((undefined4 *)(param_1 + 0x274));
  } while (!bVar1);
  *(undefined4 *)(param_1 + 0x274) = 1;
  *(undefined4 *)(param_1 + 0x278) = 0;
  *(undefined4 *)(param_1 + 0x27c) = 0;
  return;
}
