// OoT3D decomp @ 004bdcac  name=FUN_004bdcac  size=32

void FUN_004bdcac(int param_1)

{
  undefined4 uVar1;
  undefined uVar2;
  
  uVar1 = DAT_004bdccc;
  if (*(byte *)(param_1 + 0x70) < 2) {
    uVar2 = 1;
  }
  else {
    uVar2 = 2;
  }
  *(undefined *)(param_1 + 0x71) = uVar2;
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  return;
}

