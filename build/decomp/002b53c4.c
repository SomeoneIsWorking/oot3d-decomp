// OoT3D decomp @ 002b53c4  name=FUN_002b53c4  size=1636

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_002b53c4(int param_1,int param_2)

{
  ushort uVar1;
  float fVar2;
  undefined4 *puVar3;
  short sVar4;
  undefined2 uVar5;
  short sVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  int iVar20;
  float fVar21;

  fVar2 = DAT_002b5794;
  iVar13 = *(int *)(param_2 + 0x20ac);
  FUN_00375a18(param_1 + 0xbe,(int)*(short *)(param_1 + 0x92),1,DAT_002b5798,1);
  fVar17 = DAT_002b57a0;
  fVar16 = DAT_002b579c;
  sVar6 = *(short *)(iVar13 + 0xbe);
  if (*(short *)(param_1 + 0x1c) < 0) {
    if ((*(ushort *)(param_1 + 0x90) & 8) == 0) {
      iVar7 = FUN_0035e600(*(undefined4 *)(param_1 + 0x6c),param_1,param_2,
                           (int)(short)(*(short *)(param_1 + 0xbe) + 0x3fff));
      if (iVar7 != 0) goto LAB_002b54ec;
      if ((*(ushort *)(param_1 + 0x90) & 8) != 0) goto LAB_002b547c;
      iVar7 = 0;
      *(float *)(param_1 + 0x6c) = *(float *)(param_1 + 0x6c) * fVar17;
    }
    else {
LAB_002b547c:
      if (*(float *)(param_1 + 0x6c) < fVar2) {
        sVar4 = *(short *)(param_1 + 0xbe) + -0x3fff;
      }
      else {
        sVar4 = *(short *)(param_1 + 0xbe) + 0x3fff;
      }
      iVar7 = (int)(short)(*(short *)(param_1 + 0x82) - sVar4);
    }
    if (0x8000 < iVar7 + 0x4000U) {
      fVar17 = *(float *)(param_1 + 0x6c) * fVar17;
      *(float *)(param_1 + 0x6c) = fVar17;
      if (fVar2 <= fVar17) {
        fVar17 = fVar17 + fVar16;
      }
      else {
        fVar17 = fVar17 - fVar16;
      }
      *(float *)(param_1 + 0x6c) = fVar17;
    }
  }
  else if (*(short *)(param_1 + 0xa64) != 0) {
    *(float *)(param_1 + 0x6c) = -*(float *)(param_1 + 0x6c);
  }
LAB_002b54ec:
  fVar16 = (float)FUN_002cfca0((int)(short)(sVar6 - *(short *)(param_1 + 0xbe)));
  if (fVar16 < fVar2) {
    fVar16 = *(float *)(param_1 + 0x6c) - DAT_002b57a4;
  }
  else {
    fVar16 = *(float *)(param_1 + 0x6c) + DAT_002b57a4;
  }
  *(float *)(param_1 + 0x6c) = fVar16;
  *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0xbe) + 0x4000;
  iVar7 = FUN_00369608(param_2,param_1);
  uVar19 = DAT_002b57b8;
  uVar10 = DAT_002b57b4;
  fVar16 = fVar2;
  if (iVar7 != 0) {
    fVar16 = DAT_002b57a8;
  }
  if (fVar16 + DAT_002b57ac < *(float *)(param_1 + 0x98)) {
    fVar17 = DAT_002b57c0;
    uVar8 = DAT_002b57b0;
    if (*(float *)(param_1 + 0x98) <= fVar16 + DAT_002b57bc) {
      fVar17 = fVar2;
      uVar8 = DAT_002b57c4;
    }
    FUN_0036e168(fVar17,DAT_002b57b8,uVar8,fVar2,param_1 + 0xa74);
  }
  else {
    FUN_0036e168(DAT_002b57b4,DAT_002b57b8,DAT_002b57b0,fVar2,param_1 + 0xa74);
  }
  fVar16 = *(float *)(param_1 + 0xa74);
  if ((fVar16 != fVar2) &&
     ((*(float *)(param_1 + 0x6c) == fVar2 || (iVar7 = FUN_003740fc(param_1,param_2), iVar7 == 0))))
  {
    uVar8 = *(undefined4 *)(param_1 + 0x28);
    uVar11 = *(undefined4 *)(param_1 + 0x2c);
    uVar12 = *(undefined4 *)(param_1 + 0x30);
    uVar5 = *(undefined2 *)(param_1 + 0x90);
    fVar17 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
    fVar18 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbe));
    *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + fVar17 * fVar16;
    *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) + fVar18 * fVar16;
    FUN_00376340(fVar2,fVar2,fVar2,param_2,param_1,0x1c);
    *(undefined4 *)(param_1 + 0x28) = uVar8;
    *(undefined4 *)(param_1 + 0x2c) = uVar11;
    *(undefined4 *)(param_1 + 0x30) = uVar12;
    uVar1 = *(ushort *)(param_1 + 0x90);
    *(undefined2 *)(param_1 + 0x90) = uVar5;
    if ((~uVar1 & 1) == 0) {
      fVar16 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
      *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + fVar16 * *(float *)(param_1 + 0xa74)
      ;
      fVar16 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbe));
      *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) + fVar16 * *(float *)(param_1 + 0xa74)
      ;
    }
  }
  fVar18 = *(float *)(param_1 + 0x6c);
  fVar17 = *(float *)(param_1 + 0xa74);
  fVar16 = fVar18;
  if (fVar18 < fVar2) {
    fVar16 = -fVar18;
  }
  fVar21 = fVar17;
  if (fVar17 < fVar2) {
    fVar21 = -fVar17;
  }
  if (fVar21 <= fVar16) {
    *(float *)(param_1 + 0x1e4) = fVar18 * DAT_002b57c8;
  }
  else {
    fVar16 = DAT_002b57cc;
    if (*(float *)(param_1 + 0x1e4) < fVar2) {
      fVar16 = DAT_002b57c8;
    }
    *(float *)(param_1 + 0x1e4) = fVar17 * fVar16;
  }
  fVar16 = *(float *)(param_1 + 0x1e0);
  FUN_003731e0(param_1 + 0x1a4);
  fVar17 = *(float *)(param_1 + 0x1e4);
  if (fVar17 < fVar2) {
    fVar17 = -fVar17;
  }
  iVar20 = (int)(*(float *)(param_1 + 0x1e0) - fVar17);
  iVar14 = (int)fVar17 + (int)fVar16;
  uVar5 = FUN_00373fa4(param_1 + 0x28,(int)*(short *)(param_1 + 0xa6a));
  *(undefined2 *)(param_1 + 0xa6a) = uVar5;
  iVar7 = FUN_00373fa4(iVar13 + 0x28,0xffffffff);
  if (iVar7 != *(short *)(param_1 + 0xa6a)) {
    *(float *)(param_1 + 0x6c) = fVar2;
    puVar3 = DAT_002b5aec;
    sVar6 = *(short *)(param_1 + 0x1c);
    bVar15 = sVar6 == 0;
    if (-1 < sVar6) {
      bVar15 = sVar6 == *(short *)(DAT_002b57d0 + 2);
    }
    if (bVar15) {
      *(undefined4 *)(param_1 + 0xa50) = 0;
      FUN_00374a58(uVar10,param_1 + 0x1a4,*puVar3);
      *(undefined4 *)(param_1 + 0xa48) = 0x14;
      uVar10 = DAT_002b5af0;
      *(float *)(param_1 + 0x6c) = fVar2;
      *(float *)(param_1 + 0xa78) = fVar2;
      *(float *)(param_1 + 0xa74) = fVar2;
      *(undefined4 *)(param_1 + 0xa54) = uVar10;
      return;
    }
    FUN_00370350(DAT_0032fbb4,param_1 + 0x1a4,0);
    *(undefined4 *)(param_1 + 0xa48) = 5;
    if (-1 < *(short *)(param_1 + 0x1c)) {
      uVar10 = FUN_00373fa4(param_1 + 0x28,(int)*(short *)(param_1 + 0xa6a));
      *(short *)(param_1 + 0xa6a) = (short)uVar10;
      uVar5 = FUN_003262b8(param_1 + 0x28,uVar10,(int)*(short *)(param_1 + 0xa6c),param_2);
      *(undefined2 *)(param_1 + 0xa6e) = uVar5;
      *(undefined4 *)(param_1 + 0xa50) = 0;
    }
    uVar10 = DAT_0032fbbc;
    *(undefined4 *)(param_1 + 0x6c) = DAT_0032fbb8;
    *(undefined4 *)(param_1 + 0xa54) = uVar10;
    return;
  }
  if ((*(short *)(param_1 + 0x1c) == -2) && (iVar7 = FUN_0032fbc0(param_2,param_1), iVar7 != 0)) {
    return;
  }
  uVar8 = DAT_002b5af8;
  puVar3 = DAT_002b5aec;
  if (*(int *)(param_1 + 0xa5c) != 0) {
    *(int *)(param_1 + 0xa5c) = *(int *)(param_1 + 0xa5c) + -1;
    goto LAB_002b5a90;
  }
  sVar6 = *(short *)(iVar13 + 0xbe) - *(short *)(param_1 + 0xbe);
  if (sVar6 < 0) {
    sVar6 = -sVar6;
  }
  sVar4 = *(short *)(param_1 + 0x1c);
  if (sVar6 < DAT_002b5af4) {
    bVar15 = sVar4 == 0;
    if (-1 < sVar4) {
      bVar15 = sVar4 == *(short *)(DAT_002b57d0 + 2);
    }
    if (bVar15) goto LAB_002b58b4;
    *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0xbe);
    bVar15 = *(int *)(param_1 + 0x98) == DAT_002b5b00;
    if (*(int *)(param_1 + 0x98) <= DAT_002b5b00) {
      bVar15 = (*(uint *)(param_2 + 0x5bf4) & 3) == 0;
    }
    if ((bVar15) && (iVar13 = FUN_00328cac(param_2,param_1), iVar13 != 0)) {
      FUN_003301b8(param_1);
      goto LAB_002b5a90;
    }
    if (DAT_002b5b04 <= *(int *)(param_1 + 0x98) + 0xbc8fffffU) {
LAB_002b5a84:
      FUN_0032fb3c(param_1,param_2);
      goto LAB_002b5a90;
    }
    uVar9 = FUN_003740fc(DAT_002b5b08,param_1,param_2);
    bVar15 = uVar9 != 0;
    if (!bVar15) {
      uVar9 = *(uint *)(param_2 + 0x5bf4);
    }
    if (bVar15 || (uVar9 & 1) != 0) goto LAB_002b5a84;
    FUN_00375c08(uVar19,fVar2,uVar8,DAT_002b5b0c,param_1 + 0x1a4,2);
    *(undefined4 *)(param_1 + 100) = DAT_002b5b10;
    *(undefined4 *)(param_1 + 0xa50) = 1;
    *(undefined4 *)(param_1 + 0xa5c) = 0;
    uVar10 = DAT_002b5b1c;
    uVar19 = DAT_002b5b14;
    if (-1 < *(short *)(param_1 + 0x1c)) {
      uVar19 = DAT_002b5b18;
    }
    *(undefined4 *)(param_1 + 0x6c) = uVar19;
    *(undefined4 *)(param_1 + 0xa48) = 0xd;
    FUN_00375bcc(param_1,uVar10);
    uVar10 = DAT_002b5b20;
  }
  else {
    bVar15 = sVar4 == 0;
    if (-1 < sVar4) {
      bVar15 = sVar4 == *(short *)(DAT_002b57d0 + 2);
    }
    if (!bVar15) {
      FUN_0034eb00(param_1);
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
LAB_002b58b4:
    *(undefined4 *)(param_1 + 0xa50) = 0;
    FUN_00374a58(uVar10,param_1 + 0x1a4,*puVar3);
    *(undefined4 *)(param_1 + 0xa48) = 0x14;
    *(float *)(param_1 + 0x6c) = fVar2;
    *(float *)(param_1 + 0xa78) = fVar2;
    uVar10 = DAT_002b5af0;
    *(float *)(param_1 + 0xa74) = fVar2;
  }
  *(undefined4 *)(param_1 + 0xa54) = uVar10;
LAB_002b5a90:
  if (((int)*(float *)(param_1 + 0x1e0) != (int)fVar16) &&
     (((iVar20 < 0xe && (0xf < iVar14)) || ((iVar20 < 0x1b && (0x1c < iVar14)))))) {
    FUN_00375bcc(param_1,DAT_002b5b24);
  }
  if ((*(uint *)(param_2 + 0x5bf4) & 0x5f) == 0) {
    FUN_00375bcc(param_1,DAT_002b5b28);
  }
  return;
}
