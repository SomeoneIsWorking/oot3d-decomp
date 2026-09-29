// OoT3D decomp @ 003464b8  name=FUN_003464b8  size=280

void FUN_003464b8(int param_1,int param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;

  fVar3 = DAT_003465dc;
  fVar2 = DAT_003465d8;
  fVar1 = DAT_003465d4;
  iVar5 = 0;
  fVar7 = (float)VectorSignedToFloat(param_2 * param_2,(byte)(in_fpscr >> 0x15) & 3);
  fVar7 = fVar7 * DAT_003465d0;
  if (*(char *)(param_1 + 0x9e4) != '\0') {
    do {
      iVar4 = param_1 + iVar5 * 0xc;
      fVar6 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x9e6),
                                         (byte)(in_fpscr >> 0x15) & 3);
      fVar6 = fVar6 * fVar1;
      if (*(short *)(param_1 + 0x9e6) < 1) {
        fVar6 = fVar6 * fVar2 - fVar3;
      }
      else {
        fVar6 = fVar3 + fVar6 * fVar2;
      }
      fVar6 = (float)FUN_002cfca0((int)(short)((short)(int)fVar6 * 0x800 + (short)iVar5 * 0x2000 +
                                              *(short *)(param_1 + 0xbe)));
      *(float *)(iVar4 + 0x9f0) = *param_3 + fVar7 * fVar6;
      fVar6 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x9e6),
                                         (byte)(in_fpscr >> 0x15) & 3);
      fVar6 = fVar6 * fVar1;
      if (*(short *)(param_1 + 0x9e6) < 1) {
        fVar6 = fVar6 * fVar2 - fVar3;
      }
      else {
        fVar6 = fVar3 + fVar6 * fVar2;
      }
      fVar6 = (float)FUN_00338f60((int)(short)((short)(int)fVar6 * 0x800 + (short)iVar5 * 0x2000 +
                                              *(short *)(param_1 + 0xbe)));
      iVar5 = iVar5 + 1;
      *(float *)(iVar4 + 0x9f8) = param_3[2] + fVar7 * fVar6;
      fVar6 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
      *(float *)(iVar4 + 0x9f4) = param_3[1] + fVar6;
    } while (iVar5 < (int)(uint)*(byte *)(param_1 + 0x9e4));
  }
  return;
}
