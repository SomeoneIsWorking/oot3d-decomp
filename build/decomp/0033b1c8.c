// OoT3D decomp @ 0033b1c8  name=FUN_0033b1c8  size=400

undefined4 FUN_0033b1c8(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint in_fpscr;
  float fVar3;

  if (((*(char *)(param_1 + 0x12a4) == '\0') &&
      ((*(uint *)(param_1 + 0x1710) & 0x2000000) == 0 &&
       (*(uint *)(param_1 + 0x1710) & 0x4000000) == 0)) &&
     ((*(int *)(DAT_0033b358 + 0x4c) != 0 ||
      (('\0' < *(char *)(DAT_0033b35c + param_2) &&
       ((*(uint *)(*(int *)(DAT_0033b360 + param_1) + 4) & *DAT_0033b364) != 0)))))) {
    if (*(char *)(param_1 + 0x1a9) == '\x14') {
      FUN_0035d27c(param_1,DAT_0033b36c);
      fVar3 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0033b370 + 0x110),
                                         (byte)(in_fpscr >> 0x15) & 3);
      *(short *)(DAT_0033b37c + param_1) = (short)(int)(DAT_0033b374 / fVar3 + DAT_0033b378);
      FUN_003604f0(param_1 + 0x1764,param_2,0x1c0);
    }
    else {
      iVar1 = FUN_0033603c(param_1,param_2);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = FUN_00355a60(param_1);
      uVar2 = DAT_0033b368;
      if (iVar1 != 0) {
        uVar2 = 0xfe;
      }
      FUN_003604f0(param_1 + 0x1764,param_2,uVar2);
    }
    if ((*(uint *)(param_1 + 0x1710) & 0x800000) == 0) {
      if (((*(ushort *)(param_1 + 0x90) & 1) != 0) && (iVar1 = FUN_00349574(param_1), iVar1 == 0)) {
        FUN_00359aa0(param_1 + 0x254,param_2,
                     *(undefined4 *)(DAT_0033b380 + (uint)*(byte *)(param_1 + 0x1b3) * 4));
      }
    }
    else {
      FUN_00359aa0(param_1 + 0x254,param_2,0x29);
    }
    uVar2 = FUN_00336398(param_1,param_2);
    return uVar2;
  }
  return 0;
}
