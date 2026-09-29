// OoT3D decomp @ 00201c00  name=FUN_00201c00  size=1380

void FUN_00201c00(int param_1,int param_2)

{
  short sVar1;
  ushort uVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  uint in_fpscr;
  float fVar15;
  float fVar16;
  float fVar17;

  fVar16 = DAT_00201fbc;
  uVar4 = DAT_00201fb8;
  fVar17 = *(float *)(param_1 + 0x1e4);
  iVar13 = *(int *)(param_2 + 0x20ac);
  if (*(short *)(param_1 + 0xd3c) != 0) {
    fVar15 = *(float *)(param_1 + 0x1e4) * DAT_00201fbc;
    *(float *)(param_1 + 0xd64) = fVar15;
    fVar16 = *(float *)(param_1 + 0xd6c) * fVar16;
    uVar9 = in_fpscr & 0xfffffff | (uint)(fVar15 < fVar16) << 0x1f;
    in_fpscr = uVar9 | (uint)(NAN(fVar15) || NAN(fVar16)) << 0x1c;
    if ((byte)(uVar9 >> 0x1f) == ((byte)(in_fpscr >> 0x1c) & 1)) {
      *(undefined4 *)(param_1 + 0xd64) = uVar4;
    }
  }
  FUN_003731e0(param_1 + 0x1a8);
  uVar6 = DAT_00201fc4;
  uVar5 = DAT_00201fc0;
  uVar9 = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 0xd6c) == fVar17) << 0x1e |
          (uint)(fVar17 <= *(float *)(param_1 + 0xd6c)) << 0x1d;
  bVar3 = (byte)(uVar9 >> 0x18);
  bVar14 = (bool)(bVar3 >> 6);
  if (!(bool)(bVar3 >> 5 & 1) || bVar14) {
    bVar14 = *(short *)(param_1 + 0xd3c) == 0;
  }
  if (bVar14) {
    if (*(short *)(param_2 + 0x104) == 0x3b) {
      uVar8 = FUN_0036ae14(param_1 + 0x1a8,7);
      uVar8 = VectorSignedToFloat(uVar8,(byte)(uVar9 >> 0x15) & 3);
      *(undefined4 *)(param_1 + 0xd6c) = uVar8;
      FUN_00375c08(uVar6,uVar4,uVar8,uVar5,param_1 + 0x1a8,7,0);
    }
    else {
      uVar8 = FUN_0036ae14(param_1 + 0x1a8,3);
      uVar8 = VectorSignedToFloat(uVar8,(byte)(uVar9 >> 0x15) & 3);
      *(undefined4 *)(param_1 + 0xd6c) = uVar8;
      FUN_00375c08(uVar6,uVar4,uVar8,uVar5,param_1 + 0x1a8,3,0);
    }
    *(undefined2 *)(param_1 + 0xd3c) = 1;
  }
  iVar7 = DAT_00201fcc;
  if (**(ushort **)(&DAT_000022dc + param_2) == 0xd) {
    *(undefined4 *)(param_1 + 0x1a4) = DAT_00201fc8;
    return;
  }
  uVar9 = **(ushort **)(&DAT_000022dc + param_2) - 4;
  iVar12 = param_2 + 0x208c;
  if (uVar9 < 3) {
    sVar1 = (short)uVar9;
    if (*(short *)(param_2 + 0x104) == 0x3b) {
      FUN_0036d44c(param_1,param_2,(int)(short)(sVar1 + 1));
      goto LAB_00201dfc;
    }
    if (*(char *)(param_1 + 0xd24) == '\0') {
      z_actor_003738d0(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                       *(undefined4 *)(param_1 + 0x30),iVar12,param_2,0x8b,0,0,0,
                       (int)(short)(*(short *)(DAT_00201fd0 + sVar1 * 2) << 0xc) | 0x12,1);
      *(undefined1 *)(param_1 + 0xd24) = 1;
      goto LAB_00201dfc;
    }
LAB_00201e9c:
    fVar17 = DAT_00201fdc;
    fVar16 = DAT_00201fd8;
    iVar11 = DAT_00201fd4;
    uVar2 = **(ushort **)(&DAT_000022dc + param_2);
    if ((0xd < uVar2) && (uVar2 < 0x11)) {
      iVar10 = (int)(short)(uVar2 - 0xe);
      if (*(short *)(param_1 + 0xd40) == 0) {
        bVar14 = *(int *)(DAT_00201fd4 + 4) != 0;
        if (bVar14) {
          fVar16 = *(float *)(iVar13 + 0x2c) + DAT_00201fdc;
        }
        else {
          fVar17 = *(float *)(iVar13 + 0x2c);
        }
        if (!bVar14) {
          fVar16 = fVar17 + fVar16;
        }
        iVar11 = FUN_0036aa20(*(undefined4 *)(iVar13 + 0x28),fVar16,*(undefined4 *)(iVar13 + 0x30),
                              iVar12,param_1,param_2,0x168,0,0,0,
                              (int)*(short *)(DAT_00201fe0 + iVar10 * 2));
        *(int *)(param_1 + 0xd84) = iVar11;
        if (iVar11 != 0) {
          if (*(char *)(DAT_00201fd4 + 0x4e) == '\0') {
            *(undefined1 *)(DAT_00201fd4 + 0x4e) = 1;
          }
          else {
            FUN_00353998(param_2);
            *(undefined1 *)(param_2 + 0x7f40) = 0xd3;
          }
          *(undefined2 *)(param_1 + 0xd40) = 1;
          *(undefined2 *)(iVar7 + 0xb2) = 0x140;
          *(undefined1 *)(param_2 + 0x7f40) = 0xd3;
          FUN_0034be04(9);
          iVar7 = DAT_00201fe8;
          *(ushort *)(DAT_00201fe4 + 10) =
               *(ushort *)(DAT_00201fe8 + iVar10 * 2) | *(ushort *)(DAT_00201fe4 + 10);
          FUN_00376a78(param_2,*(undefined1 *)(iVar7 + -0x10 + iVar10));
        }
      }
      else {
        *(undefined4 *)(*(int *)(param_1 + 0xd84) + 0x28) = *(undefined4 *)(iVar13 + 0x28);
        fVar15 = *(float *)(iVar13 + 0x2c);
        bVar14 = *(int *)(iVar11 + 4) != 0;
        if (bVar14) {
          fVar15 = fVar15 + fVar17;
        }
        if (!bVar14) {
          fVar15 = fVar15 + fVar16;
        }
        *(float *)(*(int *)(param_1 + 0xd84) + 0x2c) = fVar15;
        uVar4 = DAT_00202198;
        *(undefined4 *)(*(int *)(param_1 + 0xd84) + 0x30) = *(undefined4 *)(iVar13 + 0x30);
        *(undefined4 *)(*(int *)(param_1 + 0xd84) + 0x1b4) = uVar4;
      }
      if (*(short *)(param_2 + 0x104) == 0x3b) goto LAB_002020c8;
    }
    if ((**(short **)(&DAT_000022dc + param_2) == 0x11) && (*(int *)(param_1 + 0xd84) != 0)) {
      FUN_00374428();
      *(undefined4 *)(param_1 + 0xd84) = 0;
      if (*(short *)(param_2 + 0x104) == 0x3b) goto LAB_002020c8;
    }
LAB_002020dc:
    if (*(char *)(param_1 + 0xd25) == '\0') goto LAB_002020fc;
  }
  else {
    FUN_0036d44c(param_1,param_2,0);
LAB_00201dfc:
    iVar11 = DAT_00201fd4;
    if (*(short *)(param_2 + 0x104) != 0x3b) goto LAB_00201e9c;
    uVar2 = **(ushort **)(&DAT_000022dc + param_2);
    if ((9 < uVar2) && (uVar2 < 0xd)) {
      if (uVar2 == 10) {
        *(undefined1 *)(DAT_00201fd4 + 0x4e) = 1;
        *(undefined2 *)(iVar7 + 0x86) = 0x30;
        FUN_0034be04(9);
      }
      else if (uVar2 == 0xb) {
        if (*(char *)(DAT_00201fd4 + 0x4e) == '\0') {
          *(undefined1 *)(DAT_00201fd4 + 0x4e) = 1;
        }
        *(undefined1 *)(iVar11 + 0x50) = 1;
        *(undefined2 *)(iVar7 + 0x86) = 0x60;
        *(undefined1 *)(iVar11 + 0x46) = 0;
        FUN_0034be04(9);
      }
      else if (uVar2 == 0xc) {
        *(undefined1 *)(DAT_00201fd4 + 0x51) = 1;
        FUN_0034be04(9);
      }
      if (*(char *)(param_1 + 0xd26) == '\0') {
        *(undefined2 *)(iVar7 + 0xb2) = 0x140;
        *(undefined1 *)(param_2 + 0x7f40) = 0xd3;
        *(undefined1 *)(param_1 + 0xd26) = 1;
        if (uVar2 == 0xc) {
          FUN_00353998(param_2);
          *(undefined1 *)(param_2 + 0x7f40) = 0xd3;
        }
      }
      if (*(short *)(param_2 + 0x104) != 0x3b) goto LAB_00201e9c;
    }
LAB_002020c8:
    if (**(short **)(&DAT_000022dc + param_2) != 0x12) goto LAB_002020dc;
    *(undefined1 *)(param_1 + 0xd25) = 1;
  }
  if (*(char *)(DAT_00201fd4 + 0xe7) < '\x14') {
    *(char *)(DAT_00201fd4 + 0xe7) = *(char *)(DAT_00201fd4 + 0xe7) + '\x01';
  }
LAB_002020fc:
  uVar9 = **(ushort **)(&DAT_000022dc + param_2) - 0x13;
  bVar14 = uVar9 == 2;
  if (uVar9 < 3) {
    bVar14 = *(short *)(param_1 + 0xd44) == 0;
  }
  if (bVar14) {
    z_actor_003738d0(*(undefined4 *)(iVar13 + 0x28),*(undefined4 *)(iVar13 + 0x2c),
                     *(undefined4 *)(iVar13 + 0x30),iVar12,param_2,0x5d,0,0,0,
                     (int)(short)(**(ushort **)(&DAT_000022dc + param_2) - 0xb),1);
    *(undefined2 *)(param_1 + 0xd44) = 1;
  }
  if (**(short **)(&DAT_000022dc + param_2) == 0x16) {
    FUN_00375bcc(param_1,DAT_0020219c);
  }
  FUN_0035a3f8(param_1,param_2);
  return;
}
