// OoT3D decomp @ 0045999c  name=FUN_0045999c  size=1372

void FUN_0045999c(int param_1,int param_2)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  uint in_fpscr;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  float local_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  float local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  float local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  float local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  float local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;

  fVar10 = DAT_00459d7c;
  fVar13 = DAT_00459d78;
  fVar11 = DAT_00459d70;
  uVar3 = 0;
  uVar4 = 0;
  local_34 = DAT_00459d70;
  local_30 = DAT_00459d70;
  local_2c = DAT_00459d70;
  local_28 = DAT_00459d70;
  iVar6 = *DAT_00459d74;
  uVar5 = (uint)*(byte *)(param_1 + 0x3267);
  bVar1 = *(byte *)(param_1 + 0x3268);
  uVar8 = (uint)bVar1;
  if (param_2 == 1) {
    uVar3 = 0xff;
    if (uVar5 < 0xff) {
      uVar4 = 0x80;
    }
    else {
      uVar4 = 0xff;
    }
  }
  else if (param_2 == 2) {
    uVar4 = 0x80;
    if (uVar8 < 0x81) {
      uVar3 = *(uint *)(param_1 + 0xf8) & 0x7f;
      if (0x40 < uVar3) {
        uVar3 = 0x80 - uVar3;
      }
      fVar12 = (float)VectorSignedToFloat((int)*(short *)(iVar6 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      uVar3 = uVar3 + (int)(DAT_00459d7c + fVar12 * DAT_00459d80 * DAT_00459d78);
    }
    else {
      uVar3 = 0xff;
    }
    if (((int)uVar5 <= (int)uVar3) && (uVar3 != 0xff)) {
      *(undefined1 *)(param_1 + 0x3266) = 3;
    }
  }
  else if (param_2 == 3) {
    uVar2 = *(ushort *)(param_1 + 0x104);
    bVar9 = uVar2 != 0x5e;
    if (!bVar9) {
      uVar2 = (ushort)*(byte *)(DAT_00459d84 + param_1);
    }
    if (bVar9 || uVar2 != 0) {
      uVar4 = 0x80;
      uVar3 = *(uint *)(param_1 + 0xf8) & 0x7f;
      if (0x40 < uVar3) {
        uVar3 = 0x80 - uVar3;
      }
      fVar12 = (float)VectorSignedToFloat((int)*(short *)(iVar6 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      uVar3 = uVar3 + (int)(DAT_00459d7c + fVar12 * DAT_00459d80 * DAT_00459d78);
    }
    else if (uVar8 < 0x81) {
      uVar3 = (uint)(bVar1 >> 1);
    }
    else {
      uVar3 = 0xff;
    }
  }
  else if (param_2 == 4) {
    if (uVar8 < 0x81) {
      uVar3 = (uint)(bVar1 >> 1);
    }
    else {
      uVar3 = 0xff;
    }
    if (uVar5 == 0) {
      *(undefined1 *)(param_1 + 0x3266) = 0;
    }
  }
  iVar6 = (int)*(short *)(iVar6 + 0x110);
  iVar7 = uVar5 - uVar3;
  if (iVar7 < 0) {
    iVar7 = uVar3 - uVar5;
  }
  fVar12 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
  if ((int)(fVar10 + fVar12 * DAT_00459d88 * fVar13) <= iVar7) {
    fVar12 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
    iVar7 = (int)(fVar10 + fVar12 * DAT_00459d88 * fVar13);
    if ((int)uVar3 < (int)uVar5) {
      uVar3 = uVar5 - iVar7;
    }
    else {
      uVar3 = iVar7 + uVar5;
    }
  }
  iVar7 = uVar8 - uVar4;
  if (iVar7 < 0) {
    iVar7 = uVar4 - uVar8;
  }
  fVar12 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
  if ((int)(fVar10 + fVar12 * DAT_00459d88 * fVar13) <= iVar7) {
    fVar12 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
    iVar6 = (int)(fVar10 + fVar12 * DAT_00459d88 * fVar13);
    if (uVar4 < uVar8) {
      uVar4 = uVar8 - iVar6;
    }
    else {
      uVar4 = iVar6 + uVar8;
    }
  }
  *(char *)(param_1 + 0x3267) = (char)uVar3;
  iVar6 = DAT_00459d94;
  fVar13 = DAT_00459d8c;
  *(char *)(param_1 + 0x3268) = (char)uVar4;
  fVar10 = (float)VectorSignedToFloat(uVar3 + uVar4,(byte)(in_fpscr >> 0x15) & 3);
  fVar13 = (fVar13 - fVar10) * DAT_00459d90;
  if (iVar6 < (int)fVar13) {
    fVar13 = DAT_00459d98;
  }
  FUN_002e4660(param_1,&local_34);
  iVar6 = VectorFloatToUnsigned(local_34 * DAT_00459d9c,3);
  uVar4 = VectorFloatToUnsigned(local_30 * DAT_00459d9c,3);
  uVar5 = VectorFloatToUnsigned(local_2c * DAT_00459d9c,3);
  uVar3 = VectorFloatToUnsigned(local_28 * DAT_00459d9c,3);
  if (*(byte *)(DAT_00459da0 + param_1) - 0xc < 4) {
    *(uint *)(DAT_00459da4 + 0x5b8) =
         iVar6 << 0x18 | (uVar4 & 0xff) << 0x10 | (uVar5 & 0xff) << 8 | uVar3 & 0xff;
  }
  iVar6 = FUN_003695f8();
  if (iVar6 == 0) {
    fVar10 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x3408),
                                        (byte)(in_fpscr >> 0x15) & 3);
    uVar3 = (uint)(fVar10 + fVar13);
    iVar6 = (int)((longlong)(int)uVar3 * (longlong)DAT_00459da8 + ((ulonglong)uVar3 << 0x20) >> 0x20
                 );
    *(uint *)(param_1 + 0x3408) = uVar3 + ((iVar6 >> 8) - (iVar6 >> 0x1f)) * -0x1e0;
  }
  local_28 = DAT_00459dbc;
  fVar10 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x3408),(byte)(in_fpscr >> 0x15) & 3
                                     );
  fVar10 = fVar10 * DAT_00459db4;
  local_78 = DAT_00459db0 * fVar10;
  local_58 = DAT_00459dac * fVar10 * DAT_00459db8;
  local_88 = (DAT_00459dac - DAT_00459dac * fVar10) * DAT_00459db8;
  local_60 = 0;
  local_64 = 0x3f800000;
  local_5c = 0;
  local_54 = 0;
  uStack_50 = 0x3f800000;
  local_40 = 0;
  uStack_3c = 0x3f800000;
  local_4c = 0;
  local_44 = 0;
  local_38 = fVar11;
  local_48 = fVar11;
  local_90 = 0;
  local_94 = 0x3f800000;
  local_8c = 0;
  local_84 = 0;
  uStack_80 = 0x3f800000;
  local_70 = 0;
  uStack_6c = 0x3f800000;
  local_7c = 0;
  local_74 = 0;
  local_68 = fVar11;
  iVar6 = *(int *)(param_1 + 0x3404);
  *(undefined4 *)(iVar6 + 0x110) = 0x3f800000;
  *(undefined4 *)(iVar6 + 0x114) = 0;
  *(undefined4 *)(iVar6 + 0x118) = 0;
  *(float *)(iVar6 + 0x11c) = local_58;
  *(undefined4 *)(iVar6 + 0x120) = 0;
  *(undefined4 *)(iVar6 + 0x124) = 0x3f800000;
  *(undefined4 *)(iVar6 + 0x128) = 0;
  *(float *)(iVar6 + 300) = fVar11;
  *(undefined4 *)(iVar6 + 0x130) = 0;
  *(undefined4 *)(iVar6 + 0x134) = 0;
  *(undefined4 *)(iVar6 + 0x138) = 0x3f800000;
  *(float *)(iVar6 + 0x13c) = fVar11;
  iVar6 = *(int *)(param_1 + 0x3404);
  *(undefined4 *)(iVar6 + 0x140) = 0x3f800000;
  *(undefined4 *)(iVar6 + 0x144) = 0;
  *(undefined4 *)(iVar6 + 0x148) = 0;
  *(float *)(iVar6 + 0x14c) = local_88;
  *(undefined4 *)(iVar6 + 0x150) = 0;
  *(undefined4 *)(iVar6 + 0x154) = 0x3f800000;
  *(undefined4 *)(iVar6 + 0x158) = 0;
  *(float *)(iVar6 + 0x15c) = local_78;
  *(undefined4 *)(iVar6 + 0x160) = 0;
  *(undefined4 *)(iVar6 + 0x164) = 0;
  *(undefined4 *)(iVar6 + 0x168) = 0x3f800000;
  *(float *)(iVar6 + 0x16c) = fVar11;
  local_a4 = fVar11;
  local_a0 = fVar11;
  local_9c = fVar11;
  local_98 = fVar11;
  fVar11 = (float)VectorUnsignedToFloat
                            ((uint)*(byte *)(param_1 + 0x3268),(byte)(in_fpscr >> 0x15) & 3);
  if (*(byte *)(param_1 + 0x3268) < 0x81) {
    local_28 = fVar11 * DAT_00459f50;
    FUN_003429c8(*(undefined4 *)(param_1 + 0x3404),0,&local_34);
    FUN_003429c8(*(undefined4 *)(param_1 + 0x3404),1,&local_a4);
  }
  else {
    local_98 = (fVar11 - DAT_00459f48) * DAT_00459f4c;
    FUN_003429c8(*(undefined4 *)(param_1 + 0x3404),0,&local_34);
    FUN_003429c8(*(undefined4 *)(param_1 + 0x3404),1,&local_a4);
  }
  if (((*DAT_00459f54 & 1) == 0) && (iVar6 = FUN_003679b4(DAT_00459f54), iVar6 != 0)) {
    FUN_0036788c(DAT_00459f58);
  }
  FUN_00328350(DAT_00459f64,2,*(undefined4 *)(param_1 + 0x3404),0);
  *(short *)(DAT_00459f68 + 0x18) = *(short *)(DAT_00459f68 + 0x18) + (short)(int)fVar13;
  return;
}
