// OoT3D decomp @ 003d6e2c  name=FUN_003d6e2c  size=204

void FUN_003d6e2c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint in_fpscr;

  FUN_003731e0(param_1 + 0x1a4);
  uVar1 = DAT_003d6ef8;
  if ((*(ushort *)(param_1 + 0x90) & 1) != 0) {
    FUN_0036fc20(DAT_003d6ef8,DAT_003d6efc,param_1 + 0x6c);
  }
  if (*(short *)(param_1 + 0x724) == 0x1a) {
    if (*(short *)(param_1 + 0x1c) < 6) {
      FUN_00375bcc(param_1,DAT_003d6f00);
    }
    else {
      FUN_00375bcc(param_1,DAT_003d6f04);
    }
  }
  iVar2 = DAT_003d6f08;
  if (*(short *)(param_1 + 0x724) == 0) {
    uVar3 = FUN_0036ae14(param_1 + 0x1a4,*(undefined4 *)(DAT_003d6f08 + 0x20));
    uVar3 = VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(uVar1,DAT_003d6f10,uVar3,DAT_003d6f0c,param_1 + 0x1a4,*(undefined4 *)(iVar2 + 0x20)
                 ,0);
    *(undefined4 *)(param_1 + 0x708) = DAT_003d6f14;
    *(undefined2 *)(param_1 + 0x724) = 5;
  }
  return;
}
