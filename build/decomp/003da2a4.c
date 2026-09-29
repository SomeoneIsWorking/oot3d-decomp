// OoT3D decomp @ 003da2a4  name=FUN_003da2a4  size=152

void FUN_003da2a4(int param_1,undefined4 param_2)

{
  int iVar1;
  int extraout_r1;
  int iVar2;

  if (DAT_003da33c < (int)(*(float *)(param_1 + 0xc) - *(float *)(param_1 + 0x2c))) {
    FUN_00374428(param_1);
    iVar1 = *(int *)(param_1 + 0x128);
    iVar2 = extraout_r1;
    if (iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + 0x13c);
    }
    if (iVar1 != 0 && iVar2 != 0) {
      FUN_00374428();
      return;
    }
  }
  else {
    FUN_00375bcc(param_1,DAT_003da340);
    if ((DAT_003da344 < (int)(*(float *)(param_1 + 0xc) - *(float *)(param_1 + 0x2c))) &&
       (iVar2 = FUN_0036adf4(param_1), iVar2 != 0)) {
      FUN_0036ebdc(param_2);
      return;
    }
  }
  return;
}
