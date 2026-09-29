// OoT3D decomp @ 003c6d1c  name=FUN_003c6d1c  size=856

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_003c6d1c(int param_1,int param_2)

{
  float fVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  float *pfVar5;
  uint in_fpscr;
  float fVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  float fVar12;

  fVar1 = DAT_003c7040;
  *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x92) + 15000;
  if ((*(ushort *)(param_1 + 0x90) & 8) == 0) {
    iVar4 = FUN_0035e600(*(undefined4 *)(param_1 + 0x6c),param_1,param_2,
                         (int)(short)(*(short *)(param_1 + 0xbe) + 16000));
    if (iVar4 != 0) goto LAB_003c6dd4;
    if ((*(ushort *)(param_1 + 0x90) & 8) != 0) goto LAB_003c6d7c;
    iVar4 = 0;
    *(float *)(param_1 + 0x6c) = *(float *)(param_1 + 0x6c) * DAT_003c7044;
  }
  else {
LAB_003c6d7c:
    uVar8 = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 0x6c) < fVar1) << 0x1f;
    in_fpscr = uVar8 | (uint)(NAN(*(float *)(param_1 + 0x6c)) || NAN(fVar1)) << 0x1c;
    if ((byte)(uVar8 >> 0x1f) == ((byte)(in_fpscr >> 0x1c) & 1)) {
      sVar2 = *(short *)(param_1 + 0xbe) + 16000;
    }
    else {
      sVar2 = *(short *)(param_1 + 0xbe) + -16000;
    }
    iVar4 = (int)(short)(*(short *)(param_1 + 0x82) - sVar2);
  }
  if (0x8000 < iVar4 + 0x4000U) {
    uVar3 = FUN_0036ae14(param_1 + 0x1e0,2);
    uVar3 = VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(DAT_003650b8,uVar3,DAT_003650b4,DAT_003650b0,param_1 + 0x1e0,2);
    uVar3 = DAT_003650bc;
    *(undefined4 *)(param_1 + 0xbfc) = 0;
    iVar4 = DAT_003650c4;
    *(undefined4 *)(param_1 + 0x6c) = uVar3;
    *(undefined4 *)(param_1 + 100) = DAT_003650c0;
    *(undefined2 *)(iVar4 + param_1) = 0;
    *(undefined4 *)(param_1 + 0xbe8) = 3;
    FUN_00375bcc(param_1,DAT_003650c8);
    *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
    *(undefined4 *)(param_1 + 0xbf0) = DAT_003650cc;
    return;
  }
LAB_003c6dd4:
  if (DAT_003c7048 < *(int *)(param_1 + 0x98)) {
    if (DAT_003c7058 < *(int *)(param_1 + 0x98)) {
      FUN_0036e168(DAT_003c705c,DAT_003c7050,DAT_003c704c,fVar1,param_1 + 0xc00);
    }
    else {
      FUN_0036e168(fVar1,DAT_003c7050,DAT_003c7060,fVar1,param_1 + 0xc00);
    }
  }
  else {
    FUN_0036e168(DAT_003c7054,DAT_003c7050,DAT_003c704c,fVar1,param_1 + 0xc00);
  }
  pfVar5 = (float *)(param_1 + 0xc00);
  if (*pfVar5 != fVar1) {
    fVar6 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0x92));
    *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + fVar6 * *pfVar5;
    fVar6 = (float)FUN_00338f60((int)*(short *)(param_1 + 0x92));
    *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) + fVar6 * *pfVar5;
  }
  fVar6 = *pfVar5;
  fVar10 = *(float *)(param_1 + 0x6c);
  fVar9 = fVar6;
  if (fVar6 < fVar1) {
    fVar9 = -fVar6;
  }
  fVar12 = fVar10;
  if (fVar10 < fVar1) {
    fVar12 = -fVar10;
  }
  if (fVar9 < fVar12) {
    fVar6 = fVar10;
  }
  *(float *)(param_1 + 0x220) = fVar6 * DAT_003c7064;
  uVar7 = *(uint *)(param_1 + 0x220);
  uVar8 = DAT_003c7068;
  if ((uVar7 < 0xc0400001) && (uVar8 = uVar7, DAT_003c706c < (int)uVar7)) {
    uVar8 = DAT_003c7070;
  }
  *(uint *)(param_1 + 0x220) = uVar8;
  fVar6 = *(float *)(param_1 + 0x21c);
  FUN_003731e0(param_1 + 0x1e0);
  fVar9 = *(float *)(param_1 + 0x220);
  if (fVar9 < fVar1) {
    fVar9 = -fVar9;
  }
  iVar11 = (int)(*(float *)(param_1 + 0x21c) - fVar9);
  iVar4 = (int)fVar9 + (int)fVar6;
  if (((int)*(float *)(param_1 + 0x21c) != (int)fVar6) &&
     (((iVar11 < 0 && (0 < iVar4)) || ((iVar11 < 5 && (5 < iVar4)))))) {
    FUN_00375bcc(param_1,DAT_003c7074);
  }
  uVar3 = DAT_003c707c;
  if ((*(uint *)(DAT_003c7078 + param_2) & 0x5f) == 0) {
    FUN_00375bcc(param_1,DAT_003c707c);
  }
  iVar4 = *(int *)(param_1 + 0xbfc) + -1;
  *(int *)(param_1 + 0xbfc) = iVar4;
  if (iVar4 == 0) {
    *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x92);
    iVar4 = FUN_00365444(param_2,param_1);
    if (iVar4 == 0) {
      iVar4 = FUN_00369608(param_2,param_1);
      if ((iVar4 != 0) || (DAT_003c7080 < *(int *)(param_1 + 0x98))) {
        FUN_00364fbc(param_1);
        return;
      }
      FUN_00373d40(param_1 + 0x1e0,0);
      *(byte *)(param_1 + 0xc84) = *(byte *)(param_1 + 0xc84) & 0xfb;
      *(undefined4 *)(param_1 + 0xbe8) = 7;
      *(float *)(param_1 + 0x6c) = fVar1;
      *(undefined2 *)(param_1 + 0xc0e) = 0;
      FUN_003ff758(param_1 + 0x28,uVar3);
      *(undefined4 *)(param_1 + 0xbf0) = DAT_003c7084;
    }
    return;
  }
  if (*(float *)(param_1 + 0x6c) < fVar1) {
    sVar2 = *(short *)(param_1 + 0xbe) + -0x4000;
  }
  else {
    sVar2 = *(short *)(param_1 + 0xbe) + 0x4000;
  }
  *(short *)(param_1 + 0xbe) = sVar2;
  return;
}
