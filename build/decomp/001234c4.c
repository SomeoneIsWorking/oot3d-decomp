// OoT3D decomp @ 001234c4  name=FUN_001234c4  size=256

void FUN_001234c4(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint in_fpscr;
  int iVar2;
  float fVar3;
  float fVar4;

  FUN_003731e0(param_1 + 0x1a4);
  iVar2 = 0;
  if (*(byte *)(param_1 + 0x91d) != 0) {
    fVar4 = (float)VectorUnsignedToFloat
                             ((uint)*(byte *)(param_1 + 0x91d),(byte)(in_fpscr >> 0x15) & 3);
    iVar2 = (int)(DAT_001235d8 + fVar4 * DAT_001235d0 * DAT_001235d4);
  }
  fVar4 = (float)FUN_002cfca0((int)(short)(iVar2 << 0xb));
  fVar4 = fVar4 * DAT_001235dc;
  fVar3 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbe));
  *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) - fVar4 * fVar3;
  fVar3 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
  uVar1 = DAT_001235e0;
  *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) + fVar4 * fVar3;
  FUN_00370378(param_1 + 0x36,(int)(short)(*(short *)(param_1 + 0x92) + -0x8000),uVar1);
  FUN_0036f364(param_1,param_2);
  if ((*(short *)(param_1 + 0x920) != 0) && (*(int *)(param_1 + 0x98) <= DAT_001235e4)) {
    FUN_00373264(param_1,DAT_001235ec);
    return;
  }
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
  FUN_0036e734(param_1 + 0x1a4,*(undefined4 *)(param_1 + 0x940));
                    /* WARNING: Subroutine does not return */
  FUN_003702c8(0xf,3);
}
