// OoT3D decomp @ 001167cc  name=FUN_001167cc  size=144

void FUN_001167cc(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint in_fpscr;

  iVar1 = FUN_00369a48();
  uVar2 = DAT_00116860;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0xbac) = DAT_0011685c;
    *(undefined4 *)(param_1 + 0xbb0) = uVar2;
    *(undefined2 *)(param_1 + 0xc10) = 2;
    uVar2 = FUN_0036ae14(param_1 + 0x1a4,5);
    uVar2 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(DAT_0011686c,DAT_00116868,uVar2,DAT_00116864,param_1 + 0x1a4,5,2);
    *(undefined2 *)(param_1 + 0xc3e) = 0;
    *(undefined4 *)(param_1 + 0xc40) = 5;
    FUN_003685f4(param_1,param_2);
  }
  *(ushort *)(param_1 + 0xc3c) = *(ushort *)(param_1 + 0xc3c) | 1;
  return;
}
