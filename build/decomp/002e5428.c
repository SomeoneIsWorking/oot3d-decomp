// OoT3D decomp @ 002e5428  name=FUN_002e5428  size=80

void FUN_002e5428(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;

  uVar2 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    do {
      FUN_00464e10(param_1 + uVar2 * 0x20 + 8);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 4));
  }
  puVar1 = DAT_002e5478;
  *(undefined4 *)(param_1 + 4) = 0;
  *puVar1 = 0;
  puVar1[2] = 1;
  return;
}
