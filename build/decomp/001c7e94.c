// OoT3D decomp @ 001c7e94  name=FUN_001c7e94  size=904

void FUN_001c7e94(int param_1,int param_2)

{
  byte bVar1;
  float fVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int iVar5;
  bool bVar6;
  uint in_fpscr;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
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
  undefined4 local_38;

  iVar5 = *(int *)(DAT_001c821c + param_2);
  fVar13 = *(float *)(param_1 + 0x338);
  FUN_003731e0(param_1 + 0x2fc);
  uVar4 = DAT_001c8220;
  FUN_00375a18(param_1 + 0xbe,(int)*(short *)(param_1 + 0x92),3,DAT_001c8220,0);
  fVar12 = *(float *)(iVar5 + 0x28) - *(float *)(param_1 + 0x20c);
  fVar11 = *(float *)(iVar5 + 0x30) - *(float *)(param_1 + 0x214);
  fVar11 = (float)FUN_003696ec((*(float *)(iVar5 + 0x2c) + DAT_001c8224) -
                               *(float *)(param_1 + 0x210),SQRT(fVar12 * fVar12 + fVar11 * fVar11));
  FUN_00375a18(param_1 + 0xbc,(int)(short)-(short)(int)(fVar11 * DAT_001c8228),3,uVar4,0);
  uVar4 = DAT_001c8230;
  fVar11 = DAT_001c822c;
  fVar12 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x1fe),(byte)(in_fpscr >> 0x15) & 3)
  ;
  uVar7 = in_fpscr & 0xfffffff | (uint)(fVar12 == fVar13) << 0x1e | (uint)(fVar13 <= fVar12) << 0x1d
  ;
  bVar1 = (byte)(uVar7 >> 0x18);
  bVar6 = (bool)(bVar1 >> 6);
  if (!(bool)(bVar1 >> 5 & 1) || bVar6) {
    bVar6 = *(short *)(param_1 + 0x1ea) == 0;
  }
  if (bVar6) {
    fVar8 = (float)FUN_00371e50(DAT_001c8230);
    fVar12 = DAT_001c8234;
    if ((short)(int)fVar8 + 10 < 1) {
      fVar8 = (float)FUN_00371e50(uVar4);
      fVar8 = (float)VectorSignedToFloat((short)(int)fVar8 + 10,(byte)(uVar7 >> 0x15) & 3);
      uVar3 = (undefined2)(int)(fVar8 * fVar12 * fVar11 - fVar11);
    }
    else {
      fVar8 = (float)FUN_00371e50(uVar4);
      fVar8 = (float)VectorSignedToFloat((short)(int)fVar8 + 10,(byte)(uVar7 >> 0x15) & 3);
      uVar3 = (undefined2)(int)(fVar11 + fVar8 * fVar12 * fVar11);
    }
    *(undefined2 *)(param_1 + 0x1ea) = uVar3;
  }
  fVar10 = DAT_001c8250;
  fVar2 = DAT_001c824c;
  fVar8 = DAT_001c8248;
  fVar12 = DAT_001c8244;
  if (*(short *)(param_1 + 0x1ea) == 1) {
    *(undefined1 *)(param_1 + 0x207) = 0;
    uVar4 = DAT_001c8238;
  }
  else {
    if (DAT_001c823c <= *(int *)(param_1 + 0x98)) {
      bVar6 = fVar13 == 8.0;
      if (0x40ffffff < (int)fVar13) {
        bVar6 = *(char *)(param_1 + 0x207) == '\0';
      }
      if (!bVar6) {
        return;
      }
      fVar13 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xbe),(byte)(uVar7 >> 0x15) & 3)
      ;
      fVar13 = fVar13 * DAT_001c8244 * DAT_001c8248;
      uVar7 = uVar7 & 0xfffffff | (uint)(fVar13 == DAT_001c824c) << 0x1e;
      local_7c = DAT_001c8250;
      local_74 = DAT_001c824c;
      if (!SUB41(uVar7 >> 0x1e,0)) {
        fVar9 = (float)FUN_003727f0(fVar13);
        local_7c = (float)FUN_00372674(fVar13);
        local_74 = fVar9;
      }
      local_78 = fVar2;
      local_70 = fVar2;
      local_5c = -local_74;
      local_68 = fVar10;
      local_6c = fVar2;
      local_64 = fVar2;
      local_60 = fVar2;
      local_58 = fVar2;
      local_50 = fVar2;
      fVar13 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xbc),(byte)(uVar7 >> 0x15) & 3)
      ;
      fVar8 = fVar13 * fVar12 * fVar8;
      local_54 = local_7c;
      if (fVar8 != fVar2) {
        fVar10 = (float)FUN_003727f0(fVar8);
        fVar9 = (float)FUN_00372674(fVar8);
        fVar12 = local_74 * fVar10;
        local_74 = local_74 * fVar9 - local_78 * fVar10;
        fVar13 = local_64 * fVar10;
        local_64 = local_64 * fVar9 - local_68 * fVar10;
        fVar8 = local_54 * fVar10;
        local_54 = local_54 * fVar9 - local_58 * fVar10;
        local_78 = local_78 * fVar9 + fVar12;
        local_68 = local_68 * fVar9 + fVar13;
        local_58 = local_58 * fVar9 + fVar8;
      }
      local_40 = fVar2;
      local_3c = fVar2;
      local_38 = DAT_001c8254;
      FUN_003735ac(&local_4c,&local_7c,&local_40);
      iVar5 = z_actor_003738d0(*(float *)(param_1 + 0x20c) + local_4c,
                               *(float *)(param_1 + 0x210) + local_48,
                               *(float *)(param_1 + 0x214) + local_44,param_2 + 0x208c,param_2,
                               DAT_001c8258,(int)*(short *)(param_1 + 0xbc),
                               (int)*(short *)(param_1 + 0xbe),(int)*(short *)(param_1 + 0xc0),4,1);
      uVar4 = DAT_001c825c;
      if (iVar5 != 0) {
        *(float *)(iVar5 + 100) = local_48 * fVar11;
      }
      FUN_00375bcc(param_1,uVar4);
      *(undefined1 *)(param_1 + 0x207) = 1;
      return;
    }
    *(undefined2 *)(param_1 + 0x204) = 2;
    uVar4 = DAT_001c8240;
  }
  *(undefined4 *)(param_1 + 0x1a4) = uVar4;
  return;
}
