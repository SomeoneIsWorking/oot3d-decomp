// OoT3D decomp @ 00341f6c  name=FUN_00341f6c  size=232

void FUN_00341f6c(int param_1,undefined4 param_2,int param_3)

{
  uint in_fpscr;
  undefined4 uVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;

  fVar4 = (float)VectorSignedToFloat((int)*(short *)(param_3 + 10),(byte)(in_fpscr >> 0x15) & 3);
  fVar4 = fVar4 * DAT_00342054;
  fVar5 = (float)VectorSignedToFloat((int)*(short *)(param_3 + 0xc),(byte)(in_fpscr >> 0x15) & 3);
  fVar5 = fVar5 * DAT_00342054;
  fVar6 = (float)VectorSignedToFloat((int)*(short *)(param_3 + 0xe),(byte)(in_fpscr >> 0x15) & 3);
  fVar6 = fVar6 * DAT_00342054;
  uVar7 = VectorSignedToFloat((int)*(short *)(param_3 + 0xe),(byte)(in_fpscr >> 0x15) & 3);
  uVar1 = VectorSignedToFloat((int)*(short *)(param_3 + 10),(byte)(in_fpscr >> 0x15) & 3);
  fVar2 = (float)FUN_003696ec(uVar1,uVar7);
  iVar3 = FUN_00338f60((int)(short)((*(short *)(param_1 + 0x36) - (short)(int)(fVar2 * DAT_00342058)
                                    ) + -0x7fff));
  if (DAT_0034205c <= iVar3) {
    fVar2 = (float)FUN_00357b30(fVar4,fVar5,fVar6,*(undefined4 *)(param_3 + 0x10),param_1 + 0x28);
    fVar2 = (DAT_00342064 - fVar2) * (DAT_00342060 / SQRT(fVar4 * fVar4 + fVar6 * fVar6));
    *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + fVar2 * fVar4;
    *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) + fVar2 * fVar6;
  }
  return;
}
