// OoT3D decomp @ 002a7008  name=FUN_002a7008  size=248

void FUN_002a7008(int param_1,undefined4 param_2)

{
  short sVar1;
  undefined2 uVar2;

  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  *(undefined2 *)(param_1 + 0x1a8) = *(undefined2 *)(param_1 + 0x1c);
  *(undefined1 *)(param_1 + 0x1f) = 5;
  sVar1 = *(short *)(param_1 + 0x1a8);
  if (sVar1 == 0) {
    *(undefined2 *)(param_1 + 0x1aa) = 0;
    if (*(float *)(param_1 + 0x30) <= DAT_002a7100) goto LAB_002a70a0;
    uVar2 = 1;
  }
  else {
    if (sVar1 != 1) {
      if (sVar1 == 2) {
        *(undefined2 *)(param_1 + 0x1aa) = 4;
      }
      goto LAB_002a70a0;
    }
    *(undefined2 *)(param_1 + 0x1aa) = 2;
    if (*(uint *)(param_1 + 0x30) <= DAT_002a7104) goto LAB_002a70a0;
    uVar2 = 3;
  }
  *(undefined2 *)(param_1 + 0x1aa) = uVar2;
LAB_002a70a0:
  FUN_00350a98(param_2,param_1 + 0x1e8);
  FUN_00350914(param_2,param_1 + 0x1e8,param_1,DAT_002a7108);
  *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(param_1 + 0x30);
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x10;
  if (*(int *)(DAT_002a710c + 0x4e8) != 4) {
    *(undefined4 *)(param_1 + 0x140) = 0;
    *(undefined4 *)(param_1 + 0x13c) = 0;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
    return;
  }
  *(undefined4 *)(param_1 + 0x1a4) = DAT_002a7110;
  return;
}
