// OoT3D decomp @ 004a0ac8  name=FUN_004a0ac8  size=1024

void FUN_004a0ac8(int param_1,uint param_2,int *param_3,float *param_4)

{
  undefined1 uVar1;
  int iVar2;
  bool bVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_40;
  float local_3c;
  float local_38;
  float fStack_34;
  float local_30;
  float local_2c;
  float local_28;
  float fStack_24;
  float local_20;
  float local_1c;

  local_38 = *param_4;
  fStack_34 = param_4[1];
  local_30 = param_4[2];
  local_2c = param_4[3];
  local_28 = param_4[4];
  fStack_24 = param_4[5];
  local_20 = param_4[6];
  local_1c = param_4[7];
  FUN_004a5708(param_1,param_2,&local_38);
  iVar2 = *param_3;
  if (iVar2 == 0) {
    local_40 = local_30;
    local_3c = local_2c;
    if (local_28 <= *(float *)(param_1 + 0x10)) {
      local_40 = local_20;
      local_3c = local_1c;
    }
  }
  else if (iVar2 == 1) {
    fVar4 = (*(float *)(param_1 + 0x10) - local_38) / (local_28 - local_38);
    local_40 = local_30 + (local_20 - local_30) * fVar4;
    fVar6 = (float)VectorSignedToFloat((int)local_1c - (int)local_2c,(byte)(in_fpscr >> 0x15) & 3);
    fVar5 = (float)VectorSignedToFloat(local_2c,(byte)(in_fpscr >> 0x15) & 3);
    local_3c = (float)(int)(fVar5 + fVar6 * fVar4);
  }
  else if (iVar2 == 2) {
    fVar4 = (*(float *)(param_1 + 0x10) - local_38) / (local_28 - local_38);
    local_40 = local_30 + (local_20 - local_30) * fVar4 * fVar4;
    fVar5 = (float)VectorSignedToFloat((int)local_1c - (int)local_2c,(byte)(in_fpscr >> 0x15) & 3);
    fVar6 = (float)VectorSignedToFloat(local_2c,(byte)(in_fpscr >> 0x15) & 3);
    local_3c = (float)(int)(fVar6 + fVar5 * fVar4 * fVar4);
  }
  else if (iVar2 == 3) {
    fVar4 = (*(float *)(param_1 + 0x10) - local_38) / (local_28 - local_38) - DAT_004a0e40;
    local_40 = local_20 + (local_30 - local_20) * fVar4 * fVar4;
    fVar5 = (float)VectorSignedToFloat((int)local_2c - (int)local_1c,(byte)(in_fpscr >> 0x15) & 3);
    fVar6 = (float)VectorSignedToFloat(local_1c,(byte)(in_fpscr >> 0x15) & 3);
    local_3c = (float)(int)(fVar6 + fVar5 * fVar4 * fVar4);
  }
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 1 << (param_2 & 0xff);
  switch(param_2) {
  case 0:
    bVar3 = local_3c == 0.0;
    fVar4 = 0.0;
    if (-1 < (int)local_3c) {
      bVar3 = local_3c == 3.57331e-43;
      fVar4 = local_3c;
    }
    if (!bVar3 && 0xfe < (int)local_3c) {
      fVar4 = 3.57331e-43;
    }
    *(float *)(param_1 + 0x20) = fVar4;
    break;
  case 1:
    *(float *)(param_1 + 0x24) = local_3c;
    return;
  case 2:
    *(float *)(param_1 + 0x28) = local_40;
    return;
  case 3:
    *(float *)(param_1 + 0x2c) = local_40;
    return;
  case 4:
    *(float *)(param_1 + 0x30) = local_40;
    return;
  case 5:
    *(float *)(param_1 + 0x34) = local_40;
    return;
  case 6:
    *(float *)(param_1 + 0x38) = local_40;
    return;
  case 7:
    *(float *)(param_1 + 0x3c) = local_40;
    return;
  case 8:
    *(float *)(param_1 + 0x40) = local_40;
    return;
  case 9:
    *(float *)(param_1 + 0x44) = local_40;
    return;
  case 10:
    bVar3 = local_3c == 0.0;
    fVar4 = 0.0;
    if (-1 < (int)local_3c) {
      bVar3 = local_3c == 3.57331e-43;
      fVar4 = local_3c;
    }
    uVar1 = SUB41(fVar4,0);
    if (!bVar3 && 0xfe < (int)local_3c) {
      uVar1 = 0xff;
    }
    *(undefined1 *)(param_1 + 0x48) = uVar1;
    return;
  case 0xb:
    bVar3 = local_3c == 0.0;
    fVar4 = 0.0;
    if (-1 < (int)local_3c) {
      bVar3 = local_3c == 3.57331e-43;
      fVar4 = local_3c;
    }
    uVar1 = SUB41(fVar4,0);
    if (!bVar3 && 0xfe < (int)local_3c) {
      uVar1 = 0xff;
    }
    *(undefined1 *)(param_1 + 0x49) = uVar1;
    return;
  case 0xc:
    bVar3 = local_3c == 0.0;
    fVar4 = 0.0;
    if (-1 < (int)local_3c) {
      bVar3 = local_3c == 3.57331e-43;
      fVar4 = local_3c;
    }
    uVar1 = SUB41(fVar4,0);
    if (!bVar3 && 0xfe < (int)local_3c) {
      uVar1 = 0xff;
    }
    *(undefined1 *)(param_1 + 0x4a) = uVar1;
    return;
  case 0xd:
    bVar3 = local_3c == 0.0;
    fVar4 = 0.0;
    if (-1 < (int)local_3c) {
      bVar3 = local_3c == 3.57331e-43;
      fVar4 = local_3c;
    }
    uVar1 = SUB41(fVar4,0);
    if (!bVar3 && 0xfe < (int)local_3c) {
      uVar1 = 0xff;
    }
    *(undefined1 *)(param_1 + 0x4b) = uVar1;
    return;
  case 0xe:
    bVar3 = local_3c == 0.0;
    fVar4 = 0.0;
    if (-1 < (int)local_3c) {
      bVar3 = local_3c == 2.8026e-45;
      fVar4 = local_3c;
    }
    if (!bVar3 && 1 < (int)local_3c) {
      fVar4 = 2.8026e-45;
    }
    *(float *)(param_1 + 0x4c) = fVar4;
    return;
  case 0xf:
    *(float *)(param_1 + 0x50) = local_3c;
    return;
  case 0x10:
    bVar3 = local_3c == 0.0;
    fVar4 = 0.0;
    if (-1 < (int)local_3c) {
      bVar3 = local_3c == 3.57331e-43;
      fVar4 = local_3c;
    }
    uVar1 = SUB41(fVar4,0);
    if (!bVar3 && 0xfe < (int)local_3c) {
      uVar1 = 0xff;
    }
    *(undefined1 *)(param_1 + 0x54) = uVar1;
    return;
  case 0x11:
    bVar3 = local_3c == 0.0;
    fVar4 = 0.0;
    if (-1 < (int)local_3c) {
      bVar3 = local_3c == 3.57331e-43;
      fVar4 = local_3c;
    }
    uVar1 = SUB41(fVar4,0);
    if (!bVar3 && 0xfe < (int)local_3c) {
      uVar1 = 0xff;
    }
    *(undefined1 *)(param_1 + 0x55) = uVar1;
    return;
  case 0x12:
    bVar3 = local_3c == 0.0;
    fVar4 = 0.0;
    if (-1 < (int)local_3c) {
      bVar3 = local_3c == 3.57331e-43;
      fVar4 = local_3c;
    }
    uVar1 = SUB41(fVar4,0);
    if (!bVar3 && 0xfe < (int)local_3c) {
      uVar1 = 0xff;
    }
    *(undefined1 *)(param_1 + 0x56) = uVar1;
    return;
  case 0x13:
    bVar3 = local_3c == 0.0;
    fVar4 = 0.0;
    if (-1 < (int)local_3c) {
      bVar3 = local_3c == 3.57331e-43;
      fVar4 = local_3c;
    }
    uVar1 = SUB41(fVar4,0);
    if (!bVar3 && 0xfe < (int)local_3c) {
      uVar1 = 0xff;
    }
    *(undefined1 *)(param_1 + 0x57) = uVar1;
    return;
  }
  return;
}
