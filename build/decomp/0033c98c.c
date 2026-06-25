// OoT3D decomp @ 0033c98c  name=FUN_0033c98c  size=100

void FUN_0033c98c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  
  iVar1 = DAT_0033c9f8;
  iVar3 = DAT_0033c9f4;
  fVar5 = (float)VectorUnsignedToFloat(param_1,(byte)(in_fpscr >> 0x15) & 3);
  iVar4 = 0;
  fVar5 = fVar5 * DAT_0033c9f0;
  *(float *)(DAT_0033c9f4 + 4) = fVar5;
  fVar6 = *(float *)(iVar3 + 8);
  do {
    iVar2 = *(int *)(iVar1 + iVar4 * 4);
    iVar3 = iVar2;
    if (iVar2 != 0) {
      iVar3 = 1;
    }
    if (iVar3 != 0) {
      FUN_002d4a10(fVar5 * fVar6,iVar2,param_2);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x10);
  return;
}

