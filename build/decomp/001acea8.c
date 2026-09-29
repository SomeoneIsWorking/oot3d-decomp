// OoT3D decomp @ 001acea8  name=FUN_001acea8  size=2216

void FUN_001acea8(int param_1,int param_2)

{
  ushort uVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined2 uVar12;
  uint uVar13;
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined4 *puVar18;
  undefined4 uVar19;
  uint *puVar20;
  bool bVar21;
  uint in_fpscr;
  float fVar22;
  float fVar23;
  undefined4 local_54;
  float local_50;
  undefined4 uStack_4c;
  float local_48;
  float local_44;
  float local_40;

  uVar5 = DAT_001ad1b0;
  uVar4 = DAT_001ad1ac;
  if (*(char *)(param_1 + 0x5a4) != '\0') {
    *(char *)(param_1 + 0x5a4) = *(char *)(param_1 + 0x5a4) + -1;
  }
  uVar8 = DAT_001ad1bc;
  fVar7 = DAT_001ad1b8;
  uVar6 = DAT_001ad1b4;
  if (*(short *)(param_1 + 0x1c) == 0) goto LAB_001ad38c;
  if (*(short *)(param_1 + 0x45a) != 0) {
    if ((*(byte *)(param_1 + 0x485) & 2) != 0) {
      *(byte *)(param_1 + 0x485) = *(byte *)(param_1 + 0x485) & 0xfd;
      local_48 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x49a),
                                            (byte)(in_fpscr >> 0x15) & 3);
      local_44 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x49c),
                                            (byte)(in_fpscr >> 0x15) & 3);
      local_40 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x49e),
                                            (byte)(in_fpscr >> 0x15) & 3);
      FUN_003741e4(param_2,**(undefined4 **)(param_1 + 0x4b0),1,&local_48,0);
    }
    goto LAB_001ad38c;
  }
  if ((*(byte *)(param_1 + 0x4dd) & 0x80) != 0) {
    if (*(int *)(param_1 + 0x448) != 3) {
      *(byte *)(param_1 + 0x4dd) = *(byte *)(param_1 + 0x4dd) & 0x7d;
      *(byte *)(param_1 + 0x485) = *(byte *)(param_1 + 0x485) & 0xfd;
      puVar18 = *(undefined4 **)(param_1 + 0x508);
      local_48 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x4f2),
                                            (byte)(in_fpscr >> 0x15) & 3);
      local_40 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x4f6),
                                            (byte)(in_fpscr >> 0x15) & 3);
      local_44 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x4f4),
                                            (byte)(in_fpscr >> 0x15) & 3);
      FUN_003741e4(param_2,*puVar18,1,&local_48,0);
      FUN_00342af8(param_2,&local_48,param_1 + 0x28,*(undefined1 *)((int)puVar18 + 0x15),1);
      if (4 < *(int *)(param_1 + 0x448)) {
        FUN_00375c08(uVar6,uVar4,uVar5,uVar4,param_1 + 0x1bc,1,2);
        *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x92);
        iVar15 = FUN_00363108(uVar8,param_1,param_2);
        if (iVar15 != 0) {
          *(undefined4 *)(param_1 + 0x6c) = uVar8;
        }
        *(undefined2 *)(param_1 + 0x45e) = 0;
        *(undefined2 *)(param_1 + 0x452) = 0;
        *(undefined2 *)(param_1 + 0x454) = 8;
        *(undefined4 *)(param_1 + 0x448) = 8;
        *(undefined4 *)(param_1 + 0x44c) = DAT_001ad1c0;
      }
    }
    goto LAB_001ad38c;
  }
  if ((((*(byte *)(param_1 + 0x485) & 2) == 0) || (uVar19 = 1, *(int *)(param_1 + 0x448) < 5)) ||
     (*(byte *)(param_1 + 0x485) = *(byte *)(param_1 + 0x485) & 0xfd,
     *(char *)(param_1 + 0xb9) == '\x0e')) goto LAB_001ad38c;
  *(undefined2 *)(param_1 + 0x45e) = 0;
  *(undefined1 *)(param_1 + 0x465) = *(undefined1 *)(param_1 + 0xb9);
  FUN_00375fd0(param_1,param_1 + 0x48c,0);
  uVar13 = (uint)*(byte *)(param_1 + 0xb9);
  if ((uVar13 == 1 || uVar13 == 6) || uVar13 == 0xd) {
    if (*(int *)(param_1 + 0x448) == 6) {
      if (uVar13 == 6) {
        local_54 = *(undefined4 *)(param_1 + 0x28);
        uStack_4c = *(undefined4 *)(param_1 + 0x30);
        local_50 = *(float *)(param_1 + 0x2c) + DAT_001ad5ac;
        FUN_00375f90(param_2,&local_54,8);
      }
    }
    else {
      uVar14 = FUN_0036ae14(param_1 + 0x1bc,2);
      uVar14 = VectorSignedToFloat(uVar14,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00375c08(uVar6,uVar4,uVar14,uVar4,param_1 + 0x1bc,2);
      *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x92);
      iVar15 = FUN_00363108(uVar8,param_1,param_2);
      if (iVar15 != 0) {
        *(undefined4 *)(param_1 + 0x6c) = uVar8;
      }
      FUN_00375ed8(param_1,0,0x78,0,100);
      uVar14 = DAT_001ad1c4;
      if (*(char *)(param_1 + 0x465) == '\r') {
        *(undefined2 *)(param_1 + 0x458) = 0x48;
      }
      *(undefined4 *)(param_1 + 0x448) = 6;
      FUN_00375bcc(param_1,uVar14);
      *(undefined4 *)(param_1 + 0x44c) = DAT_001ad1c8;
      if (*(char *)(param_1 + 0xb8) != '\0') {
        *(undefined1 *)(param_1 + 0xb7) = 0;
        goto LAB_001ad2a8;
      }
    }
  }
  else {
    bVar21 = uVar13 != 0xf;
    if (bVar21) {
      uVar13 = *(uint *)(param_1 + 0x448);
    }
    if (bVar21 && uVar13 != 6) {
      FUN_00375c08(uVar6,uVar4,uVar5,uVar4,param_1 + 0x1bc,1,2);
      *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x92);
      iVar15 = FUN_00363108(uVar8,param_1,param_2);
      if (iVar15 != 0) {
        *(undefined4 *)(param_1 + 0x6c) = uVar8;
      }
      uVar14 = DAT_001ad1c0;
      *(undefined2 *)(param_1 + 0x45e) = 0;
      *(undefined2 *)(param_1 + 0x452) = 0;
      *(undefined2 *)(param_1 + 0x454) = 8;
      *(undefined4 *)(param_1 + 0x44c) = uVar14;
      *(undefined4 *)(param_1 + 0x448) = 8;
    }
    else {
      *(undefined1 *)(param_1 + 0xb7) = 0;
      uVar19 = FUN_0036ae14(param_1 + 0x1bc,2);
      fVar23 = (float)VectorSignedToFloat(uVar19,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00375c08(uVar6,DAT_001ad5b0,fVar23 - fVar7,uVar4,param_1 + 0x1bc,2);
      *(undefined4 *)(param_1 + 0x448) = 1;
      uVar19 = DAT_001ad5b4;
      *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x92);
      FUN_00375bcc(param_1,uVar19);
      iVar15 = FUN_00363108(uVar8,param_1,param_2,(int)*(short *)(param_1 + 0x36));
      if (iVar15 != 0) {
        *(undefined4 *)(param_1 + 0x6c) = uVar8;
      }
      *(undefined2 *)(param_1 + 0x11a) = 0;
      FUN_00375b70(param_2,param_1);
      *(undefined4 *)(param_1 + 0x44c) = DAT_001ad5b8;
LAB_001ad2a8:
      uVar19 = 0;
    }
  }
  puVar20 = *(uint **)(param_1 + 0x4b0);
  local_48 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x49a),
                                        (byte)(in_fpscr >> 0x15) & 3);
  local_44 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x49c),
                                        (byte)(in_fpscr >> 0x15) & 3);
  local_40 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x49e),
                                        (byte)(in_fpscr >> 0x15) & 3);
  FUN_003741e4(param_2,*puVar20,uVar19,&local_48,0);
  if ((*puVar20 & 0x100) != 0) {
    FUN_0037547c(DAT_001ad5c4,*(int *)(param_1 + 0x47c) + 0x28,4,DAT_001ad5c0,DAT_001ad5c0,
                 DAT_001ad5bc);
  }
