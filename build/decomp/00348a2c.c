// OoT3D decomp @ 00348a2c  name=FUN_00348a2c  size=32

void FUN_00348a2c(undefined4 *param_1)

{
  int unaff_r5;
  int unaff_r6;
  undefined4 *unaff_r7;
  bool in_ZR;

  if (!in_ZR) {
    param_1 = (undefined4 *)FUN_00347258();
  }
  *param_1 = *unaff_r7;
  *(undefined4 **)(unaff_r6 + 0x1dc) = param_1;
  *(undefined4 **)(unaff_r5 + 0x358) = param_1;
  return;
}
