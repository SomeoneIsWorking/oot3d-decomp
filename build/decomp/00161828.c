// OoT3D decomp @ 00161828  name=FUN_00161828  size=288

void FUN_00161828(int param_1,int param_2)

{
  int iVar1;

  iVar1 = FUN_003769d8(param_2 + 0x28a0);
  if ((iVar1 == 5) && (iVar1 = FUN_00346964(param_2), iVar1 != 0)) {
    FUN_003725e0(param_2);
    if (*(short *)(param_1 + 0x1c) == 9) {
      if ((int)(*(uint *)(DAT_00161948 + 0xb8) & *(uint *)(DAT_0016194c + 0x18)) >>
          *(sbyte *)(DAT_00161950 + 6) < 2) {
        FUN_003724dc(DAT_00161958,DAT_00161954,param_1,param_2,0x77);
      }
      else {
        FUN_003724dc(DAT_00161958,DAT_00161954,param_1,param_2,0x78);
      }
    }
    else if (*(short *)(param_1 + 0x1c) == 10) {
      if ((int)(*(uint *)(DAT_00161948 + 0xb8) & *(uint *)(DAT_0016194c + 0x1c)) >>
          *(sbyte *)(DAT_00161950 + 7) < 2) {
        FUN_003724dc(DAT_00161958,DAT_00161954,param_1,param_2,0x79);
      }
      else {
        FUN_003724dc(DAT_00161958,DAT_00161954,param_1,param_2,0x7a);
      }
    }
    else {
      FUN_003724dc(DAT_00161958,DAT_00161954,param_1,param_2,
                   *(undefined4 *)(*(int *)(param_1 + 0x208) + 4));
    }
    *(undefined4 *)(param_1 + 0x1a4) = DAT_0016195c;
  }
  return;
}
