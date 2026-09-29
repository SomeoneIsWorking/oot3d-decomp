// OoT3D decomp @ 0029e2d8  name=FUN_0029e2d8  size=68

void FUN_0029e2d8(int param_1)

{
  int iVar1;

  if (*(int *)(param_1 + 0x124) == 0) {
    iVar1 = FUN_003705a0(DAT_0029e320,DAT_0029e31c,param_1 + 0x54);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x140) = 0;
      *(undefined4 *)(param_1 + 0x13c) = 0;
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
      return;
    }
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x54);
  }
  return;
}
