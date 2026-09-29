// OoT3D decomp @ 001c698c  name=FUN_001c698c  size=376

void FUN_001c698c(int param_1,undefined4 param_2)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint in_fpscr;

  uVar2 = DAT_001c6b2c;
  FUN_0036e168(DAT_001c6b2c,DAT_001c6b34,DAT_001c6b30,DAT_001c6b2c,param_1 + 0x6c);
  if (0x3f800000 < *(int *)(param_1 + 0x6c)) {
    FUN_0036f00c(DAT_001c6b3c,DAT_001c6b38,param_2,param_1,param_1 + 0x28,3,100,0xf,0);
  }
  iVar3 = FUN_003731e0(param_1 + 0x1e4);
  if (iVar3 != 0) {
    if (*(short *)(param_1 + 0x8f6) != 0) {
      if (*(short *)(param_1 + 0x1c) < 0) {
        uVar4 = FUN_0036ae14(param_1 + 0x1e4,3);
        uVar4 = VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
        FUN_00375c08(uVar2,uVar2,uVar4,DAT_001c6b48,param_1 + 0x1e4,3,0);
        *(undefined4 *)(param_1 + 0x6c) = DAT_001c6b4c;
                    /* WARNING: Subroutine does not return */
        FUN_003702c8(0x32,0x46);
      }
      FUN_0036cbc4(param_1,param_2,0);
      return;
    }
    sVar1 = *(short *)(param_1 + 0x8fa) + -1;
    *(short *)(param_1 + 0x8fa) = sVar1;
    if (sVar1 == 0) {
      uVar4 = FUN_0036ae14(param_1 + 0x1e4,5);
      uVar4 = VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00375c08(DAT_001c6b40,uVar4,uVar2,uVar2,param_1 + 0x1e4,5,2);
      *(undefined2 *)(param_1 + 0x8f6) = 1;
      *(undefined4 *)(param_1 + 0x6c) = uVar2;
      FUN_00375bcc(param_1,DAT_001c6b44);
      return;
    }
  }
  return;
}
