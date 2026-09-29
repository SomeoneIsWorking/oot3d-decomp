// OoT3D decomp @ 003093a4  name=FUN_003093a4  size=208

undefined4 FUN_003093a4(int param_1,undefined4 *param_2,undefined4 *param_3,int *param_4)

{
  longlong lVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 extraout_r1;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;

  if (*(int *)(param_1 + 0x60) == 0) {
    return 0;
  }
  uVar4 = 0;
  if (*(char *)(param_1 + 0xcc) == '\0') {
    uVar4 = *(uint *)(param_1 + 0xd0);
  }
  else if (*(char *)(param_1 + 0xcc) == '\x01') {
    lVar1 = (ulonglong)*(uint *)(param_1 + 0x4c) * (ulonglong)*(uint *)(param_1 + 0xd0);
    uVar4 = FUN_00332754((int)lVar1,
                         ((int)*(uint *)(param_1 + 0xd0) >> 0x1f) * *(uint *)(param_1 + 0x4c) +
                         (int)((ulonglong)lVar1 >> 0x20),1000,0);
  }
  *param_4 = 0;
  uVar2 = *(uint *)(param_1 + 0x54);
  if (uVar2 <= uVar4) {
    if (*(char *)(param_1 + 0x49) == '\0') {
      return 0;
    }
    iVar5 = *(int *)(param_1 + 0x50);
    uVar6 = FUN_00368d94(uVar4 - uVar2,uVar2 - iVar5);
    uVar4 = (int)((ulonglong)uVar6 >> 0x20) + iVar5;
    *param_4 = (int)uVar6 + 1;
  }
  uVar3 = FUN_00339384(uVar4,*(undefined4 *)(param_1 + 0x60));
  *param_2 = uVar3;
  FUN_00339384(uVar4,*(undefined4 *)(param_1 + 0x60));
  *param_3 = extraout_r1;
  return 1;
}
