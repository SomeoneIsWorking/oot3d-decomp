// OoT3D decomp @ 00372a80  name=FUN_00372a80  size=40

/* WARNING: Removing unreachable block (ram,0x00372b2c) */
/* WARNING: Removing unreachable block (ram,0x00372b34) */

undefined4 FUN_00372a80(undefined4 param_1,int param_2)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;

  FUN_0036b4ec(param_2 + 0x254,param_1);
  psVar2 = (short *)(param_2 + 0xc2);
  iVar3 = 1;
  sVar1 = *psVar2;
  if (2 < sVar1) {
    iVar3 = -1;
  }
  if (2 < sVar1) {
    iVar3 = (int)(short)iVar3;
  }
  fVar4 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
  fVar5 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00372b44 + 0x110),
                                     (byte)(in_fpscr >> 0x15) & 3);
  if (iVar3 < 1) {
    fVar4 = fVar5 * fVar4 * DAT_00372b48 - DAT_00372b4c;
  }
  else {
    fVar4 = DAT_00372b4c + fVar5 * fVar4 * DAT_00372b48;
  }
  sVar1 = sVar1 + (short)(int)fVar4;
  *psVar2 = sVar1;
  if ((sVar1 + -2) * (int)(short)(int)fVar4 < 0) {
    return 0;
  }
  *psVar2 = 2;
  return 1;
}
