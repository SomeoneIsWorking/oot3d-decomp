// OoT3D decomp @ 004198f0  name=FUN_004198f0  size=252

void FUN_004198f0(int param_1)

{
  undefined2 uVar1;
  undefined4 extraout_r1;
  undefined4 uVar2;
  undefined8 uVar3;

  if (*(char *)(DAT_004199ec + 0xe) == '\0') {
    uVar1 = (undefined2)DAT_004199f0;
  }
  else {
    uVar1 = 0x900;
  }
  *DAT_004199f4 = uVar1;
  (**(code **)**(undefined4 **)(param_1 + 0x174))();
  FUN_0041af08(param_1);
  FUN_002ffb3c(param_1);
  uVar2 = extraout_r1;
  if (((*DAT_004199f8 & 1) == 0) &&
     (uVar3 = FUN_003679b4(DAT_004199f8), uVar2 = (int)((ulonglong)uVar3 >> 0x20), (int)uVar3 != 0))
  {
    FUN_0031ff30(DAT_004199fc);
    uVar2 = DAT_00419a04;
  }
  FUN_0031fe84(DAT_004199fc,uVar2);
  FUN_0041ac88(param_1 + 0x180);
  FUN_0041ae84(param_1 + 0x22f0);
  FUN_0041aec8(param_1 + 0x23c8);
  FUN_0041b1b4(param_1 + 0x25f0);
  uVar2 = DAT_00419a08;
  *(undefined4 *)(param_1 + 0x24f0) = DAT_00419a08;
  *(undefined4 *)(param_1 + 0x24f4) = uVar2;
  *(undefined4 *)(param_1 + 0x24f8) = uVar2;
  *(undefined4 *)(param_1 + 0x24fc) = uVar2;
  *(undefined4 *)(param_1 + 0x2500) = uVar2;
  *(undefined4 *)(param_1 + 0x2504) = uVar2;
  *(undefined1 *)(param_1 + 0x25ec) = 1;
  return;
}
