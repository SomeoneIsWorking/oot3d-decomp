// OoT3D decomp @ 00427424  name=FUN_00427424  size=400

void FUN_00427424(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;

  uVar3 = 0;
  if (1 < *(uint *)(param_1 + 0x10)) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  FUN_002f4f64(param_1);
  if (*(char *)(param_1 + 0x14) != '\0') {
    return;
  }
  uVar2 = *(uint *)(*(int *)(param_1 + 4) + 0x18);
  if (((~uVar2 & 0x10000000) == 0) || ((~uVar2 & 0x10) == 0)) {
    if (*(int *)(param_1 + 0x10) == 0) goto LAB_00427560;
  }
  else {
    uVar3 = 1;
    if (((~uVar2 & 0x20000000) != 0) && ((~uVar2 & 0x20) != 0)) {
      if ((~uVar2 & 1) == 0) {
        iVar1 = param_1 + *(int *)(param_1 + 0x10) * 0x1c + 0x1120;
      }
      else {
        iVar1 = param_1 + 0x1174;
        if ((~uVar2 & 2) != 0) goto LAB_00427560;
      }
      FUN_002f4ebc(iVar1);
      goto LAB_00427560;
    }
    if (*(int *)(param_1 + 0x10) == 1) goto LAB_00427560;
  }
  FUN_0037547c(DAT_004275b4,0,4,DAT_004275bc,DAT_004275bc,DAT_004275b8);
  *(undefined4 *)(param_1 + 0x10) = uVar3;
LAB_00427560:
  if (((~*(uint *)(*(int *)(param_1 + 4) + 0x18) & 8) == 0) &&
     ((~*(uint *)(*(int *)(param_1 + 4) + 0x14) & 0xfffffff7) != 0)) {
    FUN_002f4ebc(param_1 + 0x1174);
    return;
  }
  return;
}
