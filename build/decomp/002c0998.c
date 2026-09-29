// OoT3D decomp @ 002c0998  name=FUN_002c0998  size=256

void FUN_002c0998(int param_1)

{
  ushort uVar1;
  int iVar2;

  iVar2 = *(int *)(param_1 + 0xd4);
  if (iVar2 + 0x364 == param_1) {
    if (**(char **)(iVar2 + 0x4ff8) == '\x01') {
      *(undefined2 *)(param_1 + 0x18a) = 0x21;
      *(undefined2 *)(param_1 + 0x19c) = 0x21;
      *(ushort *)(param_1 + 0x194) = *(ushort *)(param_1 + 0x194) & 0xfffb;
      return;
    }
    if (*(char *)(iVar2 + 0x4c33) == '\0') {
      FUN_00336434(DAT_002c0a98,param_1,0,0xffffff9d,0,0x12,10);
      *(undefined2 *)(param_1 + 0x18a) = 1;
      *(undefined2 *)(param_1 + 0x19c) = 1;
      return;
    }
    if (*(char *)(iVar2 + 0x4c33) == '\x01') {
      FUN_00336434(DAT_002c0a98,param_1,0,0xffffff9d,0,0x12,10);
      *(undefined2 *)(param_1 + 0x18a) = 3;
      *(undefined2 *)(param_1 + 0x19c) = 3;
      return;
    }
    FUN_00336434(DAT_002c0a98,param_1,0,0xffffff9d,0,0x12,10);
    *(undefined2 *)(param_1 + 0x18a) = 1;
    *(undefined2 *)(param_1 + 0x19c) = 1;
    uVar1 = *(ushort *)(param_1 + 0x194) | 4;
  }
  else {
    *(undefined2 *)(param_1 + 0x18a) = 0x21;
    *(undefined2 *)(param_1 + 0x19c) = 0x21;
    uVar1 = *(ushort *)(param_1 + 0x194) & 0xfffb;
  }
  *(ushort *)(param_1 + 0x194) = uVar1;
  return;
}
