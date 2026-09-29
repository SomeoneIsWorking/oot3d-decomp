// OoT3D decomp @ 00452018  name=FUN_00452018  size=64

undefined4 FUN_00452018(int param_1)

{
  uint uVar1;
  undefined4 uVar2;

  uVar1 = (uint)(param_1 << 0x1b) >> 0x1e;
  if ((uVar1 != 0) &&
     (((uVar2 = DAT_00452058, uVar1 == 1 || (uVar2 = DAT_0045205c, uVar1 == 2)) ||
      (uVar2 = DAT_00452058, (uint)(param_1 << 0x1d) >> 0x1e != 1)))) {
    return uVar2;
  }
  return 0xff;
}
