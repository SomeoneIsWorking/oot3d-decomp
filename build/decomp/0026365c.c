// OoT3D decomp @ 0026365c  name=FUN_0026365c  size=420

undefined4
FUN_0026365c(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint in_fpscr;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;

  uVar1 = DAT_00263800;
  local_20 = DAT_00263800;
  local_1c = DAT_00263800;
  local_18 = DAT_00263800;
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  *param_3 = *param_4;
  param_3[1] = uVar2;
  param_3[2] = uVar3;
  param_3[3] = uVar1;
  param_3[4] = uVar1;
  param_3[5] = uVar1;
  param_3[6] = uVar1;
  param_3[7] = uVar1;
  param_3[8] = uVar1;
  iVar4 = 0;
  *(undefined2 *)(param_3 + 0x18) = 0xa0;
  param_3[10] = DAT_00263804;
  param_3[9] = DAT_00263808;
  param_3[0xe] = 0;
  *(undefined2 *)((int)param_3 + 0x52) = 0;
  *(undefined2 *)(param_3 + 0x16) = *(undefined2 *)((int)param_4 + 0x16);
  *(undefined2 *)((int)param_3 + 0x56) = *(undefined2 *)(param_4 + 5);
  *(undefined2 *)((int)param_3 + 0x5a) = *(undefined2 *)(param_4 + 6);
  *(ushort *)(param_3 + 0x11) = (ushort)*(byte *)(param_4 + 3);
  *(ushort *)((int)param_3 + 0x46) = (ushort)*(byte *)((int)param_4 + 0xd);
  *(ushort *)((int)param_3 + 0x4a) = (ushort)*(byte *)((int)param_4 + 0xf);
  *(ushort *)(param_3 + 0x12) = (ushort)*(byte *)((int)param_4 + 0xe);
  *(ushort *)(param_3 + 0x13) = (ushort)*(byte *)(param_4 + 4);
  *(ushort *)((int)param_3 + 0x4e) = (ushort)*(byte *)((int)param_4 + 0x11);
  *(ushort *)(param_3 + 0x14) = (ushort)*(byte *)((int)param_4 + 0x12);
  *(undefined2 *)(param_3 + 0x17) = *(undefined2 *)((int)param_4 + 0x1a);
  do {
    FUN_0034ea48(*(undefined4 *)(param_3[0x1a] + iVar4 * 4),DAT_0026380c);
    FUN_0034ea6c(*(undefined4 *)(param_3[0x1a] + iVar4 * 4),DAT_00263810);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 3);
  local_30 = (float)VectorSignedToFloat((int)*(short *)(param_3 + 0x13),(byte)(in_fpscr >> 0x15) & 3
                                       );
  local_24 = uVar1;
  local_2c = (float)VectorSignedToFloat((int)*(short *)((int)param_3 + 0x4e),
                                        (byte)(in_fpscr >> 0x15) & 3);
  local_28 = (float)VectorSignedToFloat((int)*(short *)(param_3 + 0x14),(byte)(in_fpscr >> 0x15) & 3
                                       );
  local_30 = local_30 * DAT_00263814;
  local_2c = local_2c * DAT_00263814;
  local_28 = local_28 * DAT_00263814;
  if (*(short *)(param_3 + 0x17) == 0) {
    FUN_003429c8(*(undefined4 *)param_3[0x1a],0,&local_30);
    FUN_003429c8(*(undefined4 *)(param_3[0x1a] + 4),0,&local_30);
  }
  else {
    FUN_003429c8(((undefined4 *)param_3[0x1a])[2],0,&local_30);
  }
  return 1;
}
