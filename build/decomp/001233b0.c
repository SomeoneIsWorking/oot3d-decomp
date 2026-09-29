// OoT3D decomp @ 001233b0  name=FUN_001233b0  size=236

void FUN_001233b0(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint in_fpscr;

  iVar4 = FUN_003731e0(param_1 + 0x1e4);
  uVar2 = DAT_001234b8;
  if (iVar4 != 0) {
    if (*(short *)(param_1 + 0x8fa) == 0) {
      FUN_0036e734(param_1 + 0x1e4,0xe);
      *(undefined4 *)(param_1 + 0x6c) = uVar2;
                    /* WARNING: Subroutine does not return */
      FUN_003702c8(0x1e,0x32);
    }
    sVar1 = *(short *)(param_1 + 0x8fa) + -1;
    *(short *)(param_1 + 0x8fa) = sVar1;
    uVar3 = DAT_001234bc;
    if (sVar1 == 0) {
      if (*(short *)(param_1 + 0x8f6) != 0) {
        uVar5 = FUN_0036ae14(param_1 + 0x1e4,0x14);
        uVar5 = VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
        FUN_00375c08(uVar3,uVar2,uVar5,uVar2,param_1 + 0x1e4,0x14,3);
        return;
      }
      uVar5 = FUN_0036ae14(param_1 + 0x1e4,0x14);
      uVar5 = VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00375c08(uVar3,uVar2,uVar5,uVar2,param_1 + 0x1e4,0x14,3);
      *(undefined2 *)(param_1 + 0x8f6) = 1;
      *(undefined2 *)(param_1 + 0x8fa) = 9;
    }
  }
  return;
}
