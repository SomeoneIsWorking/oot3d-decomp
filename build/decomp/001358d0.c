// OoT3D decomp @ 001358d0  name=FUN_001358d0  size=1872

void FUN_001358d0(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  short sVar16;
  int iVar17;
  float *pfVar18;
  byte bVar19;
  int iVar20;
  float *pfVar21;
  short sVar22;
  uint in_fpscr;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auStack_ac [36];
  float local_88;
  float local_84;
  float local_80;
  float local_7c [2];
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  int local_64;
  int local_60;

  local_64 = *(int *)(DAT_00135db4 + param_2);
  fVar27 = *(float *)(*(int *)(param_2 + 0x7f68) + 0x220);
  iVar17 = *(int *)(*(int *)(param_2 + 0xa98) + 0x28);
  sVar22 = (short)(int)*(float *)(param_1 + 0x214);
  if (*(int *)(param_2 + 0x7f6c) == 0) {
    fVar23 = (float)VectorSignedToFloat((int)sVar22,(byte)(in_fpscr >> 0x15) & 3);
    *(short *)(iVar17 + 2) = (short)(int)(fVar23 + fVar27);
  }
  else {
    fVar23 = (float)VectorSignedToFloat((int)sVar22,(byte)(in_fpscr >> 0x15) & 3);
    *(short *)(iVar17 + 2) =
         (short)(int)(fVar27 + *(float *)(*(int *)(param_2 + 0x7f6c) + 0x220) + fVar23);
  }
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x200;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x30);
  *(short *)(param_1 + 0x1b4) = *(short *)(param_1 + 0x1b4) + 1;
  if (*(short *)(param_1 + 0x1b6) != 0) {
    *(short *)(param_1 + 0x1b6) = *(short *)(param_1 + 0x1b6) + -1;
  }
  if (*(short *)(param_1 + 0x1b8) != 0) {
    *(short *)(param_1 + 0x1b8) = *(short *)(param_1 + 0x1b8) + -1;
  }
  *(short *)(param_1 + 0x1b2) = *(short *)(param_1 + 0x1b2) + 1;
  iVar17 = 0;
  do {
    iVar20 = param_1 + iVar17 * 2;
    sVar22 = *(short *)(iVar20 + 0x1d6);
    iVar17 = (int)(short)((short)iVar17 + 1);
    if (sVar22 != 0) {
      *(short *)(iVar20 + 0x1d6) = sVar22 + -1;
    }
  } while (iVar17 < 5);
  FUN_0011e508(param_1,param_2);
  iVar17 = param_1 + 0x1684;
  FUN_0037632c(param_1);
  iVar20 = param_2 + 0x5c78;
  FUN_00376168(param_2,iVar20,iVar17);
  if (*(short *)(param_1 + 0x1b0) == 5) {
    fVar27 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(*(int *)(param_2 + 0xa98) + 0x28) +
                                                       2),(byte)(in_fpscr >> 0x15) & 3);
    in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar27 <= *(float *)(param_1 + 0x2c)) << 0x1d;
    if (SUB41(in_fpscr >> 0x1d,0)) {
      FUN_003762a4(param_2,iVar20,iVar17);
      goto LAB_00135a7c;
    }
  }
  FUN_003761f0(param_2,iVar20,iVar17);
