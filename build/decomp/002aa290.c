// OoT3D decomp @ 002aa290  name=FUN_002aa290  size=1152

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_002aa290(int param_1,int param_2)

{
  int iVar1;
  short sVar2;
  short sVar3;
  float fVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;

  fVar12 = DAT_002aa580;
  iVar8 = *(int *)(DAT_002aa584 + param_2);
  FUN_00375a18(param_1 + 0xbe,(int)(short)(*(short *)(param_1 + 0x92) + *(short *)(param_1 + 0xce2))
               ,1,4000);
  iVar6 = FUN_00364b1c(param_2,param_1);
  if (iVar6 != 0) {
    return;
  }
  iVar6 = FUN_00364c18(param_2,param_1,0);
  if (iVar6 != 0) {
    return;
  }
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
  sVar2 = *(short *)(iVar8 + 0xbe);
  sVar3 = *(short *)(param_1 + 0xce2);
  if ((*(ushort *)(param_1 + 0x90) & 8) == 0) {
    iVar6 = FUN_0035e600(*(undefined4 *)(param_1 + 0x6c),param_1,param_2);
    if (iVar6 != 0) goto LAB_002aa38c;
    uVar7 = *(ushort *)(param_1 + 0x90) & 8;
    if ((*(ushort *)(param_1 + 0x90) & 8) != 0) goto LAB_002aa358;
  }
  else {
LAB_002aa358:
    uVar7 = (uint)(short)(*(short *)(param_1 + 0x82) -
                         (*(short *)(param_1 + 0x92) + *(short *)(param_1 + 0xce2)));
  }
  if (DAT_002aa588 < uVar7 + 12000) {
    *(short *)(param_1 + 0xce2) = -*(short *)(param_1 + 0xce2);
  }
LAB_002aa38c:
  iVar6 = FUN_00369608(param_2,param_1);
  fVar16 = DAT_002aa598;
  fVar4 = fVar12;
  if (iVar6 != 0) {
    fVar4 = DAT_002aa58c;
  }
  if (fVar12 + DAT_002aa590 < *(float *)(param_1 + 0x98)) {
    if (*(float *)(param_1 + 0x98) <= fVar12 + DAT_002aa598) {
      FUN_0036e168(fVar4,DAT_002aa59c,DAT_002aa5a8,fVar4,param_1 + 0xcd0);
    }
    else {
      FUN_0036e168(DAT_002aa5a4,DAT_002aa59c,DAT_002aa594,fVar4,param_1 + 0xcd0);
    }
  }
  else {
    FUN_0036e168(DAT_002aa5a0,DAT_002aa59c,DAT_002aa594,fVar4,param_1 + 0xcd0);
  }
  uVar5 = DAT_002aa5ac;
  if (*(float *)(param_1 + 0xcd0) != fVar4) {
    fVar10 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
    fVar12 = DAT_002aa5b0;
    *(float *)(param_1 + 0x28) =
         *(float *)(param_1 + 0x28) + fVar10 * *(float *)(param_1 + 0xcd0) * DAT_002aa5b0;
    fVar10 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbe));
    *(float *)(param_1 + 0x30) =
         *(float *)(param_1 + 0x30) + fVar10 * *(float *)(param_1 + 0xcd0) * fVar12;
  }
  fVar10 = *(float *)(param_1 + 0xcd0);
  fVar14 = *(float *)(param_1 + 0x6c);
  fVar12 = fVar10;
  if (fVar10 < fVar4) {
    fVar12 = -fVar10;
  }
  fVar15 = fVar14;
  if (fVar14 < fVar4) {
    fVar15 = -fVar14;
  }
  if (fVar15 <= fVar12) {
    FUN_0036f4e4(fVar10 * DAT_002aa5b4,param_1 + 0x1e0);
  }
  else {
    FUN_0036f4e4(fVar14 * DAT_002aa5b4,param_1 + 0x1e0);
  }
  uVar11 = DAT_002aa5b8;
  if ((*(uint *)(param_1 + 0x220) < 0xc0000001) &&
     (uVar11 = uVar5, *(int *)(param_1 + 0x220) < 0x40000001)) {
    uVar11 = *(undefined4 *)(param_1 + 0x220);
  }
  FUN_0036f4e4(uVar11,param_1 + 0x1e0);
  iVar6 = (int)*(float *)(param_1 + 0x21c);
  FUN_00370734(param_1 + 0x1e0);
  uVar5 = DAT_002aa7e8;
  if (*(float *)(param_1 + 0x220) < fVar4) {
    fVar12 = -*(float *)(param_1 + 0x220);
  }
  else {
    fVar12 = *(float *)(param_1 + 0x220);
  }
  iVar8 = (int)(*(float *)(param_1 + 0x21c) - fVar12);
  if (*(float *)(param_1 + 0x220) < fVar4) {
    fVar12 = -*(float *)(param_1 + 0x220);
  }
  else {
    fVar12 = *(float *)(param_1 + 0x220);
  }
  iVar13 = (int)*(float *)(param_1 + 0x21c);
  bVar9 = SBORROW4(iVar13,iVar6);
  iVar1 = iVar13 - iVar6;
  if (iVar13 != iVar6) {
    bVar9 = SBORROW4(iVar8,1);
    iVar1 = iVar8 + -1;
  }
  if ((iVar1 < 0 != bVar9) && (0 < (int)fVar12 + iVar6)) {
    FUN_00375bcc(param_1,DAT_002aa7ec);
    FUN_0036f00c(DAT_002aa7f0,uVar5,param_2,param_1,param_1 + 0x28,3);
  }
  if ((*(uint *)(DAT_002aa7f4 + param_2) & 0x5f) == 0) {
    FUN_00375bcc(param_1,DAT_002aa7f8);
  }
  uVar7 = FUN_00338f60((int)(short)((sVar2 + sVar3 + -0x8000) - *(short *)(param_1 + 0xbe)));
  if ((DAT_002aa7fc < uVar7) && (iVar6 = FUN_00369608(param_2,param_1), iVar6 == 0)) {
    if (*(short *)(param_1 + 0x1c) == 0) {
      fVar16 = DAT_002aa800;
    }
    if (*(float *)(param_1 + 0x98) <= fVar16) {
      FUN_0034c3e4(param_1 + 0x1e0,DAT_00364b08);
      uVar5 = DAT_00364b0c;
      *(byte *)(param_1 + 0xcf8) = *(byte *)(param_1 + 0xcf8) & 0xfb;
      *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x92);
      FUN_0037043c(uVar5,param_1 + 0x1e0);
      iVar6 = DAT_00364b14;
      uVar5 = DAT_00364b10;
      *(undefined4 *)(param_1 + 0xcb8) = 8;
      *(undefined4 *)(param_1 + 0x6c) = uVar5;
      *(undefined2 *)(iVar6 + param_1) = 0;
      *(undefined4 *)(param_1 + 0xccc) = 0xb;
      *(undefined4 *)(param_1 + 0xcc0) = DAT_00364b18;
      return;
    }
  }
  iVar6 = *(int *)(param_1 + 0xccc) + -1;
  *(int *)(param_1 + 0xccc) = iVar6;
  if (iVar6 != 0) {
    return;
  }
  iVar6 = FUN_00369608(param_2,param_1);
  if (iVar6 == 0) {
    FUN_00364938(param_1);
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
