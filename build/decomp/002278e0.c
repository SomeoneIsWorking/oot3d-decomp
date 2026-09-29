// OoT3D decomp @ 002278e0  name=FUN_002278e0  size=356

undefined4
FUN_002278e0(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int *piVar2;
  float fVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint in_fpscr;
  float fVar7;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;

  fVar3 = DAT_00227a54;
  uVar1 = DAT_00227a44;
  local_20 = DAT_00227a44;
  local_1c = DAT_00227a44;
  local_18 = DAT_00227a44;
  param_3[6] = DAT_00227a44;
  param_3[7] = uVar1;
  param_3[8] = uVar1;
  param_3[3] = param_3[6];
  param_3[4] = param_3[7];
  param_3[5] = param_3[8];
  uVar5 = param_4[1];
  uVar6 = param_4[2];
  *param_3 = *param_4;
  param_3[1] = uVar5;
  param_3[2] = uVar6;
  param_3[10] = DAT_00227a48;
  param_3[9] = DAT_00227a4c;
  piVar2 = DAT_00227a50;
  param_3[0xe] = 0;
  fVar7 = (float)VectorSignedToFloat((int)*(short *)(*piVar2 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
  *(short *)(param_3 + 0x18) = (short)(int)(fVar3 / fVar7 + DAT_00227a58);
  *(undefined2 *)((int)param_3 + 0x5e) = 0;
  *(undefined2 *)((int)param_3 + 0x46) = 200;
  *(undefined2 *)(param_3 + 0x11) = 0;
  uVar4 = FUN_00368d94(800);
  *(undefined2 *)(param_3 + 0x12) = uVar4;
  *(undefined2 *)((int)param_3 + 0x4a) = 0xff;
  *(undefined2 *)(param_3 + 0x13) = 0xdc;
  *(undefined2 *)((int)param_3 + 0x4e) = 0x50;
  *(undefined2 *)(param_3 + 0x14) = 0xff;
  *(undefined2 *)((int)param_3 + 0x52) = 0x82;
  *(undefined2 *)(param_3 + 0x15) = 0x1e;
  *(undefined2 *)((int)param_3 + 0x56) = 0;
  *(undefined2 *)(param_3 + 0x16) = 0;
  FUN_0034ea48(param_3[0x19],DAT_00227a5c);
  local_30 = (float)VectorSignedToFloat((int)*(short *)((int)param_3 + 0x52),
                                        (byte)(in_fpscr >> 0x15) & 3);
  local_24 = uVar1;
  local_2c = (float)VectorSignedToFloat((int)*(short *)(param_3 + 0x15),(byte)(in_fpscr >> 0x15) & 3
                                       );
  local_28 = (float)VectorSignedToFloat((int)*(short *)((int)param_3 + 0x56),
                                        (byte)(in_fpscr >> 0x15) & 3);
  local_30 = local_30 * DAT_00227a60;
  local_2c = local_2c * DAT_00227a60;
  local_28 = local_28 * DAT_00227a60;
  FUN_003429c8(param_3[0x19],0,&local_30);
  return 1;
}
