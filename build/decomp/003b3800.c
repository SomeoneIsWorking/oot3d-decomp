// OoT3D decomp @ 003b3800  name=FUN_003b3800  size=136

void FUN_003b3800(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint in_fpscr;
  uint uVar3;

  iVar1 = FUN_00375a18(param_1 + 0xbe,(int)*(short *)(param_1 + 0x92),2,DAT_003b3888);
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
  if (iVar1 == 0) {
    uVar3 = in_fpscr & 0xfffffff |
            (uint)(*(float *)(param_1 + 0x1e0) == *(float *)(param_1 + 0x1ec)) << 0x1e;
    if (SUB41(uVar3 >> 0x1e,0)) {
      *(undefined4 *)(param_1 + 0xc04) = DAT_003b388c;
      uVar2 = FUN_0036ae14(param_1 + 0x1a4,2);
      uVar2 = VectorSignedToFloat(uVar2,(byte)(uVar3 >> 0x15) & 3);
      FUN_00375c08(DAT_003b3894,DAT_003b3890,uVar2,DAT_003b3890,param_1 + 0x1a4,2,0,100);
      return;
    }
  }
  return;
}
