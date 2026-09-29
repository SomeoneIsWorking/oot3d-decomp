// OoT3D decomp @ 001748f4  name=FUN_001748f4  size=100

void FUN_001748f4(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;

  if (*(short *)(param_1 + 0x8d0) != 0) {
    FUN_003731e0(param_1 + 0x1a4);
  }
  iVar1 = FUN_0036bc98(param_1,param_2);
  if (iVar1 != 0) {
    uVar2 = DAT_00174958;
    if (*(short *)(param_1 + 0x8d0) == 0) {
      uVar2 = DAT_0017495c;
    }
    *(undefined4 *)(param_1 + 0x8a8) = uVar2;
    return;
  }
  FUN_0036bb28(DAT_00174960,param_1,param_2);
  return;
}
