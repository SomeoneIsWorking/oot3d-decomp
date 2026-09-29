// OoT3D decomp @ 0045f114  name=FUN_0045f114  size=160

void FUN_0045f114(undefined4 param_1,undefined4 param_2)

{
  uint *puVar1;
  undefined4 extraout_r1;
  undefined4 uVar2;
  undefined8 uVar3;

  puVar1 = DAT_0045f1b4;
  if (((*DAT_0045f1b4 & 1) == 0) &&
     (uVar3 = FUN_003679b4(DAT_0045f1b4), param_2 = (undefined4)((ulonglong)uVar3 >> 0x20),
     (int)uVar3 != 0)) {
    FUN_0036788c(DAT_0045f1b8);
    param_2 = DAT_0045f1c0;
  }
  FUN_0031025c(DAT_0045f1b8,param_2);
  FUN_003016e0(0);
  uVar2 = extraout_r1;
  if (((*puVar1 & 1) == 0) &&
     (uVar3 = FUN_003679b4(DAT_0045f1b4), uVar2 = (int)((ulonglong)uVar3 >> 0x20), (int)uVar3 != 0))
  {
    FUN_0036788c(DAT_0045f1b8);
    uVar2 = DAT_0045f1c0;
  }
  FUN_002e71b4(DAT_0045f1c4,uVar2);
  return;
}
