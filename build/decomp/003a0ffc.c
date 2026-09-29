// OoT3D decomp @ 003a0ffc  name=FUN_003a0ffc  size=632

void FUN_003a0ffc(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;

  iVar2 = DAT_003a12e0;
  iVar8 = *(int *)(param_2 + 0x20ac);
  iVar5 = *(int *)(param_1 + 0xdcc) + 1;
  *(int *)(param_1 + 0xdcc) = iVar5;
  if (300 < iVar5) {
    *(undefined4 *)(param_1 + 0xdd0) = 1;
  }
  fVar11 = *(float *)(param_1 + 8) - *(float *)(param_1 + 0x28);
  fVar9 = *(float *)(param_1 + 0xc) - *(float *)(param_1 + 0x2c);
  fVar10 = *(float *)(param_1 + 0x10) - *(float *)(param_1 + 0x30);
  fVar9 = SQRT(fVar11 * fVar11 + fVar9 * fVar9 + fVar10 * fVar10);
  if (iVar2 < (int)fVar9) {
    *(undefined4 *)(param_1 + 0xdd0) = 1;
  }
  cVar1 = *(char *)(param_1 + 0x1a5);
  if ((cVar1 == '\x04' || cVar1 == '\x03') || cVar1 == '\x02') {
    if (*(int *)(param_1 + 0xdd0) == 0) {
      FUN_003326f0(param_1,iVar8 + 0x28,200);
    }
    else {
      FUN_003326f0(param_1,param_1 + 8,200);
    }
  }
  iVar8 = FUN_003731e0(param_1 + 0x1b8);
  uVar4 = DAT_003a12f8;
  iVar5 = DAT_003a12f4;
  uVar3 = DAT_003a12f0;
  uVar12 = DAT_003a12ec;
  uVar7 = DAT_003a12e8;
  iVar2 = DAT_003a12e4;
  if (iVar8 == 0) {
    return;
  }
  iVar8 = DAT_003a12e4 + -0x800000;
  if (*(int *)(param_1 + 0xdd0) == 0) {
    fVar10 = (float)FUN_00357eac(param_1,*(undefined4 *)(param_2 + 0x20ac));
    if (*(int *)(param_1 + 0xdd0) != 0) goto LAB_003a116c;
    if (iVar2 <= (int)fVar10) {
      *(undefined4 *)(param_1 + 0x6c) = uVar7;
      if (iVar2 + 0x640000 < (int)fVar9) {
        fVar10 = DAT_003a12fc;
      }
      uVar6 = 4;
      if (iVar2 + 0x640000 < (int)fVar9) {
        *(float *)(param_1 + 0x6c) = fVar10;
      }
      goto LAB_003a11c4;
    }
    if (iVar8 <= (int)fVar10) goto LAB_003a118c;
  }
  else {
    fVar11 = *(float *)(param_1 + 8) - *(float *)(param_1 + 0x28);
    fVar9 = *(float *)(param_1 + 0xc) - *(float *)(param_1 + 0x2c);
    fVar10 = *(float *)(param_1 + 0x10) - *(float *)(param_1 + 0x30);
    fVar10 = SQRT(fVar11 * fVar11 + fVar9 * fVar9 + fVar10 * fVar10);
LAB_003a116c:
    if (iVar2 <= (int)fVar10) {
      uVar6 = 4;
      *(undefined4 *)(param_1 + 0x6c) = uVar7;
      goto LAB_003a11c4;
    }
    if (iVar8 <= (int)fVar10) {
LAB_003a118c:
      uVar6 = 3;
      *(undefined4 *)(param_1 + 0x6c) = uVar12;
      goto LAB_003a11c4;
    }
    if ((int)fVar10 < DAT_003a1300) {
      *(undefined1 *)(param_1 + 0x1a4) = 5;
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
  }
  *(undefined4 *)(param_1 + 0x6c) = uVar3;
  uVar6 = 2;
  *(undefined4 *)(param_1 + 0xdd8) = 0;
LAB_003a11c4:
  if (*(byte *)(param_1 + 0x1a5) == uVar6) {
    uVar7 = FUN_0036ae14(param_1 + 0x1b8,
                         *(undefined4 *)(iVar5 + (uint)*(byte *)(param_1 + 0x1a5) * 4));
    uVar12 = VectorSignedToFloat(uVar7,(byte)(in_fpscr >> 0x15) & 3);
    uVar7 = FUN_00348854(param_1);
    FUN_00375c08(uVar7,uVar4,uVar12,uVar4,param_1 + 0x1b8,
                 *(undefined4 *)(iVar5 + (uint)*(byte *)(param_1 + 0x1a5) * 4),2);
    return;
  }
  *(char *)(param_1 + 0x1a5) = (char)uVar6;
  uVar7 = FUN_0036ae14(param_1 + 0x1b8,*(undefined4 *)(iVar5 + uVar6 * 4));
  uVar12 = VectorSignedToFloat(uVar7,(byte)(in_fpscr >> 0x15) & 3);
  uVar7 = FUN_00348854(param_1);
  FUN_00375c08(uVar7,uVar4,uVar12,DAT_003a1304,param_1 + 0x1b8,
               *(undefined4 *)(iVar5 + (uint)*(byte *)(param_1 + 0x1a5) * 4),2);
  return;
}
