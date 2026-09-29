// OoT3D decomp @ 00390b10  name=FUN_00390b10  size=1060

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00390b10(int param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  short sVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  bool bVar8;
  uint in_fpscr;
  int iVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  longlong lVar13;

  piVar2 = DAT_00390ea8;
  *(undefined2 *)(*DAT_00390ea8 + 0x5be) = 0;
  uVar10 = FUN_00357eac(param_1,*(undefined4 *)(param_2 + 0x20ac));
  uVar7 = DAT_00390eac;
  lVar13 = (ulonglong)uVar10 << 0x20;
  if ((*(char *)(param_1 + 0xffc) == '\x02' || *(char *)(param_1 + 0xffc) == '\x03') &&
     (DAT_00390eb0 < (int)uVar10)) {
    if ((*(uint *)(param_1 + 0xe54) & 0x8000) == 0) {
      *(undefined1 *)(param_1 + 0xe74) = 3;
      *(uint *)(param_1 + 0xe54) = *(uint *)(param_1 + 0xe54) | 0x8000;
      uVar5 = FUN_0036e800(param_1,*(undefined4 *)(param_2 + 0x20ac));
      *(short *)(param_1 + 0x1000) = (short)uVar5;
      iVar6 = DAT_00390ec0;
      fVar11 = (float)VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
      fVar12 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x36),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar11 = fVar11 - fVar12;
      fVar12 = fVar11;
      if (DAT_00390eb4 < (int)fVar11) {
        fVar12 = fVar11 - DAT_00390eb8;
      }
      lVar13 = CONCAT44(uVar10,fVar12);
      if (((int)fVar11 <= DAT_00390eb4) && ((uint)DAT_00390ebc < (uint)fVar12)) {
        lVar13 = CONCAT44(uVar10,fVar12 + DAT_00390eb8);
      }
      uVar5 = FUN_0036ae14(param_1 + 0x1c4,
                           *(undefined4 *)
                            (*(int *)(DAT_00390ec0 + (uint)*(byte *)(param_1 + 0x1b0) * 4) +
                            (uint)*(byte *)(param_1 + 0xe74) * 4));
      fVar12 = (float)VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
      *(short *)(param_1 + 0x1002) = (short)(int)((float)lVar13 / fVar12);
      FUN_00373d40(param_1 + 0x1c4,
                   *(undefined4 *)
                    (*(int *)(iVar6 + (uint)*(byte *)(param_1 + 0x1b0) * 4) +
                    (uint)*(byte *)(param_1 + 0xe74) * 4));
      FUN_003731e8(uVar7,param_1 + 0x1c4);
      *(uint *)(param_1 + 0xe54) = *(uint *)(param_1 + 0xe54) & 0xfffff7ff;
      *(undefined4 *)(param_1 + 0xe80) = *(undefined4 *)(param_1 + 0xe8c);
      *(undefined4 *)(param_1 + 0xe84) = *(undefined4 *)(param_1 + 0xe90);
      *(undefined4 *)(param_1 + 0xe88) = *(undefined4 *)(param_1 + 0xe94);
    }
    else {
LAB_00390c68:
      sVar4 = *(short *)(param_1 + 0x36) + *(short *)(param_1 + 0x1002);
      *(short *)(param_1 + 0x36) = sVar4;
      *(short *)(param_1 + 0xbe) = sVar4;
      uVar3 = DAT_00390ecc;
      uVar5 = DAT_00390ec8;
      if ((DAT_00390ec4 < *(int *)(param_1 + 0xe78)) && ((*(uint *)(param_1 + 0xe54) & 0x800) == 0))
      {
        *(uint *)(param_1 + 0xe54) = *(uint *)(param_1 + 0xe54) | 0x800;
        FUN_0037547c(DAT_00390ed0,param_1 + 0x28,4,uVar3,uVar3,uVar5);
      }
    }
  }
  else {
    if ((*(uint *)(param_1 + 0xe54) & 0x8000) != 0) goto LAB_00390c68;
    FUN_003326f0(param_1,*(int *)(param_2 + 0x20ac) + 0x28,DAT_00390ed4);
    if ((*(uint *)(param_1 + 0xe54) & 0x4000) != 0) {
      fVar12 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x36),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(short *)(param_1 + 0x36) = (short)(int)(fVar12 + DAT_00390ed8);
    }
    *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x36);
  }
  uVar5 = DAT_00390edc;
  cVar1 = *(char *)(param_1 + 0xe74);
  if (cVar1 == '\a' || cVar1 == '\t') {
    *(undefined4 *)(param_1 + 0x6c) = DAT_00390ee0;
    FUN_003731e8(DAT_00390ee4,param_1 + 0x1c4);
  }
  else if (cVar1 == '\x05') {
    *(undefined4 *)(param_1 + 0x6c) = DAT_00390ee8;
    FUN_003731e8(DAT_00390eec,param_1 + 0x1c4);
  }
  else if (cVar1 == '\x04') {
    *(undefined4 *)(param_1 + 0x6c) = DAT_00390ef0;
    FUN_0031d314(param_1);
    FUN_003731e8(*(float *)(param_1 + 0x6c) * DAT_00390ef4,param_1 + 0x1c4);
  }
  else {
    *(undefined4 *)(param_1 + 0x6c) = DAT_00390edc;
    FUN_003731e8(uVar7,param_1 + 0x1c4);
  }
  fVar12 = DAT_00390ef8;
  if ((*(uint *)(param_1 + 0xe54) & 0x8000) == 0) {
    sVar4 = *(short *)(param_1 + 0xeb4) + 1;
    *(short *)(param_1 + 0xeb4) = sVar4;
    fVar11 = (float)VectorSignedToFloat((int)*(short *)(*piVar2 + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    if ((int)(fVar12 / fVar11 + DAT_00390efc) < (int)sVar4) {
      *(undefined1 *)(param_1 + 0xe74) = 4;
      FUN_0033d520(uVar5,uVar5,param_1,4);
      *(uint *)(param_1 + 0xe54) = *(uint *)(param_1 + 0xe54) & 0xfffeffff;
      *(undefined4 *)(param_1 + 0xe80) = *(undefined4 *)(param_1 + 0xe8c);
      *(undefined4 *)(param_1 + 0xe84) = *(undefined4 *)(param_1 + 0xe90);
      *(undefined4 *)(param_1 + 0xe88) = *(undefined4 *)(param_1 + 0xe94);
      if ((*(uint *)(param_1 + 0xe54) & 0x8000000) != 0) {
        FUN_0037547c(DAT_00390f00,param_1 + 0xe80,4,DAT_00390ecc,DAT_00390ecc,DAT_00390ec8);
      }
    }
  }
  iVar6 = FUN_003731e0(param_1 + 0x1c4);
  if (iVar6 == 0) {
    return;
  }
  cVar1 = *(char *)(param_1 + 0xe74);
  if (cVar1 == '\a' || cVar1 == '\t') {
    if (*(char *)(param_1 + 0x1094) == '\0') {
LAB_00390f18:
      FUN_0037547c(DAT_00390f04,param_1 + 0x28,4,DAT_00390ecc,DAT_00390ecc,DAT_00390ec8);
    }
  }
  else {
    bVar8 = cVar1 == '\x05';
    if (bVar8) {
      cVar1 = *(char *)(param_1 + 0x1094);
    }
    if (bVar8 && cVar1 == '\0') goto LAB_00390f18;
  }
  iVar6 = DAT_00390f94;
  *(uint *)(param_1 + 0xe54) = *(uint *)(param_1 + 0xe54) & 0xffff7fff;
  if ((int)((ulonglong)lVar13 >> 0x20) < iVar6) {
    *(undefined1 *)(param_1 + 0xe74) = 4;
    FUN_0033d520(uVar5,uVar5,param_1,4);
    *(uint *)(param_1 + 0xe54) = *(uint *)(param_1 + 0xe54) & 0xfffeffff;
    return;
  }
  uVar7 = 4;
  iVar9 = FUN_00357eac(param_1,*(undefined4 *)(DAT_00335394 + param_2));
  iVar6 = DAT_00335398 + -0x320000;
  if (DAT_00335398 < iVar9) {
    uVar7 = 7;
  }
  else if ((iVar6 < iVar9) && (iVar9 <= DAT_00335398)) {
    uVar7 = 5;
  }
  cVar1 = *(char *)(param_1 + 0xe74);
  if (cVar1 == '\a') {
    if (DAT_00335398 < iVar9) {
LAB_00335344:
      uVar7 = 7;
      goto LAB_0033537c;
    }
  }
  else if (cVar1 == '\x05') {
    if (DAT_00335398 < iVar9) goto LAB_00335344;
    if (iVar9 < iVar6) {
LAB_00335378:
      uVar7 = 4;
      goto LAB_0033537c;
    }
  }
  else {
    if (cVar1 != '\x04') goto LAB_0033537c;
    if (iVar9 <= iVar6) goto LAB_00335378;
  }
  uVar7 = 5;
LAB_0033537c:
  FUN_0031c588(DAT_003353a0,DAT_0033539c,param_1,uVar7);
  return;
}
