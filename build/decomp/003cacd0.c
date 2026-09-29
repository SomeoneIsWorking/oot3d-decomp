// OoT3D decomp @ 003cacd0  name=FUN_003cacd0  size=148

void FUN_003cacd0(int param_1,undefined4 param_2)

{
  int iVar1;
  float fVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;

  iVar3 = FUN_0035a3c4(param_2,5);
  iVar1 = DAT_003cad64;
  if (iVar3 != 0) {
    *(ushort *)(DAT_003cad64 + 0xf8) = *(ushort *)(DAT_003cad64 + 0xf8) | 0x20;
  }
  if ((*(ushort *)(iVar1 + 0xf8) & 0x20) == 0) {
    FUN_00370378(param_1 + 0x36,0x55,8);
  }
  else {
    FUN_00370378(param_1 + 0x36,DAT_003cad68,8);
  }
  fVar2 = DAT_003cad6c;
  *(short *)(param_1 + 0xbe) = *(short *)(param_1 + 0xbe) + *(short *)(param_1 + 0x36);
  fVar4 = (float)VectorSignedToFloat(*(short *)(param_1 + 0x36) + -0x55,(byte)(in_fpscr >> 0x15) & 3
                                    );
  FUN_0036ef10(DAT_003cad70 + fVar4 * fVar2,param_1 + 0x28,DAT_003cad74);
  return;
}
