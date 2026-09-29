// OoT3D decomp @ 00178a80  name=FUN_00178a80  size=112

void FUN_00178a80(int param_1)

{
  int iVar1;
  undefined4 uVar2;

  if (*(int *)(param_1 + 0x200) == 0) {
    iVar1 = FUN_00370734(param_1 + 0x294);
    if (iVar1 != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x230);
      if (*(int *)(param_1 + 0x200) == 0) {
        if (*(int *)(param_1 + 0x220) < 1) {
          uVar2 = 0;
          *(undefined4 *)(param_1 + 0x1a4) = DAT_00178af4;
        }
        else {
          *(int *)(param_1 + 0x220) = *(int *)(param_1 + 0x220) + -1;
        }
      }
      FUN_00350248(param_1,uVar2,param_1 + 0x230);
      return;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x1a4) = DAT_00178af0;
  }
  return;
}
