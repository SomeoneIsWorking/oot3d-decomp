// OoT3D decomp @ 002ce618  name=FUN_002ce618  size=100

void FUN_002ce618(void)

{
  char *pcVar1;
  int iVar2;
  byte local_10 [4];
  byte local_c [4];

  pcVar1 = DAT_002ce67c;
  if (((*DAT_002ce67c != '\0') && (iVar2 = FUN_00493fa8(local_c), -1 < iVar2)) &&
     (iVar2 = FUN_00493f68(local_10), -1 < iVar2)) {
    pcVar1[1] = local_c[0] | local_10[0];
    iVar2 = FUN_002c48bc(0);
    if (-1 < iVar2) {
      FUN_002c4880(0);
    }
  }
  return;
}
