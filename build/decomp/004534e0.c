// OoT3D decomp @ 004534e0  name=FUN_004534e0  size=200

undefined4 FUN_004534e0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (param_1 == 0) {
    param_1 = DAT_004535ac;
  }
  iVar7 = *(int *)(DAT_004535a8 + 0x14);
  iVar2 = FUN_002dd3f4(param_2);
  iVar1 = DAT_004535b0;
  iVar5 = 0;
  do {
    if (iVar7 == 0) {
      return 0;
    }
    iVar6 = iVar1 + iVar5 * 0xa0;
    if (*(int *)(iVar6 + 0x84) != 0) {
      iVar4 = *(int *)(iVar6 + 0x9c);
      iVar3 = iVar4;
      if (iVar4 != 0) {
        iVar3 = 1;
      }
      if (iVar3 == 0) {
        iVar3 = -1;
      }
      else {
        iVar3 = *(int *)(iVar4 + 0x9c);
      }
      if (iVar3 != -1) {
        iVar4 = FUN_002dd3f4(iVar3);
        iVar3 = FUN_002dcee0(iVar4,iVar3);
        if ((param_1 == *(int *)(iVar6 + 0x84) && iVar2 == iVar4) &&
           ((*(ushort *)(*(int *)(DAT_004535b4 + iVar4 * 4) + iVar3 * 4 + 2) & 0x20) != 0)) {
          return 1;
        }
      }
    }
    iVar5 = iVar5 + 1;
    if (0x1f < iVar5) {
      return 0;
    }
  } while( true );
}

