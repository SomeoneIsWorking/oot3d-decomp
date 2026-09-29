// OoT3D decomp @ 0019ee24  name=FUN_0019ee24  size=200

void FUN_0019ee24(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint in_fpscr;

  uVar3 = DAT_0019eef4;
  uVar2 = DAT_0019eef0;
  uVar1 = DAT_0019eeec;
  if (*(short *)(param_2 + 0x104) == 0x3b) {
    uVar4 = FUN_0036ae14(param_1 + 0x1a8,8);
    uVar4 = VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_1 + 0xd6c) = uVar4;
    FUN_00375c08(uVar3,uVar2,uVar4,uVar1,param_1 + 0x1a8,8,2);
  }
  else {
    uVar4 = FUN_0036ae14(param_1 + 0x1a8,2);
    uVar4 = VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_1 + 0xd6c) = uVar4;
    FUN_00375c08(uVar3,uVar2,uVar4,uVar1,param_1 + 0x1a8,2);
  }
  FUN_00375bcc(param_1,DAT_0019eef8);
  FUN_0036e980(param_2,param_1,0x4d);
  *(undefined4 *)(param_1 + 0x1a4) = DAT_0019eefc;
  return;
}
