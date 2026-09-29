// OoT3D decomp @ 002639d4  name=FUN_002639d4  size=604

undefined4
FUN_002639d4(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  uint in_fpscr;
  float local_34;
  float local_30;
  float local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;

  fVar5 = DAT_00263c3c;
  uVar4 = DAT_00263c30;
  local_24 = DAT_00263c30;
  local_20 = DAT_00263c30;
  local_1c = DAT_00263c30;
  param_3[6] = DAT_00263c30;
  param_3[7] = uVar4;
  param_3[8] = uVar4;
  param_3[3] = param_3[6];
  param_3[4] = param_3[7];
  param_3[5] = param_3[8];
  uVar6 = param_4[1];
  uVar7 = param_4[2];
  *param_3 = *param_4;
  param_3[1] = uVar6;
  param_3[2] = uVar7;
  param_3[10] = DAT_00263c34;
  param_3[9] = DAT_00263c38;
  if (*(short *)((int)param_4 + 0xe) == 0) {
    *(undefined2 *)((int)param_4 + 0xe) = 600;
  }
  param_3[0xe] = 0;
  *(undefined2 *)(param_3 + 0x18) = 0x11;
  *(undefined2 *)((int)param_3 + 0x46) = *(undefined2 *)((int)param_4 + 0xe);
  *(undefined2 *)(param_3 + 0x11) = 0;
  *(undefined2 *)(param_3 + 0x12) = 100;
  *(undefined2 *)(param_3 + 0x17) = 0;
  local_28 = uVar4;
  local_34 = DAT_00263c40;
  local_30 = DAT_00263c40;
  local_2c = DAT_00263c40;
  FUN_003429c8(*(undefined4 *)param_3[0x1a],1,&local_34);
  if (*(char *)((int)param_4 + 0xd) == '\0') {
    cVar3 = *(char *)(param_4 + 3);
    if (cVar3 == '\0') {
      *(undefined2 *)((int)param_3 + 0x4a) = 0xff;
      *(undefined2 *)(param_3 + 0x13) = 0xff;
      *(undefined2 *)((int)param_3 + 0x4e) = 0xff;
      *(undefined2 *)(param_3 + 0x14) = 200;
      *(undefined2 *)((int)param_3 + 0x52) = 0xff;
      *(undefined2 *)(param_3 + 0x15) = 0xff;
      *(undefined2 *)((int)param_3 + 0x56) = 0xff;
      *(undefined2 *)(param_3 + 0x16) = 200;
      *(undefined2 *)((int)param_3 + 0x5a) = 0;
    }
    else if (cVar3 == '\x01') {
      *(undefined2 *)((int)param_3 + 0x4a) = 0xff;
      *(undefined2 *)(param_3 + 0x13) = 0xff;
      *(undefined2 *)((int)param_3 + 0x4e) = 0xff;
      *(undefined2 *)(param_3 + 0x14) = 0xff;
      *(undefined2 *)((int)param_3 + 0x52) = 0xff;
      *(undefined2 *)(param_3 + 0x15) = 0xff;
      *(undefined2 *)((int)param_3 + 0x56) = 0xff;
      *(undefined2 *)(param_3 + 0x16) = 0xff;
      *(undefined2 *)((int)param_3 + 0x5a) = 1;
    }
    else if (cVar3 == '\x02') {
      *(undefined2 *)((int)param_3 + 0x4a) = 0xff;
      *(undefined2 *)(param_3 + 0x13) = 0xff;
      *(undefined2 *)((int)param_3 + 0x4e) = 0xff;
      *(undefined2 *)(param_3 + 0x14) = 200;
      *(undefined2 *)((int)param_3 + 0x52) = 0xff;
      *(undefined2 *)(param_3 + 0x15) = 0xff;
      *(undefined2 *)((int)param_3 + 0x56) = 0xff;
      *(undefined2 *)(param_3 + 0x16) = 200;
      *(undefined2 *)((int)param_3 + 0x5a) = 2;
    }
  }
  else {
    *(ushort *)((int)param_3 + 0x4a) = (ushort)*(byte *)(param_4 + 4);
    *(ushort *)(param_3 + 0x13) = (ushort)*(byte *)((int)param_4 + 0x11);
    *(ushort *)((int)param_3 + 0x4e) = (ushort)*(byte *)((int)param_4 + 0x12);
    *(ushort *)(param_3 + 0x14) = (ushort)*(byte *)((int)param_4 + 0x13);
    bVar1 = *(byte *)(param_4 + 5);
    *(ushort *)((int)param_3 + 0x52) = (ushort)bVar1;
    bVar2 = *(byte *)((int)param_4 + 0x15);
    *(ushort *)(param_3 + 0x15) = (ushort)bVar2;
    local_34 = (float)VectorSignedToFloat((uint)bVar1,(byte)(in_fpscr >> 0x15) & 3);
    bVar1 = *(byte *)((int)param_4 + 0x16);
    *(ushort *)((int)param_3 + 0x56) = (ushort)bVar1;
    local_30 = (float)VectorSignedToFloat((uint)bVar2,(byte)(in_fpscr >> 0x15) & 3);
    local_34 = local_34 * fVar5;
    local_2c = (float)VectorSignedToFloat((uint)bVar1,(byte)(in_fpscr >> 0x15) & 3);
    *(ushort *)(param_3 + 0x16) = (ushort)*(byte *)((int)param_4 + 0x17);
    *(ushort *)((int)param_3 + 0x5a) = (ushort)*(byte *)(param_4 + 3);
    local_30 = local_30 * fVar5;
    *(undefined2 *)(param_3 + 0x17) = 1;
    local_28 = uVar4;
    local_2c = local_2c * fVar5;
    FUN_003429c8(*(undefined4 *)(param_3[0x1a] + 4),0,&local_34);
  }
  iVar8 = 0;
  do {
    FUN_0034ea48(*(undefined4 *)(param_3[0x1a] + iVar8 * 4),DAT_00263c44);
    FUN_0034ea6c(*(undefined4 *)(param_3[0x1a] + iVar8 * 4),DAT_00263c48);
    iVar8 = iVar8 + 1;
  } while (iVar8 < 2);
  return 1;
}
