// OoT3D decomp @ 003796c0  name=FUN_003796c0  size=80

void FUN_003796c0(int param_1)

{
  FUN_003731e0(param_1 + 0x1a4);
  if ((*(short *)(param_1 + 0x582) == 0) && (*(int *)(*(int *)(param_1 + 0x124) + 0x13c) != 0)) {
    *(undefined2 *)(*(int *)(param_1 + 0x124) + 0x1ac) = 1;
    *(undefined2 *)(param_1 + 0x580) = 0;
    *(undefined4 *)(param_1 + 0x568) = DAT_00379710;
  }
  return;
}
