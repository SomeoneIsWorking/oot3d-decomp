// OoT3D decomp @ 003ce92c  name=FUN_003ce92c  size=244

void FUN_003ce92c(int param_1,undefined4 param_2)

{
  int iVar1;

  iVar1 = FUN_00371e40();
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x124) = 0;
    *(undefined4 *)(param_1 + 0x1a4) = DAT_003cea20;
    return;
  }
  if (*(short *)(param_1 + 0x1c) == 9) {
    if ((int)(*(uint *)(DAT_003cea24 + 0xb8) & *(uint *)(DAT_003cea28 + 0x18)) >>
        *(sbyte *)(DAT_003cea2c + 6) < 2) {
      FUN_003724dc(DAT_003cea34,DAT_003cea30,param_1,param_2,0x77);
      return;
    }
    FUN_003724dc(DAT_003cea34,DAT_003cea30,param_1,param_2,0x78);
    return;
  }
  if (*(short *)(param_1 + 0x1c) != 10) {
    FUN_003724dc(DAT_003cea34,DAT_003cea30,param_1,param_2,
                 *(undefined4 *)(*(int *)(param_1 + 0x208) + 4));
    return;
  }
  if ((int)(*(uint *)(DAT_003cea24 + 0xb8) & *(uint *)(DAT_003cea28 + 0x1c)) >>
      *(sbyte *)(DAT_003cea2c + 7) < 2) {
    FUN_003724dc(DAT_003cea34,DAT_003cea30,param_1,param_2,0x79);
    return;
  }
  FUN_003724dc(DAT_003cea34,DAT_003cea30,param_1,param_2,0x7a);
  return;
}
