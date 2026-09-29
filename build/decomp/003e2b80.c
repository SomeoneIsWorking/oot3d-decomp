// OoT3D decomp @ 003e2b80  name=FUN_003e2b80  size=212

void FUN_003e2b80(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  uint in_fpscr;

  FUN_003731e0(param_1 + 0x1bc);
  uVar3 = DAT_003e2c54;
  iVar2 = FUN_003736fc(DAT_003e2c58,DAT_003e2c54,param_1 + 0x1bc);
  if ((iVar2 != 0) || (iVar2 = FUN_003736fc(DAT_003e2c5c,uVar3,param_1 + 0x1bc), iVar2 != 0)) {
    FUN_00375bcc(param_1,DAT_003e2c60);
  }
  if (((*(short *)(param_1 + 0x4b8) == 0) ||
      (sVar1 = *(short *)(param_1 + 0x4b8) + -1, *(short *)(param_1 + 0x4b8) = sVar1, sVar1 == 0))
     && (DAT_003e2c64 < *(int *)(param_1 + 0x98))) {
    uVar3 = FUN_0036ae14(param_1 + 0x1bc,0);
    uVar3 = VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(DAT_003e2c70,uVar3,DAT_003e2c6c,DAT_003e2c68,param_1 + 0x1bc,0,2);
    *(short *)(param_1 + 0x4ba) = (short)DAT_003e2c74;
    *(undefined4 *)(param_1 + 0x4b4) = DAT_003e2c78;
  }
  return;
}
