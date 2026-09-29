// OoT3D decomp @ 002d01e8  name=FUN_002d01e8  size=100

void FUN_002d01e8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;

  iVar1 = DAT_002d0254;
  iVar2 = DAT_002d0250;
  fVar4 = (float)VectorUnsignedToFloat(param_1,(byte)(in_fpscr >> 0x15) & 3);
  iVar3 = 0;
  fVar4 = fVar4 * DAT_002d024c;
  *(float *)(DAT_002d0250 + 8) = fVar4;
  fVar5 = *(float *)(iVar2 + 4);
  do {
    iVar2 = *(int *)(iVar1 + iVar3 * 4);
    if (iVar2 != 0) {
      FUN_002d4a10(fVar5 * fVar4,iVar2,param_2);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x10);
  return;
}
