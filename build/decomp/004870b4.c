// OoT3D decomp @ 004870b4  name=FUN_004870b4  size=304

undefined1
FUN_004870b4(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,undefined4 param_6)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;

  uVar1 = 0;
  if (*(char *)(param_1 + 0x80) != '\0') {
    iVar7 = 0;
    if (0 < *(int *)(param_1 + 0xe18)) {
      do {
        iVar9 = 2;
        if (*(int *)(param_1 + 0xe18) < iVar7 + 2) {
          iVar9 = *(int *)(param_1 + 0xe18) - iVar7;
        }
        iVar8 = 0;
        if (0 < iVar9) {
          do {
            iVar4 = *(int *)(param_1 + 0x98);
            iVar6 = param_1 + iVar7 * 0x220;
            iVar2 = *(int *)(iVar6 + 0xe1c);
            iVar3 = iVar6 + param_2 * 0x18;
            piVar5 = (int *)(iVar3 + 0xe50);
            FUN_00308c00(piVar5);
            *piVar5 = iVar4 * param_2 + iVar2;
            *(undefined4 *)(iVar3 + 0xe54) = param_4;
            iVar2 = FUN_00309474(*(undefined1 *)(param_1 + 0x48));
            if (iVar2 == 3) {
              if (param_3 == 0) {
                *(int *)(iVar3 + 0xe58) = iVar6 + 0x1030;
              }
              else {
                iVar2 = 0;
                if (param_5 != 0) {
                  iVar2 = iVar6 + 0x1036;
                }
                *(int *)(iVar3 + 0xe58) = iVar2;
              }
            }
            FUN_0048a964(iVar6 + 0xe1c,piVar5,param_6);
            iVar8 = iVar8 + 1;
            iVar7 = iVar7 + 1;
          } while (iVar8 < iVar9);
        }
      } while (iVar7 < *(int *)(param_1 + 0xe18));
    }
    if ((*(char *)(param_1 + 0x81) == '\0') &&
       (iVar7 = *(int *)(param_1 + 0x90) + -1, *(int *)(param_1 + 0x90) = iVar7, iVar7 == 0)) {
      *(undefined1 *)(param_1 + 0x81) = 1;
    }
    *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + -1;
    uVar1 = 1;
  }
  return uVar1;
}
