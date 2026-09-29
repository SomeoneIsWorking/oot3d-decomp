// OoT3D decomp @ 001bce9c  name=FUN_001bce9c  size=200

void FUN_001bce9c(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint in_fpscr;

  uVar1 = FUN_00363c10(param_2 + 0x3a58,DAT_001bcf64);
  iVar2 = FUN_00373074(param_2 + 0x3a58,uVar1);
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0x62c) = uVar1;
    uVar1 = FUN_0036ae14(param_1 + 0x1a4,7);
    uVar1 = VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_1 + 0x630) = uVar1;
    if (*(short *)(param_1 + 0x1c) == 1) {
      FUN_003411f8(DAT_001bcf68,param_1,0x14,0);
      *(undefined4 *)(param_1 + 0x554) = 0x19;
      *(undefined4 *)(param_1 + 0x60c) = 1;
      return;
    }
    if (*(short *)(param_1 + 0x1c) != 4) {
      FUN_003411f8(DAT_001bcf68,param_1,0x34,0);
      *(undefined4 *)(param_1 + 0x554) = 1;
      return;
    }
    *(undefined4 *)(param_1 + 0x554) = 0x21;
    *(undefined4 *)(param_1 + 0x558) = 0;
    *(undefined1 *)(param_1 + 0xd0) = 0;
  }
  return;
}
