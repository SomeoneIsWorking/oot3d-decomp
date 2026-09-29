// OoT3D decomp @ 002882f4  name=FUN_002882f4  size=152

void FUN_002882f4(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  float fVar6;

  fVar3 = DAT_00288390;
  iVar2 = DAT_0028838c;
  iVar4 = 0;
  if (0 < *(short *)(DAT_0028838c + (*(ushort *)(param_2 + 0x1c) & 3) * 2)) {
    do {
      pfVar5 = (float *)(param_1 + iVar4 * 0xc);
      FUN_0036df4c(pfVar5,param_2 + 0x28);
      sVar1 = (short)(iVar4 << 0xd);
      fVar6 = (float)FUN_002cfca0((int)sVar1);
      *pfVar5 = *pfVar5 + fVar6 * fVar3;
      fVar6 = (float)FUN_00338f60((int)sVar1);
      iVar4 = iVar4 + 1;
      pfVar5[2] = pfVar5[2] + fVar6 * fVar3;
    } while (iVar4 < *(short *)(iVar2 + (*(ushort *)(param_2 + 0x1c) & 3) * 2));
  }
  return;
}
