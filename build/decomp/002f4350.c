// OoT3D decomp @ 002f4350  name=FUN_002f4350  size=136

uint FUN_002f4350(int param_1)

{
  uint uVar1;
  int iVar2;

  uVar1 = FUN_00456e84(param_1 + 0x44);
  uVar1 = uVar1 ^ 1;
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar2 = FUN_0031b9c0(*(int *)(param_1 + 0x10),0);
    if (iVar2 == 0 || uVar1 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    iVar2 = FUN_0031b9c0(*(int *)(param_1 + 0x14),0);
    if (iVar2 == 0 || uVar1 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    iVar2 = FUN_0031b9c0(*(int *)(param_1 + 0x18),0);
    if (iVar2 == 0 || uVar1 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1 ^ 1;
}
