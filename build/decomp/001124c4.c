// OoT3D decomp @ 001124c4  name=FUN_001124c4  size=112

void FUN_001124c4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint in_fpscr;

  iVar1 = FUN_00369a48();
  uVar2 = DAT_00112534;
  if (iVar1 != 0) {
    *(ushort *)(param_1 + 0x83c) = *(ushort *)(param_1 + 0x83c) & 0xfffd;
    *(undefined4 *)(param_1 + 0x840) = uVar2;
    if (*(int *)(param_1 + 0x22c) == 0) {
      uVar2 = FUN_0036ae14(param_1 + 0x1fc,1);
      uVar2 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00375c08(DAT_00112540,DAT_0011253c,uVar2,DAT_00112538,param_1 + 0x1fc,1,0);
      return;
    }
  }
  return;
}
