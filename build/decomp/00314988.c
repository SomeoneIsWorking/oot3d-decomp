// OoT3D decomp @ 00314988  name=FUN_00314988  size=144

void FUN_00314988(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;

  uVar2 = DAT_00314a1c;
  iVar1 = DAT_00314a18;
  param_2 = param_2 & 3;
  if (param_2 != *(byte *)(DAT_00314a18 + 5)) {
    *(undefined4 *)(DAT_00314a18 + 0x68) = *(undefined4 *)(DAT_00314a18 + 0x110 + param_2 * 4);
    if (param_2 == 1 || param_2 == 2) {
      FUN_0037547c(uVar2,param_1,4,DAT_00314a28,DAT_00314a24,DAT_00314a20);
    }
    *(char *)(iVar1 + 5) = (char)param_2;
  }
  if (param_2 != 0) {
    FUN_0037547c(DAT_00314a2c,param_1,4,DAT_00314a28,DAT_00314a24,DAT_00314a20);
  }
  return;
}
