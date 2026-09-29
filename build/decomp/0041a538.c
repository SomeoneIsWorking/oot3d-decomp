// OoT3D decomp @ 0041a538  name=FUN_0041a538  size=120

undefined8 FUN_0041a538(int param_1,undefined4 param_2)

{
  undefined8 uVar1;

  if (((*DAT_0041a5ac & 1) == 0) &&
     (uVar1 = FUN_003679b4(DAT_0041a5ac), param_2 = (undefined4)((ulonglong)uVar1 >> 0x20),
     (int)uVar1 != 0)) {
    FUN_0036788c(DAT_0041a5b0);
    param_2 = DAT_0041a5b8;
  }
  FUN_0031025c(DAT_0041a5b0,param_2);
  FUN_003016e0(0);
  FUN_002ff5d4(param_1 + 0x104);
  return CONCAT44(param_1 + 0x2e0,param_1);
}
