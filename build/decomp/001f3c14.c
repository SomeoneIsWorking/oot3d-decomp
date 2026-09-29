// OoT3D decomp @ 001f3c14  name=FUN_001f3c14  size=1552

void FUN_001f3c14(int param_1,int param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  undefined1 auStack_7c [48];
  undefined1 local_4c [12];
  undefined1 local_40 [12];

  fVar11 = DAT_001f4008;
  iVar7 = DAT_001f4004;
  if (((*(uint *)(DAT_001f4004 + 8) & 1) == 0) &&
     (iVar4 = FUN_003679b4(DAT_001f4004 + 8), puVar2 = DAT_001f4010, iVar4 != 0)) {
    *DAT_001f4010 = DAT_001f400c;
    puVar2[1] = fVar11;
    puVar2[2] = fVar11;
  }
  if (((*(uint *)(iVar7 + 4) & 1) == 0) &&
     (iVar4 = FUN_003679b4(DAT_001f4014), puVar2 = DAT_001f401c, iVar4 != 0)) {
    *DAT_001f401c = DAT_001f4018;
    puVar2[1] = fVar11;
    puVar2[2] = fVar11;
  }
  fVar13 = DAT_001f4278;
  iVar4 = *(int *)(DAT_001f4020 + param_2);
  if (*(char *)(param_1 + 2) != '\x06') {
    if (*(int *)(param_1 + 0x268) != DAT_001f4024) {
      fVar9 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x36),
                                         (byte)(in_fpscr >> 0x15) & 3);
      FUN_003735e8(fVar9 * DAT_001f4278,param_1 + 0x148,1);
      uVar6 = DAT_001f427c;
      fVar9 = (float)FUN_003727f0(DAT_001f427c);
      fVar10 = (float)FUN_00372674(uVar6);
      fVar12 = *(float *)(param_1 + 0x148);
      *(float *)(param_1 + 0x148) = fVar12 * fVar10 + *(float *)(param_1 + 0x14c) * fVar9;
      *(float *)(param_1 + 0x14c) = *(float *)(param_1 + 0x14c) * fVar10 - fVar12 * fVar9;
      fVar12 = *(float *)(param_1 + 0x158);
      *(float *)(param_1 + 0x158) = fVar12 * fVar10 + *(float *)(param_1 + 0x15c) * fVar9;
      *(float *)(param_1 + 0x15c) = *(float *)(param_1 + 0x15c) * fVar10 - fVar12 * fVar9;
      fVar12 = *(float *)(param_1 + 0x168);
      *(float *)(param_1 + 0x168) = fVar12 * fVar10 + *(float *)(param_1 + 0x16c) * fVar9;
      *(float *)(param_1 + 0x16c) = *(float *)(param_1 + 0x16c) * fVar10 - fVar12 * fVar9;
      fVar9 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x34),
                                         (byte)(in_fpscr >> 0x15) & 3);
      fVar9 = fVar9 * fVar13;
      uVar8 = in_fpscr & 0xfffffff | (uint)(fVar9 == fVar11) << 0x1e;
      if (!SUB41(uVar8 >> 0x1e,0)) {
        fVar11 = (float)FUN_003727f0(fVar9);
        fVar9 = (float)FUN_00372674(fVar9);
        fVar10 = *(float *)(param_1 + 0x14c);
        *(float *)(param_1 + 0x14c) = fVar10 * fVar9 + *(float *)(param_1 + 0x150) * fVar11;
        *(float *)(param_1 + 0x150) = *(float *)(param_1 + 0x150) * fVar9 - fVar10 * fVar11;
        fVar10 = *(float *)(param_1 + 0x15c);
        *(float *)(param_1 + 0x15c) = fVar10 * fVar9 + *(float *)(param_1 + 0x160) * fVar11;
        *(float *)(param_1 + 0x160) = *(float *)(param_1 + 0x160) * fVar9 - fVar10 * fVar11;
        fVar10 = *(float *)(param_1 + 0x16c);
        *(float *)(param_1 + 0x16c) = fVar10 * fVar9 + *(float *)(param_1 + 0x170) * fVar11;
        *(float *)(param_1 + 0x170) = *(float *)(param_1 + 0x170) * fVar9 - fVar10 * fVar11;
      }
      FUN_003735ac(local_40,param_1 + 0x148,DAT_001f4010);
      FUN_003735ac(local_4c,param_1 + 0x148,DAT_001f401c);
      iVar7 = FUN_0033a480(param_2,param_1 + 0x1a8,param_1 + 0x234,local_40,local_4c);
      if (iVar7 != 0) {
        iVar7 = FUN_00362384(*(undefined4 *)(param_1 + 0x230));
        *(undefined1 *)(iVar7 + 0x282) = 0xc;
        FUN_003620f0(iVar7,local_40,local_4c);
      }
      fVar11 = (float)VectorUnsignedToFloat
                                ((int)(short)(ushort)*(byte *)(param_1 + 0x26d) *
                                 (int)(short)DAT_001f4280,(byte)(uVar8 >> 0x15) & 3);
      FUN_003735e8(fVar11 * fVar13,param_1 + 0x148,1);
      FUN_003721e0(*(undefined4 *)(param_1 + 0x1a4),param_1 + 0x148);
      *(undefined1 *)(*(int *)(param_1 + 0x1a4) + 0xac) = 1;
      FUN_00372170(*(undefined4 *)(param_1 + 0x1a4),0);
      return;
    }
    if (((*(uint *)(iVar7 + 0x10) & 1) == 0) &&
       (iVar5 = FUN_003679b4(DAT_001f4028), puVar2 = DAT_001f4038, uVar3 = DAT_001f4034,
       uVar6 = DAT_001f4030, iVar5 != 0)) {
      *DAT_001f4038 = DAT_001f402c;
      puVar2[1] = uVar6;
      puVar2[2] = uVar3;
    }
    if (((*(uint *)(iVar7 + 0xc) & 1) == 0) &&
       (iVar5 = FUN_003679b4(DAT_001f403c), puVar2 = DAT_001f404c, uVar3 = DAT_001f4048,
       uVar6 = DAT_001f4044, iVar5 != 0)) {
      *DAT_001f404c = DAT_001f4040;
      puVar2[1] = uVar6;
      puVar2[2] = uVar3;
    }
    cVar1 = *(char *)(param_1 + 0x26e);
    if (cVar1 == '\0') {
      *(undefined1 *)(param_1 + 0x26e) = 1;
      return;
    }
    if (cVar1 == '\x01') {
      uVar6 = FUN_003478bc(*(undefined4 *)(iVar4 + 0x27c),0x10);
      FUN_00372224(auStack_7c,uVar6);
      FUN_003735ac(&local_a0,auStack_7c,DAT_001f404c);
      FUN_003735ac(&local_ac,auStack_7c,DAT_001f4038);
      FUN_003735ac(&local_88,param_1 + 0x148,DAT_001f4010);
      FUN_003735ac(&local_94,param_1 + 0x148,DAT_001f401c);
      local_88 = local_88 - local_a0;
      local_84 = local_84 - local_9c;
      local_80 = local_80 - local_98;
      fVar11 = DAT_001f4050 / SQRT(local_88 * local_88 + local_84 * local_84 + local_80 * local_80);
      fVar13 = *(float *)(iVar7 + 0x18);
      local_88 = local_a0 + local_88 * fVar11 * fVar13;
      local_84 = local_9c + local_84 * fVar11 * fVar13;
      local_80 = local_98 + local_80 * fVar11 * fVar13;
      local_94 = local_94 - local_ac;
      local_90 = local_90 - local_a8;
      local_8c = local_8c - local_a4;
      fVar11 = DAT_001f4050 / SQRT(local_94 * local_94 + local_90 * local_90 + local_8c * local_8c);
      local_94 = local_ac + local_94 * fVar11 * fVar13;
      local_90 = local_a8 + local_90 * fVar11 * fVar13;
      local_8c = local_a4 + local_8c * fVar11 * fVar13;
      iVar7 = FUN_00362384(*(undefined4 *)(param_1 + 0x230));
      fVar11 = DAT_001f4054;
      uVar8 = 0;
      *(undefined1 *)(iVar7 + 0x282) = 0xc;
      do {
        iVar5 = uVar8 + 1;
        fVar13 = (float)VectorSignedToFloat(uVar8,(byte)(in_fpscr >> 0x15) & 3);
        iVar4 = iVar7 + uVar8 * 0x24;
        fVar13 = fVar13 * fVar11;
        fVar9 = (float)VectorSignedToFloat(uVar8,(byte)(in_fpscr >> 0x15) & 3);
        fVar9 = fVar9 * fVar11;
        *(undefined1 *)(iVar7 + uVar8 * 0x24) = 1;
        uVar8 = uVar8 + 1;
        *(float *)(iVar4 + 0x14) = local_94 + fVar9 * (local_ac - local_94);
        *(float *)(iVar4 + 0x18) = local_90 + fVar9 * (local_a8 - local_90);
        *(float *)(iVar4 + 0x1c) = local_8c + fVar9 * (local_a4 - local_8c);
        *(float *)(iVar4 + 8) = local_88 + fVar13 * (local_a0 - local_88);
        *(float *)(iVar4 + 0xc) = local_84 + fVar13 * (local_9c - local_84);
        *(float *)(iVar4 + 0x10) = local_80 + fVar13 * (local_98 - local_80);
        *(int *)(iVar4 + 4) = iVar5;
      } while (uVar8 < 5);
      *(undefined1 *)(iVar7 + 0x25e) = 5;
      *(char *)(param_1 + 0x26e) = *(char *)(param_1 + 0x26e) + '\x01';
      return;
    }
    if ((cVar1 == '\x02') &&
       (fVar11 = (float)VectorUnsignedToFloat
                                  ((uint)*(byte *)(param_1 + 0x26f),(byte)(in_fpscr >> 0x15) & 3),
       *(float *)(iVar7 + 0x14) <= fVar11)) {
      *(undefined1 *)(param_1 + 0x26e) = 3;
    }
    uVar6 = FUN_003478bc(*(undefined4 *)(iVar4 + 0x27c),0x10);
    FUN_00372224(auStack_7c,uVar6);
    FUN_003735ac(local_40,auStack_7c,DAT_001f404c);
    FUN_003735ac(local_4c,auStack_7c,DAT_001f4038);
    iVar7 = FUN_00362384(*(undefined4 *)(param_1 + 0x230));
    *(undefined1 *)(iVar7 + 0x282) = 0xc;
    FUN_003620f0(iVar7,local_40,local_4c);
  }
  return;
}
