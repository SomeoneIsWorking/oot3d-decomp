// OoT3D decomp @ 002ab218  name=FUN_002ab218  size=288

void FUN_002ab218(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 auStack_44 [48];

  FUN_00372224(auStack_44,param_1 + 0x148);
  uVar2 = DAT_002ab338;
  iVar1 = FUN_003695f8();
  if (iVar1 != 0) {
    uVar2 = DAT_002ab33c;
  }
  if (*(short *)(param_1 + 0x1c) == 0) {
    if ((*(int *)(param_1 + 0x1bc) != DAT_002ab340) ||
       (*(float *)(param_1 + 0x2c) <= (*(float *)(param_1 + 0xc) + DAT_002ab344) - DAT_002ab348))
    goto LAB_002ab2fc;
    local_50 = DAT_002ab33c;
    local_4c = DAT_002ab34c;
    local_48 = DAT_002ab33c;
    FUN_00372070(auStack_44,auStack_44,&local_50);
  }
  if (*(short *)(param_1 + 0x1c) == 2) {
    if (*(int *)(param_1 + 0x228) == 0) {
      return;
    }
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x228) + 0xc) + 0xc) = uVar2;
    *(undefined1 *)(*(int *)(param_1 + 0x228) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x228),auStack_44);
    FUN_00372170(*(undefined4 *)(param_1 + 0x228),0);
    return;
  }
LAB_002ab2fc:
  param_1 = param_1 + *(short *)(param_1 + 0x1c) * 4;
  if (*(int *)(param_1 + 0x220) == 0) {
    return;
  }
  *(undefined1 *)(*(int *)(param_1 + 0x220) + 0xac) = 1;
  FUN_003721e0(*(undefined4 *)(param_1 + 0x220),auStack_44);
  FUN_00372170(*(undefined4 *)(param_1 + 0x220),0);
  return;
}
