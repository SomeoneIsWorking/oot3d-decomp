// OoT3D decomp @ 003694d4  name=FUN_003694d4  size=236

float FUN_003694d4(float param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int extraout_r1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;

  iVar2 = param_2 + param_3 * 0x10;
  iVar1 = *(int *)(iVar2 + -0x10);
  if (iVar1 <= param_4) {
    if (param_5 == 0) {
      return *(float *)(iVar2 + -0xc);
    }
    param_1 = (float)FUN_00368d94(param_4,iVar1 + 1);
    param_4 = extraout_r1;
  }
  iVar1 = 0;
  if (0 < param_3) {
    while( true ) {
      piVar4 = (int *)(param_2 + iVar1 * 0x10);
      iVar3 = *piVar4;
      iVar2 = param_4;
      if (iVar3 == param_4) {
        iVar2 = param_2 + iVar1 * 0x10;
      }
      if (iVar3 == param_4) break;
      if (param_4 < iVar3) {
        iVar1 = *(int *)(param_2 + iVar1 * 0x10 + -0x10);
        fVar6 = (float)VectorSignedToFloat(iVar2 - iVar1,(byte)(in_fpscr >> 0x15) & 3);
        fVar5 = (float)VectorSignedToFloat(iVar3 - iVar1,(byte)(in_fpscr >> 0x15) & 3);
        fVar5 = fVar6 * (DAT_003695c0 / fVar5);
        return (float)piVar4[-3] +
               ((float)piVar4[-3] - (float)piVar4[1]) * (fVar5 * DAT_003695c4 - DAT_003695c8) *
               fVar5 * fVar5 +
               fVar6 * (fVar5 - DAT_003695c0) *
               ((fVar5 - DAT_003695c0) * (float)piVar4[-1] + fVar5 * (float)piVar4[2]);
      }
      iVar1 = iVar1 + 1;
      param_4 = iVar2;
      if (param_3 <= iVar1) {
        return param_1;
      }
    }
    param_1 = *(float *)(iVar2 + 4);
  }
  return param_1;
}
