// OoT3D decomp @ 004558e4  name=FUN_004558e4  size=120

bool FUN_004558e4(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;

  if ((*DAT_0045595c & 1) == 0) {
    uVar2 = FUN_003679b4(DAT_0045595c);
    param_2 = (undefined4)((ulonglong)uVar2 >> 0x20);
    if ((int)uVar2 != 0) {
      FUN_0036788c(DAT_00455960);
      param_2 = DAT_00455968;
    }
  }
  uVar1 = DAT_00455960;
  FUN_0031bebc(DAT_00455960,param_2);
  FUN_0031bd30(uVar1);
  FUN_0031bb84(uVar1);
  return *(char *)(param_1 + 8) == '\x01';
}
