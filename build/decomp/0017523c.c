// OoT3D decomp @ 0017523c  name=FUN_0017523c  size=156

void FUN_0017523c(int param_1,undefined4 param_2)

{
  float fVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;

  FUN_003731e0(param_1 + 0x1a4);
  fVar5 = DAT_001752e0;
  fVar1 = DAT_001752dc;
  fVar3 = DAT_001752d8;
  if (*(short *)(param_1 + 0x8fa) != 0) {
    *(short *)(param_1 + 0x8fa) = *(short *)(param_1 + 0x8fa) + -1;
  }
  *(short *)(param_1 + 0xbe) = *(short *)(param_1 + 0xbe) + 0x1000;
  iVar2 = (int)*(short *)(param_1 + 0x8fa);
  fVar6 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
  if (iVar2 < 1) {
    fVar5 = fVar6 * fVar3 * fVar1 - fVar5;
  }
  else {
    fVar5 = fVar5 + fVar6 * fVar3 * fVar1;
  }
  fVar3 = (float)VectorSignedToFloat((int)fVar5,(byte)(in_fpscr >> 0x15) & 3);
  uVar4 = VectorFloatToUnsigned(fVar3 * DAT_001752e4,3);
  *(char *)(param_1 + 0x903) = (char)uVar4;
  *(char *)(param_1 + 0xd0) = (char)uVar4;
  if (iVar2 != 0) {
    return;
  }
  FUN_0034c2e8(param_1,param_2);
  return;
}
