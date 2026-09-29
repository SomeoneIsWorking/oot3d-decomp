// OoT3D decomp @ 00498cdc  name=FUN_00498cdc  size=272

undefined4
FUN_00498cdc(int *param_1,undefined4 param_2,undefined4 param_3,char *param_4,undefined4 param_5,
            undefined4 param_6)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined4 uVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  char local_124 [255];
  undefined1 local_25;

  if (*param_4 != '/') {
    iVar1 = FUN_0030de24(param_4);
    iVar2 = FUN_0030de24(param_1 + 2);
    if (0xff < (uint)(iVar1 + iVar2)) {
      return 0;
    }
    uVar9 = iVar2 + 1;
    uVar7 = 0;
    uVar8 = uVar9;
    if (0xfe < uVar9) {
      uVar8 = 0xff;
    }
    piVar6 = param_1 + 2;
    pcVar4 = local_124;
    pcVar3 = pcVar4;
    if (uVar8 != 0) {
      do {
        pcVar4 = pcVar3 + 1;
        *pcVar3 = (char)*piVar6;
        piVar6 = (int *)((int)piVar6 + 1);
        uVar7 = uVar7 + 1;
        if (*(char *)piVar6 == '\0') break;
        uVar8 = uVar9;
        if (0xfe < uVar9) {
          uVar8 = 0xff;
        }
        pcVar3 = pcVar4;
      } while (uVar7 < uVar8);
    }
    *pcVar4 = '\0';
    iVar1 = iVar1 + 1;
    iVar2 = FUN_0030de24(local_124);
    if (0xff < (uint)(iVar2 + iVar1)) {
      iVar1 = 0xff - iVar2;
    }
    FUN_00499000(local_124,param_4,iVar1);
    param_4 = local_124;
    local_25 = 0;
  }
  uVar5 = (**(code **)(*param_1 + 0x14))(param_1,param_2,param_3,param_4,param_5,param_6);
  return uVar5;
}
