// OoT3D decomp @ 0023c15c  name=FUN_0023c15c  size=88

void FUN_0023c15c(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  bool bVar4;

  cVar1 = *(char *)(param_1 + 0x500c);
  bVar4 = cVar1 == '\x05';
  if (bVar4) {
    cVar1 = *(char *)(param_1 + 0x4c30);
  }
  if ((bVar4 && cVar1 == '\t') &&
     (iVar3 = FUN_00366684(0), iVar2 = DAT_0023c1b4, iVar3 != DAT_0023c1b4)) {
    *(int *)(param_1 + 0xa68) = DAT_0023c1b4;
    FUN_00331048(iVar2,0);
    return;
  }
  return;
}
