// OoT3D decomp @ 004c8f50  name=FUN_004c8f50  size=236

undefined4 FUN_004c8f50(int param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_r1;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;

  iVar4 = param_1 + param_2 * 4;
  FUN_00368d94(*(undefined4 *)(iVar4 + 0x2c),*(undefined4 *)(iVar4 + 0x34));
  if (extraout_r1 == 0) {
    iVar1 = *(int *)(iVar4 + 0x24);
    iVar3 = *(int *)(param_1 + (1 - param_2) * 4 + 0x24);
    if (iVar1 < iVar3) {
      iVar1 = iVar3;
    }
    if (*(int *)(param_1 + 0x3c) <= iVar1 + 1) {
      return 0;
    }
    *(int *)(iVar4 + 0x24) = iVar1 + 1;
  }
  iVar7 = *(int *)(param_1 + 0x1c);
  uVar6 = *(undefined4 *)(iVar4 + 0x24);
  uVar2 = FUN_00368d94(*(undefined4 *)(param_1 + 4),iVar7);
  uVar8 = FUN_00368d94(uVar6,uVar2);
  iVar1 = *(int *)(param_1 + 0x20);
  param_1 = param_1 + param_2 * 8;
  iVar5 = *(int *)(param_1 + 0xc);
  uVar2 = FUN_00368d94(iVar7,iVar5);
  uVar9 = FUN_00368d94(extraout_r1,uVar2);
  iVar3 = *(int *)(param_1 + 0x10);
  *param_3 = (int)((ulonglong)uVar9 >> 0x20) * iVar5 + (int)((ulonglong)uVar8 >> 0x20) * iVar7;
  *param_4 = (int)uVar9 * iVar3 + (int)uVar8 * iVar1;
  *(int *)(iVar4 + 0x2c) = *(int *)(iVar4 + 0x2c) + 1;
  return 1;
}
