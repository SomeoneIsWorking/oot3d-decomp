// OoT3D decomp @ 003e82ec  name=FUN_003e82ec  size=156

void FUN_003e82ec(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;

  FUN_0037632c(param_1,param_1 + 0x1c4);
  FUN_003761f0(param_2,param_2 + 0x5c78,param_1 + 0x1c4);
  iVar2 = FUN_0036cf6c(param_2,(int)*(char *)(param_1 + 3));
  fVar1 = DAT_003e838c;
  if (iVar2 != 0) {
    FUN_00375c10(param_2,*(undefined1 *)(param_1 + 0x1c0));
    *(ushort *)(param_1 + 0x16) = *(short *)(param_1 + 0xbe) + 0x2000U & 0xc000;
    *(undefined4 *)(param_1 + 0x1bc) = DAT_003e8388;
    return;
  }
  iVar2 = (int)*(short *)(param_1 + 0x36);
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  *(short *)(param_1 + 0xbe) = *(short *)(param_1 + 0xbe) + *(short *)(param_1 + 0x36);
  fVar3 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
  FUN_0036ef10(fVar3 * fVar1,param_1 + 0x28,DAT_003e8390);
  return;
}
