// OoT3D decomp @ 003ab0ec  name=FUN_003ab0ec  size=1748

void FUN_003ab0ec(int param_1,int param_2)

{
  short sVar1;
  uint uVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 uVar8;
  short sVar9;
  int iVar10;
  uint in_fpscr;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_5c [12];
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [4];
  float local_48;

  uVar5 = DAT_003ab424;
  uVar4 = DAT_003ab420;
  fVar11 = DAT_003ab41c;
  FUN_0036e168(DAT_003ab420,DAT_003ab424,DAT_003ab420,param_1 + 0x1e4);
  uVar6 = DAT_003ab438;
  fVar18 = DAT_003ab434;
  fVar17 = DAT_003ab430;
  fVar15 = DAT_003ab42c;
  if (*(int *)(param_1 + 0x1d4) == 5) {
    iVar10 = FUN_003736fc(*(undefined4 *)(param_1 + 0x1ec),uVar4,param_1 + 0x1a4);
    uVar4 = DAT_003ab428;
    if (iVar10 != 0) {
      return;
    }
    iVar10 = *(int *)(param_1 + 0x124);
    fVar17 = *(float *)(iVar10 + 0x28) - *(float *)(param_1 + 0x28);
    fVar11 = *(float *)(iVar10 + 0x2c) - *(float *)(param_1 + 0x2c);
    fVar15 = *(float *)(iVar10 + 0x30) - *(float *)(param_1 + 0x30);
    *(float *)(param_1 + 0x6cc) = SQRT(fVar17 * fVar17 + fVar11 * fVar11 + fVar15 * fVar15);
    FUN_003717ac(param_1 + 0x1a4,uVar4,2);
    return;
  }
  if (*(short *)(param_1 + 0x6c0) == 0) {
    if (*(short *)(param_1 + 0x6c2) != 0) goto LAB_003ab2a0;
    if ((*(byte *)(param_1 + 0x64d) & 2) != 0) {
      if ((**(uint **)(*(int *)(param_1 + 0x658) + 0x24) & 0x80) == 0) {
        *(undefined1 *)(param_1 + 0x6b8) = 0;
      }
      else {
        *(undefined1 *)(param_1 + 0x6b8) = 1;
      }
      *(byte *)(param_1 + 0x64d) = *(byte *)(param_1 + 0x64d) & 0xfd;
      iVar10 = FUN_00375eb8(param_1);
      if (iVar10 < 1) {
        bVar3 = *(byte *)(*(int *)(param_1 + 0x124) + 0xb7);
        if (bVar3 < 9) {
          FUN_00375b70(param_2,param_1);
          *(undefined1 *)(*(int *)(param_1 + 0x124) + 0xb7) = 0;
        }
        else {
          *(byte *)(*(int *)(param_1 + 0x124) + 0xb7) = bVar3 - 8;
        }
        *(undefined2 *)(param_1 + 0x6c8) = 0;
      }
      uVar13 = DAT_003ab43c;
      if (*(char *)(*(int *)(param_1 + 0x124) + 0xb7) == '\0') {
        FUN_00375bcc(param_1,DAT_003ab43c);
        *(undefined2 *)(param_1 + 0x6c2) = 9;
      }
      else {
        if (*(char *)(param_1 + 0x6b8) == '\0') {
          *(undefined4 *)(param_1 + 100) = uVar6;
        }
        FUN_00375bcc(param_1,uVar13);
        *(undefined2 *)(param_1 + 0x6c0) = 0x1e;
      }
      *(float *)(param_1 + 0x6c) = fVar11;
      goto LAB_003ab294;
    }
  }
  else {
LAB_003ab294:
    if (*(short *)(param_1 + 0x6c2) != 0) {
LAB_003ab2a0:
      uVar6 = DAT_003ab448;
      uVar5 = DAT_003ab444;
      uVar4 = DAT_003ab440;
      *(float *)(param_1 + 0x1e4) = fVar11;
      FUN_0036e168(uVar6,uVar5,uVar4,param_1 + 0x54);
      FUN_0037572c(*(undefined4 *)(param_1 + 0x54),param_1);
      if (*(short *)(DAT_003ab44c + param_1) == 0) {
        fVar11 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x6c2),
                                            (byte)(in_fpscr >> 0x15) & 3);
        fVar11 = fVar11 * fVar15;
        if (*(short *)(param_1 + 0x6c2) < 1) {
          fVar18 = fVar11 * fVar17 - fVar18;
        }
        else {
          fVar18 = fVar18 + fVar11 * fVar17;
        }
        FUN_00375ed8(param_1,0x400000,200,0,(int)(short)(int)fVar18);
        *(short *)(param_1 + 0x6c2) = *(short *)(param_1 + 0x6c2) + -1;
      }
      if (*(short *)(param_1 + 0x6c2) != 0) {
        return;
      }
      iVar10 = z_actor_003738d0(*(undefined4 *)(param_1 + 0x6ac),*(undefined4 *)(param_1 + 0x6b0),
                                *(undefined4 *)(param_1 + 0x6b4),param_2 + 0x208c,param_2,0x10,0,0,
                                0x600,0,1);
      if (iVar10 != 0) {
        *(undefined2 *)(iVar10 + 0x26c) = 0;
      }
      *(ushort *)(*(int *)(param_1 + 0x124) + 0x1c) =
           *(ushort *)(*(int *)(param_1 + 0x124) + 0x1c) | 0x4000;
      FUN_00374444(param_2,0,param_1 + 0x28,0xa0);
      FUN_00374428(param_1);
      return;
    }
  }
  fVar16 = DAT_003ab7dc;
  if ((*(ushort *)(param_1 + 0x90) & 1) != 0) {
    fVar12 = *(float *)(param_1 + 100);
    uVar2 = in_fpscr & 0xfffffff | (uint)(fVar12 < fVar11) << 0x1f |
            (uint)(fVar12 == fVar11) << 0x1e;
    in_fpscr = uVar2 | (uint)(NAN(fVar12) || NAN(fVar11)) << 0x1c;
    bVar3 = (byte)(uVar2 >> 0x18);
    if ((bool)(bVar3 >> 6 & 1) || bVar3 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) {
      if (*(short *)(param_1 + 0x6c0) != 0) {
        *(short *)(param_1 + 0x6c0) = *(short *)(param_1 + 0x6c0) + -1;
      }
      if (((int)(fVar16 - *(float *)(param_1 + 0x6cc)) < DAT_003ab7e0) &&
         ((*(short *)(param_1 + 0x6c8) == 0 ||
          (sVar1 = *(short *)(param_1 + 0x6c8) + -1, *(short *)(param_1 + 0x6c8) = sVar1, sVar1 == 0
          )))) {
        uVar4 = DAT_003ab7e4;
        *(float *)(param_1 + 0x6c) = fVar11;
        *(undefined4 *)(param_1 + 0x638) = uVar4;
        return;
      }
      FUN_0036e168(fVar16,DAT_003ab7ec,DAT_003ab7e8,fVar11,param_1 + 0x6cc);
      if (*(short *)(param_1 + 0x6ca) == 0) {
        fVar16 = *(float *)(param_1 + 0x6cc);
        sVar1 = *(short *)(param_1 + 0x6ba);
        sVar9 = FUN_003758b0(*(float *)(param_1 + 0x30) -
                             *(float *)(*(int *)(param_1 + 0x124) + 0x10),
                             *(float *)(param_1 + 0x28) - *(float *)(*(int *)(param_1 + 0x124) + 8))
        ;
        iVar10 = (int)(short)(sVar9 + sVar1 * (short)DAT_003ab7f8 * 4);
        fVar15 = (float)FUN_002cfca0(iVar10);
        fVar12 = *(float *)(*(int *)(param_1 + 0x124) + 8);
        fVar17 = (float)FUN_00338f60(iVar10);
        fVar15 = (float)FUN_003696ec((fVar12 + fVar16 * fVar15) - *(float *)(param_1 + 0x28),
                                     (*(float *)(*(int *)(param_1 + 0x124) + 0x10) + fVar16 * fVar17
                                     ) - *(float *)(param_1 + 0x30));
        FUN_00375a18(param_1 + 0xbe,(int)(short)(int)(fVar15 * DAT_003ab7fc),4,4000,1);
      }
      else {
        FUN_0036e168(fVar11,uVar5,uVar4,fVar11,param_1 + 0x6c);
        uVar13 = VectorSignedToFloat((int)(short)(*(ushort *)(param_1 + 0x36) ^ 0x8000),
                                     (byte)(in_fpscr >> 0x15) & 3);
        local_48 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xbe),
                                              (byte)(in_fpscr >> 0x15) & 3);
        iVar14 = FUN_0036e168(uVar13,uVar5,DAT_003ab7f0,fVar11,&local_48);
        iVar10 = DAT_003ab7f4;
        *(short *)(param_1 + 0xbe) = (short)(int)local_48;
        if (iVar10 < iVar14) {
          return;
        }
        *(undefined2 *)(param_1 + 0x6ca) = 0;
      }
      fVar15 = DAT_003ab804;
      piVar7 = DAT_003ab800;
      *(undefined2 *)(param_1 + 0x34) = *(undefined2 *)(param_1 + 0xbc);
      uVar8 = DAT_003ab80c;
      uVar13 = DAT_003ab808;
      *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
      *(undefined2 *)(param_1 + 0x38) = *(undefined2 *)(param_1 + 0xc0);
      if (*(short *)(param_1 + 0x6c4) != 0) goto LAB_003ab700;
      if (*(int *)(param_1 + 0x98) <= DAT_003ab814) {
        fVar16 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x92),
                                            (byte)(in_fpscr >> 0x15) & 3);
        fVar17 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xbe),
                                            (byte)(in_fpscr >> 0x15) & 3);
        if ((int)(short)(int)(fVar16 - fVar17) + 0x1c70U <= DAT_003ab818) {
          iVar10 = FUN_00369f9c(param_2 + 0xa98,param_1 + 0x28,
                                *(int *)(DAT_003ab810 + param_2) + 0x28,auStack_5c,auStack_4c,1,0,0,
                                1,auStack_50);
          if (iVar10 == 0) {
            FUN_00375bcc(param_1,DAT_003ab81c);
            *(undefined2 *)(param_1 + 0x6c6) = 0xc;
            *(undefined2 *)(param_1 + 0x6c4) = 0xc;
          }
          else if (*(short *)(param_1 + 0x6c4) == 0) goto LAB_003ab82c;
LAB_003ab700:
          if ((*(short *)(param_1 + 0x6c6) == 0) ||
             (sVar1 = *(short *)(param_1 + 0x6c6) + -1, *(short *)(param_1 + 0x6c6) = sVar1,
             sVar1 == 0)) {
            FUN_00375bcc(param_1,DAT_003ab820);
            *(undefined2 *)(param_1 + 0x6c6) = 6;
          }
          FUN_0036e168(fVar11,uVar5,uVar4,fVar11,param_1 + 0x6c);
          *(float *)(param_1 + 0x1e4) = fVar11;
                    /* WARNING: Subroutine does not return */
          FUN_003759d0();
        }
      }
LAB_003ab82c:
      FUN_0036e168(uVar6,uVar5,uVar4,fVar11,param_1 + 0x6c);
      sVar1 = (short)(int)*(float *)(param_1 + 0x1e0);
      if (sVar1 != 1 && sVar1 != 4) {
        return;
      }
      FUN_00375bcc(param_1,DAT_003ab8c8);
      fVar17 = (float)VectorSignedToFloat((int)*(short *)(*piVar7 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      FUN_00317b64(uVar8,uVar5,fVar11,uVar13,fVar11,param_1,(int)(fVar15 / fVar17 + fVar18) & 0xff,1
                  );
      return;
    }
  }
  fVar11 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x6c0),(byte)(in_fpscr >> 0x15) & 3)
  ;
  fVar11 = fVar11 * fVar15;
  if (*(short *)(param_1 + 0x6c0) < 1) {
    fVar18 = fVar11 * fVar17 - fVar18;
  }
  else {
    fVar18 = fVar18 + fVar11 * fVar17;
  }
  FUN_00375ed8(param_1,0x400000,200,0,(int)(short)(int)fVar18);
  return;
}
