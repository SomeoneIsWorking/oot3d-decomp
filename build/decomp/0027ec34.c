// OoT3D decomp @ 0027ec34  name=FUN_0027ec34  size=244

void FUN_0027ec34(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x1d0) == 1) {
      iVar1 = FUN_00332c98();
      if (*(int *)(iVar1 + 0xa70) == *(int *)(param_1 + 0x1cc)) {
        iVar1 = FUN_00332c98();
        *(undefined4 *)(iVar1 + 0xa70) = *(undefined4 *)(*(int *)(param_1 + 0x1cc) + 8);
      }
      iVar1 = FUN_00332c98();
      uVar2 = FUN_00332c98();
      FUN_0034fbe8(uVar2,iVar1 + 0xa70,*(undefined4 *)(param_1 + 0x1cc));
    }
    if (*(int *)(param_1 + 0x1d8) != 0) {
      if (((*UNK_0027ed28 & 1) == 0) && (iVar1 = FUN_003679b4(UNK_0027ed28), iVar1 != 0)) {
        FUN_0036788c(UNK_0027ed2c);
      }
      FUN_00348904(*(undefined4 *)(UNK_0027ed38 + 0x47c),*(undefined4 *)(param_1 + 0x1d8));
      *(undefined4 *)(param_1 + 0x1d8) = 0;
    }
    if (*(int *)(param_1 + 0x1d4) != 0) {
      uVar2 = FUN_003488e4();
      (**(code **)(*(int *)*UNK_0027ed3c + 0x10))((int *)*UNK_0027ed3c,uVar2);
      *(undefined4 *)(param_1 + 0x1d4) = 0;
    }
  }
  return;
}

