// OoT3D decomp @ 004a3638  name=EffectSSResourceManager_004a3638  size=304

undefined4 EffectSSResourceManager_004a3638(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;

  iVar1 = DAT_004a376c;
  uVar2 = 0;
  if (*param_1 != 0) {
    if (param_1[param_2 + 1] == 0) {
      piVar3 = (int *)*DAT_004a3768;
      if ((param_2 == 0xf || param_2 == 0x2e) || param_2 == 0x2f) {
        iVar4 = (**(code **)(*piVar3 + 0xc))(piVar3,0x1b8,DAT_004a3770,0x27c);
        iVar5 = 0;
        if (iVar4 != 0) {
          iVar5 = FUN_003432d4(iVar4,*(undefined4 *)(iVar1 + param_2 * 4));
        }
      }
      else {
        iVar4 = (**(code **)(*piVar3 + 0xc))(piVar3,0x1b8,DAT_004a3770,DAT_004a3774);
        iVar5 = 0;
        if (iVar4 != 0) {
          iVar5 = FUN_00348f34(iVar4,*(undefined4 *)(iVar1 + param_2 * 4));
        }
      }
      FUN_00348be4();
      iVar1 = DAT_004a3778;
      iVar4 = 0;
      do {
        if (*(char *)(*(int *)(iVar1 + param_2 * 4) + iVar4) != -1) {
          uVar2 = FUN_0033aaac(param_1[0x50]);
          iVar6 = *(int *)(iVar1 + param_2 * 4);
          FUN_00348a64(iVar5,iVar4,uVar2,*(undefined4 *)(iVar6 + iVar4 * 0x10 + 4),
                       *(undefined4 *)(iVar6 + iVar4 * 0x10 + 8),
                       *(undefined4 *)(iVar6 + iVar4 * 0x10 + 0xc),
                       *(undefined4 *)(iVar6 + iVar4 * 0x10 + 0x10));
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 2);
      param_1[param_2 + 1] = iVar5;
      return 1;
    }
    uVar2 = 1;
  }
  return uVar2;
}
