// OoT3D decomp @ 0047974c  name=FUN_0047974c  size=1360

void FUN_0047974c(float *param_1,short *param_2,short *param_3,int param_4)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  byte *pbVar6;
  undefined4 uVar7;
  int iVar8;
  float *pfVar9;
  short *psVar10;
  int iVar11;
  undefined1 *puVar12;
  bool bVar13;
  uint in_fpscr;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  short *local_30;

  uVar2 = DAT_00479b70;
  iVar8 = DAT_00479b68;
  local_30 = param_2 + 0x800;
  psVar10 = (short *)0x0;
  if ((*(int *)(param_2 + 0xb7c) == 0) ||
     (*(char *)((int)param_2 + *(byte *)(DAT_00479b6c + (int)param_2) + 0x2231) != '\x02')) {
    iVar3 = param_4 + 0x208c;
    iVar11 = 0;
    *(undefined4 *)(DAT_00479b68 + 0xa0) = 0;
    *(undefined4 *)(iVar8 + 0x9c) = 0;
    *(undefined4 *)(iVar8 + 0xa8) = uVar2;
    *(undefined4 *)(iVar8 + 0xa4) = uVar2;
    *(undefined4 *)(iVar8 + 0xac) = 0x7fffffff;
    iVar4 = FUN_0036a7a0(param_4);
    puVar12 = DAT_00479b74;
    if (iVar4 == 0) {
      *(undefined4 *)(iVar3 + 0x114) = 0;
      *(short *)(iVar8 + 2) = param_2[0x5f];
      do {
        FUN_002cf684(param_4,iVar3,param_2,*puVar12,(int)*(char *)(param_4 + 0x2148));
        iVar11 = iVar11 + 1;
        puVar12 = puVar12 + 1;
      } while (iVar11 < 3);
      psVar10 = *(short **)(iVar8 + 0x9c);
      if (psVar10 == (short *)0x0) {
        if (iVar11 < 0xc) {
          do {
            FUN_002cf684(param_4,iVar3,param_2,*puVar12,0);
            iVar11 = iVar11 + 1;
            puVar12 = puVar12 + 1;
          } while (iVar11 < 0xc);
          goto LAB_0047986c;
        }
        goto LAB_00479878;
      }
    }
    else {
LAB_0047986c:
      psVar10 = *(short **)(iVar8 + 0x9c);
      if (psVar10 == (short *)0x0) {
LAB_00479878:
        psVar10 = *(short **)(iVar8 + 0xa0);
      }
    }
    param_1[0x2b] = (float)psVar10;
  }
  else {
    param_1[0x2b] = 0.0;
  }
  psVar5 = (short *)param_1[0x29];
  if (psVar5 == (short *)0x0) {
    psVar5 = param_3;
    if ((param_3 == (short *)0x0) && (psVar5 = psVar10, psVar10 == (short *)0x0)) {
      bVar1 = *(byte *)(param_2 + 1);
      goto LAB_004798bc;
    }
  }
  else {
    param_1[0x29] = 0.0;
  }
  bVar1 = *(byte *)(psVar5 + 1);
