// OoT3D decomp @ 0013faf8  name=FUN_0013faf8  size=196

void FUN_0013faf8(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint in_fpscr;

  FUN_003731e0(param_1 + 0x1c8);
  FUN_00370378(param_1 + 0xbc,0,0x100);
  uVar2 = DAT_0013fbc0;
  FUN_003705a0(DAT_0013fbc0,DAT_0013fbbc,param_1 + 100);
  iVar3 = FUN_003705a0(uVar2,DAT_0013fbc4,param_1 + 0x6c);
  if ((iVar3 != 0) &&
     ((*(short *)(param_1 + 0x252) == 0 ||
      (sVar1 = *(short *)(param_1 + 0x252) + -1, *(short *)(param_1 + 0x252) = sVar1, sVar1 == 0))))
  {
    *(undefined2 *)(param_1 + 0x252) = 0xe1;
    *(short *)(param_1 + 0x254) = (short)DAT_0013fbc8;
    uVar4 = FUN_0036ae14(param_1 + 0x1c8,0);
    uVar4 = VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(DAT_0013fbd0,uVar2,uVar4,DAT_0013fbcc,param_1 + 0x1c8,0);
    *(undefined4 *)(param_1 + 0x24c) = DAT_0013fbd4;
  }
  return;
}
