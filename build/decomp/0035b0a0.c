// OoT3D decomp @ 0035b0a0  name=FUN_0035b0a0  size=176

undefined4 FUN_0035b0a0(undefined4 param_1,undefined4 param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;

  puVar1 = DAT_0035b150;
  if (((*DAT_0035b150 & 1) == 0) &&
     (uVar4 = FUN_003679b4(DAT_0035b150), param_2 = (undefined4)((ulonglong)uVar4 >> 0x20),
     (int)uVar4 != 0)) {
    FUN_0036788c(DAT_0035b154);
    param_2 = DAT_0035b15c;
  }
  iVar2 = DAT_0035b160;
  if (-1 < *(int *)(DAT_0035b160 + 0x3ec)) {
    if (((*puVar1 & 1) == 0) && (iVar3 = FUN_003679b4(DAT_0035b150,param_2), iVar3 != 0)) {
      FUN_0036788c(DAT_0035b154);
    }
    if (*(int *)(iVar2 + 1000) == 8) {
      return 1;
    }
  }
  return 0;
}
