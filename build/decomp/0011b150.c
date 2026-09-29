// OoT3D decomp @ 0011b150  name=FUN_0011b150  size=148

void FUN_0011b150(int param_1)

{
  uint uVar1;
  int iVar2;
  uint in_fpscr;
  undefined4 uVar3;
  float fVar4;

  *(char *)(param_1 + 0x91c) = *(char *)(param_1 + 0x91c) + '\x01';
  *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x36) + -0x1000;
  FUN_0036f364(param_1);
  uVar1 = (uint)*(byte *)(param_1 + 0x91c);
  if (uVar1 == 0) {
    iVar2 = 0;
  }
  else {
    fVar4 = (float)VectorUnsignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
    iVar2 = (int)(DAT_0011b21c + fVar4 * DAT_0011b214 * DAT_0011b218);
  }
  fVar4 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
  uVar3 = VectorFloatToUnsigned(fVar4 * DAT_0011b220,3);
  *(char *)(param_1 + 0x929) = (char)uVar3;
  if (uVar1 != 0x30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_003702c8(700,300);
}
