// OoT3D decomp @ 002d7974  name=FUN_002d7974  size=256

void FUN_002d7974(int param_1,undefined2 param_2)

{
  int iVar1;

  iVar1 = DAT_002d7a74;
  if (*(char *)(DAT_002d7a74 + 0x56f) == -1) {
    if (*(short *)(param_1 + 0x2e26) != 0x46) {
      *(undefined2 *)(param_1 + 0x2e26) = 0x46;
    }
  }
  else if (*(short *)(param_1 + 0x2e26) != 0xff) {
    *(undefined2 *)(param_1 + 0x2e26) = param_2;
  }
  if (*(char *)(iVar1 + 0x570) == -1) {
    if (*(short *)(param_1 + 0x2e28) != 0x46) {
      *(undefined2 *)(param_1 + 0x2e28) = 0x46;
    }
  }
  else if (*(short *)(param_1 + 0x2e28) != 0xff) {
    *(undefined2 *)(param_1 + 0x2e28) = param_2;
  }
  if (*(char *)(iVar1 + 0x571) == -1) {
    if (*(short *)(param_1 + 0x2e2a) != 0x46) {
      *(undefined2 *)(param_1 + 0x2e2a) = 0x46;
    }
  }
  else if (*(short *)(param_1 + 0x2e2a) != 0xff) {
    *(undefined2 *)(param_1 + 0x2e2a) = param_2;
  }
  if (*(char *)(iVar1 + 0x572) == -1) {
    if (*(short *)(param_1 + 0x2e2c) != 0x46) {
      *(undefined2 *)(param_1 + 0x2e2c) = 0x46;
    }
  }
  else if (*(short *)(param_1 + 0x2e2c) != 0xff) {
    *(undefined2 *)(param_1 + 0x2e2c) = param_2;
  }
  if (*(char *)(iVar1 + 0x573) == -1) {
    if (*(short *)(param_1 + 0x2e2e) != 0x46) {
      *(undefined2 *)(param_1 + 0x2e2e) = 0x46;
    }
  }
  else if (*(short *)(param_1 + 0x2e2e) != 0xff) {
    *(undefined2 *)(param_1 + 0x2e2e) = param_2;
  }
  if (*(char *)(iVar1 + 0x574) != -1) {
    if (*(short *)(param_1 + 0x2e24) != 0xff) {
      *(undefined2 *)(param_1 + 0x2e24) = param_2;
    }
    return;
  }
  if (*(short *)(param_1 + 0x2e24) != 0x46) {
    *(undefined2 *)(param_1 + 0x2e24) = 0x46;
  }
  return;
}
