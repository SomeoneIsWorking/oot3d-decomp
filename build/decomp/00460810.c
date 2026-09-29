// OoT3D decomp @ 00460810  name=FUN_00460810  size=72

void FUN_00460810(int param_1)

{
  short sVar1;
  short *psVar2;
  int iVar3;

  psVar2 = (short *)(param_1 + 0x2518);
  iVar3 = 0;
  do {
    sVar1 = *psVar2;
    if ((sVar1 != 0) && (*psVar2 = sVar1 + -1, sVar1 == 1)) {
      FUN_0049fa58(psVar2 + 2);
    }
    iVar3 = iVar3 + 1;
    psVar2 = psVar2 + 8;
  } while (iVar3 < 0x10);
  return;
}
