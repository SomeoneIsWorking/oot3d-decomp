// OoT3D decomp @ 002e7818  name=FUN_002e7818  size=192

void FUN_002e7818(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;

  uVar2 = DAT_002e78e8;
  uVar1 = DAT_002e78dc;
  if (*(char *)(param_1 + 5) == '\0') {
    *(float *)(param_1 + 0x5c) = *(float *)(param_1 + 0x5c) + DAT_002e78d8;
    uVar2 = DAT_002e78e0;
    *(undefined4 *)(param_1 + 0x148) = uVar1;
    *(undefined4 *)(param_1 + 0x184) = uVar2;
    *(undefined4 *)(param_1 + 0x1c0) = DAT_002e78e4;
    *(int *)(param_1 + 0x454) = param_1 + 0x58;
    *(int *)(param_1 + 0x458) = param_1 + 0x1fc;
    *(int *)(param_1 + 0x468) = param_1 + 0x94;
    *(int *)(param_1 + 0x46c) = param_1 + 0x238;
  }
  else {
    *(float *)(param_1 + 0x98) = *(float *)(param_1 + 0x98) + DAT_002e78d8;
    uVar1 = DAT_002e78ec;
    *(undefined4 *)(param_1 + 0x148) = uVar2;
    *(undefined4 *)(param_1 + 0x184) = uVar1;
    *(undefined4 *)(param_1 + 0x1c0) = DAT_002e78f0;
    *(int *)(param_1 + 0x468) = param_1 + 0x58;
    *(int *)(param_1 + 0x46c) = param_1 + 0x1fc;
    *(int *)(param_1 + 0x454) = param_1 + 0x94;
    *(int *)(param_1 + 0x458) = param_1 + 0x238;
  }
  *(int *)(param_1 + 0x45c) = param_1 + 0x148;
  *(int *)(param_1 + 0x460) = param_1 + 0x184;
  uVar1 = DAT_002e78f4;
  *(int *)(param_1 + 0x464) = param_1 + 0x1c0;
  *(undefined4 *)(param_1 + 0x1f8) = uVar1;
  *(undefined4 *)(param_1 + 0x1bc) = uVar1;
  *(undefined4 *)(param_1 + 0x180) = uVar1;
  return;
}
