// OoT3D decomp @ 00350660  name=FUN_00350660  size=432

void FUN_00350660(int param_1,int *param_2,int param_3,undefined1 param_4,undefined1 param_5,
                 int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;

  *param_2 = 0x3b;
  iVar1 = FUN_00366738();
  iVar2 = DAT_00350814;
  iVar3 = DAT_00350810;
  if (iVar1 != 1) {
    if (param_3 == 0) {
      iVar1 = 0;
      do {
        if (*(char *)(DAT_00350810 + iVar1 * DAT_00350814 * 4 + 4) == '\0') {
          *param_2 = iVar1;
          iVar3 = iVar3 + iVar1 * iVar2 * 4;
          iVar2 = iVar3 + 8;
          puVar4 = (undefined1 *)(iVar3 + 4);
          *(undefined4 *)(iVar3 + 0x554) = *(undefined4 *)(DAT_00350818 + param_1);
          goto LAB_003507e0;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < 0x18);
    }
    else if (param_3 == 1 || param_3 == 2) {
      iVar2 = 0;
      do {
        if (*(char *)(DAT_00350810 + iVar2 * 0x28c + 0x7fe4) == '\0') {
          *param_2 = iVar2 + 0x18;
          iVar3 = iVar3 + iVar2 * 0x28c;
          iVar2 = iVar3 + 0x7fe8;
          puVar4 = (undefined1 *)(iVar3 + 0x7fe4);
          if (param_3 == 1) {
            *(undefined4 *)(param_6 + 0x260) = *(undefined4 *)(DAT_00350818 + param_1);
          }
          else {
            *(undefined4 *)(param_6 + 0x24) = *(undefined4 *)(DAT_00350818 + param_1);
          }
          goto LAB_003507e0;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0x19);
    }
    else if (param_3 == 3) {
      iVar2 = 0;
      do {
        if (*(char *)(DAT_00350810 + iVar2 * 0x1e0 + 0xbf90) == '\0') {
          *param_2 = iVar2 + 0x31;
          iVar3 = iVar3 + iVar2 * 0x1e0;
          iVar2 = iVar3 + 0xbf94;
          puVar4 = (undefined1 *)(iVar3 + 0xbf90);
          *(undefined4 *)(param_6 + 0x48) = *(undefined4 *)(DAT_00350818 + param_1);
LAB_003507e0:
          (**(code **)(DAT_0035081c + param_3 * 0x14 + 4))(iVar2,param_6);
          puVar4[2] = param_4;
          puVar4[1] = param_5;
          *puVar4 = 1;
          return;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 10);
    }
  }
  return;
}
