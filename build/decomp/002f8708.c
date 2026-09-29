// OoT3D decomp @ 002f8708  name=FUN_002f8708  size=220

void FUN_002f8708(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;

  iVar1 = DAT_002f87e4;
  if (param_1 == 0) {
    *(undefined4 *)(DAT_002f87e4 + 0x38) = 1;
    FUN_00343270(*(undefined4 *)(iVar1 + 0x14));
    FUN_00343270(*(undefined4 *)(iVar1 + 0x10));
    *(undefined4 *)(iVar1 + 0x44) = 0;
  }
  else if (param_1 == 1) {
    *(undefined4 *)(DAT_002f87e4 + 0x44) = 5;
    iVar3 = FUN_002f1268();
    if (iVar3 == 0) {
      uVar4 = 9;
    }
    else {
      uVar4 = 7;
    }
    *(undefined4 *)(iVar1 + 0x38) = uVar4;
  }
  FUN_002ef2c0(*(undefined4 *)(iVar1 + 0x2c));
  FUN_002eef74(*(undefined4 *)(iVar1 + 0x2c));
  FUN_002f06b8();
  FUN_002f74a4(2);
  FUN_002e9a00();
  piVar2 = DAT_002f87e8;
  FUN_002e666c((int)*(short *)(*DAT_002f87e8 + 0xf50));
  *(int *)(iVar1 + 0x30) = *(short *)(*piVar2 + 0xf50) + -3;
  FUN_002f01cc();
  *(undefined4 *)(iVar1 + 0x40) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x54) = 0;
  *(undefined4 *)(iVar1 + 0x34) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x58) = 0;
  return;
}
