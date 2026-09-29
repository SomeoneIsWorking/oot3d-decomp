// OoT3D decomp @ 00287984  name=FUN_00287984  size=284

undefined4 FUN_00287984(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  float fVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;

  fVar1 = DAT_00287aa8;
  if ((((*(uint *)(param_4 + 4) & 0x80) != 0) || (*(char *)(param_4 + 0x230) == '\0')) &&
     (*(int *)(param_4 + 0x22c) == DAT_00287aa0)) {
    iVar2 = (int)*(short *)(param_4 + 0x234);
    if (iVar2 < 0x49) {
      if (6 < iVar2) {
        iVar2 = 6;
      }
      iVar2 = iVar2 << 1;
    }
    else {
      iVar2 = iVar2 + -0x36;
    }
    if ((param_2 == 1 || param_2 == 0x1b) || param_2 == 0x1d) {
      fVar3 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
      fVar3 = (float)FUN_003727f0(fVar3 * DAT_00287aa4);
      FUN_00371234(fVar3 * DAT_00287aac * fVar1,param_3,1);
    }
    else if (param_2 == 3 || param_2 == 4) {
      fVar3 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
      fVar3 = (float)FUN_003727f0(fVar3 * DAT_00287aa4);
      FUN_00371234(fVar3 * DAT_00287ab0 * fVar1,param_3,1);
    }
    else if (param_2 == 0) {
      fVar3 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
      fVar3 = (float)FUN_003727f0(fVar3 * DAT_00287aa4);
      FUN_00371234(fVar3 * DAT_00287ab4 * fVar1,param_3,1);
    }
  }
  return 0;
}
