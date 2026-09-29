// OoT3D decomp @ 0023bfb4  name=FUN_0023bfb4  size=120

void FUN_0023bfb4(int param_1,int param_2)

{
  undefined4 uVar1;
  uint in_fpscr;
  undefined4 uVar2;

  if (*(char *)(param_2 + 6) != '\0') {
    if (*(short *)(param_1 + 0x53f0) == 0) {
      uVar1 = FUN_003687a8(*(undefined4 *)(param_2 + 0xc));
      FUN_00331284(*(undefined4 *)(param_1 + 0x20ac),uVar1);
    }
    else {
      uVar1 = FUN_003687a8(*(undefined4 *)(param_2 + 0xc));
      uVar2 = VectorSignedToFloat((int)*(short *)(param_1 + 0x53f0),(byte)(in_fpscr >> 0x15) & 3);
      FUN_003312f4(uVar2,*(undefined4 *)(param_1 + 0x20ac),uVar1);
    }
  }
  *(undefined2 *)(param_1 + 0x53f0) = 0;
  return;
}
