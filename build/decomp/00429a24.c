// OoT3D decomp @ 00429a24  name=FUN_00429a24  size=380

void FUN_00429a24(int param_1)

{
  uint uVar1;

  if (*(int *)(param_1 + 0x3e4) != 10 && *(int *)(param_1 + 0x3e4) != 0xb) {
    FUN_002fd71c(param_1,10,0);
  }
  *(undefined1 *)(*(int *)(param_1 + 0x1284) + 0x6c) = 1;
  *(undefined1 *)(*(int *)(param_1 + 0x1288) + 0x6c) = 1;
  *(undefined1 *)(*(int *)(param_1 + 0x128c) + 0x6c) = 1;
  *(undefined1 *)(*(int *)(param_1 + 0x1290) + 0x6c) = 1;
  *(undefined1 *)(*(int *)(param_1 + 0x1298) + 0x6c) = 1;
  *(undefined1 *)(*(int *)(param_1 + 0x129c) + 0x6c) = 1;
  *(undefined1 *)(*(int *)(param_1 + 0x12a0) + 0x6c) = 1;
  *(undefined1 *)(*(int *)(param_1 + 0x12a4) + 0x6c) = 1;
  if (*(char *)(param_1 + 0x3f4) == '\0') {
    uVar1 = *(uint *)(*(int *)(param_1 + 4) + 0x18);
    if (((~uVar1 & 0x10000000) == 0) || ((~uVar1 & 0x10) == 0)) {
      FUN_002fd71c(param_1,10,1);
      return;
    }
    if (((~uVar1 & 0x20000000) == 0) || ((~uVar1 & 0x20) == 0)) {
      FUN_002fd71c(param_1,0xb,1);
      return;
    }
    if ((~uVar1 & 1) == 0) {
      FUN_002f2e44(param_1 + *(int *)(param_1 + 0x3e4) * 0x1c + 0x1758);
      return;
    }
    if ((~uVar1 & 2) == 0) {
      FUN_002fd71c(param_1,0xb,0);
      FUN_002f2e44(param_1 + 0x188c);
      return;
    }
  }
  return;
}
