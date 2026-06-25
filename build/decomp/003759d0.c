// OoT3D decomp @ 003759d0  name=FUN_003759d0  size=56

float FUN_003759d0(void)

{
  uint *puVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  
  fVar2 = DAT_00375a14;
  puVar1 = DAT_00375a08;
  uVar3 = *DAT_00375a08 * DAT_00375a0c + DAT_00375a10;
  *DAT_00375a08 = uVar3;
  fVar4 = (float)(uVar3 >> 9 | 0x3f800000);
  puVar1[1] = (uint)fVar4;
  return fVar4 - fVar2;
}

