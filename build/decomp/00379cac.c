// OoT3D decomp @ 00379cac  name=FUN_00379cac  size=48

int FUN_00379cac(int param_1,int param_2,int param_3)

{
  short sVar1;
  int iVar2;
  short *psVar3;

  psVar3 = *(short **)(param_1 + param_3 * 8 + 0x10);
  iVar2 = 0;
  while (psVar3 != (short *)0x0) {
    sVar1 = *psVar3;
    psVar3 = *(short **)(psVar3 + 0x98);
    if (sVar1 == param_2) {
      iVar2 = iVar2 + 1;
    }
  }
  return iVar2;
}
