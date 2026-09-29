// OoT3D decomp @ 002410a0  name=FUN_002410a0  size=316

void FUN_002410a0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;

  FUN_00351034(param_2,param_2 + 0xae8,*(undefined4 *)(param_1 + 0x1a4));
  FUN_00350f34(param_1,param_1 + 0x2210,param_1 + 0x2214,0);
  FUN_00350f34(param_1,param_1 + 0x2218,0);
  if (*(int *)(param_1 + 0x221c) != 0) {
    (**(code **)(*(int *)*DAT_002411dc + 0x10))((int *)*DAT_002411dc,*(int *)(param_1 + 0x221c));
  }
  *(undefined4 *)(param_1 + 0x221c) = 0;
  FUN_003685a0(param_1 + 0x2220);
  if (*(int *)(param_1 + 0x22bc) != 0) {
    if (((*DAT_002411e0 & 1) == 0) && (iVar1 = FUN_003679b4(DAT_002411e0), iVar1 != 0)) {
      FUN_0036788c(DAT_002411e4);
    }
    FUN_00348904(*(undefined4 *)(DAT_002411f0 + 0x47c),*(undefined4 *)(param_1 + 0x22bc));
    *(undefined4 *)(param_1 + 0x22bc) = 0;
  }
  if (*(int *)(param_1 + 0x22b8) != 0) {
    uVar2 = FUN_003488e4();
    (**(code **)(*(int *)*DAT_002411f4 + 0x10))((int *)*DAT_002411f4,uVar2);
    *(undefined4 *)(param_1 + 0x22b8) = 0;
  }
  FUN_003445a8(param_1 + 0x22c0);
  FUN_003445a8(param_1 + 0x2314);
  return;
}
