// OoT3D decomp @ 001f7844  name=FUN_001f7844  size=1296

void FUN_001f7844(int param_1,int param_2)

{
  short sVar1;
  bool bVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int *piVar8;
  int iVar9;
  float *pfVar10;
  float *pfVar11;
  int iVar12;
  float fVar13;
  uint in_fpscr;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  float local_7c;
  float fStack_78;
  float fStack_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float local_54;
  float local_50;

  *(undefined1 *)(param_1 + 0x1d0) = 1;
  fVar7 = DAT_001f7c04;
  fVar6 = DAT_001f7c00;
  fVar5 = DAT_001f7bec;
  uVar4 = DAT_001f7be8;
  fVar3 = DAT_001f7be4;
  if (*(char *)(param_1 + 0x1d1) == -1) {
    bVar2 = true;
    iVar12 = 0;
    if (0 < *(int *)(param_1 + 0x1cc)) {
      do {
        pfVar11 = (float *)(*(int *)(param_1 + 0x1c8) + iVar12 * 0x80);
        pfVar11[0x12] = pfVar11[0xc];
        pfVar11[0x13] = pfVar11[0xd];
        pfVar11[0x14] = pfVar11[0xe];
        if (*(short *)(pfVar11 + 0x1e) == 5) {
          *(undefined2 *)(pfVar11 + 0x1f) = 0xffff;
        }
        else {
          bVar2 = false;
          if ((*(short *)(param_1 + 0x1c) == 3 || *(short *)(param_1 + 0x1c) == 0xb) &&
             (sVar1 = *(short *)(pfVar11 + 0x1f), sVar1 == 4 || sVar1 == 6)) {
            if (*(short *)(pfVar11 + 0x1e) == 0) {
              if (sVar1 == 4) {
                pfVar10 = (float *)(*(int *)(param_1 + 0x1c8) + iVar12 * 0x80 + -0x50);
                fVar14 = pfVar11[0xc] - *pfVar10;
                fVar16 = pfVar11[0xd] - pfVar10[1];
                fVar15 = pfVar11[0xe] - pfVar10[2];
                local_64 = fVar14;
                fStack_60 = fVar16;
                fStack_5c = fVar15;
                local_58 = fVar14;
                local_54 = fVar16;
                local_50 = fVar15;
LAB_001f7cc8:
                pfVar11[0xc] = fVar14;
                pfVar11[0xd] = fVar16;
                pfVar11[0xe] = fVar15;
              }
              else if (sVar1 == 6) {
                pfVar10 = (float *)(*(int *)(param_1 + 0x1c8) + iVar12 * 0x80 + -0x50);
                fVar14 = pfVar11[0xc] - *pfVar10;
                fVar16 = pfVar11[0xd] - pfVar10[1];
                fVar15 = pfVar11[0xe] - pfVar10[2];
                local_7c = fVar14;
                fStack_78 = fVar16;
                fStack_74 = fVar15;
                local_70 = fVar14;
                local_6c = fVar16;
                local_68 = fVar15;
                goto LAB_001f7cc8;
              }
              *(undefined2 *)(pfVar11 + 0x1e) = 1;
            }
            if (*(short *)(*(int *)(param_1 + 0x1c8) + iVar12 * 0x80 + -4) == -1) {
              *(undefined2 *)(pfVar11 + 0x1e) = 5;
              *(undefined2 *)(pfVar11 + 0x1f) = 0xffff;
            }
            else {
              pfVar10 = (float *)(*(int *)(param_1 + 0x1c8) + iVar12 * 0x80 + -0x80);
              fVar14 = pfVar10[1];
              fVar16 = pfVar10[2];
              fVar15 = pfVar10[3];
              fVar13 = pfVar10[4];
              *pfVar11 = *pfVar10;
              pfVar11[1] = fVar14;
              pfVar11[2] = fVar16;
              pfVar11[3] = fVar15;
              pfVar11[4] = fVar13;
              fVar14 = pfVar10[6];
              fVar16 = pfVar10[7];
              fVar15 = pfVar10[8];
              fVar13 = pfVar10[9];
              pfVar11[5] = pfVar10[5];
              pfVar11[6] = fVar14;
              pfVar11[7] = fVar16;
              pfVar11[8] = fVar15;
              pfVar11[9] = fVar13;
              fVar14 = pfVar10[0xb];
              pfVar11[10] = pfVar10[10];
              pfVar11[0xb] = fVar14;
              pfVar11[3] = pfVar11[3] + pfVar11[0xc];
              pfVar11[7] = pfVar11[7] + pfVar11[0xd];
              pfVar11[0xb] = pfVar11[0xb] + pfVar11[0xe];
            }
          }
          else {
            fVar14 = (float)FUN_002cfca0((int)*(short *)((int)pfVar11 + 0x56));
            pfVar11[0x17] = fVar14 * pfVar11[0x1b];
            fVar15 = (float)FUN_00338f60((int)*(short *)((int)pfVar11 + 0x56));
            fVar14 = DAT_001f7c0c;
            piVar8 = DAT_001f7c08;
            pfVar11[0x19] = fVar15 * pfVar11[0x1b];
            iVar9 = *piVar8;
            fVar16 = (float)VectorSignedToFloat((int)*(short *)(iVar9 + 0x110),
                                                (byte)(in_fpscr >> 0x15) & 3);
            fVar16 = pfVar11[0x18] + pfVar11[0x1a] * fVar16 * fVar6;
            pfVar11[0x18] = fVar16;
            if ((uint)fVar14 <= (uint)fVar16) {
              fVar16 = fVar7;
            }
            pfVar11[0x18] = fVar16;
            fVar14 = (float)VectorSignedToFloat((int)*(short *)(iVar9 + 0x110),
                                                (byte)(in_fpscr >> 0x15) & 3);
            fVar14 = fVar14 * fVar3;
            pfVar11[0xc] = pfVar11[0xc] + pfVar11[0x17] * fVar14;
            pfVar11[0xd] = pfVar11[0xd] + fVar16 * fVar14;
            pfVar11[0xe] = pfVar11[0xe] + fVar15 * pfVar11[0x1b] * fVar14;
            if (((int)*(short *)(param_1 + 0x1c) - 5U < 4) && (-1 < *(short *)(param_1 + 0x1c))) {
              FUN_0036e168(fVar5,uVar4,fVar3,fVar5,pfVar11 + 0x1b);
            }
            (**(code **)(DAT_001f7c10 + *(short *)(pfVar11 + 0x1e) * 4))(param_1,param_2,pfVar11);
            if ((*(uint *)(param_1 + 4) & 0x1000) == 0) {
              FUN_003679d0(pfVar11[0xc],
                           pfVar11[0xd] + *(float *)(param_1 + 0xc4) * *(float *)(param_1 + 0x58),
                           pfVar11[0xe],pfVar11,pfVar11 + 0x15);
            }
            else {
              FUN_003679d0(pfVar11[0xc] + *(float *)(param_2 + 0x414),
                           pfVar11[0xd] + *(float *)(param_2 + 0x418) +
                           *(float *)(param_1 + 0xc4) * *(float *)(param_1 + 0x58),
                           pfVar11[0xe] + *(float *)(param_2 + 0x41c),pfVar11,pfVar11 + 0x15);
            }
            local_ac = *(undefined4 *)(param_1 + 0x54);
            local_a8 = 0;
            local_a4 = 0;
            local_a0 = 0;
            local_9c = 0;
            local_98 = *(undefined4 *)(param_1 + 0x58);
            local_94 = 0;
            local_90 = 0;
            local_8c = 0;
            local_88 = 0;
            local_84 = *(undefined4 *)(param_1 + 0x5c);
            local_80 = 0;
            FUN_0036c174(pfVar11,pfVar11,&local_ac);
            if (0 < *(short *)(param_1 + 0x1c)) {
              fVar14 = pfVar11[0x1d];
              in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar14 == fVar5) << 0x1e;
              if (!SUB41(in_fpscr >> 0x1e,0)) {
                fVar16 = (float)FUN_003727f0(fVar14);
                fVar14 = (float)FUN_00372674(fVar14);
                fVar15 = *pfVar11;
                *pfVar11 = fVar15 * fVar14 + pfVar11[1] * fVar16;
                pfVar11[1] = pfVar11[1] * fVar14 - fVar15 * fVar16;
                fVar15 = pfVar11[4];
                pfVar11[4] = fVar15 * fVar14 + pfVar11[5] * fVar16;
                pfVar11[5] = pfVar11[5] * fVar14 - fVar15 * fVar16;
                fVar15 = pfVar11[8];
                pfVar11[8] = fVar15 * fVar14 + pfVar11[9] * fVar16;
                pfVar11[9] = pfVar11[9] * fVar14 - fVar15 * fVar16;
              }
            }
          }
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 < *(int *)(param_1 + 0x1cc));
      if (!bVar2) {
        return;
      }
    }
    FUN_00374428(param_1);
  }
  else {
    FUN_00376864(param_1);
    if (((((int)*(short *)(param_1 + 0x1c) - 5U < 4) || (*(short *)(param_1 + 0x1c) < 0)) &&
        (FUN_00376340(DAT_001f7bf4,DAT_001f7bf0,fVar5,param_2,param_1,5),
        -1 < *(short *)(param_1 + 0x1c))) &&
       (FUN_0036e168(param_1 + 0x6c), (*(ushort *)(param_1 + 0x90) & 1) != 0)) {
      *(undefined4 *)(param_1 + 100) = DAT_001f7bf8;
      *(ushort *)(param_1 + 0x90) = *(ushort *)(param_1 + 0x90) & 0xfffe;
    }
    (**(code **)(DAT_001f7bfc + (uint)*(byte *)(param_1 + 0x1d1) * 4))(param_1,param_2);
  }
  return;
}
