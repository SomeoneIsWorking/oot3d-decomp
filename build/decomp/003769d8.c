// OoT3D decomp @ 003769d8  name=FUN_003769d8  size=76

void FUN_003769d8(undefined4 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  if (((*DAT_00376a24 & 1) == 0) &&
     (uVar1 = FUN_003679b4(DAT_00376a24), param_2 = (undefined4)((ulonglong)uVar1 >> 0x20),
     (int)uVar1 != 0)) {
    FUN_0036788c(DAT_00376a28);
    param_2 = DAT_00376a30;
  }
  FUN_002c2700(DAT_00376a34,param_2);
  return;
}

