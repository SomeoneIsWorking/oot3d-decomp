// OoT3D decomp @ 0030b404  name=FUN_0030b404  size=60

void FUN_0030b404(float param_1,undefined1 *param_2)

{
  undefined4 uVar1;

  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(DAT_0030b440 + 0x1fc);
  uVar1 = DAT_0030b444;
  *(undefined2 *)(param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 8) = uVar1;
  param_2[0x18] = 0x7f;
  *(undefined4 *)(param_2 + 0xc) = uVar1;
  *(float *)(param_2 + 4) = param_1 * DAT_0030b448;
  *param_2 = 0;
  return;
}
