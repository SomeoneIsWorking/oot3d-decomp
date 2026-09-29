// OoT3D decomp @ 0034fc7c  name=FUN_0034fc7c  size=200

undefined4 * FUN_0034fc7c(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;

  if (((*DAT_0034fd44 & 1) == 0) && (iVar1 = FUN_003679b4(DAT_0034fd44), iVar1 != 0)) {
    FUN_0036788c(DAT_0034fd48);
  }
  FUN_00348904(*(undefined4 *)(DAT_0034fd54 + 0x47c),param_1[2]);
  param_1[2] = 0;
  if (param_1[1] != 0) {
    uVar2 = FUN_003488e4();
    (**(code **)(*(int *)*DAT_0034fd58 + 0x10))((int *)*DAT_0034fd58,uVar2);
  }
  uVar2 = DAT_0034fd5c;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = uVar2;
  param_1[7] = uVar2;
  param_1[8] = uVar2;
  param_1[9] = uVar2;
  *(undefined1 *)(param_1 + 5) = 0;
  return param_1;
}
