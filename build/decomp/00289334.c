// OoT3D decomp @ 00289334  name=FUN_00289334  size=196

void FUN_00289334(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;

  iVar2 = FUN_0036adf4();
  if (iVar2 == 0) {
    uVar3 = (uint)(int)*(short *)(param_1 + 0x1c) >> 5 & 0xf8;
    *(ushort *)(param_1 + 0x264) = *(byte *)(*(int *)(param_2 + 0x5c20) + uVar3) - 1;
    *(undefined2 *)(param_1 + 0x266) = 0;
    *(undefined2 *)(param_1 + 0x268) = 1;
    FUN_0036ac0c(param_1 + 0x24c,*(undefined4 *)(*(int *)(param_2 + 0x5c20) + uVar3 + 4));
    uVar1 = DAT_002893f8;
    *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x24c) + *(float *)(param_1 + 0x25c);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x250);
    *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x254) + *(float *)(param_1 + 0x260);
    *(undefined4 *)(param_1 + 0x1bc) = uVar1;
    uVar1 = DAT_002893fc;
    *(byte *)(param_1 + 0x26b) = *(byte *)(param_1 + 0x26b) & 0xf0;
    *(undefined2 *)(param_1 + 0x228) = 0x96;
    *(undefined2 *)(param_1 + 0x22e) = 0;
    *(undefined2 *)(param_1 + 0x22c) = 0;
    *(undefined2 *)(param_1 + 0x22a) = 0;
    FUN_0037572c(uVar1,param_1);
    return;
  }
  return;
}