LAB_004798bc:
  psVar10 = (short *)param_1[0xe];
  bVar13 = psVar10 == psVar5;
  if (bVar13) {
    psVar10 = (short *)(uint)*(byte *)((int)param_1 + 0x4e);
  }
  if (!bVar13 || psVar10 != (short *)(uint)bVar1) {
    param_1[0xe] = (float)psVar5;
    fVar15 = DAT_00479b78;
    *(byte *)((int)param_1 + 0x4e) = bVar1;
    param_1[0x10] = fVar15;
  }
  fVar16 = DAT_00479b80;
  fVar15 = DAT_00479b7c;
  if (psVar5 == (short *)0x0) {
    psVar5 = param_2;
  }
  iVar4 = FUN_003705a0(DAT_00479b80,DAT_00479b7c,param_1 + 0x10);
  iVar3 = DAT_00479b84;
  if (iVar4 == 0) {
    fVar17 = *(float *)(psVar5 + 0x16);
    fVar18 = *(float *)(psVar5 + 0x28);
    fVar19 = *(float *)(psVar5 + 0x2c);
    fVar20 = *(float *)(psVar5 + 0x18);
    fVar14 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00479b88 + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    fVar15 = (fVar14 * fVar15 * DAT_00479b8c) / param_1[0x10];
    *param_1 = *param_1 + (*(float *)(psVar5 + 0x14) - *param_1) * fVar15;
    param_1[1] = param_1[1] + ((fVar17 + fVar18 * fVar19) - param_1[1]) * fVar15;
    param_1[2] = param_1[2] + (fVar20 - param_1[2]) * fVar15;
  }
  else if (psVar5 != (short *)0x0) {
    pbVar6 = (byte *)(DAT_00479b84 + (int)(uint)bVar1 * 8);
    *param_1 = *(float *)(psVar5 + 0x1e);
    param_1[1] = *(float *)(psVar5 + 0x20) + *(float *)(psVar5 + 0x28) * *(float *)(psVar5 + 0x2c);
    param_1[2] = *(float *)(psVar5 + 0x22);
    fVar15 = (float)VectorUnsignedToFloat((uint)*pbVar6,(byte)(in_fpscr >> 0x15) & 3);
    param_1[6] = fVar15;
    fVar15 = (float)VectorUnsignedToFloat((uint)pbVar6[1],(byte)(in_fpscr >> 0x15) & 3);
    param_1[7] = fVar15;
    fVar15 = (float)VectorUnsignedToFloat((uint)pbVar6[2],(byte)(in_fpscr >> 0x15) & 3);
    param_1[8] = fVar15;
    fVar15 = (float)VectorUnsignedToFloat((uint)pbVar6[3],(byte)(in_fpscr >> 0x15) & 3);
    param_1[9] = fVar15;
    fVar15 = (float)VectorUnsignedToFloat((uint)pbVar6[4],(byte)(in_fpscr >> 0x15) & 3);
    param_1[10] = fVar15;
    fVar15 = (float)VectorUnsignedToFloat((uint)pbVar6[5],(byte)(in_fpscr >> 0x15) & 3);
    param_1[0xb] = fVar15;
    fVar15 = (float)VectorUnsignedToFloat((uint)pbVar6[6],(byte)(in_fpscr >> 0x15) & 3);
    param_1[0xc] = fVar15;
    fVar15 = (float)VectorUnsignedToFloat((uint)pbVar6[7],(byte)(in_fpscr >> 0x15) & 3);
    param_1[0xd] = fVar15;
  }
  if ((param_3 != (short *)0x0) &&
     (((*(char *)((int)param_1 + 0x4f) != '\0' ||
       (((FUN_00368cc0(param_4,param_3 + 0x1e,&local_3c,&local_40), fVar16 < local_34 &&
         ((int)ABS(local_3c * local_40) < 0x3f800000)) &&
        ((int)ABS(local_38 * local_40) < 0x3f800000)))) &&
      ((DAT_00479b90 & ~*(uint *)(local_30 + 0x388)) != 0)))) {
    if ((short *)param_1[0xf] != param_3) {
      fVar15 = *(float *)(param_4 + 0x1bc);
      fVar14 = *(float *)(param_4 + 0x1c0);
      puVar12 = (undefined1 *)(iVar3 + (uint)*(byte *)(param_3 + 1) * 8);
      param_1[3] = *(float *)(param_4 + 0x1b8);
      param_1[4] = fVar15;
      param_1[5] = fVar14;
      fVar15 = *(float *)(iVar8 + 4);
      param_1[0x11] = fVar15;
      param_1[0x12] = fVar15;
      *(char *)((int)param_1 + 0x59) = (char)*(undefined4 *)(iVar8 + 0x18);
      *(undefined1 *)((int)param_1 + 0x51) = 0;
      *(undefined2 *)(param_1 + 0x13) = 0x100;
      fVar15 = *(float *)(iVar8 + 0x30);
      pfVar9 = param_1 + 0x17;
      iVar3 = 0;
      do {
        fVar14 = param_1[0x11];
        iVar4 = iVar3 + 1;
        param_1[iVar3 * 6 + 0x17] = fVar16;
        param_1[iVar3 * 6 + 0x18] = fVar16;
        param_1[iVar3 * 6 + 0x19] = fVar16;
        param_1[iVar3 * 6 + 0x1c] = fVar15;
        param_1[iVar3 * 6 + 0x1a] = fVar14;
        *(undefined1 *)(pfVar9 + 4) = *puVar12;
        *(undefined1 *)((int)pfVar9 + 0x11) = puVar12[1];
        *(undefined1 *)((int)pfVar9 + 0x12) = puVar12[2];
        pfVar9 = pfVar9 + 6;
        iVar3 = iVar4;
      } while (iVar4 < 3);
      param_1[0xf] = (float)param_3;
      uVar2 = DAT_00479cd4;
      if (*param_3 == 0x32) {
        *(undefined2 *)(param_1 + 0x13) = 0;
      }
      uVar7 = DAT_00479cc8;
      if ((~*(uint *)(param_3 + 2) & 5) == 0) {
        uVar7 = DAT_00479ccc;
      }
      FUN_0037547c(uVar7,0,4,uVar2,uVar2,DAT_00479cd0);
    }
    param_1[3] = *(float *)(param_3 + 0x14);
    param_1[4] = *(float *)(param_3 + 0x16) -
                 *(float *)(param_3 + 0x62) * *(float *)(param_3 + 0x2c);
    param_1[5] = *(float *)(param_3 + 0x18);
    if (*(char *)((int)param_1 + 0x4f) != '\0') {
      *(byte *)((int)param_1 + 0x4f) = *(char *)((int)param_1 + 0x4f) + 3U | 0x80;
      if (*(char *)((int)param_1 + 0x51) != '\0') {
        *(char *)((int)param_1 + 0x51) = *(char *)((int)param_1 + 0x51) + '\x03';
      }
      param_1[0x12] = param_1[0x11];
      param_1[0x11] = *(float *)(iVar8 + 0xc);
      return;
    }
    fVar16 = *(float *)(iVar8 + 0xc);
    fVar14 = (param_1[0x11] - fVar16) * *(float *)(iVar8 + 0x24);
    fVar15 = *(float *)(iVar8 + 0x1c);
    if ((fVar14 < *(float *)(iVar8 + 0x1c)) ||
       (fVar15 = *(float *)(iVar8 + 0x20), *(float *)(iVar8 + 0x20) < fVar14)) {
      fVar14 = fVar15;
    }
    param_1[0x12] = param_1[0x11];
    iVar8 = FUN_003705a0(fVar16,fVar14,param_1 + 0x11);
    if (iVar8 != 0) {
      *(char *)((int)param_1 + 0x4f) = *(char *)((int)param_1 + 0x4f) + '\x01';
    }
    return;
  }
  param_1[0xf] = 0.0;
  param_1[0x12] = param_1[0x11];
  FUN_003705a0(*(undefined4 *)(iVar8 + 4),*(undefined4 *)(iVar8 + 0x28),param_1 + 0x11);
  return;
}
