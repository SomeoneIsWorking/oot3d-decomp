// OoT3D decomp @ 003dc618  name=FUN_003dc618  size=704

void FUN_003dc618(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  int iVar3;
  short sVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  float fVar13;

  fVar2 = DAT_003dc984;
  uVar6 = DAT_003dc980;
  iVar8 = *(int *)(param_2 + 0x20ac);
  *(undefined2 *)(param_1 + 0x1b0) = *(undefined2 *)(*(int *)(param_1 + 0x124) + 0x772);
  if (*(short *)(param_1 + 0x1c) == 0) {
    if (*(float *)(param_1 + 0x1e4) != fVar2) {
      FUN_0037547c(DAT_003dc990,param_1 + 0x28,4,DAT_003dc98c,DAT_003dc98c,DAT_003dc988);
    }
    uVar5 = (uint)*(short *)(param_1 + 0x1b6);
    if ((uVar5 & 1) == 0) {
      iVar8 = (int)((longlong)(int)uVar5 * (longlong)DAT_003dc994 + ((ulonglong)uVar5 << 0x20) >>
                   0x20);
      uVar6 = *(undefined4 *)(param_1 + 0x2c);
      uVar7 = *(undefined4 *)(param_1 + 0x30);
      iVar8 = param_1 + ((int)(uVar5 + ((iVar8 >> 5) - (iVar8 >> 0x1f)) * -0x3c) / 2) * 0x14;
      *(undefined4 *)(iVar8 + 0x250) = *(undefined4 *)(param_1 + 0x28);
      *(undefined4 *)(iVar8 + 0x254) = uVar6;
      *(undefined4 *)(iVar8 + 600) = uVar7;
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
    *(short *)(param_1 + 0x1b6) = *(short *)(param_1 + 0x1b6) + 1;
  }
  FUN_0036e168(*(undefined4 *)(param_1 + 0x1e0),DAT_003dc9a0,uVar6,fVar2,param_1 + 0x54);
  FUN_0037572c(*(undefined4 *)(param_1 + 0x54),param_1);
  uVar5 = DAT_003dc9a8;
  bVar10 = DAT_003dc9a4 <= *(uint *)(param_1 + 0x28);
  bVar9 = *(uint *)(param_1 + 0x28) == DAT_003dc9a4;
  if (bVar10 && !bVar9) {
    bVar10 = DAT_003dc9a8 <= *(uint *)(param_1 + 0x60);
    bVar9 = *(uint *)(param_1 + 0x60) == DAT_003dc9a8;
  }
  if (bVar10 && !bVar9) {
    *(undefined4 *)(param_1 + 0x28) = DAT_003dc9ac;
  }
  iVar3 = DAT_003dc9b4;
  bVar10 = bVar10 && !bVar9;
  if (*(uint *)(param_1 + 0x28) < DAT_003dc9b0) {
    iVar12 = *(int *)(param_1 + 0x60);
    iVar1 = iVar12;
    if (DAT_003dc9b4 < iVar12) {
      iVar1 = DAT_003dc9b8;
    }
    bVar10 = DAT_003dc9b4 < iVar12 || bVar10;
    if (DAT_003dc9b4 < iVar12) {
      *(int *)(param_1 + 0x28) = iVar1;
    }
  }
  if ((*(uint *)(param_1 + 0x30) < DAT_003dc9bc) && (iVar3 < *(int *)(param_1 + 0x68))) {
    bVar10 = true;
    *(undefined4 *)(param_1 + 0x30) = DAT_003dc9c0;
  }
  bVar11 = DAT_003dc9c4 <= *(uint *)(param_1 + 0x30);
  bVar9 = *(uint *)(param_1 + 0x30) == DAT_003dc9c4;
  if (bVar11 && !bVar9) {
    bVar11 = uVar5 <= *(uint *)(param_1 + 0x68);
    bVar9 = *(uint *)(param_1 + 0x68) == uVar5;
  }
  if (bVar11 && !bVar9) {
    *(undefined4 *)(param_1 + 0x30) = DAT_003dc9c8;
  }
  else if (!bVar10) goto LAB_003dc898;
  if (*(short *)(param_1 + 0x1b0) == 0) {
    sVar4 = *(short *)(param_1 + 0x36) + 0x4000;
  }
  else {
    sVar4 = *(short *)(param_1 + 0x36) + -0x4000;
  }
  *(short *)(param_1 + 0x36) = sVar4;
LAB_003dc898:
  if ((*(short *)(param_1 + 0x1ac) == 0) ||
     (sVar4 = *(short *)(param_1 + 0x1ac) + -1, *(short *)(param_1 + 0x1ac) = sVar4, sVar4 == 0)) {
    FUN_0036e168(fVar2,DAT_003dc9d0,DAT_003dc9cc,fVar2,param_1 + 0x1e4);
    if ((*(short *)(param_1 + 0x1c) != 0) ||
       ((*(int *)(param_1 + 0x1e4) < 0x3f800000 &&
        (sVar4 = *(short *)(param_1 + 0x1b8) + 1, *(short *)(param_1 + 0x1b8) = sVar4, 0x3c < sVar4)
        ))) {
      FUN_00374428(param_1);
      return;
    }
  }
  else if ((*(char *)(DAT_003dc9d4 + iVar8) == '\0') &&
          (fVar13 = *(float *)(param_1 + 0x54) * DAT_003dc9d8,
          *(float *)(param_1 + 0x94) < fVar13 * fVar13)) {
    FUN_0035d8d8(iVar8,param_2,0);
    FUN_00368fc0(DAT_003dc9dc,fVar2,param_2,param_1,(int)*(short *)(param_1 + 0x36),8);
    return;
  }
  return;
}
