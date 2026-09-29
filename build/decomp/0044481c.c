// OoT3D decomp @ 0044481c  name=FUN_0044481c  size=572

void FUN_0044481c(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;

  iVar2 = DAT_00444a5c;
  iVar1 = DAT_00444a58;
  uVar3 = (uint)*(byte *)(DAT_00444a58 + 0x50);
  fVar5 = (float)VectorSignedToFloat((int)*(char *)(DAT_00444a58 + 0x47),
                                     (byte)(in_fpscr >> 0x15) & 3);
  fVar6 = (float)VectorSignedToFloat((uVar3 + 1) * 0x30,(byte)(in_fpscr >> 0x15) & 3);
  if (*(char *)(DAT_00444a58 + 0x4e) == '\0') {
    local_1c = DAT_00444a60;
    local_18 = DAT_00444a60;
    local_24 = DAT_00444a60;
    local_20 = DAT_00444a60;
    FUN_002fc534(*(undefined4 *)(DAT_00444a5c + 4),&local_1c,&local_24,1,0x3e);
    FUN_002fc534(*(undefined4 *)(iVar2 + 4),&local_1c,&local_24,1,0x3c);
    FUN_002fc534(*(undefined4 *)(iVar2 + 4),&local_1c,&local_24,1,0x3d);
    FUN_002fc534(*(undefined4 *)(iVar2 + 4),&local_1c,&local_24,1,0x3b);
    return;
  }
  local_1c = DAT_00444a64;
  uVar4 = 0;
  if (uVar3 != 0) {
    uVar4 = 0xa0;
  }
  local_18 = (float)DAT_00444a68;
  if (uVar3 == 0) {
    uVar4 = 0x4e;
  }
  local_24 = (float)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
  local_24 = local_24 * (fVar5 / fVar6);
  local_20 = (float)DAT_00444a6c;
  FUN_002fc534(*(undefined4 *)(DAT_00444a5c + 4),&local_1c,&local_24,1,0x3e);
  fVar5 = DAT_00444a78;
  uVar4 = DAT_00444a74;
  local_1c = DAT_00444a70;
  local_18 = (float)DAT_00444a74;
  local_24 = DAT_00444a78;
  local_20 = DAT_00444a78;
  FUN_002fc534(*(undefined4 *)(iVar2 + 4),&local_1c,&local_24,1,0x3b);
  local_1c = DAT_00444a7c;
  local_18 = (float)uVar4;
  if (*(char *)(iVar1 + 0x50) != '\0') {
    local_24 = DAT_00444a80;
    local_20 = fVar5;
    FUN_002fc534(*(undefined4 *)(iVar2 + 4),&local_1c,&local_24,1,0x3c);
    local_1c = DAT_00444a84;
    local_18 = (float)uVar4;
    local_24 = fVar5;
    local_20 = fVar5;
    FUN_002fc534(*(undefined4 *)(iVar2 + 4),&local_1c,&local_24,1,0x3d);
    return;
  }
  local_24 = DAT_00444a88;
  local_20 = fVar5;
  FUN_002fc534(*(undefined4 *)(iVar2 + 4),&local_1c,&local_24,1,0x3c);
  local_1c = DAT_00444a8c;
  local_18 = (float)uVar4;
  local_24 = fVar5;
  local_20 = fVar5;
  FUN_002fc534(*(undefined4 *)(iVar2 + 4),&local_1c,&local_24,1,0x3d);
  return;
}
