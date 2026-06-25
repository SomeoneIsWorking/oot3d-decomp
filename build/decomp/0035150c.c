// OoT3D decomp @ 0035150c  name=FUN_0035150c  size=836

/* WARNING: Removing unreachable block (ram,0x00351600) */
/* WARNING: Removing unreachable block (ram,0x00351618) */

undefined4 FUN_0035150c(int param_1,int param_2,byte param_3)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  short sVar7;
  undefined4 uVar8;
  byte bVar9;
  byte bVar10;
  bool bVar11;
  uint in_fpscr;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 unaff_d8;
  float fVar18;
  float fVar19;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  
  if (DAT_00351850 <= *(int *)(param_1 + 0x2270)) {
    uVar5 = *(uint *)(param_1 + 0x1710);
    bVar11 = (uVar5 & 0x8000000) != 0;
    if (bVar11) {
      uVar5 = (uint)*(byte *)(param_1 + 0x1a7);
    }
    if ((!bVar11 || uVar5 == 1) ||
       (in_fpscr = in_fpscr & 0xfffffff |
                   (uint)(*(float *)(*(int *)(param_1 + 0x170c) + 0x2c) <=
                         *(float *)(param_1 + 0x88)) << 0x1d, !SUB41(in_fpscr >> 0x1d,0))) {
      bVar9 = param_3 & 8;
      if (bVar9 != 0) {
        bVar9 = 2;
      }
      bVar10 = bVar9 | param_3 & 2;
      if ((bVar10 != 0) ||
         (iVar6 = FUN_002bb8b0(param_2 + 0xa98,*(undefined4 *)(param_1 + 0x78),
                               *(undefined *)(param_1 + 0x80)), iVar6 != 0)) {
        fVar3 = DAT_00351858;
        fVar2 = DAT_00351854;
        iVar6 = *(int *)(param_1 + 0x78);
        fVar18 = (float)((ulonglong)unaff_d8 >> 0x20);
        if (bVar9 != 0) {
          fVar18 = *(float *)(param_1 + 0x28);
        }
        if (bVar9 != 0) {
          fVar19 = *(float *)(param_1 + 0x30);
          fVar16 = DAT_00351854;
          fVar15 = DAT_00351854;
        }
        else {
          FUN_0035143c(iVar6,*(undefined *)(param_1 + 0x80),param_2 + 0xa98,&local_68);
          if (local_58 < local_64) {
            local_64 = local_58;
          }
          uVar5 = in_fpscr & 0xfffffff | (uint)(local_5c <= local_50) << 0x1d;
          fVar18 = local_50;
          if ((SUB41(uVar5 >> 0x1d,0)) &&
             (uVar5 = in_fpscr & 0xfffffff | (uint)(local_50 < local_68) << 0x1f |
                      (uint)(local_50 == local_68) << 0x1e, bVar1 = (byte)(uVar5 >> 0x18),
             fVar18 = local_5c,
             !(bool)(bVar1 >> 6 & 1) && (bool)(bVar1 >> 7) == (NAN(local_50) || NAN(local_68)))) {
            local_68 = local_50;
          }
          uVar12 = uVar5 & 0xfffffff | (uint)(local_54 <= local_48) << 0x1d;
          fVar16 = local_48;
          if ((SUB41(uVar12 >> 0x1d,0)) &&
             (uVar12 = uVar5 & 0xfffffff | (uint)(local_48 < local_60) << 0x1f |
                       (uint)(local_48 == local_60) << 0x1e, bVar1 = (byte)(uVar12 >> 0x18),
             fVar16 = local_54,
             !(bool)(bVar1 >> 6 & 1) && (bool)(bVar1 >> 7) == (NAN(local_48) || NAN(local_60)))) {
            local_60 = local_48;
          }
          in_fpscr = uVar12 & 0xfffffff | (uint)(local_64 <= local_4c) << 0x1d;
          if (!SUB41(in_fpscr >> 0x1d,0)) {
            local_64 = local_4c;
          }
          fVar15 = (float)VectorSignedToFloat((int)*(short *)(iVar6 + 0xe),
                                              (byte)(in_fpscr >> 0x15) & 3);
          fVar18 = (fVar18 + local_68) * DAT_0035185c;
          fVar19 = (fVar16 + local_60) * DAT_0035185c;
          fVar16 = (float)VectorSignedToFloat((int)*(short *)(iVar6 + 10),
                                              (byte)(in_fpscr >> 0x15) & 3);
          local_64 = *(float *)(param_1 + 0x2c) - local_64;
          fVar16 = ABS((*(float *)(param_1 + 0x28) - fVar18) * fVar15 * fVar3 -
                       (*(float *)(param_1 + 0x30) - fVar19) * fVar16 * fVar3);
          fVar15 = (float)VectorSignedToFloat((int)(DAT_0035185c + local_64 * DAT_00351860),
                                              (byte)(in_fpscr >> 0x15) & 3);
          fVar15 = fVar15 * DAT_00351864 - local_64;
        }
        if ((int)fVar16 < 0x41000000) {
          fVar13 = (float)VectorSignedToFloat((int)*(short *)(iVar6 + 10),
                                              (byte)(in_fpscr >> 0x15) & 3);
          fVar14 = (float)VectorSignedToFloat((int)*(short *)(iVar6 + 0xe),
                                              (byte)(in_fpscr >> 0x15) & 3);
          fVar17 = *(float *)(param_1 + 0x2274);
          FUN_0035976c(param_2,param_1,DAT_00351868);
          *(uint *)(param_1 + 0x1710) = *(uint *)(param_1 + 0x1710) & 0xf7ffffff | 0x200000;
          fVar16 = DAT_0035186c;
          if (bVar10 == 0) {
            uVar8 = *(undefined4 *)(*(int *)(param_1 + 0x170c) + 0x108);
            *(undefined2 *)(param_1 + 0x2238) = 0xfffc;
            *(undefined2 *)(param_1 + 0x2220) = *(undefined2 *)(param_1 + 0x82);
            *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x82);
          }
          else {
            *(byte *)(param_1 + 0x2237) = bVar9;
            if (bVar9 == 0) {
              fVar17 = fVar17 - fVar16;
              uVar8 = *(undefined4 *)(*(int *)(param_1 + 0x170c) + 0x104);
            }
            else {
              if ((*(ushort *)(param_1 + 0x90) & 1) == 0) {
                uVar8 = 0xb1;
              }
              else {
                uVar8 = 0xae;
              }
              fVar17 = (*(float *)(*(int *)(param_1 + 0x170c) + 0x38) - fVar16) - fVar17;
            }
            *(undefined2 *)(param_1 + 0x2238) = 0xfffe;
            *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) + fVar15;
            sVar7 = *(short *)(param_1 + 0x82) + -0x8000;
            *(short *)(param_1 + 0x2220) = sVar7;
            *(short *)(param_1 + 0xbe) = sVar7;
          }
          iVar6 = DAT_00351874;
          uVar4 = DAT_00351870;
          *(float *)(param_1 + 0x28) = fVar18 + fVar17 * fVar13 * fVar3;
          *(float *)(param_1 + 0x30) = fVar19 + fVar17 * fVar14 * fVar3;
          *(float *)(param_1 + 0x6c) = fVar2;
          *(float *)(param_1 + 0x221c) = fVar2;
          *(undefined *)(param_1 + 0x1749) = 0;
          *(undefined4 *)(iVar6 + 0xcc) = uVar4;
          *(undefined *)(iVar6 + 0xd4) = 0;
          FUN_0036df4c(param_1 + 0x108,param_1 + 0x28);
          FUN_003604f0(param_1 + 0x254,param_2,uVar8);
          FUN_003603f8(param_2,param_1,0x9f);
          return 1;
        }
      }
    }
  }
  return 0;
}

