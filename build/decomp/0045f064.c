// OoT3D decomp @ 0045f064  name=FUN_0045f064  size=176

void FUN_0045f064(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;

  uVar2 = 0;
  if (*(char *)(param_1 + 0x4c36) != '\0') {
    do {
      if (*(int *)(param_1 + uVar2 * 0x3c + 0x4c3c) != 0) {
        uVar1 = FUN_003687a8();
        FUN_00340f44(param_2,uVar1);
      }
      uVar2 = uVar2 + 1 & 0xff;
    } while (uVar2 < *(byte *)(param_1 + 0x4c36));
  }
  uVar2 = 0;
  if (*(char *)(param_1 + 0x5012) != '\0') {
    do {
      if (*(int *)(param_1 + uVar2 * 0x3c + 0x5018) != 0) {
        uVar1 = FUN_003687a8();
        FUN_00340f44(param_2,uVar1);
      }
      uVar2 = uVar2 + 1 & 0xff;
    } while (uVar2 < *(byte *)(param_1 + 0x5012));
  }
  return;
}
