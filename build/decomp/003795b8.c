// OoT3D decomp @ 003795b8  name=FUN_003795b8  size=164

void FUN_003795b8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  float fVar6;

  FUN_0036df4c(param_1,param_2 + 0x28);
  fVar3 = DAT_00379660;
  iVar2 = DAT_0037965c;
  iVar4 = 1;
  if (1 < *(short *)(DAT_0037965c + (*(ushort *)(param_2 + 0x1c) & 3) * 2)) {
    do {
      pfVar5 = (float *)(param_1 + iVar4 * 0xc);
      FUN_0036df4c(pfVar5,param_2 + 0x28);
      iVar1 = iVar4 * 0x20000000 + -0x20000000 >> 0x10;
      fVar6 = (float)FUN_002cfca0(iVar1);
      *pfVar5 = *pfVar5 + fVar6 * fVar3;
      fVar6 = (float)FUN_00338f60(iVar1);
      iVar4 = iVar4 + 1;
      pfVar5[2] = pfVar5[2] + fVar6 * fVar3;
    } while (iVar4 < *(short *)(iVar2 + (*(ushort *)(param_2 + 0x1c) & 3) * 2));
  }
  return;
}
