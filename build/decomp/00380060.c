// OoT3D decomp @ 00380060  name=FUN_00380060  size=876

void FUN_00380060(int param_1,undefined4 param_2)

{
  int iVar1;
  ushort uVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  float fVar11;
  int iVar12;
  int iVar13;

  uVar4 = DAT_003803b4;
  fVar3 = DAT_003803ac;
  fVar11 = (float)FUN_0036e168(DAT_003803ac,DAT_003803b4,DAT_003803b0,DAT_003803ac,param_1 + 0x6c);
  uVar2 = *(ushort *)(param_1 + 0x90);
  if ((((uVar2 & 3) != 0) || ((*(short *)(param_1 + 0x1c) == -2 && ((uVar2 & 0x20) != 0)))) &&
     (*(float *)(param_1 + 100) <= fVar3)) {
    if ((*(short *)(param_1 + 0x1c) == -2) && ((uVar2 & 0x20) != 0)) {
      *(float *)(param_1 + 100) = fVar3;
      *(float *)(param_1 + 0x70) = fVar3;
      fVar11 = *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x88);
      *(float *)(param_1 + 0x2c) = fVar11;
    }
    else {
      fVar11 = *(float *)(param_1 + 0x84);
      if ((uint)fVar11 < (uint)DAT_003803b8) {
        *(float *)(param_1 + 0x2c) = fVar11;
      }
    }
  }
  if ((uVar2 & 0x42) != 0) {
    if ((uVar2 & 0x40) == 0) {
      FUN_0037378c(uVar4,param_2,param_1 + 0x6d0,2,0x50,0xf,1);
      FUN_0037378c(uVar4,param_2,param_1 + 0x6dc,2,0x50,0xf,1);
      FUN_0037378c(uVar4,param_2,param_1 + 0x6e8,2,0x50,0xf,1);
      FUN_0037378c(uVar4,param_2,param_1 + 0x6f4,2,0x50,0xf,1);
      fVar11 = (float)FUN_00375bcc(param_1,DAT_003803bc);
    }
    else {
      *(ushort *)(param_1 + 0x90) = uVar2 & 0xffbf;
      fVar11 = (float)FUN_00375bcc(param_1,DAT_003803c0);
    }
  }
  uVar4 = DAT_003803c8;
  bVar9 = *(short *)(DAT_003803c4 + param_1) == 0;
  if (bVar9) {
    fVar11 = *(float *)(param_1 + 0x6c);
  }
  if ((bVar9 && fVar11 == fVar3) &&
     ((uVar2 = *(ushort *)(param_1 + 0x90), (uVar2 & 1) != 0 ||
      ((*(short *)(param_1 + 0x1c) == -2 && ((uVar2 & 0x20) != 0)))))) {
    *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0xbe);
    uVar6 = DAT_003803e4;
    uVar5 = DAT_003803cc;
    if (*(char *)(param_1 + 0xb7) == '\0') {
      *(float *)(param_1 + 0x6c) = fVar3;
      *(undefined1 *)(param_1 + 0x638) = 0;
      *(undefined4 *)(param_1 + 0x63c) = uVar5;
    }
    else {
      if (*(char *)(param_1 + 0x639) != '\x02') {
        iVar12 = *(int *)(param_1 + 0x98);
        iVar7 = DAT_003803e0 + -0xf60000;
        bVar10 = SBORROW4(iVar12,DAT_003803e0);
        iVar1 = iVar12 - DAT_003803e0;
        bVar9 = iVar12 == DAT_003803e0;
        if (DAT_003803e0 < iVar12) {
          iVar13 = *(int *)(param_1 + 0x9c);
          bVar10 = SBORROW4(iVar13,iVar7);
          iVar1 = iVar13 - iVar7;
          bVar9 = iVar13 == iVar7;
        }
        if (!bVar9 && iVar1 < 0 == bVar10) {
          uVar8 = (int)*(short *)(param_1 + 0xbc) + ((int)DAT_003803e8 >> 1);
          bVar10 = DAT_003803e8 <= uVar8;
          bVar9 = uVar8 == DAT_003803e8;
          if (!bVar10 || bVar9) {
            uVar8 = (int)*(short *)(param_1 + 0xc0) + ((int)DAT_003803e8 >> 1);
            bVar10 = DAT_003803e8 <= uVar8;
            bVar9 = uVar8 == DAT_003803e8;
          }
          if ((!bVar10 || bVar9) &&
             (((uVar2 & 1) != 0 || ((*(short *)(param_1 + 0x1c) == -2 && ((uVar2 & 0x20) != 0))))))
          {
            FUN_00370350(DAT_003803e4,param_1 + 0x1a4,0);
            *(undefined1 *)(param_1 + 0x638) = 6;
                    /* WARNING: Subroutine does not return */
            FUN_003702c8(0xf,0x1e);
          }
        }
        if (((iVar12 < DAT_003803f0) && (*(int *)(param_1 + 0x9c) <= iVar7)) &&
           ((int)(short)(*(short *)(param_1 + 0x92) - *(short *)(param_1 + 0xbe)) + 6000U <=
            DAT_003803f4)) {
          FUN_00373d40(param_1 + 0x1a4,4);
          *(undefined1 *)(param_1 + 0x638) = 9;
          *(undefined2 *)(param_1 + 0x658) = 0;
                    /* WARNING: Subroutine does not return */
          FUN_003702c8(1,3);
        }
        FUN_0036e734(param_1 + 0x1a4,2);
        uVar5 = DAT_0038048c;
        *(undefined1 *)(param_1 + 0x638) = 0xc;
        *(undefined4 *)(param_1 + 100) = uVar5;
        *(undefined4 *)(param_1 + 0x70) = uVar4;
        *(undefined4 *)(param_1 + 0x6c) = uVar6;
                    /* WARNING: Subroutine does not return */
        FUN_003702c8(1,3);
      }
      *(undefined1 *)(param_1 + 0x639) = 1;
      uVar6 = DAT_003803d8;
      uVar5 = DAT_003803d4;
      *(short *)(param_1 + 0x658) = (short)DAT_003803d0;
      *(undefined4 *)(param_1 + 100) = uVar5;
      FUN_00375bcc(param_1,uVar6);
      uVar5 = DAT_003803dc;
      *(undefined4 *)(param_1 + 0x70) = uVar4;
      *(undefined4 *)(param_1 + 0x63c) = uVar5;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x70) = DAT_003803c8;
  }
  FUN_00370734(param_1 + 0x1a4);
  return;
}