LAB_001ad38c:
  if (*(short *)(param_1 + 0x462) != 0) {
    *(short *)(param_1 + 0x462) = *(short *)(param_1 + 0x462) + -1;
  }
  if (*(char *)(param_1 + 0xb9) != '\x0e') {
    if (*(short *)(param_1 + 0x456) != 0) {
      *(short *)(param_1 + 0x456) = *(short *)(param_1 + 0x456) + -1;
    }
    (**(code **)(param_1 + 0x44c))(param_1,param_2);
    if (*(short *)(param_1 + 0x45a) != 0) {
      uVar1 = *(short *)(param_1 + 0x45a) - 1;
      *(ushort *)(param_1 + 0x45a) = uVar1;
      if (uVar1 == 0) {
        if (((*(uint *)(DAT_001ad5c8 + 0x18) & 1) == 0) &&
           (iVar15 = FUN_003679b4(DAT_001ad5cc), puVar18 = DAT_001ad5d0, iVar15 != 0)) {
          *DAT_001ad5d0 = uVar4;
          puVar18[1] = uVar4;
          puVar18[2] = uVar4;
        }
        fVar23 = (float)VectorUnsignedToFloat
                                  (*(int *)(DAT_001ad5d4 + param_2) * 10,
                                   (byte)(in_fpscr >> 0x15) & 3);
        if (*(short *)(param_1 + 0x462) == 0) {
          FUN_0035a534(param_1,param_2,1);
          uVar12 = 1;
          if (*(short *)(param_1 + 0x460) == 0) {
            *(undefined2 *)(param_1 + 0x460) = 1;
            uVar12 = 2;
          }
          else {
            *(undefined2 *)(param_1 + 0x460) = 0;
          }
          *(undefined2 *)(param_1 + 0x462) = uVar12;
        }
        else {
          FUN_0035a534(param_1,param_2,0);
        }
        local_54 = 1;
        iVar15 = z_actor_003738d0(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                                  *(undefined4 *)(param_1 + 0x30),param_2 + 0x208c,param_2,0x10,0,0,
                                  2,0);
        uVar4 = DAT_001ad5d8;
        if (iVar15 != 0) {
          *(undefined2 *)(iVar15 + 0x26c) = 0;
        }
        FUN_00375bcc(param_1,uVar4);
        FUN_00374444(param_2,param_1,param_1 + 0x28,0xa0);
        fVar11 = DAT_001ad5e8;
        fVar10 = DAT_001ad5e4;
        uVar4 = DAT_001ad5e0;
        fVar9 = DAT_001ad5dc;
        iVar15 = 9;
        do {
          fVar22 = (float)FUN_003727f0(fVar23);
          local_48 = *(float *)(param_1 + 0x28) + fVar22 * fVar9;
          fVar22 = (float)FUN_003738a8(uVar4);
          local_44 = fVar10 + fVar22 * fVar7 + *(float *)(param_1 + 0x2c);
          fVar22 = (float)FUN_00372674(fVar23);
          local_40 = *(float *)(param_1 + 0x30) + fVar22 * fVar9;
          local_54 = 0x2d;
          local_50 = 1.68156e-44;
          FUN_00365d20(param_2,&local_48,DAT_001ad5d0,DAT_001ad5d0,DAT_001ad5ec + -4,DAT_001ad5ec,
                       200);
          fVar23 = fVar23 + fVar11;
          iVar15 = iVar15 + -1;
        } while (-1 < iVar15);
        FUN_00374428(param_1);
        return;
      }
      if ((uVar1 & 5) == 0) {
        FUN_00375ed8(param_1,0x400000,0xff,0,4);
      }
    }
    FUN_00376864(param_1);
    FUN_00376340(DAT_001ad7bc,DAT_001ad7b8,DAT_001ad7b4,param_2,param_1,0x1d);
  }
  FUN_0037632c(param_1);
  FUN_0037632c(param_1);
  iVar15 = param_2 + 0x5c78;
  FUN_003762a4(param_2,iVar15,param_1 + 0x474);
  if (*(short *)(param_1 + 0x1c) != 0) {
    FUN_0037322c(*(float *)(param_1 + 0x54) * DAT_001ad7c0,param_1);
    if (*(short *)(param_1 + 0x11a) == 0) {
      FUN_00376168(param_2,iVar15,param_1 + 0x4cc);
    }
    FUN_00376168(param_2,iVar15,param_1 + 0x474);
    iVar16 = *(int *)(param_1 + 0x448);
    bVar21 = iVar16 == 4;
    iVar17 = iVar16;
    if (3 < iVar16) {
      iVar17 = (int)*(short *)(param_1 + 0x45e);
    }
    iVar3 = iVar16 + -4;
    if (iVar16 >= 4) {
      bVar21 = iVar17 == 0;
      iVar3 = iVar17;
    }
    if (bVar21 || iVar3 < 0 != (iVar16 < 4 && SBORROW4(iVar16,4))) {
      return;
    }
    bVar2 = *(byte *)(param_1 + 0x534);
    if ((bVar2 & 4) != 0) {
      *(byte *)(param_1 + 0x534) = bVar2 & 0xf9;
      *(undefined4 *)(param_1 + 0x528) = 0;
      FUN_00375c08(uVar6,uVar4,uVar5,uVar4,param_1 + 0x1bc,1,2);
      *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x92);
      iVar15 = FUN_00363108(uVar8,param_1,param_2);
      if (iVar15 != 0) {
        *(undefined4 *)(param_1 + 0x6c) = uVar8;
      }
      *(undefined2 *)(param_1 + 0x45e) = 0;
      *(undefined2 *)(param_1 + 0x452) = 0;
      *(undefined2 *)(param_1 + 0x454) = 8;
      *(undefined4 *)(param_1 + 0x448) = 8;
      *(undefined4 *)(param_1 + 0x44c) = DAT_001ad1c0;
      return;
    }
    if (((bVar2 & 2) != 0) && (*(int *)(param_1 + 0x528) == *(int *)(DAT_001ad7c4 + param_2))) {
      FUN_00375bcc(*(int *)(DAT_001ad7c4 + param_2),DAT_001ad7c8);
    }
    FUN_003761f0(param_2,iVar15,param_1 + 0x524);
    return;
  }
  FUN_003762a4(param_2,iVar15,param_1 + 0x4cc);
  return;
}
