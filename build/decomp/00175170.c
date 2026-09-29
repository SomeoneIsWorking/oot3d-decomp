// OoT3D decomp @ 00175170  name=FUN_00175170  size=140

void FUN_00175170(int param_1)

{
  uint uVar1;
  uint in_fpscr;
  int iVar2;
  undefined4 uVar3;
  float fVar4;

  if (*(char *)(param_1 + 0x91c) != '\0') {
    *(char *)(param_1 + 0x91c) = *(char *)(param_1 + 0x91c) + -1;
  }
  *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x36) + 0x1000;
  FUN_0036f364(param_1);
  uVar1 = (uint)*(byte *)(param_1 + 0x91c);
  iVar2 = 0;
  if (uVar1 != 0) {
    fVar4 = (float)VectorUnsignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
    iVar2 = (int)(DAT_00175230 + fVar4 * DAT_00175228 * DAT_0017522c);
  }
  fVar4 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
  uVar3 = VectorFloatToUnsigned(fVar4 * DAT_00175234,3);
  *(char *)(param_1 + 0x929) = (char)uVar3;
  if (uVar1 != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_003702c8(100,0x32);
}
