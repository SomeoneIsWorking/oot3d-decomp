// OoT3D decomp @ 0013f9c4  name=FUN_0013f9c4  size=124

void FUN_0013f9c4(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;

  FUN_003731e0(param_1 + 0x1a4);
  iVar2 = FUN_00370378(param_1 + 0x36,(int)*(short *)(param_1 + 0x924),DAT_0013fa40);
  if (iVar2 != 0) {
    FUN_0036f32c(param_1);
  }
  if (*(int *)(param_1 + 0x98) < DAT_0013fa44) {
    FUN_0036e734(param_1 + 0x1a4,*(undefined4 *)(param_1 + 0x940));
    uVar1 = DAT_0013fa4c;
    *(undefined4 *)(param_1 + 0x918) = DAT_0013fa48;
    *(undefined2 *)(param_1 + 0x920) = 0;
    *(undefined4 *)(param_1 + 0x6c) = uVar1;
  }
  FUN_0036f364(param_1,param_2);
  return;
}
