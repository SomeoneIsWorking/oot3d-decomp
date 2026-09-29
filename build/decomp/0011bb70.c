// OoT3D decomp @ 0011bb70  name=FUN_0011bb70  size=2116

void FUN_0011bb70(int param_1,int param_2)

{
  short sVar1;
  float fVar2;
  float fVar3;
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float *pfVar8;
  int iVar9;
  float *pfVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint in_fpscr;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  short local_84;
  short local_82;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  float local_64;
  float local_60;
  float local_5c;
  undefined4 local_58;
  float local_54;
  float local_50;
  float local_4c;
  undefined4 local_48;
  float local_44;
  float local_40;
  float local_3c;
  undefined4 local_38;

  fVar2 = DAT_0011bf58;
  iVar13 = *(int *)(DAT_0011bf50 + param_2);
  FUN_0036e168(*(float *)(param_1 + 0xc) + DAT_0011bf54,DAT_0011bf60,DAT_0011bf5c,DAT_0011bf58,
               param_1 + 0x2c);
  iVar5 = DAT_0011bf64;
  if ((*(int *)(param_1 + 0x98) <= DAT_0011bf64) || (*(short *)(param_1 + 0xb76) != 0)) {
    if (*(short *)(param_1 + 0xb74) == 0x1e) {
      FUN_00375bcc(param_1,DAT_0011bf68);
      *(undefined2 *)(param_1 + 0xb78) = 1000;
    }
    fVar3 = DAT_0011bf74;
    fVar15 = DAT_0011bf6c;
    pfVar10 = (float *)(param_1 + 0xb58);
    pfVar8 = (float *)(param_1 + 0x9b4);
    sVar1 = (short)DAT_0011bf70;
    if (*(short *)(param_1 + 0xb74) == 0) {
      if (*(short *)(param_1 + 0xb76) == 0xf) {
        FUN_00375bcc(param_1,DAT_0011c3e0);
      }
      uVar6 = DAT_0011c3e4;
      if (*(short *)(param_1 + 0xb76) == 0) {
        if ((iVar5 < *(int *)(param_1 + 0x98)) ||
           ((*(uint *)(DAT_0011c3ec + iVar13) & 0x4000000) != 0)) {
          FUN_0036651c(param_1);
        }
        else {
          FUN_003664d4(param_1);
          *(undefined2 *)(param_1 + 0xb74) = 0x29;
          *(undefined2 *)(param_1 + 0xb78) = 500;
        }
      }
      else {
        *(float *)(param_1 + 0x6c) = fVar15;
        *(short *)(param_1 + 0xb78) = (short)uVar6;
        uVar6 = FUN_003758b0(*(float *)(param_1 + 0xb60) - *(float *)(param_1 + 0x30),
                             *pfVar10 - *(float *)(param_1 + 0x28));
        fVar16 = *pfVar8 - *(float *)(param_1 + 0x28);
        fVar15 = *(float *)(param_1 + 0x9bc) - *(float *)(param_1 + 0x30);
        sVar4 = FUN_003758b0(SQRT(fVar16 * fVar16 + fVar15 * fVar15),
                             *(float *)(param_1 + 0x2c) - *(float *)(param_1 + 0x9b8));
        FUN_00375a18(param_1 + 0xbe,uVar6,1,(int)*(short *)(param_1 + 0xb78),0);
        FUN_00375a18(param_1 + 0xbc,(int)(short)(sVar4 + -0x8000),1,(int)*(short *)(param_1 + 0xb78)
                     ,0);
        FUN_003713fc(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                     *(undefined4 *)(param_1 + 0x30),&local_64,0);
        FUN_0036e88c(&local_64,(int)(short)(*(short *)(param_1 + 0xbc) + -0x8000),
                     (int)*(short *)(param_1 + 0xbe),0,1);
        FUN_003735ac(pfVar8,&local_64,DAT_0011bf78);
        iVar5 = 0;
        do {
          fVar15 = (float)FUN_00338f60((int)(short)(*(short *)(param_1 + 0xb76) *
                                                   (short)DAT_0011c3e8));
          iVar9 = param_1 + iVar5 * 6;
          fVar16 = (float)VectorSignedToFloat((short)iVar5 * 0x4b0,(byte)(in_fpscr >> 0x15) & 3);
          FUN_00375a18(iVar9 + 0xb04,(int)(short)(sVar1 + (short)(int)(-fVar15 * fVar16)),1,
                       (int)*(short *)(param_1 + 0xb78),0);
          FUN_00375a18(iVar9 + 0xb06,uVar6,1,(int)*(short *)(param_1 + 0xb78),0);
          iVar12 = param_1 + iVar5 * 0xc;
          local_7c = *(undefined4 *)(iVar12 + 0x9b4);
          local_78 = *(undefined4 *)(iVar12 + 0x9b8);
          local_74 = *(undefined4 *)(iVar12 + 0x9bc);
          local_60 = 0.0;
          local_64 = 1.0;
          local_5c = 0.0;
          local_54 = 0.0;
          local_50 = 1.0;
          local_40 = 0.0;
          local_3c = 1.0;
          local_4c = 0.0;
          local_44 = 0.0;
          iVar11 = (int)(short)(*(short *)(iVar9 + 0xb04) + -0x8000);
          local_58 = local_7c;
          local_48 = local_78;
          local_38 = local_74;
          if (*(short *)(iVar9 + 0xb06) != 0) {
            fVar15 = (float)VectorSignedToFloat((int)*(short *)(iVar9 + 0xb06),
                                                (byte)(in_fpscr >> 0x15) & 3);
            fVar15 = fVar15 * fVar3;
            in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar15 == fVar2) << 0x1e;
            if (!SUB41(in_fpscr >> 0x1e,0)) {
              fVar16 = (float)FUN_003727f0(fVar15);
              fVar15 = (float)FUN_00372674(fVar15);
              fVar19 = local_64 * fVar16;
              local_64 = local_64 * fVar15 - local_5c * fVar16;
              local_5c = fVar19 + local_5c * fVar15;
              fVar19 = local_54 * fVar16;
              local_54 = local_54 * fVar15 - local_4c * fVar16;
              local_4c = fVar19 + local_4c * fVar15;
              fVar19 = local_44 * fVar16;
              local_44 = local_44 * fVar15 - local_3c * fVar16;
              local_3c = fVar19 + local_3c * fVar15;
            }
          }
          if (iVar11 != 0) {
            fVar15 = (float)VectorSignedToFloat(iVar11,(byte)(in_fpscr >> 0x15) & 3);
            fVar15 = fVar15 * fVar3;
            in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar15 == fVar2) << 0x1e;
            if (!SUB41(in_fpscr >> 0x1e,0)) {
              fVar17 = (float)FUN_003727f0(fVar15);
              fVar18 = (float)FUN_00372674(fVar15);
              fVar15 = local_5c * fVar17;
              local_5c = local_5c * fVar18 - local_60 * fVar17;
              fVar16 = local_4c * fVar17;
              local_4c = local_4c * fVar18 - local_50 * fVar17;
              fVar19 = local_3c * fVar17;
              local_3c = local_3c * fVar18 - local_40 * fVar17;
              local_60 = local_60 * fVar18 + fVar15;
              local_50 = local_50 * fVar18 + fVar16;
              local_40 = local_40 * fVar18 + fVar19;
            }
          }
          FUN_003735ac(iVar12 + 0x9c0,&local_64,DAT_0011bf78);
          iVar5 = (int)(short)((short)iVar5 + 1);
        } while (iVar5 < 0xd);
        *(short *)(param_1 + 0xb76) = *(short *)(param_1 + 0xb76) + -1;
      }
    }
    else {
      sVar4 = *(short *)(param_1 + 0xb74) + -1;
      *(undefined2 *)(param_1 + 0xb76) = 0xf;
      *(short *)(param_1 + 0xb74) = sVar4;
      if (sVar4 < 0x10) {
        iVar5 = FUN_003758b0(*(float *)(param_1 + 0xb60) - *(float *)(param_1 + 0x30),
                             *pfVar10 - *(float *)(param_1 + 0x28));
      }
      else {
        uVar6 = *(undefined4 *)(iVar13 + 0x2c);
        uVar7 = *(undefined4 *)(iVar13 + 0x30);
        *pfVar10 = *(float *)(iVar13 + 0x28);
        *(undefined4 *)(param_1 + 0xb5c) = uVar6;
        *(undefined4 *)(param_1 + 0xb60) = uVar7;
        *(float *)(param_1 + 0xb5c) = *(float *)(param_1 + 0xb5c) + fVar15;
        iVar5 = (int)*(short *)(param_1 + 0x92);
      }
      FUN_00375a18(param_1 + 0xb78,1000,1,0x14,0);
      FUN_0036654c(param_1 + 0x28,pfVar8,&local_84,0);
      FUN_00375a18(param_1 + 0xbe,(int)local_82,1,(int)*(short *)(param_1 + 0xb78),0);
      FUN_00375a18(param_1 + 0xbc,(int)(short)(local_84 + -0x8000),1,
                   (int)*(short *)(param_1 + 0xb78),0);
      FUN_003713fc(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                   *(undefined4 *)(param_1 + 0x30),&local_64,0);
      FUN_0036e88c(&local_64,(int)(short)(*(short *)(param_1 + 0xbc) + -0x8000),
                   (int)*(short *)(param_1 + 0xbe),0,1);
      FUN_003735ac(pfVar8,&local_64,DAT_0011bf78);
      iVar9 = 0;
      do {
        iVar11 = param_1 + iVar9 * 6;
        FUN_00375a18(iVar11 + 0xb04,(int)(short)(sVar1 + (short)iVar9 * 0x4b0),1,
                     (int)*(short *)(param_1 + 0xb78),0);
        FUN_00375a18(iVar11 + 0xb06,iVar5,1,(int)*(short *)(param_1 + 0xb78),0);
        iVar14 = param_1 + iVar9 * 0xc;
        local_70 = *(undefined4 *)(iVar14 + 0x9b4);
        local_6c = *(undefined4 *)(iVar14 + 0x9b8);
        local_68 = *(undefined4 *)(iVar14 + 0x9bc);
        local_5c = 0.0;
        local_60 = 0.0;
        local_64 = 1.0;
        local_54 = 0.0;
        local_50 = 1.0;
        local_40 = 0.0;
        local_3c = 1.0;
        local_4c = 0.0;
        local_44 = 0.0;
        iVar12 = (int)(short)(*(short *)(iVar11 + 0xb04) + -0x8000);
        local_58 = local_70;
        local_48 = local_6c;
        local_38 = local_68;
        if (*(short *)(iVar11 + 0xb06) != 0) {
          fVar15 = (float)VectorSignedToFloat((int)*(short *)(iVar11 + 0xb06),
                                              (byte)(in_fpscr >> 0x15) & 3);
          fVar15 = fVar15 * fVar3;
          in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar15 == fVar2) << 0x1e;
          if (!SUB41(in_fpscr >> 0x1e,0)) {
            fVar16 = (float)FUN_003727f0(fVar15);
            fVar15 = (float)FUN_00372674(fVar15);
            fVar19 = local_64 * fVar16;
            local_64 = local_64 * fVar15 - local_5c * fVar16;
            local_5c = fVar19 + local_5c * fVar15;
            fVar19 = local_54 * fVar16;
            local_54 = local_54 * fVar15 - local_4c * fVar16;
            local_4c = fVar19 + local_4c * fVar15;
            fVar19 = local_44 * fVar16;
            local_44 = local_44 * fVar15 - local_3c * fVar16;
            local_3c = fVar19 + local_3c * fVar15;
          }
        }
        if (iVar12 != 0) {
          fVar15 = (float)VectorSignedToFloat(iVar12,(byte)(in_fpscr >> 0x15) & 3);
          fVar15 = fVar15 * fVar3;
          in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar15 == fVar2) << 0x1e;
          if (!SUB41(in_fpscr >> 0x1e,0)) {
            fVar17 = (float)FUN_003727f0(fVar15);
            fVar18 = (float)FUN_00372674(fVar15);
            fVar15 = local_5c * fVar17;
            local_5c = local_5c * fVar18 - local_60 * fVar17;
            fVar16 = local_4c * fVar17;
            local_4c = local_4c * fVar18 - local_50 * fVar17;
            fVar19 = local_3c * fVar17;
            local_3c = local_3c * fVar18 - local_40 * fVar17;
            local_60 = local_60 * fVar18 + fVar15;
            local_50 = local_50 * fVar18 + fVar16;
            local_40 = local_40 * fVar18 + fVar19;
          }
        }
        FUN_003735ac(iVar14 + 0x9c0,&local_64,DAT_0011bf78);
        iVar9 = (int)(short)((short)iVar9 + 1);
      } while (iVar9 < 0xd);
    }
    *(undefined2 *)(param_1 + 0xb52) = *(undefined2 *)(param_1 + 0xb4c);
    *(undefined2 *)(param_1 + 0xb54) = *(undefined2 *)(param_1 + 0xb4e);
    if (((*(byte *)(param_1 + 0xb8c) & 2) != 0) &&
       (*(byte *)(param_1 + 0xb8c) = *(byte *)(param_1 + 0xb8c) & 0xfd,
       *(int *)(param_1 + 0xb80) == iVar13)) {
      FUN_00374bb8(DAT_0011c3f0,DAT_0011c3f0,param_2,param_1,(int)*(short *)(param_1 + 0x92));
    }
    FUN_003761f0(param_2,param_2 + 0x5c78,param_1 + 0xb7c);
    return;
  }
  if ((*(int *)(param_1 + 0x98) <= DAT_0011bf64) &&
     ((*(uint *)(DAT_0011c3ec + iVar13) & 0x4000000) == 0)) {
    FUN_003664d4(param_1);
    *(undefined2 *)(param_1 + 0xb74) = 0x29;
    *(undefined2 *)(param_1 + 0xb78) = 500;
    return;
  }
  FUN_0036651c(param_1);
  return;
}
