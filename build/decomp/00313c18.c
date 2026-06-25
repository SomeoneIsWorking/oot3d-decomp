// OoT3D decomp @ 00313c18  name=FUN_00313c18  size=164

void FUN_00313c18(int param_1,undefined4 param_2,int param_3)

{
  float *pfVar1;
  byte bVar2;
  float *pfVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  
  pfVar3 = DAT_00313cbc + 3;
  fVar4 = *DAT_00313cbc;
  *pfVar3 = fVar4;
  if (*(byte *)(param_1 + 0x2229) < 3) {
    fVar4 = *pfVar3;
  }
  else {
    bVar2 = *(byte *)(param_1 + 0x2229) + 1;
    *(byte *)(param_1 + 0x2229) = bVar2;
    fVar5 = (float)VectorSignedToFloat(9 - (uint)bVar2,(byte)(in_fpscr >> 0x15) & 3);
    fVar4 = fVar4 * (DAT_00313cc4 + fVar5 * DAT_00313cc0);
    *pfVar3 = fVar4;
  }
  pfVar1 = DAT_00313ccc;
  fVar4 = fVar4 + DAT_00313cc8;
  *pfVar3 = fVar4;
  *pfVar1 = fVar4;
  FUN_003735ac(param_3,param_2,pfVar1 + -6);
  FUN_003735ac(param_3 + 0xc,param_2,DAT_00313cd0);
  FUN_003735ac(param_3 + 0x18,param_2,DAT_00313ccc);
  return;
}

