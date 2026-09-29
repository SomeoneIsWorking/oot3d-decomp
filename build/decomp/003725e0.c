// OoT3D decomp @ 003725e0  name=FUN_003725e0  size=92

void FUN_003725e0(undefined4 param_1,undefined4 param_2)

{
  undefined8 uVar1;

  if (((*DAT_0037263c & 1) == 0) &&
     (uVar1 = FUN_003679b4(DAT_0037263c), param_2 = (undefined4)((ulonglong)uVar1 >> 0x20),
     (int)uVar1 != 0)) {
    FUN_0036788c(DAT_00372640);
    param_2 = DAT_00372648;
  }
  FUN_002e9a1c(DAT_0037264c,param_2);
  FUN_00340bdc(param_1,0);
  return;
}
