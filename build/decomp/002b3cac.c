// OoT3D decomp @ 002b3cac  name=FUN_002b3cac  size=1112

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_002b3cac(int param_1,int param_2)

{
  byte bVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  uint in_fpscr;
  uint uVar8;
  float fVar9;
  uint uVar10;
  float fVar11;
  int iVar12;

  fVar2 = DAT_002b4038;
  iVar6 = *(int *)(DAT_002b403c + param_2);
  iVar3 = FUN_00328e08(param_2,param_1);
  if (iVar3 != 0) {
    return;
  }
  *(int *)(param_1 + 0x1c6c) = *(int *)(param_1 + 0x1c6c) + 1;
  iVar3 = FUN_00369608(param_2,param_1);
  uVar4 = DAT_002b4054;
  uVar5 = DAT_002b4050;
  fVar11 = fVar2;
  if (iVar3 != 0) {
    fVar11 = DAT_002b4040;
  }
  fVar9 = *(float *)(param_1 + 0x98);
  uVar8 = in_fpscr & 0xfffffff | (uint)(fVar9 == fVar11 + DAT_002b4044) << 0x1e |
          (uint)(fVar11 + DAT_002b4044 <= fVar9) << 0x1d;
  bVar1 = (byte)(uVar8 >> 0x18);
  if ((bool)(bVar1 >> 5 & 1) && !(bool)(bVar1 >> 6)) {
    fVar11 = fVar11 + DAT_002b4058;
    uVar10 = in_fpscr & 0xfffffff | (uint)(fVar9 < fVar11) << 0x1f | (uint)(fVar9 == fVar11) << 0x1e
    ;
    uVar8 = uVar10 | (uint)(NAN(fVar9) || NAN(fVar11)) << 0x1c;
    bVar1 = (byte)(uVar10 >> 0x18);
    if (!(bool)(bVar1 >> 6 & 1) && bVar1 >> 7 == ((byte)(uVar8 >> 0x1c) & 1)) {
      FUN_0036e168(DAT_002b4054,DAT_002b404c,DAT_002b4048,fVar2,param_1 + 0x6c);
    }
  }
  else {
    FUN_0036e168(DAT_002b4050,DAT_002b404c,DAT_002b4048,fVar2,param_1 + 0x6c);
  }
  uVar10 = *(uint *)(param_1 + 0x6c);
  if ((int)uVar10 < DAT_002b405c) {
    if (DAT_002b4060 <= uVar10) {
      uVar10 = uVar5;
    }
    *(uint *)(param_1 + 0x6c) = uVar10;
  }
  else {
    *(undefined4 *)(param_1 + 0x6c) = uVar4;
  }
  if (*(short *)(param_1 + 0x1c) == 3) {
    iVar3 = FUN_0035e600(*(undefined4 *)(param_1 + 0x6c),param_1,param_2,
                         (int)*(short *)(param_1 + 0x36));
    if (iVar3 == 0) {
      *(float *)(param_1 + 0x6c) = -*(float *)(param_1 + 0x6c);
    }
  }
  fVar11 = DAT_002b4068;
  fVar9 = *(float *)(param_1 + 0x6c);
  uVar5 = uVar8 & 0xfffffff | (uint)(fVar9 < fVar2) << 0x1f;
  uVar8 = uVar5 | (uint)(NAN(fVar9) || NAN(fVar2)) << 0x1c;
  if ((byte)(uVar5 >> 0x1f) != ((byte)(uVar8 >> 0x1c) & 1)) {
    fVar9 = -fVar9;
  }
  if ((int)fVar9 < DAT_002b4064) {
    uVar4 = FUN_0036ae14(param_1 + 0x1e0,2);
    uVar4 = VectorSignedToFloat(uVar4,(byte)(uVar8 >> 0x15) & 3);
    FUN_00375c08(fVar2,*(undefined4 *)(param_1 + 0x21c),uVar4,DAT_002b406c,param_1 + 0x1e0,2,0);
    fVar11 = *(float *)(param_1 + 0x6c) * fVar11;
  }
  else {
    uVar4 = FUN_0036ae14(param_1 + 0x1e0,1);
    uVar4 = VectorSignedToFloat(uVar4,(byte)(uVar8 >> 0x15) & 3);
    FUN_00375c08(fVar2,*(undefined4 *)(param_1 + 0x21c),uVar4,DAT_002b4070,param_1 + 0x1e0,1,0);
    fVar11 = *(float *)(param_1 + 0x6c) * DAT_002b4074;
  }
  iVar3 = DAT_002b4078;
  if (*(float *)(param_1 + 0x6c) < fVar2) {
    if ((uint)DAT_002b4080 < (uint)fVar11) {
      fVar11 = DAT_002b4084;
    }
  }
  else {
    if (*(char *)(param_1 + 0x1c62) == '\0') {
      *(undefined1 *)(param_1 + 0x1c62) = 1;
    }
    if (iVar3 < (int)fVar11) {
      fVar11 = DAT_002b407c;
    }
  }
  iVar3 = DAT_002b4088;
  *(float *)(param_1 + 0x220) = fVar11;
  uVar5 = (uint)(short)(*(short *)(iVar6 + 0xbe) - *(short *)(param_1 + 0xbe));
  if (*(int *)(param_1 + 0x98) < iVar3) {
    bVar7 = *(char *)(iVar6 + 0x2227) != '\0';
    uVar8 = 0;
    if (bVar7) {
      uVar5 = uVar5 + 7999;
      uVar8 = DAT_002b408c;
    }
    if (bVar7 && uVar8 < uVar5) {
      *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x92);
      *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x92);
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
  }
  fVar11 = *(float *)(param_1 + 0x21c);
  FUN_003731e0(param_1 + 0x1e0);
  fVar9 = *(float *)(param_1 + 0x220);
  if (fVar9 < fVar2) {
    fVar9 = -fVar9;
  }
  iVar12 = (int)(*(float *)(param_1 + 0x21c) - fVar9);
  iVar3 = (int)fVar9 + (int)fVar11;
  if (((int)*(float *)(param_1 + 0x21c) != (int)fVar11) &&
     (((1 < iVar3 && (iVar12 < 1)) || ((iVar12 < 7 && (7 < iVar3)))))) {
    FUN_00375bcc(param_1,DAT_002b4094);
  }
  if ((*(uint *)(param_1 + 0x1c6c) & 0x1f) == 0) {
    FUN_00375bcc(param_1,DAT_002b40a0);
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  if ((*(int *)(param_1 + 0x98) + 0xbcdfffffU < DAT_002b4318) &&
     (iVar3 = FUN_0036f18c(param_1,DAT_002b4320), iVar3 != 0)) {
    iVar3 = FUN_0035f228(param_2,param_1);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
    if (*(char *)(iVar6 + 0x1a9) != '\0') {
      if (*(char *)(param_1 + 0x114) == '\0') {
        FUN_00320e84(param_1);
      }
      else {
        if ((*(uint *)(DAT_002b4324 + param_2) & 1) != 0) {
          iVar3 = FUN_00369608(param_2,param_1);
          if (iVar3 != 0) {
            FUN_0036e734(param_1 + 0x1e0,4);
            *(undefined1 *)(param_1 + 0x1c4c) = 0xf;
                    /* WARNING: Subroutine does not return */
            FUN_003759d0();
          }
          FUN_00370350(DAT_0035eeb4,param_1 + 0x1e0,4);
          FUN_00375a18(param_1 + 0xbe,(int)*(short *)(param_1 + 0x92),1,4000);
          uVar4 = DAT_0035eebc;
          if ((*(uint *)(DAT_0035eeb8 + param_2) & 1) != 0) {
            uVar4 = DAT_0035eec0;
          }
          *(undefined4 *)(param_1 + 0x6c) = uVar4;
          *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0xbe) + 0x3fff;
                    /* WARNING: Subroutine does not return */
          FUN_003759d0();
        }
        FUN_003b77e4(param_1,param_2);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
