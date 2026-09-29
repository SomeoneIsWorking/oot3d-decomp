// OoT3D decomp @ 00174e04  name=FUN_00174e04  size=224

void FUN_00174e04(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  int iVar2;

  iVar2 = FUN_0036e864(param_2,(int)*(char *)(param_1 + 0x1c3),param_3,param_4,param_4);
  if (((iVar2 != 0) && (*(short *)(param_1 + 0x1c) == 0 || *(short *)(param_1 + 0x1c) == 2)) ||
     ((iVar2 = FUN_0036e864(param_2,(int)*(char *)(param_1 + 0x1c3)), iVar2 == 0 &&
      (*(short *)(param_1 + 0x1c) == 1 || *(short *)(param_1 + 0x1c) == 3)))) {
    *(undefined4 *)(param_1 + 0x140) = DAT_00174ee4;
    *(undefined4 *)(param_1 + 0x1bc) = DAT_00174ee8;
    iVar2 = (int)*(short *)(*(int *)(param_2 + 0xa54) + DAT_00174eec);
    if ((iVar2 != 0) && (*(short *)(*(int *)(param_2 + iVar2 * 4 + 0xa54) + 0x18a) == 0x26)) {
      FUN_0035a008(param_2);
    }
    FUN_00371808(param_2,DAT_00174ef0,0x28,param_1,0);
    uVar1 = FUN_00371808(param_2,DAT_00174ef4,0x28,param_1,0);
    *DAT_00174ef8 = uVar1;
  }
  return;
}
