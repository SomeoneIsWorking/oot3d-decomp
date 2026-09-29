// OoT3D decomp @ 00364c18  name=FUN_00364c18  size=852

undefined4 FUN_00364c18(int param_1,int param_2,int param_3)

{
  short sVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  short sVar8;
  short sVar9;
  int iVar10;
  short *psVar11;
  undefined4 uVar12;
  int iVar13;
  bool bVar14;
  uint in_fpscr;
  float fVar15;

  uVar3 = DAT_00364f5c;
  iVar13 = *(int *)(param_1 + 0x20ac);
  sVar1 = *(short *)(param_2 + 0xbe);
  sVar8 = *(short *)(param_2 + 0x82) - sVar1;
  if (sVar8 < 0) {
    sVar8 = -sVar8;
  }
  sVar9 = *(short *)(param_2 + 0x92) - sVar1;
  if (sVar9 < 0) {
    sVar9 = -sVar9;
  }
  iVar10 = FUN_0035b950(DAT_00364f5c,param_1,param_2,DAT_00364f58 - 2000,DAT_00364f58,(int)sVar1);
  if ((iVar10 != 0) &&
     ((*(char *)(DAT_00364f60 + iVar13) == '\x11' || ((*(uint *)(param_1 + 0x5bf4) & 1) != 0)))) {
    FUN_0035b578(param_2);
    return 1;
  }
  iVar10 = FUN_0035b950(uVar3,param_1,param_2,DAT_00364f68,DAT_00364f64,
                        (int)*(short *)(param_2 + 0xbe));
  fVar15 = DAT_00364f8c;
  uVar7 = DAT_00364f7c;
  uVar6 = DAT_00364f78;
  uVar5 = DAT_00364f74;
  uVar4 = DAT_00364f70;
  uVar3 = DAT_00364f6c;
  if (iVar10 == 0) {
    psVar11 = (short *)FUN_00369334(DAT_00364f8c,param_1,param_2,0xffffffff,3);
    if (psVar11 == (short *)0x0) {
      if (param_3 == 0) {
        return 0;
      }
      if (sVar9 < DAT_00364f9c) {
        sVar8 = *(short *)(iVar13 + 0xbe);
        if (*(short *)(param_2 + 0x1c) == 0) {
          fVar15 = DAT_00364fa0;
        }
        sVar1 = *(short *)(param_2 + 0xbe);
        if (((*(float *)(param_2 + 0x98) <= fVar15) &&
            (iVar13 = FUN_00369608(param_1,param_2), iVar13 == 0)) &&
           (((*(uint *)(param_1 + 0x5bf4) & 7) != 0 ||
            ((int)(short)(sVar8 - sVar1) + 0x38dfU <= DAT_00364fa4)))) {
          FUN_00364aa4(param_2);
          return 1;
        }
        FUN_00362de8(param_2);
        return 1;
      }
    }
    else {
      *(undefined2 *)(param_2 + 0x36) = *(undefined2 *)(param_2 + 0x92);
      *(undefined2 *)(param_2 + 0xbe) = *(undefined2 *)(param_2 + 0x92);
      bVar14 = (*(ushort *)(param_2 + 0x90) & 8) != 0;
      uVar2 = *(ushort *)(param_2 + 0x90) & 8;
      if (bVar14) {
        uVar2 = DAT_00364f58;
      }
      if (bVar14 && (int)sVar8 < (int)uVar2) {
        if (*psVar11 != 0xda) goto LAB_00364ec8;
      }
      else if (*psVar11 != 0xda) goto LAB_00364d90;
      iVar13 = FUN_003306c4(param_2,psVar11);
      if ((iVar13 < DAT_00364f88) &&
         ((short)((*(short *)(param_2 + 0xbe) - psVar11[0x1b]) + -0x8000) < 16000))
      goto LAB_00364e40;
    }
LAB_00364ec8:
    FUN_00362f48(param_2,param_1);
  }
  else {
    *(undefined2 *)(param_2 + 0x36) = *(undefined2 *)(param_2 + 0x92);
    *(undefined2 *)(param_2 + 0xbe) = *(undefined2 *)(param_2 + 0x92);
    if ((((*(ushort *)(param_2 + 0x90) & 8) == 0) || (DAT_00364f80 < (int)sVar8 + 11999U)) ||
       (DAT_00364f84 <= *(int *)(param_2 + 0x98))) {
      if ((*(char *)(DAT_00364f60 + iVar13) == '\x11') ||
         ((*(int *)(param_2 + 0x98) < DAT_00364f88 && ((*(uint *)(param_1 + 0x5bf4) & 1) != 0)))) {
        FUN_0035b578(param_2);
        return 1;
      }
LAB_00364d90:
      FUN_00364a2c(param_2);
      return 1;
    }
LAB_00364e40:
    uVar12 = FUN_0036ae14(param_2 + 0x1e0,3);
    uVar12 = VectorSignedToFloat(uVar12,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00353020(uVar5,uVar12,uVar4,uVar3,param_2 + 0x1e0,DAT_00364f90,2);
    *(undefined4 *)(param_2 + 0xccc) = 0;
    *(undefined4 *)(param_2 + 0x6c) = uVar6;
    *(undefined4 *)(param_2 + 100) = uVar7;
    *(undefined2 *)(param_2 + 0xce4) = 0;
    *(undefined4 *)(param_2 + 0xcb8) = 4;
    FUN_00375bcc(param_2,DAT_00364f94);
    *(undefined2 *)(param_2 + 0x36) = *(undefined2 *)(param_2 + 0xbe);
    *(undefined4 *)(param_2 + 0xcc0) = DAT_00364f98;
  }
  return 1;
}
