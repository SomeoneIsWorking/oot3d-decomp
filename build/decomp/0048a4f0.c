// OoT3D decomp @ 0048a4f0  name=FUN_0048a4f0  size=68

void FUN_0048a4f0(int param_1)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  byte abStack_10 [4];
  byte abStack_c [4];

  pcVar2 = DAT_0048a534;
  pcVar1 = DAT_002ce67c;
  if (param_1 == 0) {
    if (((*DAT_002ce67c != '\0') && (iVar3 = FUN_00493fa8(abStack_c), -1 < iVar3)) &&
       (iVar3 = FUN_00493f68(abStack_10), -1 < iVar3)) {
      pcVar1[1] = abStack_c[0] | abStack_10[0];
      iVar3 = FUN_002c48bc(0);
      if (-1 < iVar3) {
        FUN_002c4880(0);
      }
    }
    return;
  }
  if ((*DAT_0048a534 != '\0') && (iVar3 = FUN_002c4880(DAT_0048a534[1]), iVar3 == DAT_0048a538)) {
    FUN_002c48bc(pcVar2[1]);
    return;
  }
  return;
}
