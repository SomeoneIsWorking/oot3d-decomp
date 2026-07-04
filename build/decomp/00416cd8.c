// OoT3D decomp @ 00416cd8  name=FUN_00416cd8  size=104

void FUN_00416cd8(int param_1)

{
  undefined4 uVar1;
  
  *(undefined2 *)(*piRam00416d40 + 0x110) = 2;
  FUN_003016e0(1);
  uVar1 = uRam00416d4c;
  *(undefined4 *)(param_1 + 4) = uRam00416d44;
  *(undefined4 *)(param_1 + 8) = uRam00416d48;
  *(undefined1 *)(param_1 + 0x2e4) = 7;
  *(undefined4 *)(param_1 + 0x2ec) = uVar1;
  *(undefined4 *)(param_1 + 0x2e8) = uVar1;
  *(undefined4 *)(param_1 + 0x2f0) = 0;
  *(undefined1 *)(param_1 + 0x2f4) = 1;
  *(undefined4 *)(iRam00416d50 + 0x4dc) = 0xff;
  return;
}

