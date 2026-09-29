// OoT3D decomp @ 001b1328  name=FUN_001b1328  size=416

void FUN_001b1328(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint in_fpscr;

  *(undefined1 *)(param_1 + 0x27d) = 1;
  FUN_0037632c(param_1,param_1 + 0x1a4);
  FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x1a4);
  FUN_00376864(param_1);
  uVar1 = DAT_001b14c8;
  FUN_00376340(DAT_001b14c8,DAT_001b14c8,DAT_001b14c8,param_2,param_1,4);
  if (((*(ushort *)(param_1 + 0x83c) & 2) == 0) &&
     (iVar2 = FUN_003731e0(param_1 + 0x1fc), iVar2 != 0)) {
    uVar3 = FUN_0036ae14(param_1 + 0x1fc,*(undefined4 *)(param_1 + 0x22c));
    uVar3 = VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(DAT_001b14cc,*(undefined4 *)(param_1 + 0x238),uVar3,uVar1,param_1 + 0x1fc,
                 *(undefined4 *)(param_1 + 0x22c),2);
  }
  (**(code **)(param_1 + 0x840))(param_1,param_2);
  uVar1 = DAT_001b14d0;
  if ((*(ushort *)(param_1 + 0x83c) & 1) != 0) {
    FUN_00375a18(param_1 + 0x830,0,6,DAT_001b14d0,100);
    FUN_00375a18(param_1 + 0x832,0,6,uVar1,100);
    FUN_00375a18(param_1 + 0x836,0,6,uVar1,100);
    FUN_00375a18(param_1 + 0x838,0,6,uVar1,100);
    *(ushort *)(param_1 + 0x83c) = *(ushort *)(param_1 + 0x83c) & 0xfffe;
    return;
  }
  FUN_0036bcc8(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),
               *(undefined4 *)(param_1 + 0x44),param_2,param_1,param_1 + 0x830,param_1 + 0x836,
               0x4300);
  return;
}
