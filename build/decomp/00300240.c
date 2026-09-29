// OoT3D decomp @ 00300240  name=FUN_00300240  size=224

void FUN_00300240(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;

  uVar2 = DAT_00300324;
  iVar1 = DAT_00300320;
  uVar3 = 0x500;
  if (*(char *)(param_1 + 0x75) == '\0') {
    uVar3 = 0x501;
  }
  if (param_2 == 0x400 || param_2 == DAT_00300320) {
    FUN_00311364(DAT_00300324,*(undefined4 *)(param_1 + 0x38),param_3,param_4,param_4);
    FUN_002fed84(*(undefined4 *)(param_1 + *(int *)(param_1 + 0x1c) * 4 + 0xc),uVar3,0,0,0);
  }
  if (param_2 == 0x401 || param_2 == iVar1) {
    FUN_00311364(uVar2,*(undefined4 *)(param_1 + 0x3c));
    FUN_002fed84(*(undefined4 *)(param_1 + *(int *)(param_1 + 0x20) * 4 + 0x14),0x500,0,0,0);
  }
  if ((*(char *)(param_1 + 0x75) != '\0') && (param_2 == 0x410 || param_2 == iVar1)) {
    FUN_00311364(uVar2,*(undefined4 *)(param_1 + 0x38));
    FUN_002fed84(*(undefined4 *)(param_1 + *(int *)(param_1 + 0x68) * 4 + 0x60),0x500,0,0,0);
  }
  return;
}
