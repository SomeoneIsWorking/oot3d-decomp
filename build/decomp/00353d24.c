// OoT3D decomp @ 00353d24  name=FUN_00353d24  size=172

undefined4
FUN_00353d24(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined1 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;

  *param_2 = param_3;
  *(undefined1 *)(param_2 + 5) = *param_4;
  *(undefined1 *)(param_2 + 4) = param_4[1];
  *(undefined1 *)((int)param_2 + 0x11) = param_4[2];
  *(undefined1 *)((int)param_2 + 0x12) = param_4[3];
  *(undefined1 *)((int)param_2 + 0x13) = param_4[4];
  *(undefined1 *)((int)param_2 + 0x15) = param_4[5];
  *(undefined1 *)(param_2 + 0xb) = param_4[8];
  param_2[6] = *(undefined4 *)(param_4 + 0xc);
  *(undefined1 *)(param_2 + 7) = param_4[0x10];
  *(undefined1 *)((int)param_2 + 0x1d) = param_4[0x11];
  param_2[8] = *(undefined4 *)(param_4 + 0x14);
  *(undefined1 *)(param_2 + 9) = param_4[0x18];
  *(undefined1 *)((int)param_2 + 0x25) = param_4[0x19];
  *(undefined1 *)((int)param_2 + 0x2d) = param_4[0x1c];
  *(undefined1 *)((int)param_2 + 0x2e) = param_4[0x1d];
  *(undefined1 *)((int)param_2 + 0x2f) = param_4[0x1e];
  uVar1 = *(undefined4 *)(param_4 + 0x24);
  uVar2 = *(undefined4 *)(param_4 + 0x28);
  uVar3 = *(undefined4 *)(param_4 + 0x2c);
  param_2[0x10] = *(undefined4 *)(param_4 + 0x20);
  param_2[0x11] = uVar1;
  param_2[0x12] = uVar2;
  param_2[0x13] = uVar3;
  uVar1 = *(undefined4 *)(param_4 + 0x34);
  param_2[0x14] = *(undefined4 *)(param_4 + 0x30);
  param_2[0x15] = uVar1;
  return 1;
}
