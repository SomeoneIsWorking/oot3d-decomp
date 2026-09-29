// OoT3D decomp @ 00215a14  name=FUN_00215a14  size=1132

void FUN_00215a14(int param_1,int param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;

  *(undefined1 *)(param_1 + 0x19a) = 1;
  *(undefined4 *)(param_1 + 0x5bc) = 1;
  *(undefined4 *)(param_1 + 0x5c0) = 0xffffffff;
  if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
     (iVar4 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80, *(int *)(DAT_00215e80 + iVar4) != 0)
     ) {
    iVar4 = iVar4 + 0x3a5c;
  }
  else {
    iVar4 = 0;
  }
  iVar5 = FUN_0036e864(param_2,((uint)*(ushort *)(param_1 + 0x1c) << 0x12) >> 0x1a);
  uVar1 = *(ushort *)(param_1 + 0x1c);
  uVar8 = uVar1 & 7;
  iVar10 = uVar8 * 5;
  iVar11 = iVar10 + DAT_00215e84;
  FUN_00372f38(param_1,param_2,param_1 + 0x2b0,(int)*(char *)(DAT_00215e84 + iVar10),param_1 + 0x2b4
               ,(int)*(char *)(iVar11 + 1),param_1 + 0x2b8,(int)*(char *)(iVar11 + 2),param_1 + 700,
               (int)*(char *)(iVar11 + 3),param_1 + 0x2c0,(int)*(char *)(iVar11 + 4),0);
  uVar7 = 0;
  iVar10 = iVar10 + DAT_00215e88;
  do {
    iVar11 = param_1 + uVar7 * 4;
    if ((*(int *)(iVar11 + 0x2b0) != 0) && (-1 < *(char *)(iVar10 + uVar7))) {
      uVar6 = FUN_00372f0c(iVar4 + 0x10);
      iVar9 = param_1 + uVar7 * 0x98;
      *(undefined4 *)(iVar9 + 0x2c4) = *(undefined4 *)(*(int *)(iVar11 + 0x2b0) + 0x10);
      FUN_00372d94(iVar9 + 0x2c4,uVar6);
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 5);
  if ((uVar1 & 7) == 0 || uVar8 == 1) {
    uVar6 = FUN_003532c0(iVar4 + 0x10,0);
    FUN_003532e8(param_1,1);
    uVar6 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar6);
    *(undefined4 *)(param_1 + 0x1a4) = uVar6;
  }
  FUN_003510b0(param_1,DAT_00215e8c);
  if ((uVar1 & 7) == 0 || uVar8 == 1) {
    *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0xc) + DAT_00215e90;
  }
  FUN_0037322c(*(undefined4 *)(DAT_00215e94 + uVar8 * 4),param_1);
  if (uVar8 == 1) {
    FUN_00335090(param_1,param_2,DAT_00215e98);
  }
  else if (uVar8 == 2) {
    FUN_00335090(param_1,param_2,DAT_00215e9c);
  }
  else if (uVar8 == 3 || uVar8 == 4) {
    FUN_00350eb8(param_2,param_1 + 0x1d8);
    FUN_00350d48(param_2,param_1 + 0x1d8,param_1,DAT_00215ea0,param_1 + 0x1f8);
    FUN_003679d0(*(undefined4 *)(param_1 + 0x28),
                 *(float *)(param_1 + 0x2c) +
                 *(float *)(param_1 + 0xc4) * *(float *)(param_1 + 0x58),
                 *(undefined4 *)(param_1 + 0x30),param_1 + 0x148,param_1 + 0xbc);
    fVar12 = *(float *)(param_1 + 0x54);
    fVar13 = *(float *)(param_1 + 0x58);
    fVar14 = *(float *)(param_1 + 0x5c);
    *(float *)(param_1 + 0x148) = *(float *)(param_1 + 0x148) * fVar12;
    *(float *)(param_1 + 0x158) = *(float *)(param_1 + 0x158) * fVar12;
    *(float *)(param_1 + 0x168) = *(float *)(param_1 + 0x168) * fVar12;
    *(float *)(param_1 + 0x14c) = *(float *)(param_1 + 0x14c) * fVar13;
    *(float *)(param_1 + 0x15c) = *(float *)(param_1 + 0x15c) * fVar13;
    *(float *)(param_1 + 0x16c) = *(float *)(param_1 + 0x16c) * fVar13;
    *(float *)(param_1 + 0x150) = *(float *)(param_1 + 0x150) * fVar14;
    *(float *)(param_1 + 0x160) = *(float *)(param_1 + 0x160) * fVar14;
    *(float *)(param_1 + 0x170) = *(float *)(param_1 + 0x170) * fVar14;
    FUN_00357750(0,param_1 + 0x1d8,param_1 + 0x148);
    if (uVar8 == 4) {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
      *(undefined1 *)(param_1 + 0x1f) = 4;
    }
  }
  *(undefined1 *)(param_1 + 0xb6) = 0xff;
  if ((int)((uint)*(ushort *)(param_1 + 0x1c) << 0x18) < 0) {
    iVar4 = FUN_0036aa20(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                         *(undefined4 *)(param_1 + 0x30),param_2 + 0x208c,param_1,param_2,0x11e,
                         (int)*(short *)(param_1 + 0x34),(int)*(short *)(param_1 + 0x36),
                         (int)*(short *)(param_1 + 0x38),*(ushort *)(param_1 + 0x1c) & 0x3f00);
    if (iVar4 == 0) {
      *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) & 0xff7f;
    }
    uVar6 = DAT_00215ea4;
    if ((int)((uint)*(ushort *)(param_1 + 0x1c) << 0x18) < 0) goto LAB_00215e74;
  }
  uVar6 = DAT_00215ec4;
  uVar3 = DAT_00215ec0;
  uVar2 = DAT_00215eac;
  if ((uVar1 & 7) != 0 && uVar8 != 1) {
    if (uVar8 == 2) {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x400000;
      if (iVar5 == 0) {
        *(undefined4 *)(param_1 + 0x1bc) = DAT_00215ebc;
        *(undefined2 *)(param_1 + 0x1c8) = 0;
        return;
      }
      *(undefined4 *)(param_1 + 0x1bc) = DAT_00215eb8;
      *(undefined2 *)(param_1 + 0x1c8) = 3;
    }
    else if (uVar8 == 3 || uVar8 == 4) {
      if (iVar5 != 0) {
        *(undefined1 *)(param_1 + 0x1d4) = 0xff;
        *(undefined1 *)(param_1 + 0x1d5) = 0xff;
        *(undefined1 *)(param_1 + 0x1d6) = 0xff;
        *(undefined4 *)(param_1 + 0x1bc) = uVar3;
        return;
      }
      *(undefined1 *)(param_1 + 0x1d4) = 0;
      *(undefined1 *)(param_1 + 0x1d5) = 0;
      *(undefined1 *)(param_1 + 0x1d6) = 0;
      goto LAB_00215e74;
    }
    return;
  }
  if (iVar5 == 0) {
    *(undefined4 *)(param_1 + 0x58) = DAT_00215ea8;
    uVar6 = uVar2;
  }
  else {
    *(undefined4 *)(param_1 + 0x58) = DAT_00215eb0;
    *(undefined2 *)(param_1 + 0x1c0) = 9;
    uVar6 = DAT_00215eb4;
  }
LAB_00215e74:
  *(undefined4 *)(param_1 + 0x1bc) = uVar6;
  return;
}
