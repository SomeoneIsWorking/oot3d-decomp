// OoT3D decomp @ 0018741c  name=FUN_0018741c  size=2308

void FUN_0018741c(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  short sVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  int iVar10;
  undefined4 uVar11;
  uint *puVar12;
  undefined4 uVar13;
  int iVar14;
  bool bVar15;
  bool bVar16;
  uint in_fpscr;
  undefined4 uVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  float local_5c;
  float local_58;
  float local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;

  iVar14 = *(int *)(DAT_0018783c + param_2);
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffbff;
  *(undefined1 *)(param_1 + 0x7d8) = 0;
  *(undefined1 *)(param_1 + 0x794) = 3;
  uVar11 = DAT_00187844;
  uVar17 = VectorUnsignedToFloat((uint)*(byte *)(param_2 + 0xa82),(byte)(in_fpscr >> 0x15) & 3);
  FUN_00373500(uVar17,param_1 + 0x22c);
  uVar17 = VectorUnsignedToFloat((uint)*(byte *)(param_2 + 0xa83),(byte)(in_fpscr >> 0x15) & 3);
  FUN_00373500(uVar17,param_1 + 0x230);
  uVar17 = VectorUnsignedToFloat((uint)*(byte *)(param_2 + 0xa84),(byte)(in_fpscr >> 0x15) & 3);
  FUN_00373500(uVar17,param_1 + 0x234);
  uVar17 = VectorUnsignedToFloat
                     ((uint)*(ushort *)(DAT_00187848 + param_2),(byte)(in_fpscr >> 0x15) & 3);
  FUN_00373500(uVar17,param_1 + 0x238);
  FUN_00373500(DAT_0018784c,param_1 + 0x23c);
  *(short *)(param_1 + 0x1a8) = *(short *)(param_1 + 0x1a8) + 1;
  *(short *)(param_1 + 0x1aa) = *(short *)(param_1 + 0x1aa) + 1;
  iVar7 = 0;
  do {
    iVar10 = param_1 + iVar7 * 2;
    sVar6 = *(short *)(iVar10 + 0x1d0);
    iVar7 = (int)(short)((short)iVar7 + 1);
    if (sVar6 != 0) {
      *(short *)(iVar10 + 0x1d0) = sVar6 + -1;
    }
  } while (iVar7 < 5);
  if (*(short *)(param_1 + 0x1b2) != 0) {
    *(short *)(param_1 + 0x1b2) = *(short *)(param_1 + 0x1b2) + -1;
  }
  if (*(short *)(param_1 + 0x1b4) != 0) {
    *(short *)(param_1 + 0x1b4) = *(short *)(param_1 + 0x1b4) + -1;
  }
  (**(code **)(param_1 + 0x1a4))(param_1,param_2);
  uVar17 = DAT_00187854;
  uVar8 = *(uint *)(param_1 + 0x1a4);
  bVar16 = uVar8 != DAT_00187850;
  uVar2 = DAT_00187850;
  if (bVar16) {
    uVar2 = DAT_00187858;
  }
  bVar15 = uVar8 != uVar2;
  if (bVar16 && bVar15) {
    uVar8 = (uint)*(byte *)(param_1 + 0x5bc);
  }
  if (((((bVar16 && bVar15) && uVar8 != 0) && (*(char *)(param_1 + 0x7d8) == '\0')) &&
      ((uint)(DAT_0018785c +
             (short)((*(short *)(iVar14 + 0xbe) - *(short *)(param_1 + 0x92)) + -0x8000)) <
       DAT_00187860)) && (*(char *)(DAT_00187864 + iVar14) != '\0')) {
    *(int *)(param_1 + 0x1a4) = DAT_00187868;
    FUN_00370350(uVar17,param_1 + 0x5c0,0x15);
    *(undefined4 *)(param_1 + 0x6c) = uVar17;
    *(undefined2 *)(param_1 + 0x1d0) = 0x1e;
  }
  iVar7 = DAT_00187870;
  sVar6 = *(short *)(param_1 + 0x1b0);
  iVar10 = (int)sVar6;
  if (iVar10 != 0) {
    sVar6 = sVar6 + -1;
  }
  *(undefined2 *)(param_1 + 0x524) = *(undefined2 *)(DAT_0018786c + iVar10 * 2);
  if (iVar10 != 0) {
    *(short *)(param_1 + 0x1b0) = sVar6;
  }
  if (((*(ushort *)(param_1 + 0x1aa) & 0x1f) == 0) && (*(int *)(param_1 + 0x1a4) != iVar7)) {
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  iVar10 = *(int *)(param_1 + 0x1a4);
  if (iVar10 == iVar7) {
    sVar6 = *(short *)(param_1 + 0x1ba);
    iVar7 = (int)sVar6;
    if (iVar7 != 0) {
      sVar6 = sVar6 + -1;
    }
    *(undefined2 *)(param_1 + 0x526) = *(undefined2 *)(DAT_00187878 + iVar7 * 2);
    if (iVar7 != 0) {
      *(short *)(param_1 + 0x1ba) = sVar6;
    }
  }
  else {
    if (iVar10 == DAT_0018787c) {
      *(undefined2 *)(param_1 + 0x524) = 1;
    }
    if (iVar10 == DAT_00187880) {
      *(undefined2 *)(param_1 + 0x524) = 2;
    }
    *(undefined2 *)(param_1 + 0x526) = *(undefined2 *)(param_1 + 0x524);
  }
  uVar13 = DAT_0018788c;
  fVar20 = DAT_00187888;
  fVar3 = DAT_00187884;
  if ((*(char *)(param_1 + 0x5bc) != '\0') && (*(char *)(param_1 + 0x7d8) == '\0')) {
    local_68 = uVar17;
    local_64 = uVar17;
    local_60 = uVar17;
    if ((*(short *)(param_1 + 0x1b8) != 0) &&
       (sVar6 = *(short *)(param_1 + 0x1b8) + -0x14, *(short *)(param_1 + 0x1b8) = sVar6, sVar6 < 0)
       ) {
      *(undefined2 *)(param_1 + 0x1b8) = 0;
    }
    FUN_00373500(uVar11,uVar11,fVar3,param_1 + 0x20c);
    uVar4 = DAT_00187894;
    local_70 = DAT_00187890;
    sVar6 = 0;
    do {
      local_5c = *(float *)(param_1 + 0x4f0);
      local_58 = *(float *)(param_1 + 0x4f4);
      local_54 = *(float *)(param_1 + 0x4f8);
      fVar18 = (float)FUN_003738a8(uVar4);
      local_5c = fVar18 + local_5c;
      fVar18 = (float)FUN_003738a8(uVar4);
      local_58 = fVar18 + local_58;
      fVar18 = (float)FUN_003738a8(uVar4);
      local_54 = fVar18 + local_54;
      local_74 = FUN_003738a8(fVar20);
      local_6c = FUN_003738a8(fVar20);
      fVar18 = (float)FUN_00371e50(uVar13);
      uVar19 = VectorSignedToFloat((short)(int)fVar18 + 7,(byte)(in_fpscr >> 0x15) & 3);
      FUN_0035ec30(uVar19,param_2,&local_5c,&local_68,&local_74,0,0x4b);
      sVar6 = sVar6 + 1;
    } while (sVar6 < 2);
    sVar6 = 0;
    do {
      local_5c = *(float *)(param_1 + 0x4fc);
      local_58 = *(float *)(param_1 + 0x500);
      local_54 = *(float *)(param_1 + 0x504);
      fVar18 = (float)FUN_003738a8(uVar4);
      local_5c = fVar18 + local_5c;
      fVar18 = (float)FUN_003738a8(uVar4);
      local_58 = fVar18 + local_58;
      fVar18 = (float)FUN_003738a8(uVar4);
      local_54 = fVar18 + local_54;
      local_74 = FUN_003738a8(fVar20);
      local_6c = FUN_003738a8(fVar20);
      fVar18 = (float)FUN_00371e50(uVar13);
      uVar19 = VectorSignedToFloat((short)(int)fVar18 + 7,(byte)(in_fpscr >> 0x15) & 3);
      FUN_0035ec30(uVar19,param_2,&local_5c,&local_68,&local_74,1,0x4b);
      sVar6 = sVar6 + 1;
    } while (sVar6 < 2);
  }
  iVar7 = DAT_00187868;
  *(undefined4 *)(param_1 + 0x7c0) = DAT_00187bcc;
  if (*(int *)(param_1 + 0x1a4) == iVar7) {
    *(undefined4 *)(param_1 + 0x7c0) = DAT_00187bd0;
  }
  *(undefined4 *)(param_1 + 0x7c4) = DAT_00187bd4;
  *(undefined4 *)(param_1 + 0x7c8) = DAT_00187bd8;
  FUN_0037632c(param_1,param_1 + 0x780);
  iVar7 = DAT_00187bdc;
  if (*(short *)(param_1 + 0x1b2) == 0) {
    if (*(int *)(param_1 + 0x1a4) == DAT_0018787c) {
      if ((*(byte *)(param_1 + 0x791) & 2) != 0) {
        *(byte *)(param_1 + 0x791) = *(byte *)(param_1 + 0x791) & 0xfd;
        puVar12 = *(uint **)(param_1 + 0x7bc);
        iVar10 = FUN_003656fc(param_2,*puVar12);
        bVar16 = iVar10 == 0;
        if (bVar16) {
          iVar10 = 2;
        }
        if ((*puVar12 & 0x80) == 0) {
          bVar15 = *(char *)(param_1 + 0xb7) == '\x02';
          if (*(char *)(param_1 + 0xb7) < '\x03') {
            bVar15 = bVar16;
          }
          if (bVar15) {
            iVar10 = 0;
          }
          FUN_00349270(param_1,param_2,iVar10);
          local_50 = VectorSignedToFloat((int)*(short *)(param_1 + 0x7a6),
                                         (byte)(in_fpscr >> 0x15) & 3);
          local_4c = VectorSignedToFloat((int)*(short *)(param_1 + 0x7a8),
                                         (byte)(in_fpscr >> 0x15) & 3);
          local_48 = VectorSignedToFloat((int)*(short *)(param_1 + 0x7aa),
                                         (byte)(in_fpscr >> 0x15) & 3);
          if (iVar10 == 0) {
            FUN_003741e4(param_2,*puVar12,1,&local_50,0);
            FUN_00375f90(param_2,&local_50,*(undefined1 *)(iVar7 + 1));
          }
          else {
            FUN_003741e4(param_2,*puVar12,0,&local_50,0);
          }
        }
      }
    }
    else if (*(char *)(param_1 + 0x54c) == '\0') {
      if ((*(byte *)(param_1 + 0x791) & 2) != 0) {
        *(byte *)(param_1 + 0x791) = *(byte *)(param_1 + 0x791) & 0xfd;
        local_50 = VectorSignedToFloat((int)*(short *)(param_1 + 0x7a6),(byte)(in_fpscr >> 0x15) & 3
                                      );
        local_4c = VectorSignedToFloat((int)*(short *)(param_1 + 0x7a8),(byte)(in_fpscr >> 0x15) & 3
                                      );
        local_48 = VectorSignedToFloat((int)*(short *)(param_1 + 0x7aa),(byte)(in_fpscr >> 0x15) & 3
                                      );
        FUN_003741e4(param_2,**(undefined4 **)(param_1 + 0x7bc),1,&local_50,0);
        FUN_00375f90(param_2,&local_50,*(undefined1 *)(iVar7 + 1));
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x54c) = 0;
      *(undefined2 *)(param_1 + 0x1b4) = 0xf;
      FUN_00349270(param_1,param_2,0);
      FUN_00375bcc(param_1,DAT_00187be0);
      FUN_00365560(param_2,0,0,param_1 + 0x3c,(int)(short)(int)*(float *)(iVar7 + 0x68));
    }
  }
  FUN_00376168(param_2,param_2 + 0x5c78,param_1 + 0x780);
  FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x780);
  *(undefined1 *)(param_2 + 0x325c) = 2;
  uVar13 = DAT_00187be4;
  switch(*(undefined1 *)(iVar7 + 2)) {
  case 0:
    FUN_0036fc20(uVar11,DAT_00187be8,param_2 + 0x3258);
    break;
  case 1:
    *(undefined1 *)(param_2 + 0x3235) = 3;
    FUN_00373500(fVar20,uVar11,fVar3,param_2 + 0x3258);
    break;
  case 2:
    *(undefined1 *)(param_2 + 0x3235) = 2;
    fVar18 = (float)FUN_002cfca0((int)(short)(*(short *)(param_1 + 0x1a8) * 0x3000));
    FUN_00373500(fVar20 + fVar18 * DAT_00187dcc,uVar11,fVar3,param_2 + 0x3258);
    break;
  case 3:
    *(undefined1 *)(param_2 + 0x3235) = 3;
    FUN_00373500(uVar11,uVar11,uVar13,param_2 + 0x3258);
    break;
  case 4:
    *(undefined1 *)(param_2 + 0x3235) = 2;
    fVar20 = (float)FUN_002cfca0((int)(short)(*(short *)(param_1 + 0x1a8) * 0x3e00));
    FUN_00373500(DAT_00187dd0 + fVar20 * fVar3,uVar11,uVar13,param_2 + 0x3258);
    break;
  case 5:
    *(undefined1 *)(param_2 + 0x3235) = 0;
    FUN_00373500(uVar11,uVar11,fVar3,param_2 + 0x3258);
  }
  FUN_0011598c(param_2);
  iVar10 = DAT_00187dd4;
  if (*(char *)(iVar7 + 9) == '\x01') {
    *(undefined1 *)(iVar7 + 9) = 2;
    sVar6 = 0;
    pcVar9 = *(char **)(iVar10 + param_2);
    do {
      if (*pcVar9 == '\0') {
        *pcVar9 = '\x05';
        puVar5 = DAT_00187dd8;
        uVar11 = DAT_00187dd8[1];
        uVar13 = DAT_00187dd8[2];
        *(undefined4 *)(pcVar9 + 0x10) = *DAT_00187dd8;
        *(undefined4 *)(pcVar9 + 0x14) = uVar11;
        *(undefined4 *)(pcVar9 + 0x18) = uVar13;
        uVar11 = puVar5[1];
        uVar13 = puVar5[2];
        *(undefined4 *)(pcVar9 + 0x1c) = *puVar5;
        *(undefined4 *)(pcVar9 + 0x20) = uVar11;
        *(undefined4 *)(pcVar9 + 0x24) = uVar13;
        pcVar9[1] = '\0';
        *(undefined4 *)(pcVar9 + 0x34) = uVar17;
        *(undefined4 *)(pcVar9 + 0x30) = uVar17;
        *(undefined4 *)(pcVar9 + 0x38) = uVar17;
        pcVar9[0x40] = '\0';
        pcVar9[0x41] = '\0';
        pcVar9[0x42] = '\0';
        pcVar9[0x43] = '\0';
        pcVar9[0x2c] = 'd';
        pcVar9[0x2d] = '\0';
        break;
      }
      sVar6 = sVar6 + 1;
      pcVar9 = pcVar9 + 0x48;
    } while (sVar6 < 0x96);
    FUN_0037547c(DAT_00187de4,iVar14 + 0x28,4,DAT_00187de0,DAT_00187de0,DAT_00187ddc);
    FUN_0037547c(DAT_00187de8,iVar14 + 0x28,4,DAT_00187de0,DAT_00187de0,DAT_00187ddc);
    if (*(char *)(iVar7 + 4) != '\0') {
      *(undefined1 *)(iVar7 + 4) = 4;
    }
  }
  bVar16 = *(char *)(DAT_00187dec + iVar14) != '\0';
  cVar1 = '\0';
  if (bVar16) {
    cVar1 = *(char *)(iVar7 + 5);
  }
  if (bVar16 && cVar1 != '\0') {
    *(undefined1 *)(iVar7 + 5) = 4;
  }
  return;
}
