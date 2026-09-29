// OoT3D decomp @ 00263df4  name=FUN_00263df4  size=408

undefined4
FUN_00263df4(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  float fVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  float local_1c;
  float local_18;
  float local_14;
  undefined4 local_10;

  fVar5 = DAT_00263f8c;
  uVar3 = param_4[1];
  uVar4 = param_4[2];
  *param_3 = *param_4;
  param_3[1] = uVar3;
  param_3[2] = uVar4;
  fVar1 = DAT_00263f90;
  param_3[1] = (float)param_3[1] + fVar5;
  uVar3 = param_4[4];
  uVar4 = param_4[5];
  param_3[3] = param_4[3];
  param_3[4] = uVar3;
  param_3[5] = uVar4;
  uVar3 = param_4[7];
  uVar4 = param_4[8];
  param_3[6] = param_4[6];
  param_3[7] = uVar3;
  param_3[8] = uVar4;
  param_3[0xe] = 0;
  fVar5 = (float)VectorSignedToFloat((int)*(short *)((int)param_4 + 0x32),
                                     (byte)(in_fpscr >> 0x15) & 3);
  fVar6 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00263f94 + 0x110),
                                     (byte)(in_fpscr >> 0x15) & 3);
  *(short *)(param_3 + 0x18) = (short)(int)((fVar5 * fVar1) / fVar6 + DAT_00263f98);
  param_3[10] = DAT_00263f9c;
  param_3[9] = DAT_00263fa0;
  *(ushort *)(param_3 + 0x11) = (ushort)*(byte *)(param_4 + 9);
  *(ushort *)((int)param_3 + 0x46) = (ushort)*(byte *)((int)param_4 + 0x25);
  *(ushort *)(param_3 + 0x12) = (ushort)*(byte *)((int)param_4 + 0x26);
  *(ushort *)((int)param_3 + 0x4a) = (ushort)*(byte *)((int)param_4 + 0x27);
  *(ushort *)(param_3 + 0x13) = (ushort)*(byte *)(param_4 + 10);
  *(ushort *)((int)param_3 + 0x4e) = (ushort)*(byte *)((int)param_4 + 0x29);
  *(ushort *)(param_3 + 0x14) = (ushort)*(byte *)((int)param_4 + 0x2a);
  *(ushort *)((int)param_3 + 0x52) = (ushort)*(byte *)((int)param_4 + 0x2b);
  uVar2 = FUN_00368d94(*(undefined1 *)((int)param_4 + 0x27),(int)*(short *)((int)param_4 + 0x32));
  *(undefined2 *)(param_3 + 0x15) = uVar2;
  uVar3 = DAT_00263fa4;
  *(undefined2 *)((int)param_3 + 0x56) = *(undefined2 *)(param_4 + 0xb);
  *(undefined2 *)(param_3 + 0x16) = *(undefined2 *)((int)param_4 + 0x2e);
  *(undefined2 *)((int)param_3 + 0x5a) = *(undefined2 *)(param_4 + 0xc);
  FUN_0034ea6c(param_3[0x19],uVar3);
  FUN_0034ea48(param_3[0x19],DAT_00263fa8);
  local_1c = (float)VectorSignedToFloat((int)*(short *)(param_3 + 0x13),(byte)(in_fpscr >> 0x15) & 3
                                       );
  local_18 = (float)VectorSignedToFloat((int)*(short *)((int)param_3 + 0x4e),
                                        (byte)(in_fpscr >> 0x15) & 3);
  local_14 = (float)VectorSignedToFloat((int)*(short *)(param_3 + 0x14),(byte)(in_fpscr >> 0x15) & 3
                                       );
  local_10 = DAT_00263fac;
  local_1c = local_1c * DAT_00263fb0;
  local_18 = local_18 * DAT_00263fb0;
  local_14 = local_14 * DAT_00263fb0;
  FUN_003429c8(param_3[0x19],1,&local_1c);
  *(undefined4 *)(param_3[0x19] + 0x1e0) = *DAT_00263fb4;
  return 1;
}
