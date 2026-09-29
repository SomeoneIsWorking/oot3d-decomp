// OoT3D decomp @ 002ce680  name=FUN_002ce680  size=168

undefined4 FUN_002ce680(undefined4 param_1)

{
  int iVar1;
  undefined4 extraout_r1;
  int local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_18;

  FUN_00489ed4(&local_30);
  FUN_00489f38(param_1,extraout_r1,*DAT_002ce728,DAT_002ce728[1]);
  iVar1 = DAT_002ce72c;
  *(undefined4 *)(DAT_002ce72c + 0x10) = local_28;
  *(undefined4 *)(iVar1 + 0x1c) = local_18;
  if (local_30 == local_2c) {
    *(undefined1 *)(iVar1 + 4) = 0;
  }
  else {
    *(undefined1 *)(iVar1 + 4) = 1;
  }
  FUN_0048a1b4(DAT_002ce72c);
  FUN_002f9e90(param_1,0x10,DAT_002ce72c,0x20,*DAT_002ce730);
  FUN_0048a0c4(param_1,0);
  FUN_0048a2ec(DAT_002ce72c,0x20);
  return 0;
}