LAB_00135a7c:
  uVar14 = DAT_00135de4;
  uVar13 = DAT_00135de0;
  uVar12 = DAT_00135ddc;
  uVar11 = DAT_00135dd8;
  fVar10 = DAT_00135dd4;
  uVar9 = DAT_00135dd0;
  uVar8 = DAT_00135dcc;
  uVar7 = DAT_00135dc8;
  uVar6 = DAT_00135dc4;
  fVar23 = DAT_00135dc0;
  uVar5 = DAT_00135dbc;
  fVar27 = DAT_00135db8;
  sVar22 = 0;
  pfVar21 = *(float **)(param_2 + 0x5c28);
  local_60 = param_1 + 0xf00;
  local_70 = DAT_00135db8;
  local_6c = DAT_00135db8;
  local_68 = DAT_00135db8;
  do {
    bVar3 = *(byte *)(pfVar21 + 9);
    if (bVar3 != 0) {
      bVar19 = *(char *)((int)pfVar21 + 0x25) + 1;
      *(byte *)((int)pfVar21 + 0x25) = bVar19;
      if (*(char *)((int)pfVar21 + 0x26) == '\0') {
        *pfVar21 = *pfVar21 + pfVar21[3];
        pfVar21[1] = pfVar21[1] + pfVar21[4];
        pfVar21[2] = pfVar21[2] + pfVar21[5];
        pfVar21[3] = pfVar21[3] + pfVar21[6];
        pfVar21[4] = pfVar21[4] + pfVar21[7];
        pfVar21[5] = pfVar21[5] + pfVar21[8];
      }
      else {
        *(char *)((int)pfVar21 + 0x26) = *(char *)((int)pfVar21 + 0x26) + -1;
      }
      uVar15 = DAT_00135df0;
      if (bVar3 < 3) {
        if (99 < *(short *)(local_60 + 0xb8)) {
          fVar24 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(*(int *)(param_2 + 0xa98) +
                                                                      0x28) + 2),
                                              (byte)(in_fpscr >> 0x15) & 3);
          pfVar21[1] = fVar24;
        }
        FUN_00373500(pfVar21[0xd],DAT_00135de8,pfVar21[0xe],pfVar21 + 0xc);
        if (*(short *)(pfVar21 + 0xb) == 0) {
          sVar16 = *(short *)((int)pfVar21 + 0x2a) + 0xf;
          *(short *)((int)pfVar21 + 0x2a) = sVar16;
          if (*(short *)((int)pfVar21 + 0x2e) <= sVar16) {
            *(short *)((int)pfVar21 + 0x2a) = *(short *)((int)pfVar21 + 0x2e);
            *(undefined2 *)(pfVar21 + 0xb) = 1;
          }
        }
        else {
          sVar16 = *(short *)((int)pfVar21 + 0x2a) + -5;
          *(short *)((int)pfVar21 + 0x2a) = sVar16;
joined_r0x00135da4:
          if (sVar16 < 1) goto LAB_00135da8;
        }
      }
      else if (bVar3 == 7) {
        pfVar18 = (float *)pfVar21[0xf];
        if (pfVar18 == (float *)0x0) {
          fVar24 = pfVar21[7];
          uVar1 = in_fpscr & 0xfffffff;
          uVar2 = uVar1 | (uint)(fVar24 < fVar27) << 0x1f | (uint)(fVar24 == fVar27) << 0x1e;
          in_fpscr = uVar2 | (uint)(NAN(fVar24) || NAN(fVar27)) << 0x1c;
          bVar3 = (byte)(uVar2 >> 0x18);
          if (!(bool)(bVar3 >> 6 & 1) && bVar3 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
            fVar24 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(*(int *)(param_2 + 0xa98) +
                                                                        0x28) + 2),
                                                (byte)(in_fpscr >> 0x15) & 3);
            uVar1 = uVar1 | (uint)(pfVar21[1] < fVar24) << 0x1f;
            in_fpscr = uVar1 | (uint)(NAN(pfVar21[1]) || NAN(fVar24)) << 0x1c;
            if ((byte)(uVar1 >> 0x1f) == ((byte)(in_fpscr >> 0x1c) & 1)) goto LAB_00135e30;
          }
          fVar24 = pfVar21[4];
          if (0x40000000 < (int)pfVar21[4]) {
            fVar24 = DAT_00135dec;
          }
          pfVar21[4] = fVar24;
          sVar16 = *(short *)((int)pfVar21 + 0x2a) + -0x14;
          *(short *)((int)pfVar21 + 0x2a) = sVar16;
          goto joined_r0x00135da4;
        }
        if ((bVar19 & 3) == 0) {
          local_68 = pfVar21[0xd];
          FUN_003696ec(*pfVar18 - *pfVar21,pfVar18[2] - pfVar21[2]);
          FUN_003735e8(auStack_ac,0);
          FUN_003735ac(local_7c,auStack_ac,&local_70);
          pfVar21[3] = local_7c[0];
          pfVar21[5] = local_74;
        }
        FUN_00373500(uVar11,DAT_00135df0,uVar5,pfVar21 + 0xd);
        if (*(byte *)((int)pfVar21 + 0x25) < 0x15) {
          sVar16 = *(short *)((int)pfVar21 + 0x2a) + 0x1e;
          *(short *)((int)pfVar21 + 0x2a) = sVar16;
          if (0xfe < sVar16) {
            *(undefined2 *)((int)pfVar21 + 0x2a) = 0xff;
          }
        }
        else {
          pfVar21[7] = fVar23;
          sVar16 = *(short *)((int)pfVar21 + 0x2a) + -0x1e;
          *(short *)((int)pfVar21 + 0x2a) = sVar16;
          if (0 < sVar16) {
            fVar24 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(*(int *)(param_2 + 0xa98) +
                                                                        0x28) + 2),
                                                (byte)(in_fpscr >> 0x15) & 3);
            uVar1 = in_fpscr & 0xfffffff | (uint)(pfVar21[1] < fVar24) << 0x1f;
            in_fpscr = uVar1 | (uint)(NAN(pfVar21[1]) || NAN(fVar24)) << 0x1c;
            if ((byte)(uVar1 >> 0x1f) != ((byte)(in_fpscr >> 0x1c) & 1)) goto LAB_00136028;
          }
