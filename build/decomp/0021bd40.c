// OoT3D decomp @ 0021bd40  name=FUN_0021bd40  size=848

void FUN_0021bd40(int param_1,int param_2)

{
  undefined4 uVar1;
  float fVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_58 [4];
  undefined1 auStack_54 [4];
  float local_50;
  float local_4c;
  float local_48;
  int local_44;
  int local_40;

  iVar7 = *(int *)(DAT_0021c090 + param_2);
  if (*(short *)(param_2 + 0x104) == 0x51) {
    if ((*(int *)(DAT_0021c098 + 0x10) == 0) || (iVar6 = FUN_0036ef98(param_2), iVar6 == 4)) {
      *(undefined2 *)(param_1 + 0x1b6) = 0;
      return;
    }
  }
  else {
    fVar12 = ABS(*(float *)(iVar7 + 0x2c) - *(float *)(param_1 + 0x2c));
    bVar11 = SBORROW4((int)fVar12,(int)DAT_0021c094);
    bVar9 = (int)fVar12 - (int)DAT_0021c094 < 0;
    bVar10 = fVar12 == DAT_0021c094;
    if ((int)fVar12 <= (int)DAT_0021c094) {
      fVar12 = *(float *)(param_1 + 0x98);
      fVar16 = *(float *)(param_1 + 0x1c0);
      bVar9 = fVar12 < fVar16;
      bVar10 = fVar12 == fVar16;
      bVar11 = NAN(fVar12) || NAN(fVar16);
    }
    if (!bVar10 && bVar9 == bVar11) {
      *(short *)(param_1 + 0x1b2) = *(short *)(param_1 + 0x1b2) + 1;
      return;
    }
  }
  *(undefined2 *)(param_1 + 0x1b2) = 0;
  fVar2 = DAT_0021c0a8;
  uVar1 = DAT_0021c0a4;
  fVar16 = DAT_0021c0a0;
  fVar12 = DAT_0021c09c;
  local_50 = *(float *)(param_1 + 0x28);
  local_4c = *(float *)(param_1 + 0x2c);
  local_48 = *(float *)(param_1 + 0x30);
  iVar4 = (int)*(short *)(param_1 + 0x1a8);
  iVar5 = (int)*(short *)(param_1 + 0x1aa);
  bVar10 = SBORROW4(iVar4,iVar5);
  iVar6 = iVar4 - iVar5;
  bVar9 = iVar4 == iVar5;
  if (iVar5 < iVar4) {
    iVar4 = (int)*(short *)(param_1 + 0x1ae);
    iVar5 = (int)*(short *)(param_1 + 0x1b0);
    bVar10 = SBORROW4(iVar4,iVar5);
    iVar6 = iVar4 - iVar5;
    bVar9 = iVar4 == iVar5;
  }
  if (bVar9 || iVar6 < 0 != bVar10) {
    return;
  }
  local_40 = param_2 + 0xa98;
  local_44 = param_2 + 0x208c;
  do {
    iVar4 = (int)*(short *)(param_1 + 0x1a8);
    iVar5 = (int)*(short *)(param_1 + 0x1aa);
    bVar10 = SBORROW4(iVar4,iVar5);
    iVar6 = iVar4 - iVar5;
    bVar9 = iVar4 == iVar5;
    if (iVar5 < iVar4) {
      iVar4 = (int)*(short *)(param_1 + 0x1ae);
      iVar5 = (int)*(short *)(param_1 + 0x1b0);
      bVar10 = SBORROW4(iVar4,iVar5);
      iVar6 = iVar4 - iVar5;
      bVar9 = iVar4 == iVar5;
    }
    if (bVar9 || iVar6 < 0 != bVar10) {
      return;
    }
    if (*(short *)(param_2 + 0x104) == 0x51) {
      if ((((*(int *)(iVar7 + 0x228c) == 0) || (*(char *)(iVar7 + 0x81) != '2')) ||
          ((*(ushort *)(iVar7 + 0x90) & 1) == 0)) || ((*(uint *)(iVar7 + 0x1710) & 0x8000000) != 0))
      {
        sVar3 = 0x5a;
LAB_0021beb0:
        *(short *)(param_1 + 0x1b4) = sVar3;
        return;
      }
      if (*(short *)(param_1 + 0x1b4) == 0x5a) {
        *(undefined2 *)(param_1 + 0x1a8) = 2;
      }
      if (*(short *)(param_1 + 0x1b4) != 0) {
        sVar3 = *(short *)(param_1 + 0x1b4) + -1;
        goto LAB_0021beb0;
      }
      fVar13 = (float)FUN_003738a8(uVar1);
      fVar13 = fVar13 + fVar12;
      sVar3 = *(short *)(iVar7 + 0xbe);
      if (*(short *)(param_1 + 0x1aa) != 0) {
        sVar3 = -sVar3;
        fVar13 = (float)FUN_003738a8(uVar1);
        fVar13 = fVar13 + fVar16;
      }
      fVar14 = (float)FUN_003738a8(uVar1);
      fVar15 = (float)FUN_002cfca0((int)sVar3);
      local_50 = fVar14 + fVar15 * fVar13 + *(float *)(iVar7 + 0x28);
      local_4c = *(float *)(iVar7 + 0x84) + fVar2;
      fVar14 = (float)FUN_003738a8(uVar1);
      fVar15 = (float)FUN_00338f60((int)sVar3);
      local_48 = fVar14 + fVar15 * fVar13 + *(float *)(iVar7 + 0x30);
      local_4c = (float)FUN_0036e81c(local_40,auStack_54,auStack_58,param_1,&local_50);
      if ((uint)DAT_0021c0ac <= (uint)local_4c) {
        return;
      }
      fVar13 = *(float *)(iVar7 + 0x88);
      bVar11 = SBORROW4((int)fVar13,(int)DAT_0021c0ac);
      bVar9 = (int)fVar13 - (int)DAT_0021c0ac < 0;
      bVar10 = fVar13 == DAT_0021c0ac;
      if (!bVar10) {
        fVar13 = *(float *)(iVar7 + 0x2c) - fVar13;
        bVar9 = fVar13 < local_4c;
        bVar10 = fVar13 == local_4c;
        bVar11 = NAN(fVar13) || NAN(local_4c);
      }
      if (!bVar10 && bVar9 == bVar11) {
        return;
      }
    }
    if (*(short *)(param_1 + 0x1ac) == 3) {
      iVar6 = -0x100;
      uVar8 = DAT_0021c0b0;
    }
    else {
      sVar3 = *(short *)(param_1 + 0x1b6);
      uVar8 = 0x1b0;
      iVar6 = 0;
      iVar4 = (int)sVar3 * (int)(short)DAT_0021c0b4;
      iVar4 = (iVar4 >> 0x12) - (iVar4 >> 0x1f);
      if ((0 < iVar4) &&
         (iVar5 = (int)((ulonglong)((longlong)DAT_0021c0b8 * (longlong)(int)sVar3) >> 0x20),
         (int)sVar3 + ((iVar5 >> 2) - (iVar5 >> 0x1f)) * -10 == 0)) {
        iVar6 = (int)(short)((short)iVar4 * 5);
      }
      *(short *)(param_1 + 0x1b6) = sVar3 + 1;
    }
    iVar6 = FUN_0036aa20(local_50,local_4c,local_48,local_44,param_1,param_2,uVar8,0,0,0,iVar6);
    if (iVar6 == 0) {
      return;
    }
    sVar3 = *(short *)(param_1 + 0x1aa) + 1;
    *(short *)(param_1 + 0x1aa) = sVar3;
    if (*(short *)(param_1 + 0x1a8) <= sVar3) {
      *(undefined2 *)(param_1 + 0x1b4) = 0x96;
    }
    if (*(short *)(param_2 + 0x104) != 0x51) {
      *(short *)(param_1 + 0x1b0) = *(short *)(param_1 + 0x1b0) + 1;
    }
  } while( true );
}
