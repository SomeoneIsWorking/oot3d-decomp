// OoT3D decomp @ 00350914  name=FUN_00350914  size=384

undefined4
FUN_00350914(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined1 *param_4)

{
  float fVar1;
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
  uVar2 = *(undefined4 *)(param_4 + 0x24);
  uVar3 = *(undefined4 *)(param_4 + 0x28);
  param_2[0x10] = *(float *)(param_4 + 0x20);
  param_2[0x11] = uVar2;
  param_2[0x12] = uVar3;
  uVar2 = *(undefined4 *)(param_4 + 0x30);
  uVar3 = *(undefined4 *)(param_4 + 0x34);
  param_2[0x13] = *(undefined4 *)(param_4 + 0x2c);
  param_2[0x14] = uVar2;
  param_2[0x15] = uVar3;
  uVar2 = *(undefined4 *)(param_4 + 0x3c);
  uVar3 = *(undefined4 *)(param_4 + 0x40);
  param_2[0x16] = *(undefined4 *)(param_4 + 0x38);
  param_2[0x17] = uVar2;
  param_2[0x18] = uVar3;
  uVar2 = *(undefined4 *)(param_4 + 0x48);
  uVar3 = *(undefined4 *)(param_4 + 0x4c);
  param_2[0x19] = *(undefined4 *)(param_4 + 0x44);
  param_2[0x1a] = uVar2;
  param_2[0x1b] = uVar3;
  fVar1 = DAT_00350a94;
  *(short *)(param_2 + 0x1c) =
       (short)(int)(((float)param_2[0x16] + (float)param_2[0x19]) * DAT_00350a94);
  *(short *)((int)param_2 + 0x72) =
       (short)(int)(((float)param_2[0x17] + (float)param_2[0x1a]) * fVar1);
  *(short *)(param_2 + 0x1d) = (short)(int)(((float)param_2[0x18] + (float)param_2[0x1b]) * fVar1);
  *(short *)((int)param_2 + 0x76) =
       (short)(int)(((float)param_2[0x10] + (float)param_2[0x13]) * fVar1);
  *(short *)(param_2 + 0x1e) = (short)(int)(((float)param_2[0x11] + (float)param_2[0x14]) * fVar1);
  *(short *)((int)param_2 + 0x7a) =
       (short)(int)(((float)param_2[0x12] + (float)param_2[0x15]) * fVar1);
  return 1;
}
