// OoT3D decomp @ 00174d90  name=FUN_00174d90  size=96

void FUN_00174d90(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;

  iVar1 = FUN_00371e40();
  if (iVar1 != 0) {
    uVar2 = DAT_00174df4;
    if (*(int *)(DAT_00174df0 + 4) != 0) {
      FUN_00375bcc(param_1,DAT_00174df8);
      uVar2 = 0;
    }
    *(undefined4 *)(param_1 + 0x140) = uVar2;
    *(undefined4 *)(param_1 + 0x1a4) = DAT_00174dfc;
    return;
  }
  *(int *)(*(int *)(DAT_00174e00 + param_2) + 0x12b0) = param_1;
  return;
}
