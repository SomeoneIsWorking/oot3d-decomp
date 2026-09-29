// OoT3D decomp @ 002b27d8  name=FUN_002b27d8  size=132

void FUN_002b27d8(int param_1,int param_2)

{
  int iVar1;
  short *psVar2;

  FUN_003731e0(param_1 + 0x1a4);
  FUN_00376340(DAT_002b2860,DAT_002b285c,DAT_002b285c,param_2,param_1,4);
  FUN_00330370(param_1);
  FUN_003210a4(param_1,param_2);
  psVar2 = (short *)0x0;
  iVar1 = FUN_0037571c(param_2);
  if (iVar1 != 0) {
    psVar2 = *(short **)(param_2 + 0x22ec);
  }
  if ((psVar2 != (short *)0x0) && (*psVar2 == 9)) {
    FUN_00374428(param_1);
    return;
  }
  return;
}
