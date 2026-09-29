// OoT3D decomp @ 001df0a4  name=FUN_001df0a4  size=1988

void FUN_001df0a4(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  byte bVar4;
  ushort uVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  bool bVar10;
  bool bVar11;
  uint in_fpscr;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float local_b4;
  undefined4 local_b0;
  float local_ac;
  undefined4 local_a8;
  float local_a4;
  undefined4 uStack_a0;
  float local_9c;
  undefined4 local_98;
  float local_94;
  undefined4 local_90;
  float local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  float local_6c [9];
  int local_48;

  uVar16 = DAT_001df3f8;
  uVar15 = DAT_001df3f4;
  uVar2 = DAT_001df3f0;
  uVar1 = DAT_001df3ec;
  uVar5 = *(ushort *)(param_1 + 0xca2);
  if ((uVar5 & 0x10) == 0) {
    if (*(short *)(param_1 + 0xc02) != 0) {
      *(ushort *)(param_1 + 0xca2) = uVar5 | 0x10;
      uVar16 = DAT_001df3fc;
      if (*(short *)(param_1 + 0x1c) == 0) goto LAB_001df104;
      FUN_00347dd4(uVar1,param_1);
    }
  }
  else if (*(short *)(param_1 + 0xc02) == 0) {
    *(ushort *)(param_1 + 0xca2) = uVar5 & 0xffef;
    if (*(short *)(param_1 + 0x1c) == 0) {
LAB_001df104:
      FUN_00347dd4(uVar2,uVar16,param_1);
    }
    else {
      FUN_00347dd4(uVar1,uVar16,param_1);
    }
  }
  if (*(short *)(param_1 + 0xc0a) == 0) {
    uVar5 = (ushort)*(byte *)(param_1 + 0xca4);
    bVar10 = uVar5 == 0;
    if (bVar10) {
      uVar5 = *(ushort *)(param_1 + 0xc02);
    }
    if (!bVar10 || uVar5 != 0) {
      bVar4 = 0;
      bVar10 = (*(byte *)(param_1 + 0xa97) & 1) != 0;
      if (bVar10) {
        bVar4 = *(byte *)(param_1 + 0xa97) & 0xfe;
        *(byte *)(param_1 + 0xa97) = bVar4;
      }
      if (bVar10) {
        bVar4 = 1;
      }
      bVar10 = (*(byte *)(param_1 + 0xaef) & 1) != 0;
      if (bVar10) {
        bVar4 = *(byte *)(param_1 + 0xaef) & 0xfe;
        *(byte *)(param_1 + 0xaef) = bVar4;
      }
      if (bVar10) {
        bVar4 = 1;
      }
      if ((*(byte *)(param_1 + 0xb47) & 1) == 0) {
        if (bVar4 == 0) goto LAB_001df214;
      }
      else {
        *(byte *)(param_1 + 0xb47) = *(byte *)(param_1 + 0xb47) & 0xfe;
      }
      *(undefined2 *)(param_1 + 0xc04) = 0x1e;
      uVar1 = DAT_001df400;
      if (*(short *)(param_1 + 0xc0e) == 0) {
        *(undefined2 *)(param_1 + 0xc02) = 0x1e;
      }
      FUN_00375bcc(param_1,uVar1);
      FUN_00375bcc(param_1,DAT_001df404);
      (**(code **)(DAT_001df408 + param_2))(param_2,0xfffffff8);
      FUN_00374bb8(param_2,param_1,(int)*(short *)(param_1 + 0x92));
      *(char *)(param_1 + 0xca4) = *(char *)(param_1 + 0xca4) + -1;
    }
  }
LAB_001df214:
  uVar1 = DAT_001df414;
  if ((*(byte *)(param_1 + 0xa3d) & 2) == 0) {
    if (*(char *)(DAT_001df410 + param_2) == '\0') {
      bVar4 = 0;
      bVar10 = (*(byte *)(param_1 + 0x98d) & 2) != 0;
      if (bVar10) {
        bVar4 = *(byte *)(param_1 + 0x98d) & 0xfd;
        *(byte *)(param_1 + 0x98d) = bVar4;
      }
      if (bVar10) {
        bVar4 = 1;
      }
      if ((*(byte *)(param_1 + 0x9e5) & 2) == 0) {
        if (bVar4 == 0) goto LAB_001df35c;
      }
      else {
        *(byte *)(param_1 + 0x9e5) = *(byte *)(param_1 + 0x9e5) & 0xfd;
      }
      *(undefined2 *)(param_1 + 0xc06) = 8;
      if (*(char *)(param_1 + 0xca4) == '\0') {
        *(undefined1 *)(param_1 + 0xca4) = 1;
      }
      if (*(short *)(param_1 + 0xc0a) == 0) {
        FUN_00375bcc(param_1,uVar1);
        FUN_00375bcc(param_1,DAT_001df418);
        sVar6 = *(short *)(param_1 + 0xc0a);
        goto joined_r0x001df34c;
      }
    }
    else {
      *(undefined2 *)(param_1 + 0xc06) = 8;
      if (*(short *)(param_1 + 0xc0a) == 0) {
        FUN_00375bcc(param_1,uVar1);
        FUN_00375bcc(param_1,DAT_001df418);
        sVar6 = *(short *)(param_1 + 0xc0a);
joined_r0x001df34c:
        if (sVar6 == 0) {
          *(ushort *)(param_1 + 0xca2) = *(ushort *)(param_1 + 0xca2) | 8;
          *(undefined2 *)(param_1 + 0xc0a) = 0x78;
          *(undefined2 *)(param_1 + 0x11a) = 0;
        }
      }
    }
    *(ushort *)(param_1 + 0xca2) = *(ushort *)(param_1 + 0xca2) | 1;
  }
  else {
    *(byte *)(param_1 + 0xa3d) = *(byte *)(param_1 + 0xa3d) & 0xfd;
    *(undefined2 *)(param_1 + 0xc06) = 8;
    sVar6 = *(short *)(param_1 + 0xc0e);
    bVar10 = sVar6 == 0;
    if (bVar10) {
      sVar6 = *(short *)(param_1 + 0xc04);
    }
    bVar11 = bVar10 && sVar6 == 0;
    if (bVar10 && sVar6 == 0) {
      bVar11 = *(short *)(param_1 + 0xc0a) == 0;
    }
    if (bVar11) {
      *(undefined2 *)(param_1 + 0xc0e) = 0x3c;
    }
  }
LAB_001df35c:
  fVar3 = DAT_001df420;
  uVar1 = DAT_001df41c;
  if (*(short *)(param_1 + 0xc0a) == 0) {
    FUN_00370734(param_1 + 0x1a4);
    FUN_0036b96c(param_1);
    FUN_00376340(fVar3,fVar3,fVar3,param_2,param_1,4);
    (**(code **)(param_1 + 0x978))(param_1,param_2);
  }
  else if ((((*(short *)(param_1 + 0xc0a) == 0x78) && ((*(ushort *)(param_1 + 0xca2) & 1) != 0)) &&
           (FUN_00375ed8(param_1,0,200,0,0x78), *(short *)(param_1 + 0xc0a) == 0)) ||
          (sVar6 = *(short *)(param_1 + 0xc0a) + -1, *(short *)(param_1 + 0xc0a) = sVar6, sVar6 == 0
          )) {
    uVar2 = DAT_001df400;
    *(ushort *)(param_1 + 0xca2) = *(ushort *)(param_1 + 0xca2) & 0xfffe;
    *(undefined2 *)(param_1 + 0xc02) = 0;
    if (*(short *)(param_1 + 0xc0e) == 0) {
      *(undefined2 *)(param_1 + 0xc02) = 0x1e;
    }
    FUN_00375bcc(param_1,uVar2);
    FUN_00375bcc(param_1,DAT_001df404);
  }
  else {
    FUN_00375a18(param_1 + 0xbfe,uVar1,10,1000,1);
  }
  if (*(short *)(param_1 + 0xc0a) != 0) {
    sVar6 = *(short *)(param_1 + 0x36);
    *(short *)(param_1 + 0xbe) = sVar6;
    if ((short)*(ushort *)(param_1 + 0xc0a) < 0x1e) {
      if ((*(ushort *)(param_1 + 0xc0a) & 1) == 0) {
        sVar6 = sVar6 + -2000;
      }
      else {
        sVar6 = sVar6 + 2000;
      }
      *(short *)(param_1 + 0xbe) = sVar6;
    }
    goto LAB_001df56c;
  }
  if (*(short *)(param_1 + 0xc04) != 0) {
    *(short *)(param_1 + 0xc04) = *(short *)(param_1 + 0xc04) + -1;
  }
  if (*(short *)(param_1 + 0xc02) == 0) {
LAB_001df53c:
    if (*(short *)(param_1 + 0xc0e) == 0) {
      FUN_00375a18(param_1 + 0x36,(int)*(short *)(param_1 + 0x92),4,uVar1,1);
    }
  }
  else {
    sVar6 = *(short *)(param_1 + 0xc02) + -1;
    *(short *)(param_1 + 0xc02) = sVar6;
    if (sVar6 == 0) goto LAB_001df53c;
    fVar17 = (float)VectorSignedToFloat((int)sVar6,(byte)(in_fpscr >> 0x15) & 3);
    fVar12 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x36),(byte)(in_fpscr >> 0x15) & 3
                                       );
    *(short *)(param_1 + 0x36) = (short)(int)(fVar12 + fVar17 * DAT_001df858 * DAT_001df85c);
  }
  *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x36);
