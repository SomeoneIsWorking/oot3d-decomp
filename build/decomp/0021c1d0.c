// OoT3D decomp @ 0021c1d0  name=FUN_0021c1d0  size=184

void FUN_0021c1d0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint in_fpscr;

  iVar1 = DAT_0021c288;
  if ((*(ushort *)(DAT_0021c288 + 0xf4) & 0x20) == 0) {
    *(undefined2 *)(param_1 + 0x8d0) = 0;
    if ((*(ushort *)(iVar1 + 0xfc) & 1) != 0) {
      if ((*(ushort *)(DAT_0021c28c + 0x1c) & 0x1000) == 0) {
        uVar2 = FUN_0036ae14(param_1 + 0x1a4,3);
        uVar2 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
        FUN_00375c08(DAT_0021c298,DAT_0021c294,uVar2,DAT_0021c290,param_1 + 0x1a4,3,0);
        *(short *)(param_1 + 0x116) = (short)DAT_0021c29c;
        *(undefined2 *)(param_1 + 0x8ce) = 5;
        *(undefined2 *)(param_1 + 0x8d0) = 1;
      }
      else {
        *(short *)(param_1 + 0x116) = (short)DAT_0021c2a0;
        *(undefined2 *)(param_1 + 0x8ce) = 6;
      }
      *(undefined4 *)(param_1 + 0x8a8) = DAT_0021c2a4;
      return;
    }
  }
  FUN_00374428(param_1);
  return;
}
