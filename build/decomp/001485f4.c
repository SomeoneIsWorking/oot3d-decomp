// OoT3D decomp @ 001485f4  name=FUN_001485f4  size=1632

void FUN_001485f4(int param_1)

{
  short sVar1;
  char cVar2;
  ushort uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  float *pfVar7;
  undefined4 uVar8;
  undefined2 uVar9;
  int iVar10;
  float fVar11;
  float *pfVar12;
  char *pcVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  int local_7c;
  undefined4 local_78;
  int local_74;
  int local_70;

  pfVar12 = DAT_00148a54;
  iVar14 = 0;
  local_78 = *(undefined4 *)(param_1 + 0x20ac);
  iVar10 = *(int *)(DAT_00148a58 + 0x18);
  pcVar13 = (char *)(iVar10 + 4);
  do {
    if (*pcVar13 == '\x02') {
      if (*(char *)(iVar10 + 0x7d08) != '\0') {
        *pcVar13 = '\x03';
      }
    }
    else if (*pcVar13 == '\x03') {
      FUN_003685a0(pcVar13 + 8);
      if (*(int **)(pcVar13 + 4) != (int *)0x0) {
        (**(code **)(**(int **)(pcVar13 + 4) + 4))();
      }
      *pcVar13 = '\0';
      pcVar13[1] = '\0';
      pcVar13[4] = '\0';
      pcVar13[5] = '\0';
      pcVar13[6] = '\0';
      pcVar13[7] = '\0';
    }
    fVar6 = DAT_00148a68;
    uVar5 = DAT_00148a64;
    uVar4 = DAT_00148a60;
    iVar14 = iVar14 + 1;
    pcVar13 = pcVar13 + 0xa0;
  } while (iVar14 < 200);
  local_7c = 0;
  local_70 = param_1 + 0xa98;
  local_74 = param_1 + 0x5000;
  do {
    cVar2 = *(char *)(pfVar12 + 9);
    if (cVar2 != '\0') {
      *(short *)((int)pfVar12 + 0x26) = *(short *)((int)pfVar12 + 0x26) + -1;
      *pfVar12 = *pfVar12 + pfVar12[3];
      pfVar12[1] = pfVar12[1] + pfVar12[4];
      pfVar12[2] = pfVar12[2] + pfVar12[5];
      pfVar12[3] = pfVar12[3] + pfVar12[6];
      pfVar12[4] = pfVar12[4] + pfVar12[7];
      pfVar12[5] = pfVar12[5] + pfVar12[8];
      if (cVar2 == '\x01' || cVar2 == '\x03') {
                    /* WARNING: Subroutine does not return */
        FUN_003759d0();
      }
      if (*(char *)(pfVar12 + 9) == '\x02') {
                    /* WARNING: Subroutine does not return */
        FUN_003759d0();
      }
      if (*(char *)(pfVar12 + 9) == '\x04') {
                    /* WARNING: Subroutine does not return */
        FUN_003759d0();
      }
      if (*(char *)(pfVar12 + 9) == '\x05') {
        *(ushort *)(pfVar12 + 10) = *(short *)(pfVar12 + 10) + 1U & 7;
        sVar1 = *(short *)((int)pfVar12 + 0x36) + -0x14;
        *(short *)((int)pfVar12 + 0x36) = sVar1;
        if (0 < sVar1) goto LAB_0014926c;
        *(undefined2 *)((int)pfVar12 + 0x36) = 0;
        *(undefined2 *)((int)pfVar12 + 0x26) = 0;
        *(undefined1 *)(pfVar12 + 9) = 0;
        if ((undefined1 *)pfVar12[0x16] != (undefined1 *)0x0) {
          *(undefined1 *)pfVar12[0x16] = 2;
        }
        pfVar12[0x16] = 0.0;
      }
      if (*(char *)(pfVar12 + 9) == '\x06') {
        if (*(short *)(pfVar12 + 10) < 2) {
          local_88 = *pfVar12;
          local_80 = pfVar12[2];
          local_84 = pfVar12[1] - (pfVar12[4] + DAT_00148ebc);
          fVar15 = (float)FUN_003586a4(local_70,&local_8c,&local_88);
          pfVar7 = DAT_00148ec4;
          if ((local_8c != 0.0) && (pfVar12[1] <= fVar15)) {
            pfVar12[1] = fVar15 + fVar6;
            *(undefined2 *)(pfVar12 + 10) = 2;
            if (*(char *)(DAT_00148a58 + 9) < '\x14') {
              uVar9 = 0x50;
            }
            else {
              uVar9 = (undefined2)DAT_00148ec0;
            }
            *(undefined2 *)((int)pfVar12 + 0x26) = uVar9;
            fVar15 = pfVar7[1];
            fVar11 = pfVar7[2];
            pfVar12[3] = *pfVar7;
            pfVar12[4] = fVar15;
            pfVar12[5] = fVar11;
            pfVar12[6] = pfVar12[3];
            pfVar12[7] = pfVar12[4];
            pfVar12[8] = pfVar12[5];
          }
          if (*(short *)((int)pfVar12 + 0x26) != 0) goto LAB_00148c2c;
          *(undefined1 *)(pfVar12 + 9) = 0;
          if ((undefined1 *)pfVar12[0x16] != (undefined1 *)0x0) {
            *(undefined1 *)pfVar12[0x16] = 2;
          }
          pfVar12[0x16] = 0.0;
        }
        else {
          uVar3 = *(ushort *)((int)pfVar12 + 0x26);
          if (uVar3 < 0x14) {
            *(ushort *)((int)pfVar12 + 0x3e) = uVar3 * 5;
            *(ushort *)((int)pfVar12 + 0x36) = uVar3 * 0xc;
          }
          else {
            if (uVar3 <= DAT_00148ec8) goto LAB_0014926c;
            *(ushort *)((int)pfVar12 + 0x26) = uVar3 + 1;
          }
        }
        if (*(short *)((int)pfVar12 + 0x26) == 0) {
          *(undefined1 *)(pfVar12 + 9) = 0;
          if ((undefined1 *)pfVar12[0x16] == (undefined1 *)0x0) goto LAB_0014926c;
          *(undefined1 *)pfVar12[0x16] = 2;
          pfVar12[0x16] = 0.0;
        }
      }
LAB_00148c2c:
      uVar8 = DAT_00148ecc;
      if (*(char *)(pfVar12 + 9) == '\b') {
        if (*(short *)(pfVar12 + 10) == 0) {
          local_88 = *pfVar12;
          local_80 = pfVar12[2];
          local_84 = pfVar12[1] - (pfVar12[4] + DAT_00148ebc);
          *(short *)((int)pfVar12 + 0x2a) = *(short *)((int)pfVar12 + 0x2a) + 6000;
          fVar15 = (float)FUN_003586a4(local_70,&local_8c,&local_88);
          pfVar7 = DAT_00148ec4;
          if ((local_8c != 0.0) && (pfVar12[1] <= fVar15)) {
            pfVar12[1] = fVar15 + fVar6;
            *(undefined2 *)(pfVar12 + 10) = 1;
            *(undefined2 *)((int)pfVar12 + 0x26) = 0x1e;
            fVar15 = pfVar7[1];
            fVar11 = pfVar7[2];
            pfVar12[3] = *pfVar7;
            pfVar12[4] = fVar15;
            pfVar12[5] = fVar11;
            pfVar12[6] = pfVar12[3];
            pfVar12[7] = pfVar12[4];
            pfVar12[8] = pfVar12[5];
            *(undefined2 *)((int)pfVar12 + 0x2a) = 0xc000;
          }
          if (*(short *)((int)pfVar12 + 0x26) == 0) {
            if ((undefined1 *)pfVar12[0x16] != (undefined1 *)0x0) {
              *(undefined1 *)pfVar12[0x16] = 2;
            }
            pfVar12[0x16] = 0.0;
            *(undefined1 *)(pfVar12 + 9) = 0;
          }
        }
        else if (*(short *)(pfVar12 + 10) == 2) {
          if (*(short *)((int)pfVar12 + 0x26) == 0) {
            *(undefined1 *)(pfVar12 + 9) = 0;
            if ((undefined1 *)pfVar12[0x16] != (undefined1 *)0x0) {
              *(undefined1 *)pfVar12[0x16] = 2;
            }
            pfVar12[0x16] = 0.0;
          }
        }
        else {
          FUN_0036e168(uVar4,fVar6,uVar5,DAT_00148ecc,pfVar12 + 0x11);
          FUN_0036e168(uVar8,DAT_00148ed4,uVar5,DAT_00148ed0,pfVar12 + 0x13);
          if ((*(uint *)(local_74 + 0xbf4) & 3) == 0) {
            FUN_00375a18(pfVar12 + 0xc,0x5f,1,1,0);
          }
        }
        pfVar12[0x12] = pfVar12[0x12] + pfVar12[0x13];
      }
      if (*(char *)(pfVar12 + 9) == '\a') {
        fVar15 = pfVar12[0x15];
        *(short *)((int)pfVar12 + 0x2e) = *(short *)((int)pfVar12 + 0x2e) + 0x157c;
        local_80 = fVar15;
        fVar11 = (float)FUN_002cfca0();
        uVar8 = DAT_00148edc;
        *(short *)((int)pfVar12 + 0x3e) = (short)(int)(fVar11 * DAT_00148ed8) + 0x50;
        FUN_0036e168(pfVar12[0x11],fVar6,uVar8,uVar5,pfVar12 + 0x10);
        fVar16 = *(float *)((int)fVar15 + 0x28) + pfVar12[0x12];
        *pfVar12 = fVar16;
        pfVar12[1] = *(float *)((int)fVar15 + 0x2c) + pfVar12[0x13];
        fVar11 = *(float *)((int)fVar15 + 0x30) + pfVar12[0x14];
        pfVar12[2] = fVar11;
        sVar1 = *(short *)(pfVar12 + 10);
        if (sVar1 == 0) {
          if (*(short *)((int)pfVar12 + 0x26) == 0) {
            FUN_003758b0(fVar11 - *(float *)((int)fVar15 + 0x30),
                         fVar16 - *(float *)((int)fVar15 + 0x28));
            local_8c = (float)FUN_003738a8(DAT_00149214,(int)(pfVar12[0x10] * DAT_00148ee0));
            local_8c = local_8c + *pfVar12;
                    /* WARNING: Subroutine does not return */
            FUN_003759d0();
          }
        }
        else if ((sVar1 == 1 || sVar1 == 2) && (*(char *)((int)local_80 + 0xf95) != '\0')) {
          FUN_003758b0(fVar11 - *(float *)((int)fVar15 + 0x30),
                       fVar16 - *(float *)((int)fVar15 + 0x28));
          local_8c = (float)FUN_003738a8(DAT_00149214,(int)(pfVar12[0x10] * DAT_00148ee0));
          local_8c = local_8c + *pfVar12;
                    /* WARNING: Subroutine does not return */
          FUN_003759d0();
        }
      }
    }
LAB_0014926c:
    pfVar12 = pfVar12 + 0x17;
    local_7c = (int)(short)((short)local_7c + 1);
    if (199 < local_7c) {
      return;
    }
  } while( true );
}
