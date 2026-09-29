// OoT3D decomp @ 003c4d6c  name=FUN_003c4d6c  size=92

void FUN_003c4d6c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint in_fpscr;

  iVar1 = FUN_00369a48();
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x70c) = DAT_003c4dc8;
    uVar2 = FUN_0036ae14(param_1 + 0x1fc,1);
    uVar2 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(DAT_003c4dd4,DAT_003c4dd0,uVar2,DAT_003c4dcc,param_1 + 0x1fc,1,2);
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffeffff;
  }
  return;
}
