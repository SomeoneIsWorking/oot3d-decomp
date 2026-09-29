// OoT3D decomp @ 00262258  name=FUN_00262258  size=1464

void FUN_00262258(int param_1,undefined4 param_2)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  undefined2 uVar11;
  short *psVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  int iVar16;
  int iVar17;
  uint *puVar18;
  bool bVar19;
  bool bVar20;
  uint in_fpscr;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;

  bVar2 = 0;
  local_40 = param_2;
  if (*(short *)(param_1 + 0x264) == 0) {
    iVar17 = 1;
    do {
      if ((*(byte *)(*(int *)(param_1 + 0xb94) + iVar17 * 0x50 + 0x16) & 2) != 0) {
        psVar12 = (short *)(*(int *)(param_1 + 0xb94) + iVar17 * 0x50 + 0xe);
        local_4c = VectorSignedToFloat((int)*psVar12,(byte)(in_fpscr >> 0x15) & 3);
        local_44 = VectorSignedToFloat((int)psVar12[2],(byte)(in_fpscr >> 0x15) & 3);
        local_48 = VectorSignedToFloat((int)psVar12[1],(byte)(in_fpscr >> 0x15) & 3);
        puVar18 = *(uint **)(*(int *)(param_1 + 0xb94) + iVar17 * 0x50 + 0x24);
        FUN_003741e4(param_2,*puVar18,2,&local_4c,0);
        puVar5 = DAT_00262778;
        if (((*puVar18 & 5) == 0) &&
           (cVar1 = DAT_00262778[iVar17 * 0x30 + 0x30],
           ((cVar1 != '\x1d' && cVar1 != '\x1e') && cVar1 != '\x1f') && cVar1 != ' ')) {
          FUN_003661a8(local_40,&local_4c,*DAT_00262778);
        }
        bVar2 = 1;
        *(undefined2 *)(param_1 + 0x264) = *(undefined2 *)(puVar5 + 2);
        iVar17 = FUN_003656fc(param_2,*puVar18);
        if (iVar17 != 0) {
          FUN_0032d674(param_2);
        }
        break;
      }
      iVar17 = iVar17 + 1;
    } while (iVar17 < 0xf);
  }
  else {
    *(short *)(param_1 + 0x264) = *(short *)(param_1 + 0x264) + -1;
  }
  if (*(short *)(param_1 + 0x256) != 0) {
    *(short *)(param_1 + 0x256) = *(short *)(param_1 + 0x256) + -1;
    return;
  }
  iVar17 = *(int *)(param_1 + 0xb94);
  bVar3 = 1;
  puVar18 = *(uint **)(iVar17 + 0x24);
  if (*(short *)(param_1 + 0x238) == 0) {
    uVar13 = *(uint *)(param_1 + 0x22c);
    bVar19 = uVar13 != DAT_0026277c;
    if (bVar19) {
      uVar13 = (uint)*(byte *)(iVar17 + 0x16);
    }
    if (bVar19 && (uVar13 & 2) != 0) {
      local_4c = VectorSignedToFloat((int)*(short *)(iVar17 + 0xe),(byte)(in_fpscr >> 0x15) & 3);
      local_44 = VectorSignedToFloat((int)*(short *)(iVar17 + 0x12),(byte)(in_fpscr >> 0x15) & 3);
      local_48 = VectorSignedToFloat((int)*(short *)(iVar17 + 0x10),(byte)(in_fpscr >> 0x15) & 3);
      iVar17 = FUN_003656fc(param_2,*puVar18);
      uVar10 = DAT_002627ac;
      uVar9 = DAT_002627a8;
      uVar8 = DAT_0026278c;
      uVar7 = DAT_00262788;
      uVar6 = DAT_00262784;
      uVar14 = *(uint *)(param_1 + 0x22c);
      bVar19 = uVar14 != DAT_00262780;
      uVar13 = DAT_00262780;
      if (bVar19) {
        uVar13 = DAT_00262790;
      }
      uVar4 = uVar13;
      if (bVar19 && uVar14 != uVar13) {
        uVar4 = DAT_00262794;
      }
      if ((bVar19 && uVar14 != uVar13) && uVar14 != uVar4) {
        if ((uVar14 == DAT_002627a8) && (iVar17 != 0)) {
          cVar1 = *(char *)(param_1 + 0xb7) - (char)iVar17;
          *(char *)(param_1 + 0xb7) = cVar1;
          if (cVar1 < '\x01') {
            uVar15 = FUN_0036ae14(param_1 + 0x1a4,9);
            uVar15 = VectorSignedToFloat(uVar15,(byte)(in_fpscr >> 0x15) & 3);
            FUN_00375c08(uVar7,uVar6,uVar15,uVar8,param_1 + 0x1a4,9,2);
            uVar7 = DAT_002627b4;
            *(undefined4 *)(param_1 + 0x1050) = uVar6;
            *(undefined4 *)(param_1 + 0x1054) = uVar6;
            *(undefined4 *)(param_1 + 0x22c) = uVar7;
            *(undefined2 *)(param_1 + 0x25a) = 1;
            *(undefined2 *)(param_1 + 0x25c) = 0;
            *(undefined2 *)(param_1 + 0x25e) = 0;
            *(undefined2 *)(param_1 + 0x26e) = 0x4b0;
            *(undefined2 *)(param_1 + 0x26c) = 0;
            *(undefined4 *)(param_1 + 0x6c) = uVar6;
            *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffa;
            *(undefined4 *)(param_1 + 0xcc) = uVar6;
            FUN_003655d0(0,1);
            FUN_00375b70(param_2,param_1);
          }
          else {
            FUN_00375bcc(param_1,DAT_002627b0);
            uVar15 = FUN_0036ae14(param_1 + 0x1a4,8);
            uVar15 = VectorSignedToFloat(uVar15,(byte)(in_fpscr >> 0x15) & 3);
            FUN_00375c08(uVar7,uVar6,uVar15,uVar8,param_1 + 0x1a4,8,2);
            *(undefined4 *)(param_1 + 0x1050) = uVar6;
            *(undefined4 *)(param_1 + 0x1054) = uVar6;
            *(uint *)(param_1 + 0x22c) = uVar10;
            FUN_00339f50(param_2,param_1 + 0x3c);
          }
          *(undefined2 *)(param_1 + 0x256) = 0xf;
          FUN_003741e4(local_40,*puVar18,0,&local_4c,0);
          FUN_0032d674(param_2);
          return;
        }
        bVar19 = uVar14 != DAT_002627a8;
        uVar13 = DAT_002627a8;
        if (bVar19) {
          uVar13 = (uint)*(ushort *)(param_1 + 0x232);
        }
        bVar20 = uVar13 != 0;
        if (bVar19 && bVar20) {
          uVar13 = *puVar18;
        }
        if ((bVar19 && bVar20) && (uVar13 & 5) != 0) {
          FUN_00375bcc(param_1,DAT_002627a0);
          FUN_0048961c(DAT_002627b8);
          *(undefined2 *)(param_1 + 0x256) = 0xf;
          uVar15 = FUN_0036ae14(param_1 + 0x1a4,0xb);
          uVar15 = VectorSignedToFloat(uVar15,(byte)(in_fpscr >> 0x15) & 3);
          FUN_00375c08(uVar7,uVar6,uVar15,uVar8,param_1 + 0x1a4,0xb,0);
          *(undefined4 *)(param_1 + 0x1050) = uVar6;
          *(undefined4 *)(param_1 + 0x1054) = uVar6;
          *(undefined4 *)(param_1 + 0x6c) = uVar6;
          *(undefined4 *)(param_1 + 100) = uVar6;
          *(undefined4 *)(param_1 + 0x70) = uVar8;
          *(uint *)(param_1 + 0x22c) = uVar9;
          *(undefined2 *)(param_1 + 0x272) = 0x96;
          if ((*puVar18 & 1) == 0) {
            uVar11 = 0x87;
          }
          else {
            uVar11 = 0x3c;
          }
          *(undefined2 *)(param_1 + 0x26e) = uVar11;
          *(undefined2 *)(param_1 + 0x270) = 6;
          FUN_0036fca8(param_1,param_2,4,0xc);
          FUN_00365560(local_40,*puVar18,0,&local_4c,0);
          return;
        }
        if (uVar14 == DAT_002627ac) {
          return;
        }
        FUN_00375bcc(param_1,DAT_002627a4);
        FUN_003741e4(local_40,*puVar18,1,&local_4c,0);
      }
      else {
        FUN_00375c08(DAT_00262788,DAT_00262784,DAT_00262784,DAT_00262798,param_1 + 0x1a4,6,2);
        uVar7 = DAT_002627a0;
        *(undefined4 *)(param_1 + 0x22c) = DAT_0026279c;
        *(undefined4 *)(param_1 + 0x6c) = uVar6;
        *(undefined4 *)(param_1 + 100) = uVar6;
        *(undefined4 *)(param_1 + 0x70) = uVar8;
        FUN_00375bcc(param_1,uVar7);
        FUN_00365560(local_40,*puVar18,0,&local_4c,0);
      }
      goto joined_r0x002627f4;
    }
  }
  if ((*(byte *)(iVar17 + 0x16) & 2) == 0) {
    iVar16 = 1;
    do {
      if (((*(byte *)(iVar17 + iVar16 * 0x50 + 0x16) & 2) != 0) ||
         ((*(byte *)(iVar17 + iVar16 * 0x50 + 0x66) & 2) != 0)) goto LAB_00262838;
      iVar16 = iVar16 + 2;
    } while (iVar16 < 0xf);
    bVar3 = 0;
LAB_00262838:
    if (!(bool)(bVar3 & bVar2)) {
      return;
    }
    FUN_00375bcc(param_1,DAT_002627a4);
    return;
  }
  local_4c = VectorSignedToFloat((int)*(short *)(iVar17 + 0xe),(byte)(in_fpscr >> 0x15) & 3);
  local_44 = VectorSignedToFloat((int)*(short *)(iVar17 + 0x12),(byte)(in_fpscr >> 0x15) & 3);
  local_48 = VectorSignedToFloat((int)*(short *)(iVar17 + 0x10),(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375bcc(param_1,DAT_002627a4);
  FUN_003741e4(local_40,*puVar18,1,&local_4c,0);
  iVar17 = FUN_003656fc(param_2,*puVar18);
joined_r0x002627f4:
  if (iVar17 != 0) {
    FUN_0032d674(param_2);
  }
  return;
}