LAB_00135da8:
          *(undefined2 *)((int)pfVar21 + 0x2a) = 0;
          *(undefined1 *)(pfVar21 + 9) = 0;
        }
      }
      else if (((bVar3 == 3 || bVar3 == 4) || bVar3 == 5) || bVar3 == 6) {
        FUN_00373500(uVar6,DAT_00135df0,uVar7,pfVar21 + 0xd);
        cVar4 = *(char *)(pfVar21 + 9);
        if (cVar4 == '\x06') {
          FUN_00373500(pfVar21[0xe],uVar12,uVar8,pfVar21 + 0xc);
          sVar16 = *(short *)((int)pfVar21 + 0x2a) + -0xf;
          *(short *)((int)pfVar21 + 0x2a) = sVar16;
          goto joined_r0x00135da4;
        }
        *(short *)((int)pfVar21 + 0x2a) = (short)(int)pfVar21[0xd];
        if (cVar4 == '\x05') {
          FUN_00373500(fVar27,uVar15,uVar9,pfVar21 + 0xc);
          in_fpscr = in_fpscr & 0xfffffff | (uint)(pfVar21[0xc] == fVar27) << 0x1e |
                     (uint)(fVar27 <= pfVar21[0xc]) << 0x1d;
          bVar3 = (byte)(in_fpscr >> 0x18);
          if (!(bool)(bVar3 >> 5 & 1) || (bool)(bVar3 >> 6)) {
LAB_00135e30:
            *(undefined1 *)(pfVar21 + 9) = 0;
          }
        }
        else {
          if (cVar4 == '\x04') {
            local_88 = fVar27;
            local_84 = fVar27;
            local_80 = fVar27;
            FUN_003673d8(pfVar21[0xc],5,*(undefined4 *)(param_2 + 0x5c28),pfVar21,&local_88);
          }
          fVar24 = DAT_00136060;
          if ((uint)DAT_00136060 < (uint)pfVar21[4]) {
            pfVar21[4] = fVar10;
            pfVar21[7] = fVar27;
          }
          if (*(char *)((int)pfVar21 + 0x26) == '\0') {
            if ((uint)DAT_00136064 < (uint)pfVar21[4]) {
              FUN_00373500(uVar11,uVar12,uVar14,pfVar21 + 0xe);
            }
          }
          else if (*(char *)((int)pfVar21 + 0x26) == '\x01') {
            fVar25 = (float)FUN_003738a8(uVar13);
            pfVar21[3] = fVar25;
            fVar25 = (float)FUN_003738a8(uVar13);
            pfVar21[5] = fVar25;
            pfVar21[7] = DAT_00136068;
          }
          fVar25 = DAT_0013606c;
          fVar26 = pfVar21[1];
          if (((uint)fVar26 < (uint)DAT_0013606c) &&
             (((0x3f800000 < (int)fVar26 || ((uint)fVar24 < (uint)fVar26)) ||
              (iVar17 = FUN_003658b8(fVar27,pfVar21), iVar17 == 0)))) {
            fVar24 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(*(int *)(param_2 + 0xa98) +
                                                                        0x28) + 2),
                                                (byte)(in_fpscr >> 0x15) & 3);
            in_fpscr = in_fpscr & 0xfffffff | (uint)(pfVar21[1] == fVar24) << 0x1e |
                       (uint)(fVar24 <= pfVar21[1]) << 0x1d;
            bVar3 = (byte)(in_fpscr >> 0x18);
            if (!(bool)(bVar3 >> 5 & 1) || (bool)(bVar3 >> 6)) {
              local_88 = *pfVar21;
              local_80 = pfVar21[2];
              local_84 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(*(int *)(param_2 +
                                                                                     0xa98) + 0x28)
                                                                   + 2),(byte)(in_fpscr >> 0x15) & 3
                                                   );
              if (*(char *)(pfVar21 + 9) == '\x04') {
                FUN_00365768(DAT_00136080,DAT_0013607c,*(undefined4 *)(param_2 + 0x5c28),&local_88,
                             0x50,DAT_00136078,1);
              }
              else {
                FUN_00365768(DAT_00136088,DAT_00136084,*(undefined4 *)(param_2 + 0x5c28),&local_88,
                             0x50,DAT_00136078,1);
              }
              goto LAB_00135e30;
            }
          }
          else {
            pfVar21[7] = fVar27;
            pfVar21[5] = fVar27;
            pfVar21[4] = fVar27;
            pfVar21[3] = fVar27;
            if ((uint)pfVar21[1] < (uint)fVar25) {
              pfVar21[1] = fVar27;
            }
            else {
              pfVar21[1] = DAT_00136070;
            }
            *(undefined1 *)(pfVar21 + 9) = 6;
            *(undefined2 *)((int)pfVar21 + 0x2a) = 0x96;
            pfVar21[0xe] = pfVar21[0xc] * DAT_00136074;
          }
        }
      }
    }
LAB_00136028:
    sVar22 = sVar22 + 1;
    pfVar21 = pfVar21 + 0x10;
    if (299 < sVar22) {
      if (*(int *)(local_64 + 0x124) != 0) {
        *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
      }
      return;
    }
  } while( true );
}