LAB_001df56c:
  if ((*(short *)(param_1 + 0xca8) != 0) &&
     (sVar6 = *(short *)(param_1 + 0xca8) + -1, *(short *)(param_1 + 0xca8) = sVar6, sVar6 != 0)) {
    *(short *)(param_1 + 0xca6) = *(short *)(param_1 + 0xca8);
    if (2 < *(short *)(param_1 + 0xca8)) {
      *(undefined2 *)(param_1 + 0xca6) = 0;
    }
    fVar17 = DAT_001df868;
    fVar12 = DAT_001df864;
    if (*(char *)(param_1 + 0xb7) == '\0') {
      FUN_003761f0(param_2);
      FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0xb8c);
    }
    else {
      if (*(short *)(param_1 + 0xc04) == 0) {
        iVar8 = 0;
        local_6c[0] = *DAT_001df860;
        local_6c[1] = DAT_001df860[1];
        local_6c[2] = DAT_001df860[2];
        local_6c[3] = DAT_001df860[3];
        local_6c[4] = DAT_001df860[4];
        local_6c[5] = DAT_001df860[5];
        local_6c[6] = DAT_001df860[6];
        local_6c[7] = DAT_001df860[7];
        local_6c[8] = DAT_001df860[8];
        local_48 = param_2 + 0x5c78;
        do {
          local_78 = *(undefined4 *)(param_1 + 0x28);
          local_74 = *(undefined4 *)(param_1 + 0x2c);
          local_70 = *(undefined4 *)(param_1 + 0x30);
          pfVar9 = local_6c + iVar8 * 3;
          *pfVar9 = *pfVar9 * *(float *)(param_1 + 0xc14);
          local_6c[iVar8 * 3 + 1] = local_6c[iVar8 * 3 + 1] * *(float *)(param_1 + 0xc14);
          local_6c[iVar8 * 3 + 2] = local_6c[iVar8 * 3 + 2] * *(float *)(param_1 + 0xc14);
          FUN_00372224(&local_b4,param_1 + 0x148);
          local_84 = local_78;
          local_80 = local_74;
          local_7c = local_70;
          local_ac = 0.0;
          local_b0 = 0;
          local_b4 = 1.0;
          local_a4 = 0.0;
          uStack_a0 = 0x3f800000;
          local_a8 = local_78;
          local_90 = 0;
          local_8c = 1.0;
          local_9c = 0.0;
          local_94 = 0.0;
          local_98 = local_74;
          local_88 = local_70;
          fVar13 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xbfc),
                                              (byte)(in_fpscr >> 0x15) & 3);
          fVar13 = fVar13 * fVar12 * fVar17;
          in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar13 == fVar3) << 0x1e;
          if (!SUB41(in_fpscr >> 0x1e,0)) {
            fVar14 = (float)FUN_003727f0(fVar13);
            fVar13 = (float)FUN_00372674(fVar13);
            fVar18 = local_b4 * fVar14;
            local_b4 = local_b4 * fVar13 - local_ac * fVar14;
            local_ac = fVar18 + local_ac * fVar13;
            fVar18 = local_a4 * fVar14;
            local_a4 = local_a4 * fVar13 - local_9c * fVar14;
            local_9c = fVar18 + local_9c * fVar13;
            fVar18 = local_94 * fVar14;
            local_94 = local_94 * fVar13 - local_8c * fVar14;
            local_8c = fVar18 + local_8c * fVar13;
          }
          FUN_003735ac(&local_78,&local_b4,pfVar9);
          iVar7 = param_1 + iVar8 * 0x58;
          *(undefined4 *)(iVar7 + 0xad0) = local_78;
          *(undefined4 *)(iVar7 + 0xad4) = local_74;
          *(undefined4 *)(iVar7 + 0xad8) = local_70;
          FUN_003762a4(param_2,local_48,iVar7 + 0xa84);
          iVar8 = iVar8 + 1;
        } while (iVar8 < 3);
      }
      if ((*(short *)(param_1 + 0xc06) == 0) ||
         (sVar6 = *(short *)(param_1 + 0xc06) + -1, *(short *)(param_1 + 0xc06) = sVar6, sVar6 == 0)
         ) {
        FUN_0037632c(param_1);
        iVar8 = param_2 + 0x5c78;
        FUN_00376168(param_2,iVar8,param_1 + 0x97c);
        sVar6 = *(short *)(param_1 + 0x92) - *(short *)(param_1 + 0xbe);
        if (sVar6 < 0) {
          sVar6 = -sVar6;
        }
        if (sVar6 < DAT_001df86c) {
          FUN_0037632c(param_1);
          FUN_00376168(param_2,iVar8,param_1 + 0xa2c);
        }
        else {
          FUN_0037632c(param_1);
          FUN_00376168(param_2,iVar8,param_1 + 0x9d4);
        }
      }
    }
    if (*(short *)(param_1 + 0x1c) == 0) {
      uVar15 = DAT_001df8bc;
    }
    FUN_0037322c(uVar15,param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_003702c8(0x3c);
}
