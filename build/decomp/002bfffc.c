// OoT3D decomp @ 002bfffc  name=FUN_002bfffc  size=144

undefined4 FUN_002bfffc(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;

  iVar3 = 0;
  iVar1 = *(int *)(*(int *)(param_1 + 0x44) + 8);
  if (iVar1 != *(int *)(param_1 + 0x44)) {
    do {
      if (param_2 == iVar3) {
        return *(undefined4 *)(iVar1 + 0x18);
      }
      iVar2 = *(int *)(iVar1 + 0xc);
      if (*(int *)(iVar1 + 0xc) == 0) {
        for (iVar2 = *(int *)(iVar1 + 4); iVar1 == *(int *)(iVar2 + 0xc);
            iVar2 = *(int *)(iVar2 + 4)) {
          iVar1 = iVar2;
        }
        if (*(int *)(iVar1 + 0xc) != iVar2) {
          iVar1 = iVar2;
        }
      }
      else {
        do {
          iVar1 = iVar2;
          iVar2 = *(int *)(iVar1 + 8);
        } while (*(int *)(iVar1 + 8) != 0);
      }
      iVar3 = iVar3 + 1;
    } while (iVar1 != *(int *)(param_1 + 0x44));
  }
  return 0;
}
