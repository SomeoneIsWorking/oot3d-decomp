// OoT3D decomp @ 00358e70  name=FUN_00358e70  size=48

/* WARNING: Removing unreachable block (ram,0x0034e538) */

void FUN_00358e70(void)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;

  iVar3 = FUN_00366684(0);
  fVar2 = DAT_00358ea4;
  pfVar1 = DAT_0034e564;
  if (iVar3 != DAT_00358ea0) {
    return;
  }
  DAT_0034e564[1] = DAT_00358ea4;
  fVar4 = (float)VectorSignedToFloat(5,(byte)(in_fpscr >> 0x15) & 3);
  pfVar1[2] = (fVar2 - *pfVar1) / fVar4;
  pfVar1[3] = 7.00649e-45;
  return;
}
