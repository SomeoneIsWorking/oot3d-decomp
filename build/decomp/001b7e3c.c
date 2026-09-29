// OoT3D decomp @ 001b7e3c  name=FUN_001b7e3c  size=140

void FUN_001b7e3c(int param_1)

{
  short sVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined1 auStack_b4 [160];

  FUN_00371738(auStack_b4,DAT_001b7ec8,0xa0);
  iVar2 = DAT_001b7ecc;
  sVar1 = *(short *)(param_1 + 0x1c);
  iVar4 = 0;
  do {
    pcVar3 = (char *)(iVar2 + iVar4 * 2);
    FUN_00357a50(param_1 + 0x1a4,(int)*pcVar3,(int)pcVar3[1],
                 auStack_b4 + iVar4 * 0x10 + sVar1 * 0x50,1);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  FUN_0035e240(param_1 + 0x1a4,param_1 + 0x148,DAT_001b7ed4,DAT_001b7ed0,param_1,0);
  return;
}
