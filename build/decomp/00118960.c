// OoT3D decomp @ 00118960  name=FUN_00118960  size=172

void FUN_00118960(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint in_fpscr;

  if ((*(ushort *)(param_1 + 0x1c) & 0xff) == 0xc && *(short *)(param_1 + 0x28c) == 2) {
    FUN_003717ac(param_1 + 0x1a4,DAT_00118a0c,6);
    *(undefined4 *)(param_1 + 0x228) = DAT_00118a10;
    FUN_00371680(param_2,4,0);
    return;
  }
  if ((*(short *)(param_1 + 0x28c) == 0) || (*(short *)(DAT_00118a14 + param_1) != 0x10b9)) {
    uVar1 = FUN_0036ae18(param_1 + 0x1a4,1);
    uVar1 = VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(DAT_00118a1c,uVar1,DAT_00118a18,DAT_00118a18,param_1 + 0x1a4,1,2);
    *(undefined4 *)(param_1 + 0x228) = DAT_00118a20;
  }
  return;
}
