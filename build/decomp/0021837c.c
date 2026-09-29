// OoT3D decomp @ 0021837c  name=FUN_0021837c  size=1256

void FUN_0021837c(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  short sVar2;
  short sVar3;
  byte bVar4;
  float fVar5;
  int iVar6;
  float fVar7;
  uint in_fpscr;
  uint uVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_a4 [48];
  short local_74;
  short local_72;
  short local_70;
  undefined4 local_6c;
  float local_68;
  float local_64;
  undefined4 local_60;
  float local_5c;
  float local_58;
  undefined4 local_54;
  float local_50;
  float local_4c;
  undefined4 local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;

  fVar10 = DAT_002186e8;
  fVar5 = DAT_002186e4;
  fVar9 = DAT_002186d8;
  local_3c = DAT_002186d8;
  local_38 = DAT_002186d8;
  local_34 = DAT_002186d8;
  local_48 = DAT_002186dc;
  local_44 = DAT_002186d8;
  local_40 = DAT_002186d8;
  local_54 = DAT_002186e0;
  local_50 = DAT_002186d8;
  local_4c = DAT_002186d8;
  local_60 = DAT_002186dc;
  local_5c = DAT_002186d8;
  local_58 = DAT_002186d8;
  local_6c = DAT_002186e0;
  local_68 = DAT_002186d8;
  local_64 = DAT_002186d8;
  if (param_2 == 0) {
    local_3c = (float)VectorUnsignedToFloat
                                (*(ushort *)(param_4 + 4000) & 7,(byte)(in_fpscr >> 0x15) & 3);
    local_3c = local_3c * DAT_002186e4;
    FUN_003735ac(local_3c,DAT_002186d8,DAT_002186d8,param_4 + 0x1000,param_3,&local_3c);
    return;
  }
  if (param_2 == 1) {
    FUN_003735ac(DAT_002186d8,DAT_002186d8,DAT_002186d8,param_4 + 0xfb8,param_3,DAT_002186ec);
    local_3c = (float)VectorUnsignedToFloat
                                (*(ushort *)(param_4 + 4000) & 7,(byte)(in_fpscr >> 0x15) & 3);
    local_3c = local_3c * fVar5;
    FUN_003735ac(param_4 + 0x100c,param_3,&local_3c);
    return;
  }
  if (param_2 == 2) {
    FUN_003735ac(DAT_002186d8,DAT_002186d8,DAT_002186d8,param_4 + 0xfc4,param_3,DAT_002186ec);
    local_3c = (float)VectorUnsignedToFloat
                                (*(ushort *)(param_4 + 4000) & 7,(byte)(in_fpscr >> 0x15) & 3);
    local_3c = local_3c * fVar10;
    FUN_003735ac(param_4 + 0x1018,param_3,&local_3c);
    return;
  }
  if (param_2 != 3) {
    return;
  }
  FUN_003735ac(DAT_002186d8,DAT_002186d8,DAT_002186d8,param_4 + 0xfd0,param_3,DAT_002186ec);
  local_3c = (float)VectorUnsignedToFloat
                              (*(ushort *)(param_4 + 4000) & 7,(byte)(in_fpscr >> 0x15) & 3);
  local_3c = local_3c * fVar10;
  FUN_003735ac(param_4 + 0x1024,param_3,&local_3c);
  local_3c = DAT_002186f0;
  FUN_003735ac(param_4 + 0x106c,param_3,&local_3c);
  FUN_0036654c(param_4 + 0x106c,param_4 + 0xfdc,param_4 + 0xffa,0);
  sVar2 = *(short *)(param_4 + 0xffa);
  sVar3 = *(short *)(param_4 + 0xffc);
  FUN_00372224(auStack_a4,param_3);
  FUN_003713fc(*(undefined4 *)(param_4 + 0x106c),*(undefined4 *)(param_4 + 0x1070),
               *(undefined4 *)(param_4 + 0x1074),auStack_a4,0);
  fVar5 = DAT_002186f4;
  FUN_00371234(fVar9,auStack_a4,1);
  if (sVar3 != 0) {
    fVar10 = (float)VectorSignedToFloat((int)sVar3,(byte)(in_fpscr >> 0x15) & 3);
    FUN_003735e8(fVar10 * fVar5,auStack_a4,1);
  }
  if (sVar2 != 0) {
    fVar10 = (float)VectorSignedToFloat((int)sVar2,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00369014(fVar10 * fVar5,auStack_a4,1);
  }
  iVar6 = DAT_002186f8;
  local_3c = fVar9;
  if (*(byte *)(DAT_002186f8 + 8) < 0xf) {
    local_64 = (float)VectorUnsignedToFloat
                                (*(ushort *)(param_4 + 4000) - 0x20 & 0xf,
                                 (byte)(in_fpscr >> 0x15) & 3);
    local_64 = local_64 * DAT_00218700;
  }
  else {
    local_64 = (float)VectorUnsignedToFloat
                                (*(ushort *)(param_4 + 4000) - 0x10 & 7,(byte)(in_fpscr >> 0x15) & 3
                                );
    local_64 = local_64 * DAT_002186fc;
  }
  local_64 = local_64 + DAT_00218704;
  local_34 = local_64 + DAT_00218708;
  local_58 = local_64;
  FUN_003735ac(param_4 + 0x1030,auStack_a4,&local_3c);
  fVar7 = DAT_0021889c;
  fVar10 = DAT_0021870c;
  if (*(byte *)(iVar6 + 8) < 0xf) {
    local_34 = local_34 - DAT_0021889c;
    uVar1 = in_fpscr & 0xfffffff | (uint)(local_34 < fVar9) << 0x1f |
            (uint)(local_34 == fVar9) << 0x1e;
    uVar8 = uVar1 | (uint)(NAN(local_34) || NAN(fVar9)) << 0x1c;
    bVar4 = (byte)(uVar1 >> 0x18);
    if ((bool)(bVar4 >> 6 & 1) || bVar4 >> 7 != ((byte)(uVar8 >> 0x1c) & 1)) {
      local_34 = fVar9;
    }
    FUN_003735ac(param_4 + 0x1048,auStack_a4,&local_3c);
    local_34 = local_34 - fVar7;
    uVar1 = uVar8 & 0xfffffff | (uint)(local_34 < fVar9) << 0x1f | (uint)(local_34 == fVar9) << 0x1e
    ;
    uVar8 = uVar1 | (uint)(NAN(local_34) || NAN(fVar9)) << 0x1c;
    bVar4 = (byte)(uVar1 >> 0x18);
    if (!(bool)(bVar4 >> 6 & 1) && bVar4 >> 7 == ((byte)(uVar8 >> 0x1c) & 1)) goto LAB_00218754;
  }
  else {
    local_34 = local_34 - DAT_0021870c;
    uVar1 = in_fpscr & 0xfffffff | (uint)(local_34 < fVar9) << 0x1f |
            (uint)(local_34 == fVar9) << 0x1e;
    uVar8 = uVar1 | (uint)(NAN(local_34) || NAN(fVar9)) << 0x1c;
    bVar4 = (byte)(uVar1 >> 0x18);
    if ((bool)(bVar4 >> 6 & 1) || bVar4 >> 7 != ((byte)(uVar8 >> 0x1c) & 1)) {
      local_34 = fVar9;
    }
    FUN_003735ac(param_4 + 0x1048,auStack_a4,&local_3c);
    local_34 = local_34 - fVar10;
    uVar1 = uVar8 & 0xfffffff | (uint)(local_34 < fVar9) << 0x1f | (uint)(local_34 == fVar9) << 0x1e
    ;
    uVar8 = uVar1 | (uint)(NAN(local_34) || NAN(fVar9)) << 0x1c;
    bVar4 = (byte)(uVar1 >> 0x18);
    if (!(bool)(bVar4 >> 6 & 1) && bVar4 >> 7 == ((byte)(uVar8 >> 0x1c) & 1)) goto LAB_00218754;
  }
  local_34 = fVar9;
LAB_00218754:
  FUN_003735ac(param_4 + 0x103c,auStack_a4,&local_3c);
  FUN_003735ac(param_4 + 0x11a4,auStack_a4,&local_48);
  FUN_003735ac(param_4 + 0x1198,auStack_a4,&local_54);
  FUN_003735ac(param_4 + 0x11bc,auStack_a4,&local_60);
  FUN_003735ac(param_4 + 0x11b0,auStack_a4,&local_6c);
  FUN_0035479c(param_4 + 0x1158,param_4 + 0x1198,param_4 + 0x11a4,param_4 + 0x11b0,param_4 + 0x11bc)
  ;
  FUN_00334e70(param_3,&local_74,0);
  fVar9 = (float)VectorSignedToFloat(-(int)local_74,(byte)(uVar8 >> 0x15) & 3);
  FUN_00369014(fVar9 * fVar5,param_3,1);
  fVar9 = (float)VectorSignedToFloat(-(int)local_72,(byte)(uVar8 >> 0x15) & 3);
  FUN_003735e8(fVar9 * fVar5,param_3,1);
  fVar9 = (float)VectorSignedToFloat(-(int)local_70,(byte)(uVar8 >> 0x15) & 3);
  FUN_00371234(fVar9 * fVar5,param_3,1);
  fVar9 = (float)VectorSignedToFloat((int)*(short *)(param_4 + 0xff6),(byte)(uVar8 >> 0x15) & 3);
  FUN_003735e8(fVar9 * fVar5,param_3,1);
  fVar9 = (float)VectorSignedToFloat((int)*(short *)(param_4 + 0xff4),(byte)(uVar8 >> 0x15) & 3);
  FUN_00371234(fVar9 * fVar5,param_3,1);
  return;
}
