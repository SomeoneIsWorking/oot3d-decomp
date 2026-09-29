// OoT3D decomp @ 002a5e68  name=FUN_002a5e68  size=156

void FUN_002a5e68(int param_1,int param_2)

{
  short sVar1;
  short *psVar2;
  int iVar3;

  *(undefined4 *)(param_1 + 0xbc0) = 0;
  *(undefined1 *)(param_1 + 0xd0) = 0;
  sVar1 = *(short *)(param_1 + 0xbb2);
  if (sVar1 < 1) {
    if (sVar1 != -1) {
      return;
    }
  }
  else {
    *(short *)(param_1 + 0xbb2) = sVar1 + -1;
    if ((short)(sVar1 + -1) != 0) {
      return;
    }
    iVar3 = 0;
    psVar2 = *(short **)(DAT_002a5f04 + param_2);
    while (psVar2 != (short *)0x0) {
      sVar1 = *psVar2;
      psVar2 = *(short **)(psVar2 + 0x98);
      if (sVar1 == 0xa1) {
        iVar3 = iVar3 + 1;
      }
    }
    if (iVar3 == 1) {
      FUN_00367c7c(param_2,*(undefined2 *)(param_1 + 0xbb0),0);
    }
  }
  FUN_00374428(param_1);
  return;
}
