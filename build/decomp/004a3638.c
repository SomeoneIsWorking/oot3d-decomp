// OoT3D decomp @ 004a3638  name=FUN_004a3638  size=304

int FUN_004a3638(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = DAT_004a376c;
  iVar2 = *param_1;
  if (iVar2 != 0) {
    if (param_1[param_2 + 1] == 0) {
      piVar3 = *DAT_004a3768;
      if ((param_2 == 0xf || param_2 == 0x2e) || param_2 == 0x2f) {
        iVar2 = (**(code **)(*piVar3 + 0xc))(piVar3,0x1b8,DAT_004a3770,0x27c);
        if (iVar2 != 0) {
          iVar2 = FUN_003432d4(iVar2,*(undefined4 *)(iVar1 + param_2 * 4));
        }
      }
      else {
        iVar2 = (**(code **)(*piVar3 + 0xc))(piVar3,0x1b8,DAT_004a3770,DAT_004a3774);
        if (iVar2 != 0) {
          iVar2 = FUN_00348f34(iVar2,*(undefined4 *)(iVar1 + param_2 * 4));
        }
      }
      FUN_00348be4();
      iVar1 = DAT_004a3778;
      iVar5 = 0;
      do {
        if (*(char *)(*(int *)(iVar1 + param_2 * 4) + iVar5) != -1) {
          uVar4 = FUN_0033aaac(param_1[0x50]);
          iVar6 = *(int *)(iVar1 + param_2 * 4);
          FUN_00348a64(iVar2,iVar5,uVar4,*(undefined4 *)(iVar6 + iVar5 * 0x10 + 4),
                       *(undefined4 *)(iVar6 + iVar5 * 0x10 + 8),
                       *(undefined4 *)(iVar6 + iVar5 * 0x10 + 0xc),
                       *(undefined4 *)(iVar6 + iVar5 * 0x10 + 0x10));
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 2);
      param_1[param_2 + 1] = iVar2;
      return 1;
    }
    iVar2 = 1;
  }
  return iVar2;
}

