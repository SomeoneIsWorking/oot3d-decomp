// OoT3D decomp @ 002d041c  name=FUN_002d041c  size=136

void FUN_002d041c(int param_1,int param_2,undefined2 param_3)

{
  undefined2 uVar1;
  int iVar2;

  iVar2 = DAT_002d7a74;
  if (*(char *)(DAT_002d04a4 + 0x576) == '\0') {
    uVar1 = (undefined2)param_2;
    if (*(ushort *)(param_1 + 0x2e26) != 0 && param_2 < (int)(uint)*(ushort *)(param_1 + 0x2e26)) {
      *(undefined2 *)(param_1 + 0x2e26) = uVar1;
    }
    if (*(ushort *)(param_1 + 0x2e24) != 0 && param_2 < (int)(uint)*(ushort *)(param_1 + 0x2e24)) {
      *(undefined2 *)(param_1 + 0x2e24) = uVar1;
    }
    if (*(ushort *)(param_1 + 0x2e28) != 0 && param_2 < (int)(uint)*(ushort *)(param_1 + 0x2e28)) {
      *(undefined2 *)(param_1 + 0x2e28) = uVar1;
    }
    if (*(ushort *)(param_1 + 0x2e2a) != 0 && param_2 < (int)(uint)*(ushort *)(param_1 + 0x2e2a)) {
      *(undefined2 *)(param_1 + 0x2e2a) = uVar1;
    }
    if (*(ushort *)(param_1 + 0x2e2c) != 0 && param_2 < (int)(uint)*(ushort *)(param_1 + 0x2e2c)) {
      *(undefined2 *)(param_1 + 0x2e2c) = uVar1;
    }
    if (*(ushort *)(param_1 + 0x2e2e) != 0 && param_2 < (int)(uint)*(ushort *)(param_1 + 0x2e2e)) {
      *(undefined2 *)(param_1 + 0x2e2e) = uVar1;
    }
    return;
  }
  if (*(char *)(DAT_002d7a74 + 0x56f) == -1) {
    if (*(short *)(param_1 + 0x2e26) != 0x46) {
      *(undefined2 *)(param_1 + 0x2e26) = 0x46;
    }
  }
  else if (*(short *)(param_1 + 0x2e26) != 0xff) {
    *(undefined2 *)(param_1 + 0x2e26) = param_3;
  }
  if (*(char *)(iVar2 + 0x570) == -1) {
    if (*(short *)(param_1 + 0x2e28) != 0x46) {
      *(undefined2 *)(param_1 + 0x2e28) = 0x46;
    }
  }
  else if (*(short *)(param_1 + 0x2e28) != 0xff) {
    *(undefined2 *)(param_1 + 0x2e28) = param_3;
  }
  if (*(char *)(iVar2 + 0x571) == -1) {
    if (*(short *)(param_1 + 0x2e2a) != 0x46) {
      *(undefined2 *)(param_1 + 0x2e2a) = 0x46;
    }
  }
  else if (*(short *)(param_1 + 0x2e2a) != 0xff) {
    *(undefined2 *)(param_1 + 0x2e2a) = param_3;
  }
  if (*(char *)(iVar2 + 0x572) == -1) {
    if (*(short *)(param_1 + 0x2e2c) != 0x46) {
      *(undefined2 *)(param_1 + 0x2e2c) = 0x46;
    }
  }
  else if (*(short *)(param_1 + 0x2e2c) != 0xff) {
    *(undefined2 *)(param_1 + 0x2e2c) = param_3;
  }
  if (*(char *)(iVar2 + 0x573) == -1) {
    if (*(short *)(param_1 + 0x2e2e) != 0x46) {
      *(undefined2 *)(param_1 + 0x2e2e) = 0x46;
    }
  }
  else if (*(short *)(param_1 + 0x2e2e) != 0xff) {
    *(undefined2 *)(param_1 + 0x2e2e) = param_3;
  }
  if (*(char *)(iVar2 + 0x574) != -1) {
    if (*(short *)(param_1 + 0x2e24) != 0xff) {
      *(undefined2 *)(param_1 + 0x2e24) = param_3;
    }
    return;
  }
  if (*(short *)(param_1 + 0x2e24) != 0x46) {
    *(undefined2 *)(param_1 + 0x2e24) = 0x46;
  }
  return;
}
