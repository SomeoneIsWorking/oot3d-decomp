// OoT3D decomp @ 0044fa44  name=FUN_0044fa44  size=100

void FUN_0044fa44(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;

  *param_2 = 0;
  *(undefined1 *)((int)param_2 + 0xe) = 0x50;
  *(undefined1 *)((int)param_2 + 0xf) = 0x50;
  *(undefined1 *)(param_2 + 4) = 0x50;
  *(undefined1 *)((int)param_2 + 0x12) = 0;
  *(undefined1 *)((int)param_2 + 0x13) = 0;
  *(undefined1 *)(param_2 + 5) = 0;
  uVar2 = DAT_0044faac;
  uVar1 = DAT_0044faa8;
  *(short *)(param_2 + 3) = (short)DAT_0044fab0;
  param_2[2] = uVar1;
  uVar1 = DAT_0044fab4;
  param_2[1] = uVar2;
  FUN_00343280(uVar1,0x188);
  z_lights_004620f8(param_1,param_2);
  return;
}
