// OoT3D decomp @ 00249428  name=FUN_00249428  size=1648

void FUN_00249428(int param_1,int param_2)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  short *psVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  undefined4 uVar12;
  bool bVar13;
  bool bVar14;
  uint in_fpscr;
  float fVar15;
  float fVar16;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;

  uVar4 = DAT_002497ac;
  uVar3 = DAT_002497a8;
  if ((*(byte *)(param_1 + 0xad9) & 0x80) == 0) {
    if ((*(byte *)(param_1 + 0xc0d) & 2) != 0) {
      *(byte *)(param_1 + 0xc0d) = *(byte *)(param_1 + 0xc0d) & 0xfd;
      uVar12 = 1;
      if (2 < *(int *)(param_1 + 0x978)) {
        FUN_003742c4(param_1,param_1 + 0xbfc,0);
        if (*(char *)(param_1 + 0xb9) == '\x0e') goto LAB_00249858;
        *(char *)(param_1 + 0xa40) = *(char *)(param_1 + 0xb9);
        if (*(char *)(param_1 + 0xb9) == '\x01' || *(char *)(param_1 + 0xb9) == '\x0f') {
          if (*(int *)(param_1 + 0x978) == 7) goto LAB_002496fc;
          FUN_00375ed8(param_1,0,0x78,0,0x50);
          FUN_00375eb8(param_1);
          FUN_00375c08(uVar4,DAT_002497b0,uVar4,uVar3,param_1 + 0x1a4,4,2);
          *(undefined4 *)(param_1 + 0x6c) = uVar4;
          *(undefined4 *)(param_1 + 0x978) = 7;
          uVar5 = DAT_002497b4;
          if (*(char *)(param_1 + 0xa40) == '\x0f') {
            *(undefined2 *)(param_1 + 0x986) = 0x36;
          }
          FUN_00375bcc(param_1,uVar5);
          *(undefined4 *)(param_1 + 0x97c) = DAT_002497b8;
          cVar1 = *(char *)(param_1 + 0xb8);
        }
        else {
          FUN_00375ed8(param_1,0x400000,0x78,0,8);
          iVar6 = FUN_00375eb8(param_1);
          if (iVar6 == 0) {
            FUN_00374a58(uVar4,param_1 + 0x1a4,10);
            uVar5 = DAT_002497bc;
            *(undefined2 *)(param_1 + 0x980) = 0;
            FUN_00375bcc(param_1,uVar5);
            *(undefined4 *)(param_1 + 0x6c) = uVar4;
            *(undefined4 *)(param_1 + 0x978) = 2;
            *(undefined4 *)(param_1 + 0x97c) = DAT_002497c0;
            *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
          }
          else {
            FUN_00374a58(uVar3,param_1 + 0x1a4,6);
            FUN_00375bcc(param_1,DAT_002497c4);
            uVar5 = DAT_002497c8;
            *(undefined4 *)(param_1 + 0x978) = 0;
            *(undefined2 *)(param_1 + 0x980) = 0;
            *(undefined4 *)(param_1 + 0x6c) = uVar4;
            *(undefined4 *)(param_1 + 0x97c) = uVar5;
          }
          cVar1 = *(char *)(param_1 + 0xb8);
        }
        if (cVar1 != '\0') {
          uVar12 = 0;
        }
      }
LAB_002496fc:
      iVar6 = 0;
      if (0 < *(int *)(param_1 + 0xc14)) {
        iVar8 = *(int *)(param_1 + 0xc18);
        do {
          if ((*(byte *)(iVar8 + iVar6 * 0x50 + 0x16) & 2) != 0) {
            iVar9 = iVar6 * 0x50 + 0x16;
            *(byte *)(iVar8 + iVar9) = *(byte *)(iVar8 + iVar9) & 0xfd;
            psVar7 = (short *)(iVar6 * 0x50 + 0xe + *(int *)(param_1 + 0xc18));
            local_38 = VectorSignedToFloat((int)*psVar7,(byte)(in_fpscr >> 0x15) & 3);
            local_34 = VectorSignedToFloat((int)psVar7[1],(byte)(in_fpscr >> 0x15) & 3);
            local_30 = VectorSignedToFloat((int)psVar7[2],(byte)(in_fpscr >> 0x15) & 3);
            FUN_003741e4(param_2,**(undefined4 **)(*(int *)(param_1 + 0xc18) + iVar6 * 0x50 + 0x24),
                         uVar12,&local_38,0);
            break;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(param_1 + 0xc14));
      }
    }
  }
  else {
    *(byte *)(param_1 + 0xad9) = *(byte *)(param_1 + 0xad9) & 0x7f;
    iVar6 = 0;
    *(byte *)(param_1 + 0xc0d) = *(byte *)(param_1 + 0xc0d) & 0xfd;
    if (0 < *(int *)(param_1 + 0xae0)) {
      iVar8 = *(int *)(param_1 + 0xae4);
      do {
        if ((*(byte *)(iVar8 + iVar6 * 0x5c + 0x16) & 2) != 0) {
          iVar9 = iVar6 * 0x5c + 0x16;
          *(byte *)(iVar8 + iVar9) = *(byte *)(iVar8 + iVar9) & 0xfd;
          puVar11 = *(uint **)(*(int *)(param_1 + 0xae4) + iVar6 * 0x5c + 0x24);
          psVar7 = (short *)(iVar6 * 0x5c + 0xe + *(int *)(param_1 + 0xae4));
          local_38 = VectorSignedToFloat((int)*psVar7,(byte)(in_fpscr >> 0x15) & 3);
          local_34 = VectorSignedToFloat((int)psVar7[1],(byte)(in_fpscr >> 0x15) & 3);
          local_30 = VectorSignedToFloat((int)psVar7[2],(byte)(in_fpscr >> 0x15) & 3);
          FUN_003741e4(param_2,*puVar11,1,&local_38,0);
          if ((*puVar11 & 5) == 0) {
            FUN_00375f90(param_2,&local_38,8);
          }
          break;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(param_1 + 0xae0));
    }
  }
  if (*(char *)(param_1 + 0xb9) != '\x0e') {
    (**(code **)(param_1 + 0x97c))(param_1,param_2);
    iVar6 = FUN_0035e600(DAT_00249abc,param_1,param_2,(int)*(short *)(param_1 + 0x36));
    if (iVar6 != 0) {
      FUN_00376864(param_1);
    }
    FUN_00376340(DAT_00249ac8,DAT_00249ac4,DAT_00249ac0,param_2,param_1,0x1d);
    if ((*(ushort *)(param_1 + 0x90) & 2) != 0) {
      FUN_00375bcc(param_1,DAT_00249acc);
    }
    if ((*(ushort *)(param_1 + 0x90) & 8) == 0) {
      *(undefined1 *)(param_1 + 0xa41) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0xa41) = 1;
    }
  }
LAB_00249858:
  iVar6 = param_2 + 0x5c78;
  FUN_003762a4(param_2);
  if (*(int *)(param_1 + 0x978) != 2) {
    FUN_00376168(param_2,iVar6,param_1 + 0xac8);
    if (2 < *(int *)(param_1 + 0x978)) {
      FUN_00376168(param_2,iVar6,param_1 + 0xbfc);
    }
    bVar14 = *(int *)(param_1 + 0x978) == 4;
    if (3 < *(int *)(param_1 + 0x978)) {
      bVar14 = *(int *)(param_1 + 0x128) == 0;
    }
    if ((bVar14) && (psVar7 = *(short **)(DAT_00249ad0 + param_2), psVar7 != (short *)0x0)) {
      iVar8 = DAT_00249ad4 + 0x800000;
      do {
        uVar10 = (uint)(ushort)psVar7[0xe];
        bVar14 = uVar10 == 0;
        if (bVar14) {
          uVar10 = *(uint *)(psVar7 + 0x92);
        }
        if (bVar14 && uVar10 == 0) {
          fVar16 = ABS(*(float *)(psVar7 + 0x14) - *(float *)(param_1 + 0x9a8));
          bVar14 = SBORROW4((int)fVar16,iVar8);
          iVar9 = (int)fVar16 - iVar8;
          if ((int)fVar16 < iVar8) {
            fVar16 = ABS(*(float *)(psVar7 + 0x16) - *(float *)(param_1 + 0x9ac));
            bVar14 = SBORROW4((int)fVar16,DAT_00249ad4);
            iVar9 = (int)fVar16 - DAT_00249ad4;
          }
          bVar13 = iVar9 < 0;
          if (bVar13 != bVar14) {
            fVar16 = ABS(*(float *)(psVar7 + 0x18) - *(float *)(param_1 + 0x9b0));
            bVar14 = SBORROW4((int)fVar16,iVar8);
            bVar13 = (int)fVar16 - iVar8 < 0;
          }
          if (bVar13 != bVar14) {
            sVar2 = *psVar7;
            if (sVar2 == 0x10) {
LAB_00249974:
              *(short **)(param_1 + 0x128) = psVar7;
            }
            else {
              if (sVar2 == 0xda) {
                if ((char)psVar7[0xd6] != '\x01') {
                  *(undefined1 *)((int)psVar7 + 0x1ab) = 1;
                  goto LAB_00249974;
                }
              }
              else if (sVar2 == 0x4c) goto LAB_00249974;
              *(short **)(param_1 + 0x124) = psVar7;
            }
            *(int *)(psVar7 + 0x92) = param_1;
            FUN_00375c08(DAT_00249adc,DAT_00249ad8,uVar4,uVar3,param_1 + 0x1a4,4,2);
            *(undefined4 *)(param_1 + 0x6c) = uVar4;
            *(undefined4 *)(param_1 + 0x978) = 1;
            *(undefined2 *)(param_1 + 0x980) = 0x26;
            *(undefined4 *)(param_1 + 0x97c) = DAT_00249ae0;
            FUN_0011e09c(param_1,param_2);
            break;
          }
        }
        psVar7 = *(short **)(psVar7 + 0x98);
      } while (psVar7 != (short *)0x0);
    }
    if (((*(int *)(param_1 + 0x978) == 3) && (DAT_00249ae4 < *(int *)(param_1 + 0x1e0))) &&
       (*(int *)(param_1 + 0x1e0) < DAT_00249ae4 + 0x440000)) {
      FUN_003761f0(param_2,iVar6,param_1 + 0xa48);
    }
  }
  fVar15 = *(float *)(*(int *)(DAT_00249ae8 + param_2) + 0x28) - *(float *)(param_1 + 8);
  fVar16 = *(float *)(*(int *)(DAT_00249ae8 + param_2) + 0x30) - *(float *)(param_1 + 0x10);
  if ((int)SQRT(fVar15 * fVar15 + fVar16 * fVar16) < DAT_00249aec) {
    uVar10 = *(uint *)(param_1 + 4) | 1;
  }
  else {
    uVar10 = *(uint *)(param_1 + 4) & 0xfffffffe;
  }
  *(uint *)(param_1 + 4) = uVar10;
  fVar15 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
  fVar16 = DAT_00249af0;
  *(float *)(param_1 + 0x3c) = *(float *)(param_1 + 0x28) + fVar15 * DAT_00249af0;
  *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x2c) + DAT_00249af4;
  fVar15 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbe));
  *(float *)(param_1 + 0x44) = *(float *)(param_1 + 0x30) + fVar15 * fVar16;
  return;
}
