// OoT3D decomp @ 0039cf74  name=FUN_0039cf74  size=228

void FUN_0039cf74(int param_1,undefined4 param_2)

{
  byte bVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint in_fpscr;
  uint uVar5;
  float fVar6;

  FUN_00376864();
  FUN_003731e0(param_1 + 0x1a4);
  FUN_00376340(DAT_0039d05c,DAT_0039d058,DAT_0039d058,param_2,param_1,4);
  FUN_00330370(param_1);
  FUN_0031ebe4(param_1,param_2);
  piVar2 = DAT_0039d060;
  fVar6 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0039d060 + 0x145e),
                                     (byte)(in_fpscr >> 0x15) & 3);
  uVar5 = in_fpscr & 0xfffffff | (uint)(fVar6 + DAT_0039d064 == *(float *)(param_1 + 0x98)) << 0x1e
          | (uint)(*(float *)(param_1 + 0x98) <= fVar6 + DAT_0039d064) << 0x1d;
  bVar1 = (byte)(uVar5 >> 0x18);
  if (!(bool)(bVar1 >> 5 & 1) || (bool)(bVar1 >> 6)) {
    uVar4 = FUN_0036ae14(param_1 + 0x1a4,0);
    uVar3 = DAT_0039d06c;
    uVar4 = VectorSignedToFloat(uVar4,(byte)(uVar5 >> 0x15) & 3);
    fVar6 = (float)VectorSignedToFloat((int)*(short *)(*piVar2 + 0x110),(byte)(uVar5 >> 0x15) & 3);
    FUN_00375c08(DAT_0039d070,DAT_0039d06c,uVar4,DAT_0039d068 / fVar6,param_1 + 0x1a4,0);
    *(undefined4 *)(param_1 + 3000) = 0x29;
    *(undefined4 *)(param_1 + 0xbc0) = uVar3;
  }
  return;
}
