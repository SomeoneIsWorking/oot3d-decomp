// OoT3D decomp @ 003724dc  name=FUN_003724dc  size=244

undefined4 FUN_003724dc(float param_1,float param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;

  iVar3 = *(int *)(DAT_003725d0 + param_4);
  if ((((*(uint *)(iVar3 + 0x1710) & DAT_003725d4) == 0) &&
      (iVar2 = FUN_003279dc(iVar3), iVar1 = DAT_003725dc, iVar2 < 0)) &&
     ((((*(int *)(iVar3 + 0x1224) != 0 || (*(int *)(iVar3 + 0x172c) == param_3)) &&
       ((0 < param_5 && (param_5 < 0x7e)))) || ((*(uint *)(iVar3 + 0x1710) & DAT_003725d8) == 0))))
  {
    bVar4 = param_1 <= *(float *)(param_3 + 0x98);
    if (!bVar4) {
      bVar4 = param_2 <= ABS(*(float *)(param_3 + 0x9c));
    }
    if (!bVar4) {
      iVar2 = (int)(short)(*(short *)(param_3 + 0x92) - *(short *)(iVar3 + 0xbe));
      if (iVar2 < 0) {
        iVar2 = -iVar2;
      }
      if ((param_5 != 0) || ((int)(uint)*(ushort *)(DAT_003725dc + iVar3) < iVar2)) {
        *(char *)(iVar3 + 0x12ac) = (char)param_5;
        *(int *)(iVar3 + 0x12b0) = param_3;
        *(short *)(iVar1 + iVar3) = (short)iVar2;
        return 1;
      }
    }
  }
  return 0;
}
