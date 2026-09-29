// OoT3D decomp @ 004272fc  name=FUN_004272fc  size=284

void FUN_004272fc(int param_1)

{
  uint uVar1;
  undefined4 uVar2;

  uVar2 = 0;
  if (1 < *(uint *)(param_1 + 0x10)) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  FUN_002f4f64(param_1);
  if (*(char *)(param_1 + 0x14) == '\0') {
    uVar1 = *(uint *)(*(int *)(param_1 + 4) + 0x18);
    if (((~uVar1 & 0x10000000) == 0) || ((~uVar1 & 0x10) == 0)) {
      if (*(int *)(param_1 + 0x10) == 0) {
        return;
      }
    }
    else {
      uVar2 = 1;
      if (((~uVar1 & 0x20000000) != 0) && ((~uVar1 & 0x20) != 0)) {
        if ((~uVar1 & 1) != 0) {
          return;
        }
        FUN_002f4ebc(param_1 + *(int *)(param_1 + 0x10) * 0x1c + 0x1120);
        return;
      }
      if (*(int *)(param_1 + 0x10) == 1) {
        return;
      }
    }
    FUN_0037547c(DAT_00427418,0,4,DAT_00427420,DAT_00427420,DAT_0042741c);
    *(undefined4 *)(param_1 + 0x10) = uVar2;
    return;
  }
  return;
}
