// OoT3D decomp @ 00108f6c  name=FUN_00108f6c  size=752

void FUN_00108f6c(int param_1,int param_2)

{
  short sVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined2 uVar8;
  short *psVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  uint in_fpscr;
  float fVar15;
  float fVar16;
  undefined1 auStack_4c [4];
  int local_48;

  iVar13 = *(int *)(param_2 + 0x20ac);
  if (((*(short *)(param_1 + 0x8fa) == 0) ||
      (sVar1 = *(short *)(param_1 + 0x8fa) + -1, *(short *)(param_1 + 0x8fa) = sVar1, sVar1 == 0))
     && (uVar6 = DAT_0010927c, uVar5 = DAT_00109278, fVar4 = DAT_00109274, fVar3 = DAT_00109270,
        fVar2 = DAT_0010926c, iVar14 = 0, 0 < *(int *)(param_2 + 0x7f8c))) {
    local_48 = param_2 + 0xa98;
    do {
      psVar9 = (short *)(DAT_00109280 + iVar14 * 6);
      fVar16 = (float)VectorSignedToFloat((int)*psVar9,(byte)(in_fpscr >> 0x15) & 3);
      if (((int)ABS(fVar16 - *(float *)(iVar13 + 0x28)) < DAT_00109284) &&
         (fVar16 = (float)VectorSignedToFloat((int)psVar9[2],(byte)(in_fpscr >> 0x15) & 3),
         (int)ABS(fVar16 - *(float *)(iVar13 + 0x30)) < DAT_00109284)) {
        iVar10 = FUN_0036e864(param_2,*(undefined1 *)(DAT_00109288 + iVar14));
        uVar11 = *(uint *)(iVar13 + 0x1710) & 0x800000;
        if (iVar10 == 0) {
          if (uVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_003759d0();
          }
          *(undefined2 *)(param_1 + 0x1c) = 1;
          *(char *)(param_1 + 0x8f9) = (char)iVar14;
          fVar16 = fVar2;
        }
        else {
          if (uVar11 != 0) {
            return;
          }
          *(undefined2 *)(param_1 + 0x1c) = 0;
          fVar16 = fVar3;
        }
        fVar15 = (float)FUN_002cfca0((int)*(short *)(iVar13 + 0xbe));
        *(float *)(param_1 + 0x28) = *(float *)(iVar13 + 0x28) + fVar16 * fVar15;
        fVar15 = (float)FUN_00338f60((int)*(short *)(iVar13 + 0xbe));
        *(float *)(param_1 + 0x30) = *(float *)(iVar13 + 0x30) + fVar16 * fVar15;
        *(float *)(param_1 + 0x2c) = *(float *)(iVar13 + 0x2c) + fVar4;
        iVar10 = FUN_0036e81c(local_48,param_1 + 0x7c,auStack_4c,param_1,param_1 + 0x28);
        *(int *)(param_1 + 0x2c) = iVar10;
        if (iVar10 == -0x39060000) {
          return;
        }
        uVar8 = FUN_0036e800(param_1,iVar13);
        *(undefined2 *)(param_1 + 0xbe) = uVar8;
        FUN_00373d40(param_1 + 0x1a4,1);
        uVar12 = DAT_00109298;
        uVar7 = DAT_00109294;
        *(undefined4 *)(param_1 + 0x140) = DAT_00109290;
        *(undefined1 *)(param_1 + 0x900) = 0xff;
        *(undefined1 *)(param_1 + 0x901) = 0xff;
        *(undefined1 *)(param_1 + 0x902) = 0xd2;
        *(undefined1 *)(param_1 + 0x903) = 0;
        *(undefined1 *)(param_1 + 0xd0) = 0;
        *(undefined4 *)(param_1 + 0xc4) = uVar7;
        FUN_00375bcc(param_1,uVar12);
        *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x2c);
        iVar10 = *(int *)(*(int *)(param_1 + 0x8ac) + 0xc);
        if (*(short *)(param_1 + 0x1c) == 1) {
          uVar12 = FUN_00372f0c(*(undefined4 *)(param_1 + 0x8f0),0);
          FUN_00372d94(iVar10,uVar12);
        }
        else {
          uVar12 = FUN_00372f0c(*(undefined4 *)(param_1 + 0x8f0),1);
          FUN_00372d94(iVar10,uVar12);
        }
        *(undefined4 *)(iVar10 + 0xc) = uVar5;
        *(undefined1 *)(iVar10 + 0x10) = 1;
        iVar10 = DAT_001092b0;
        if (*(short *)(param_1 + 0x1c) == 1) {
          *(undefined4 *)(param_1 + 0x6c) = uVar6;
          *(undefined4 *)(param_1 + 0x978) = DAT_0010929c;
          *(undefined4 *)(param_1 + 0x97c) = DAT_001092a0;
          *(undefined4 *)(param_1 + 0x980) = DAT_001092a4;
          *(undefined4 *)(param_1 + 0xcc) = DAT_001092a8;
          *(undefined4 *)(param_1 + 0x908) = DAT_001092ac;
          *(undefined1 *)(param_1 + 0x123) = 0x5a;
        }
        else {
          *(undefined4 *)(param_1 + 0x6c) = uVar7;
          uVar7 = DAT_001092b4;
          *(undefined4 *)(param_1 + 0x978) = *(undefined4 *)(iVar10 + 0x20);
          uVar12 = DAT_001092b8;
          *(undefined4 *)(param_1 + 0x97c) = *(undefined4 *)(iVar10 + 0x24);
          *(undefined4 *)(param_1 + 0x980) = *(undefined4 *)(iVar10 + 0x28);
          *(undefined4 *)(param_1 + 0xcc) = uVar7;
          *(undefined4 *)(param_1 + 0x908) = uVar12;
          *(undefined1 *)(param_1 + 0x123) = 0x5c;
        }
        *(undefined4 *)(param_1 + 0x8f4) = DAT_001092bc;
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 < *(int *)(param_2 + 0x7f8c));
  }
  return;
}
