// OoT3D decomp @ 003101dc  name=FUN_003101dc  size=124

void FUN_003101dc(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  iVar1 = DAT_00310258;
  iVar3 = *(int *)(DAT_00310258 + 0x154);
  iVar4 = *(int *)(DAT_00310258 + 0x158);
  do {
    if (param_1 == 0x400) {
      if (iVar3 != *(int *)(iVar1 + 0x154)) {
        return;
      }
    }
    else if (param_1 == 0x401) {
      if (iVar4 != *(int *)(iVar1 + 0x158)) {
        return;
      }
    }
    else if (param_1 == 0x402) {
      iVar2 = *(int *)(iVar1 + 0x154);
      bVar5 = iVar3 != iVar2;
      if (bVar5) {
        iVar2 = *(int *)(iVar1 + 0x158);
      }
      if (bVar5 && iVar4 != iVar2) {
        return;
      }
    }
    FUN_00489c9c();
  } while( true );
}

