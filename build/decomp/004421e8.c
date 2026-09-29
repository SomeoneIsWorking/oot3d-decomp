// OoT3D decomp @ 004421e8  name=FUN_004421e8  size=128

undefined4 * FUN_004421e8(undefined4 *param_1)

{
  int iVar1;

  *param_1 = DAT_00442268;
  FUN_002fb9c4(param_1);
  iVar1 = 0;
  do {
    if (param_1[iVar1 + 2] != 0) {
      FUN_00301260();
      FUN_0031b99c(param_1[iVar1 + 2]);
      param_1[iVar1 + 2] = 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 6);
  param_1[0x249] = DAT_0044226c;
  FUN_002fbb10(param_1 + 0x249);
  FUN_00377d38(param_1 + 8,DAT_00442270,0x54,3);
  return param_1;
}
