// OoT3D decomp @ 0038a4f0  name=FUN_0038a4f0  size=168

void FUN_0038a4f0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  short *psVar4;
  int iVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;

  iVar1 = DAT_0038a598;
  iVar2 = 0;
  if (0 < *(short *)(DAT_0038a598 + (*(ushort *)(param_2 + 0x1c) & 3) * 2)) {
    iVar5 = DAT_0038a598 + 0x2c;
    do {
      pfVar3 = (float *)(param_1 + iVar2 * 0xc);
      FUN_0036df4c(pfVar3,param_2 + 0x28);
      psVar4 = (short *)(iVar5 + iVar2 * 4);
      fVar6 = (float)FUN_00338f60((int)psVar4[1]);
      fVar7 = (float)VectorSignedToFloat((int)*psVar4,(byte)(in_fpscr >> 0x15) & 3);
      *pfVar3 = *pfVar3 + fVar7 * fVar6;
      fVar6 = (float)FUN_002cfca0((int)psVar4[1]);
      iVar2 = iVar2 + 1;
      fVar7 = (float)VectorSignedToFloat((int)*psVar4,(byte)(in_fpscr >> 0x15) & 3);
      pfVar3[2] = pfVar3[2] - fVar7 * fVar6;
    } while (iVar2 < *(short *)(iVar1 + (*(ushort *)(param_2 + 0x1c) & 3) * 2));
  }
  return;
}
