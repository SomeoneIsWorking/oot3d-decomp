// OoT3D decomp @ 00453bf8  name=FUN_00453bf8  size=516

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x00453c94 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_00453bf8(float param_1,undefined4 param_2,undefined4 param_3,uint param_4,int param_5)

{
  uint uVar1;
  float fVar2;
  undefined8 uVar3;
  double dVar4;
  undefined2 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint in_fpscr;
  uint uVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar15;
  double dVar13;
  double dVar14;
  double dVar16;
  double dVar17;
  double dVar18;
  float fVar19;

  fVar2 = DAT_00453e04;
  dVar13 = (double)CONCAT44(param_2,param_1);
  uVar1 = in_fpscr & 0xfffffff | (uint)(param_1 < DAT_00453dfc) << 0x1f;
  uVar9 = uVar1 | (uint)(NAN(param_1) || NAN(DAT_00453dfc)) << 0x1c;
  if ((byte)(uVar1 >> 0x1f) != ((byte)(uVar9 >> 0x1c) & 1)) {
    if (param_4 != 0) {
      if (param_4 <= DAT_00453e00) {
        if (param_5 != 0) {
          iVar7 = 0;
          iVar8 = 0;
          fVar10 = (float)VectorUnsignedToFloat(param_4,(byte)(uVar9 >> 0x15) & 3);
          fVar19 = DAT_00453dfc;
          if (0 < (int)param_4) {
            do {
              dVar4 = DAT_00453e24;
              dVar18 = DAT_00453e1c;
              uVar3 = DAT_00453e14;
              dVar14 = DAT_00453e0c;
              dVar16 = (double)fVar19;
              puVar5 = (undefined2 *)(param_5 + iVar7 * 2 + -2);
              iVar6 = 0x30;
              dVar17 = (double)((param_1 - fVar19) * fVar2);
              do {
                dVar16 = dVar16 + dVar17;
                uVar15 = (undefined4)((ulonglong)dVar13 >> 0x20);
                uVar12 = (undefined4)uVar3;
                FUN_002dc370(uVar12,uVar15,SUB84(dVar16 * dVar14,0));
                dVar16 = dVar16 + dVar17;
                uVar11 = VectorFloatToUnsigned(dVar4 + (double)CONCAT44(uVar15,uVar12) * dVar18,3);
                puVar5[1] = (short)uVar11;
                FUN_002dc370(uVar12,uVar15,SUB84(dVar16 * dVar14,0));
                dVar13 = (double)CONCAT44(uVar15,uVar12);
                iVar6 = iVar6 + -1;
                uVar12 = VectorFloatToUnsigned(dVar4 + dVar13 * dVar18,3);
                puVar5 = puVar5 + 2;
                *puVar5 = (short)uVar12;
              } while (iVar6 != 0);
              fVar19 = fVar19 + param_1 / fVar10;
              iVar8 = iVar8 + 1;
              iVar7 = iVar7 + 0x60;
            } while (iVar8 < (int)param_4);
          }
          dVar13 = DAT_00453e0c;
          param_5 = param_5 + param_4 * 0xc0;
          uVar11 = (undefined4)((ulonglong)(double)param_1 >> 0x20);
          uVar12 = (undefined4)DAT_00453e14;
          FUN_002dc370(uVar12,uVar11,SUB84((double)param_1 * DAT_00453e0c,0));
          dVar14 = (double)CONCAT44(uVar11,uVar12);
          iVar7 = 0x30;
          uVar12 = VectorFloatToUnsigned(DAT_00453e24 + dVar14 * DAT_00453e1c,3);
          puVar5 = (undefined2 *)(param_5 + -2);
          do {
            iVar7 = iVar7 + -1;
            puVar5[1] = (short)uVar12;
            puVar5 = puVar5 + 2;
            *puVar5 = (short)uVar12;
          } while (iVar7 != 0);
          iVar7 = 0;
          fVar19 = (float)VectorUnsignedToFloat(param_4,(byte)(uVar9 >> 0x15) & 3);
          fVar19 = -param_1 / fVar19;
          fVar10 = -fVar19;
          if (0 < (int)param_4) {
            dVar18 = (double)(fVar19 * fVar2);
            iVar8 = 0;
            do {
              dVar16 = DAT_00453e24;
              dVar4 = DAT_00453e1c;
              uVar3 = DAT_00453e14;
              dVar17 = (double)fVar10;
              puVar5 = (undefined2 *)(param_5 + iVar7 * 2 + 0xbe);
              iVar6 = 0x30;
              do {
                dVar17 = dVar17 + dVar18;
                uVar15 = (undefined4)((ulonglong)dVar14 >> 0x20);
                uVar12 = (undefined4)uVar3;
                FUN_002dc370(uVar12,uVar15,SUB84(dVar17 * dVar13,0));
                dVar17 = dVar17 + dVar18;
                uVar11 = VectorFloatToUnsigned(dVar16 + (double)CONCAT44(uVar15,uVar12) * dVar4,3);
                puVar5[1] = (short)uVar11;
                FUN_002dc370(uVar12,uVar15,SUB84(dVar17 * dVar13,0));
                dVar14 = (double)CONCAT44(uVar15,uVar12);
                iVar6 = iVar6 + -1;
                uVar12 = VectorFloatToUnsigned(dVar16 + dVar14 * dVar4,3);
                puVar5 = puVar5 + 2;
                *puVar5 = (short)uVar12;
              } while (iVar6 != 0);
              fVar10 = fVar10 - fVar19;
              iVar8 = iVar8 + 1;
              iVar7 = iVar7 + 0x60;
            } while (iVar8 < (int)param_4);
          }
        }
      }
    }
  }
  return;
}
