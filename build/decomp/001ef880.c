// OoT3D decomp @ 001ef880  name=FUN_001ef880  size=1612

void FUN_001ef880(int param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  float fVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  char cVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  short *psVar13;
  float *pfVar14;
  undefined4 uVar15;
  float *pfVar16;
  int iVar17;
  bool bVar18;
  uint in_fpscr;
  uint uVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;

  iVar17 = *(int *)(DAT_001efc88 + param_2);
  *(undefined1 *)(param_1 + 0x794) = 3;
  fVar3 = DAT_001efc90;
  uVar15 = DAT_001efc8c;
  uVar20 = VectorUnsignedToFloat((uint)*(byte *)(param_2 + 0xa82),(byte)(in_fpscr >> 0x15) & 3);
  FUN_00373500(uVar20,DAT_001efc90,DAT_001efc8c,param_1 + 0x22c);
  uVar20 = VectorUnsignedToFloat((uint)*(byte *)(param_2 + 0xa83),(byte)(in_fpscr >> 0x15) & 3);
  FUN_00373500(uVar20,fVar3,uVar15,param_1 + 0x230);
  uVar20 = VectorUnsignedToFloat((uint)*(byte *)(param_2 + 0xa84),(byte)(in_fpscr >> 0x15) & 3);
  FUN_00373500(uVar20,fVar3,uVar15,param_1 + 0x234);
  uVar20 = VectorUnsignedToFloat
                     ((uint)*(ushort *)(DAT_001efc94 + param_2),(byte)(in_fpscr >> 0x15) & 3);
  FUN_00373500(uVar20,fVar3,uVar15,param_1 + 0x238);
  FUN_00373500(DAT_001efc98,fVar3,uVar15,param_1 + 0x23c);
  *(short *)(param_1 + 0x1a8) = *(short *)(param_1 + 0x1a8) + 1;
  *(short *)(param_1 + 0x1aa) = *(short *)(param_1 + 0x1aa) + 1;
  sVar8 = *(short *)(param_1 + 0x1ae) + 1;
  *(short *)(param_1 + 0x1ae) = sVar8;
  if (0x31 < sVar8) {
    *(undefined2 *)(param_1 + 0x1ae) = 0;
  }
  iVar9 = param_1 + *(short *)(param_1 + 0x1ae) * 0xc;
  uVar15 = *(undefined4 *)(param_1 + 0x2c);
  uVar20 = *(undefined4 *)(param_1 + 0x30);
  iVar10 = 0;
  *(undefined4 *)(iVar9 + 0x240) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(iVar9 + 0x244) = uVar15;
  *(undefined4 *)(iVar9 + 0x248) = uVar20;
  do {
    iVar9 = param_1 + iVar10 * 2;
    iVar10 = iVar10 + 1;
    sVar8 = *(short *)(iVar9 + 0x1d0);
    if (sVar8 != 0) {
      *(short *)(iVar9 + 0x1d0) = sVar8 + -1;
    }
    iVar4 = DAT_001efca0;
    iVar9 = DAT_001efc9c;
  } while (iVar10 < 5);
  if (*(short *)(param_1 + 0x1b2) != 0) {
    *(short *)(param_1 + 0x1b2) = *(short *)(param_1 + 0x1b2) + -1;
  }
  fVar22 = DAT_001efca4;
  if (*(short *)(param_1 + 0x1b4) != 0) {
    *(short *)(param_1 + 0x1b4) = *(short *)(param_1 + 0x1b4) + -1;
  }
  uVar15 = DAT_001efcb8;
  iVar11 = *(int *)(param_1 + 0x1a4);
  iVar10 = iVar9;
  if (iVar11 != iVar9 && iVar11 != iVar4) {
    iVar10 = DAT_001efca8;
  }
  if ((((iVar11 == iVar9 || iVar11 == iVar4) || iVar11 == iVar10) &&
      ((uint)(DAT_001efcac +
             (short)((*(short *)(iVar17 + 0xbe) - *(short *)(param_1 + 0x92)) + -0x8000)) <
       DAT_001efcb0)) && (*(char *)(DAT_001efcb4 + iVar17) != '\0')) {
    *(int *)(param_1 + 0x1a4) = DAT_001efca0;
    FUN_00374a58(uVar15,param_1 + 0x5c0,0xd);
    uVar15 = FUN_0036ae14(param_1 + 0x5c0,0xd);
    uVar15 = VectorSignedToFloat(uVar15,(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_1 + 0x1fc) = uVar15;
    *(float *)(param_1 + 0x6c) = fVar22;
    FUN_003731e0(param_1 + 0x5c0);
    *(undefined2 *)(param_1 + 0x1d0) = 0x1e;
  }
  (**(code **)(param_1 + 0x1a4))(param_1,param_2);
  puVar5 = DAT_001efcc0;
  if (*(int *)(DAT_001efcbc + param_2) != *(int *)(DAT_001efcc0 + 0xa0)) {
    *(int *)(DAT_001efcc0 + 0xa0) = *(int *)(DAT_001efcbc + param_2);
    FUN_003fd798(DAT_001efcc4);
    fVar21 = DAT_001efcd0;
    psVar13 = DAT_001efccc;
    iVar17 = DAT_001efcc8;
    cVar1 = *(char *)(DAT_001efcc8 + 0x69);
    if (cVar1 != '\0') {
      if (cVar1 == '\x01') {
        pfVar16 = (float *)(DAT_001efcc8 + 0x34);
        cVar1 = *(char *)(DAT_001efcc8 + 0x68) + (char)*(undefined2 *)(puVar5 + 0x10);
        *(char *)(DAT_001efcc8 + 0x68) = cVar1;
        cVar7 = cVar1;
        if ('2' < cVar1) {
          cVar7 = '\x02';
        }
        pfVar14 = (float *)(psVar13 + -0x1a);
        iVar9 = 0xd;
        if ('2' < cVar1) {
          *(char *)(iVar17 + 0x69) = cVar7;
        }
        do {
          iVar10 = (int)(short)((short)*(char *)(iVar17 + 0x68) - *psVar13);
          if (iVar10 < 0) {
            iVar10 = 0;
          }
          else if (10 < iVar10) {
            iVar10 = 10;
          }
          fVar24 = *pfVar14;
          pfVar14 = pfVar14 + 1;
          iVar9 = iVar9 + -1;
          fVar25 = (float)VectorSignedToFloat(iVar10,(byte)(in_fpscr >> 0x15) & 3);
          *pfVar16 = fVar24 * fVar25 * fVar21;
          psVar13 = psVar13 + 1;
          pfVar16 = pfVar16 + 1;
        } while (iVar9 != 0);
      }
      else if ((cVar1 != '\x02') && (cVar1 == '\x03')) {
        fVar21 = *(float *)(DAT_001efcc8 + 0x6c) - *(float *)(puVar5 + 0x60);
        *(float *)(DAT_001efcc8 + 0x6c) = fVar21;
        in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar21 == fVar22) << 0x1e |
                   (uint)(fVar22 <= fVar21) << 0x1d;
        bVar2 = (byte)(in_fpscr >> 0x18);
        if (!(bool)(bVar2 >> 5 & 1) || (bool)(bVar2 >> 6)) {
          *(float *)(iVar17 + 0x6c) = fVar22;
          *(undefined1 *)(iVar17 + 0x74) = 0;
          *(undefined1 *)(iVar17 + 0x69) = 0;
        }
      }
    }
  }
  if (*(int *)(param_1 + 0x1a4) != DAT_001efcd4) {
    *(undefined4 *)(param_1 + 0x7c0) = DAT_001efcd8;
    uVar15 = DAT_001efcdc;
    if (*(int *)(param_1 + 0x1a4) == iVar4) {
      *(undefined4 *)(param_1 + 0x7c0) = DAT_001efce0;
    }
    *(undefined4 *)(param_1 + 0x7c4) = DAT_001efce4;
    *(undefined4 *)(param_1 + 0x7c8) = DAT_001efce8;
    if (*(short *)(param_1 + 0x1b2) == 0) {
      if ((*(byte *)(param_1 + 0x791) & 2) != 0) {
        *(byte *)(param_1 + 0x791) = *(byte *)(param_1 + 0x791) & 0xfd;
        local_44 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x7a6),
                                              (byte)(in_fpscr >> 0x15) & 3);
        local_40 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x7a8),
                                              (byte)(in_fpscr >> 0x15) & 3);
        local_3c = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x7aa),
                                              (byte)(in_fpscr >> 0x15) & 3);
        FUN_003741e4(param_2,**(undefined4 **)(param_1 + 0x7bc),2,&local_44,0);
        FUN_0033af2c(param_2,&local_44,*puVar5);
      }
      FUN_0037632c(param_1,param_1 + 0x780);
      FUN_00376168(param_2,param_2 + 0x5c78,param_1 + 0x780);
      FUN_003761f0(param_2,param_2 + 0x5c78,param_1 + 0x780);
    }
    fVar21 = DAT_001eff4c;
    if (*(short *)(param_1 + 0x1c) == 0) {
      *(float *)(param_1 + 0x1e0) = *(float *)(param_1 + 0x1e0) + fVar3;
      *(float *)(param_1 + 0x1f0) = *(float *)(param_1 + 0x1f0) - DAT_001eff44;
      *(float *)(param_1 + 500) = *(float *)(param_1 + 500) + fVar3;
    }
    else {
      *(float *)(param_1 + 0x1f0) = *(float *)(param_1 + 0x1f0) + DAT_001eff48;
      *(float *)(param_1 + 0x1f8) = *(float *)(param_1 + 0x1f8) + fVar21;
    }
    if ((*(ushort *)(param_1 + 0x1aa) & 0x1f) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
    sVar8 = *(short *)(param_1 + 0x1b0);
    iVar17 = (int)sVar8;
    if (iVar17 != 0) {
      sVar8 = sVar8 + -1;
    }
    *(undefined2 *)(DAT_001eff58 + param_1) = *(undefined2 *)(DAT_001eff54 + iVar17 * 2);
    if (iVar17 != 0) {
      *(short *)(param_1 + 0x1b0) = sVar8;
    }
    uVar6 = DAT_001eff68;
    fVar3 = DAT_001eff64;
    uVar20 = DAT_001eff60;
    uVar12 = *(uint *)(param_1 + 0x1a4);
    bVar18 = uVar12 != DAT_001eff5c;
    if (bVar18) {
      uVar12 = (uint)*(byte *)(param_1 + 0x7d8);
    }
    if (bVar18 && uVar12 != 0) {
      local_50 = fVar22;
      local_4c = fVar22;
      local_48 = fVar22;
      local_5c = fVar22;
      local_58 = fVar22;
      local_54 = fVar22;
      fVar21 = *(float *)(param_1 + 0x528);
      uVar12 = in_fpscr & 0xfffffff | (uint)(fVar21 < fVar22) << 0x1f |
               (uint)(fVar21 == fVar22) << 0x1e;
      uVar19 = uVar12 | (uint)(NAN(fVar21) || NAN(fVar22)) << 0x1c;
      bVar2 = (byte)(uVar12 >> 0x18);
      if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(uVar19 >> 0x1c) & 1)) {
        iVar17 = 0;
        do {
          local_44 = *(float *)(param_1 + 0x4a8);
          local_40 = *(float *)(param_1 + 0x4ac);
          local_3c = *(float *)(param_1 + 0x4b0);
          fVar22 = (float)FUN_003738a8(uVar20);
          local_44 = fVar22 + local_44;
          fVar22 = (float)FUN_003738a8(uVar20);
          local_40 = fVar22 + local_40;
          fVar22 = (float)FUN_003738a8(uVar20);
          local_3c = fVar22 + local_3c;
          local_58 = fVar3;
          local_5c = (float)FUN_003738a8(uVar6);
          local_54 = (float)FUN_003738a8(uVar6);
          fVar22 = (float)FUN_00371e50(uVar15);
          uVar23 = VectorSignedToFloat((short)(int)fVar22 + 8,(byte)(uVar19 >> 0x15) & 3);
          FUN_0035ec30(uVar23,param_2,&local_44,&local_50,&local_5c,(int)*(short *)(param_1 + 0x1c),
                       0x25);
          iVar17 = iVar17 + 1;
        } while (iVar17 < 1);
      }
      iVar17 = 0;
      do {
        local_44 = *(float *)(param_1 + 0x49c);
        local_40 = *(float *)(param_1 + 0x4a0);
        local_3c = *(float *)(param_1 + 0x4a4);
        fVar22 = (float)FUN_003738a8(uVar20);
        local_44 = fVar22 + local_44;
        fVar22 = (float)FUN_003738a8(uVar20);
        local_40 = fVar22 + local_40;
        fVar22 = (float)FUN_003738a8(uVar20);
        local_3c = fVar22 + local_3c;
        local_58 = fVar3;
        local_5c = (float)FUN_003738a8(uVar6);
        local_54 = (float)FUN_003738a8(uVar6);
        fVar22 = (float)FUN_00371e50(uVar15);
        uVar23 = VectorSignedToFloat((short)(int)fVar22 + 8,(byte)(uVar19 >> 0x15) & 3);
        FUN_0035ec30(uVar23,param_2,&local_44,&local_50,&local_5c,(int)*(short *)(param_1 + 0x1c),
                     0x25);
        iVar17 = iVar17 + 1;
      } while (iVar17 < 1);
    }
  }
  return;
}
