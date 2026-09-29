// OoT3D decomp @ 002203ac  name=FUN_002203ac  size=1080

void FUN_002203ac(int param_1)

{
  byte bVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  int unaff_r6;
  bool bVar5;
  bool bVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;

  uVar3 = *(uint *)(param_1 + 0x1c4);
  iVar4 = *(int *)(param_1 + 0x124);
  bVar5 = iVar4 != 0;
  *(undefined1 *)(uVar3 + 0xad) = 0;
  fVar8 = DAT_002207e8;
  fVar2 = DAT_002207e4;
  if (bVar5) {
    uVar3 = *(uint *)(iVar4 + 0x13c);
  }
  bVar6 = uVar3 != 0;
  if (bVar5 && bVar6) {
    unaff_r6 = param_1 + 0x100;
    uVar3 = (uint)*(ushort *)(param_1 + 0x1a6);
  }
  if ((bVar5 && bVar6) && uVar3 < 0xff) {
    if ((*(byte *)(iVar4 + 0x305) & 2) != 0) {
      iVar4 = param_1;
    }
    local_5c = *(float *)(iVar4 + 0x28);
    local_58 = *(float *)(iVar4 + 0x2c);
    local_54 = *(float *)(iVar4 + 0x30);
    local_48 = 0.0;
    local_4c = 0.0;
    local_50 = 1.0;
    local_40 = 0.0;
    local_3c = 1.0;
    local_38 = 0.0;
    local_30 = 0.0;
    local_2c = 0.0;
    local_28 = 1.0;
    fVar7 = (float)VectorSignedToFloat((int)*(short *)(iVar4 + 0xbe),(byte)(in_fpscr >> 0x15) & 3);
    local_44 = local_5c;
    local_34 = local_58;
    local_24 = local_54;
    FUN_003735e8(fVar7 * DAT_002207e8,&local_50,1);
    fVar7 = (float)VectorSignedToFloat((int)*(short *)(iVar4 + 0xbc),(byte)(in_fpscr >> 0x15) & 3);
    FUN_00369014(fVar7 * fVar8,&local_50,1);
    fVar7 = (float)VectorSignedToFloat((int)*(short *)(iVar4 + 0xc0),(byte)(in_fpscr >> 0x15) & 3);
    FUN_00371234(fVar7 * fVar8,&local_50,1);
    local_50 = local_50 * DAT_002207ec;
    local_40 = local_40 * DAT_002207ec;
    local_30 = local_30 * DAT_002207ec;
    local_4c = local_4c * DAT_002207ec;
    local_3c = local_3c * DAT_002207ec;
    local_2c = local_2c * DAT_002207ec;
    local_48 = local_48 * DAT_002207ec;
    local_38 = local_38 * DAT_002207ec;
    local_28 = local_28 * DAT_002207ec;
    FUN_00371234(fVar2,&local_50,1);
    FUN_00369014(DAT_002207f0,&local_50,1);
    if (*(short *)(unaff_r6 + 0xa6) == 0) {
      local_58 = DAT_002207f4;
    }
    else {
      local_58 = fVar2;
    }
    local_5c = fVar2;
    local_54 = local_5c;
    FUN_00372070(&local_50,&local_50,&local_5c);
    fVar8 = (float)VectorSignedToFloat((int)*(short *)(unaff_r6 + 0xa4),(byte)(in_fpscr >> 0x15) & 3
                                      );
    fVar9 = (float)VectorSignedToFloat((int)*(short *)(unaff_r6 + 0xa4),(byte)(in_fpscr >> 0x15) & 3
                                      );
    fVar8 = fVar8 * DAT_002207f8;
    fVar9 = fVar9 * DAT_002207f8;
    fVar7 = *(float *)(param_1 + 0x1b8) * DAT_002207fc;
    local_50 = local_50 * fVar8;
    local_40 = local_40 * fVar8;
    local_30 = local_30 * fVar8;
    local_4c = local_4c * fVar7;
    local_3c = local_3c * fVar7;
    local_2c = local_2c * fVar7;
    local_48 = local_48 * fVar9;
    local_38 = local_38 * fVar9;
    local_28 = local_28 * fVar9;
    local_5c = fVar2;
    local_58 = (float)DAT_00220800;
    local_54 = fVar2;
    FUN_00372070(&local_50,&local_50,&local_5c);
    fVar8 = DAT_00220804;
    iVar4 = FUN_003695f8();
    if (iVar4 != 0) {
      fVar8 = fVar2;
    }
    *(float *)(*(int *)(param_1 + 0x1c8) + 0xc) = fVar8;
    iVar4 = *(int *)(*(int *)(param_1 + 0x1c4) + 0x10);
    FUN_00333abc(iVar4,0,&local_60);
    fVar8 = DAT_00220808;
    local_54 = (float)VectorUnsignedToFloat
                                ((uint)*(byte *)(param_1 + 0x1a8),(byte)(in_fpscr >> 0x15) & 3);
    local_54 = local_54 * DAT_00220808;
    FUN_00333a38(iVar4,0,&local_60);
    **(undefined1 **)(iVar4 + 4) = 1;
    *(undefined1 *)(*(int *)(param_1 + 0x1c4) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x1c4),&local_50);
    iVar4 = *(int *)(param_1 + 0x1c4);
    *(float *)(iVar4 + 0x24) = local_44;
    *(undefined4 *)(iVar4 + 0x28) = local_34;
    *(undefined4 *)(iVar4 + 0x2c) = local_24;
    *(undefined1 *)(*(int *)(param_1 + 0x1c4) + 0xad) = 1;
    FUN_00372170(*(undefined4 *)(param_1 + 0x1c4),0);
    fVar7 = *(float *)(param_1 + 0x1bc);
    uVar3 = in_fpscr & 0xfffffff | (uint)(fVar7 < fVar2) << 0x1f | (uint)(fVar7 == fVar2) << 0x1e;
    bVar1 = (byte)(uVar3 >> 0x18);
    if (!(bool)(bVar1 >> 6 & 1) && (bool)(bVar1 >> 7) == (NAN(fVar7) || NAN(fVar2))) {
      local_60 = fVar2;
      local_5c = (float)VectorUnsignedToFloat
                                  ((int)(fVar7 * DAT_0022080c) & 0xff,(byte)(uVar3 >> 0x15) & 3);
      local_58 = (float)VectorUnsignedToFloat
                                  ((int)(fVar7 * DAT_00220810) & 0xff,(byte)(uVar3 >> 0x15) & 3);
      local_5c = local_5c * fVar8;
      local_54 = (float)VectorUnsignedToFloat
                                  ((int)(fVar7 * DAT_00220814) & 0xff,(byte)(uVar3 >> 0x15) & 3);
      local_58 = local_58 * fVar8;
      local_54 = local_54 * fVar8;
      if (((*DAT_00220818 & 1) == 0) && (iVar4 = FUN_003679b4(DAT_00220818), iVar4 != 0)) {
        FUN_0036788c(DAT_0022081c);
      }
      FUN_003339e8(DAT_00220828,2,&local_60,0);
    }
  }
  return;
}
