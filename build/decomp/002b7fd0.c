// OoT3D decomp @ 002b7fd0  name=FUN_002b7fd0  size=4340

/* WARNING: Possible PIC construction at 0x002b8298: Changing call to branch */
/* WARNING: Possible PIC construction at 0x002b8944: Changing call to branch */
/* WARNING: Possible PIC construction at 0x002b89bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x002b8948) */
/* WARNING: Removing unreachable block (ram,0x002b8974) */
/* WARNING: Removing unreachable block (ram,0x002b8954) */
/* WARNING: Removing unreachable block (ram,0x002b829c) */
/* WARNING: Removing unreachable block (ram,0x002b89c0) */
/* WARNING: Removing unreachable block (ram,0x002b89ec) */
/* WARNING: Removing unreachable block (ram,0x002b89cc) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_002b7fd0(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  char cVar3;
  byte bVar4;
  short sVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  byte *pbVar13;
  undefined4 uVar14;
  int iVar15;
  undefined4 unaff_lr;
  bool bVar16;
  bool bVar17;
  uint in_fpscr;
  uint uVar18;
  uint uVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 *puStack_a0;
  undefined1 *apuStack_9c [6];
  undefined1 auStack_84 [4];
  undefined1 auStack_80 [4];
  undefined1 auStack_7c [12];
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  int iStack_54;
  int iStack_50;
  float *pfStack_4c;
  int iStack_48;
  
  fVar11 = fRam002b838c;
  iVar15 = *(int *)(param_1 + 0x12b8);
  *(uint *)(param_1 + 0x1714) = *(uint *)(param_1 + 0x1714) | 0x40;
  fVar12 = fRam002b8394;
  uVar21 = uRam002b8390;
  uVar18 = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 0x2264) == fRam002b8394) << 0x1e;
  if (!SUB41(uVar18 >> 0x1e,0)) {
    fVar20 = (float)func_0x0036b4d0(uRam002b8390,param_1 + 0x254);
    uVar9 = uVar18 & 0xfffffff;
    uVar19 = uVar9 | (uint)(fVar20 < fVar12) << 0x1f;
    uVar18 = uVar19 | (uint)(NAN(fVar20) || NAN(fVar12)) << 0x1c;
    if ((byte)(uVar19 >> 0x1f) == ((byte)(uVar18 >> 0x1c) & 1)) {
      fVar23 = *(float *)(param_1 + 0x2264);
      fVar20 = ABS(fVar23);
      uVar19 = uVar9 | (uint)(fVar20 < fVar11) << 0x1f | (uint)(fVar20 == fVar11) << 0x1e;
      uVar18 = uVar19 | (uint)(NAN(fVar20) || NAN(fVar11)) << 0x1c;
      bVar4 = (byte)(uVar19 >> 0x18);
      fVar20 = fVar23;
      if (!(bool)(bVar4 >> 6 & 1) && bVar4 >> 7 == ((byte)(uVar18 >> 0x1c) & 1)) {
        uVar9 = uVar9 | (uint)(fVar23 < fVar12) << 0x1f;
        uVar18 = uVar9 | (uint)(NAN(fVar23) || NAN(fVar12)) << 0x1c;
        fVar20 = fVar11;
        if ((byte)(uVar9 >> 0x1f) != ((byte)(uVar18 >> 0x1c) & 1)) {
          fVar20 = fRam002b8398;
        }
        fVar20 = fVar20 * fVar11;
      }
      *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) + fVar20;
      *(float *)(param_1 + 0x2264) = fVar23 - fVar20;
    }
  }
  fVar20 = fRam002b839c;
  iStack_48 = param_1 + 0x2800;
  pfStack_4c = (float *)(param_1 + 0x2b8);
  iStack_50 = param_1 + 0x1200;
  if (*(short *)(param_1 + 0x2238) == 0) {
    iVar6 = func_0x0036b4ec(param_1 + 0x254,param_2);
    if (iVar6 != 0) {
      *(undefined4 *)(param_1 + 0x284) = 0x21;
      *(float *)(param_1 + 0x28) = *(float *)(iVar15 + 0x28) + *(float *)(iVar15 + 0xeb8);
      *(float *)(param_1 + 0x2c) = *(float *)(iVar15 + 0x2c) + *(float *)(iVar15 + 0xebc);
      *(float *)(param_1 + 0x30) = *(float *)(iVar15 + 0x30) + *(float *)(iVar15 + 0xec0);
      uVar18 = (uint)*(byte *)(param_1 + 0x2c9);
      *(float *)(param_1 + 0x2ac) = fVar12;
      *(float *)(param_1 + 0x2b0) = fVar12;
      *(float *)(param_1 + 0x2b4) = fVar12;
      *(float *)(*(int *)(param_1 + 0x2cc) + uVar18 * 0x34 + 0xc) = fVar12;
      *(float *)(*(int *)(param_1 + 0x2cc) + uVar18 * 0x34 + 0x1c) = fVar12;
      *(float *)(*(int *)(param_1 + 0x2cc) + uVar18 * 0x34 + 0x2c) = fVar12;
      fVar11 = pfStack_4c[1];
      fVar12 = pfStack_4c[2];
      *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) - *pfStack_4c * fVar20;
      *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) - fVar11 * fVar20;
      *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) - fVar12 * fVar20;
      *(undefined2 *)(param_1 + 0x2238) = 99;
      if ((*(uint *)(param_1 + 0x29b8) & 0x10000) == 0) {
        return;
      }
      *(uint *)(param_1 + 0x29b8) = *(uint *)(param_1 + 0x29b8) & 0xfffeffff;
      *(undefined4 *)(iVar15 + 0x1a8) = 1;
      return;
    }
    cVar3 = *(char *)(iStack_50 + 0xb4);
    if ((iRam002b83a0 < *(int *)(iStack_48 + 0x1cc)) &&
       (iVar15 = func_0x0036b1e0(uRam002b83a4,param_1 + 0x254), iVar15 != 0)) {
      *(undefined4 *)(param_1 + 0x290) = *(undefined4 *)(param_1 + 0x29c);
      *(uint *)(param_1 + 0x29b8) = *(uint *)(param_1 + 0x29b8) | 0x10000;
    }
    pbVar13 = (byte *)(iRam002b83a8 + (((int)cVar3 >> 0x1f) + 1) * 2);
    uVar21 = VectorUnsignedToFloat((uint)*pbVar13,(byte)(uVar18 >> 0x15) & 3);
    iVar15 = func_0x0036b1e0(uVar21,param_1 + 0x254);
    uVar21 = uRam002b83ac;
    if (iVar15 == 0) {
      uVar21 = VectorUnsignedToFloat((uint)pbVar13[1],(byte)(uVar18 >> 0x15) & 3);
      iVar15 = func_0x0036b1e0(uVar21,param_1 + 0x254);
      if (iVar15 == 0) {
        return;
      }
      func_0x002d7930(param_2,param_1);
      unaff_lr = 0x2b829c;
      uVar21 = uRam002b83b0;
      register0x00000054 = (BADSPACEBASE *)&puStack_a0;
    }
    goto SUB_0036f59c;
  }
  func_0x002d7930(param_2,param_1);
  iVar6 = iRam002b83b4;
  bVar17 = false;
  if ((*(uint *)(param_1 + 0x1710) & 0x8000) != 0) {
    iVar10 = *(int *)(param_1 + 0x284);
    iVar8 = iRam002b83b4 + *(int *)(iRam002b83b8 + 0x58) * 0xc;
    bVar16 = iVar10 != *(int *)(iVar8 + 4);
    if (bVar16) {
      iVar8 = *(int *)(iVar8 + 8);
    }
    if (!bVar16 || iVar10 == iVar8) {
      bVar17 = true;
    }
  }
  uVar9 = (uint)*(byte *)(iVar15 + 0xe74);
  if (((uVar9 != (int)*(short *)(param_1 + 0x2238)) &&
      ((1 < uVar9 || (1 < *(short *)(param_1 + 0x2238))))) || (bVar17)) {
    *(ushort *)(param_1 + 0x2238) = (ushort)*(byte *)(iVar15 + 0xe74);
    uVar14 = uRam002b87a0;
    if (uVar9 < 2) {
      iVar8 = 0;
      iVar10 = func_0x003759d0();
      *(undefined2 *)(param_1 + 0x2238) = 1;
      if (iVar10 < iRam002b83bc) {
        iVar8 = 2;
      }
      else if (iVar10 < iRam002b83c0) {
        iVar8 = 1;
      }
      uVar9 = *(uint *)(param_1 + 0x1710);
      bVar17 = (uVar9 & 0x8000) == 0;
      if (bVar17) {
        uVar9 = *(uint *)(param_2 + 0x2130);
      }
      *(float *)(param_1 + 0x2214) = fVar12;
      if (!bVar17 || uVar9 != 0) {
        iVar8 = 0;
      }
      func_0x003604f0(param_1 + 0x254,param_2,
                      *(undefined4 *)(iVar6 + *(int *)(iRam002b83b8 + 0x58) * 0xc + iVar8 * 4));
    }
    else {
      *(undefined4 *)(param_1 + 0x284) =
           *(undefined4 *)(iRam002b879c + *(int *)(iRam002b83b8 + 0x58) * 0x34 + uVar9 * 4 + -8);
      *(float *)(param_1 + 0x288) = fVar11;
      *(undefined4 *)(param_1 + 0x28c) = uVar14;
      if (uVar9 < 4) {
        func_0x0036aef0(param_2,param_1);
        *(undefined1 *)(param_1 + 0x2237) = 0;
      }
    }
  }
  if (*(short *)(param_1 + 0x2238) == 1) {
    if ((*(int *)(iRam002b83b8 + 0x24) == 0) &&
       ((*(uint *)(iRam002b87a4 + *(int *)(param_2 + 0x20ac)) & 0x80) == 0 &&
        (*(uint *)(*(int *)(param_2 + 0x20ac) + 4) & 0x100) == 0)) {
      iVar6 = func_0x0036b4ec(param_1 + 0x254,param_2);
      if (iVar6 == 0) {
        if (*(int *)(param_1 + 0x284) == 0x21) {
          func_0x00360a1c(param_1,uRam002b87a8);
        }
      }
      else {
        *(undefined2 *)(param_1 + 0x2238) = 99;
      }
    }
    else {
      func_0x003604f0(param_1 + 0x254,param_2,0x1f);
    }
  }
  else {
    uVar14 = func_0x004c5510(iVar15);
    *(undefined4 *)(param_1 + 0x290) = uVar14;
    func_0x002bb34c(param_1 + 0x254,param_2);
  }
  iVar6 = param_1 + 0x1764;
  if (0 < *(char *)(param_1 + 0x228b)) {
    puStack_a0 = puRam002b87ac;
    fVar23 = (float)VectorSignedToFloat((int)*(char *)(param_1 + 0x228b),(byte)(uVar18 >> 0x15) & 3)
    ;
    func_0x002b9c14(fVar23 * fVar20,param_2,param_1 + 0x254,*(undefined4 *)(param_1 + 0x2cc),
                    *(undefined4 *)(param_1 + 0x17dc));
  }
  iVar8 = iRam002b87a4;
  cVar3 = *(char *)(param_1 + 0x228b) + -0x10;
  *(char *)(param_1 + 0x228b) = cVar3;
  if (cVar3 < '\0') {
    *(undefined1 *)(param_1 + 0x228b) = 0;
  }
  if (((*(uint *)(iVar8 + *(int *)(param_2 + 0x20ac)) & 0x80) != 0 ||
       (*(uint *)(*(int *)(param_2 + 0x20ac) + 4) & 0x100) != 0) ||
     (iVar8 = *(int *)(param_1 + 0x284),
     (((iVar8 == 0x1f || iVar8 == 0x28) || iVar8 == 0x29) || iVar8 == 0x2d) || iVar8 == 0x31)) {
    fStack_6c = fVar12;
    fStack_68 = fVar11;
    fStack_64 = fVar12;
    fVar23 = (float)VectorSignedToFloat(-(int)*(short *)(param_1 + 0x1758),
                                        (byte)(uVar18 >> 0x15) & 3);
    func_0x003625f8(fVar23 * fRam002b87b0,apuStack_9c,&fStack_6c);
    func_0x0036c174(*(int *)(param_1 + 0x2cc) + 0x2d8,apuStack_9c,*(int *)(param_1 + 0x2cc) + 0x2d8)
    ;
  }
  func_0x002c3920(param_2,param_1 + 0x254,*(undefined4 *)(param_1 + 0x2d0),
                  *(undefined4 *)(param_1 + 0x2cc));
  uVar9 = func_0x0037571c(param_2);
  iVar8 = iRam002b87b8;
  uVar14 = uRam002b87b4;
  bVar17 = uVar9 == 0;
  if (bVar17) {
    uVar9 = (uint)*(byte *)(param_1 + 0x12bc);
  }
  if (bVar17 && uVar9 == 0) {
    if (1 < (int)*(short *)(param_1 + 0x2238) - 2U) {
      iVar8 = func_0x0034cc78(param_1,param_2);
      *(int *)(iRam002b83b8 + 0x24) = iVar8;
      if (iVar8 != 0) {
        *(undefined1 *)(param_1 + 0x2237) = 0;
        *(undefined1 *)(param_1 + 0x228b) = 100;
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x12bc) == '\a') {
      *(undefined1 *)(param_1 + 0x12bc) = 0;
    }
    *(undefined1 *)(param_1 + 0x1749) = 0;
    *(undefined1 *)(param_1 + 0x2237) = 0;
    *(undefined4 *)(iVar8 + 0xcc) = uVar14;
    *(undefined1 *)(iVar8 + 0xd4) = 0;
  }
  *(float *)(param_1 + 0x28) = *(float *)(iVar15 + 0x28) + *(float *)(iVar15 + 0xeb8);
  *(float *)(param_1 + 0x2c) = *(float *)(iVar15 + 0x2c) + *(float *)(iVar15 + 0xebc);
  *(float *)(param_1 + 0x30) = *(float *)(iVar15 + 0x30) + *(float *)(iVar15 + 0xec0);
  uVar9 = (uint)*(byte *)(param_1 + 0x2c9);
  iStack_54 = uVar9 * 0xd;
  *(float *)(*(int *)(param_1 + 0x2cc) + uVar9 * 0x34 + 0xc) = fVar12;
  *(float *)(*(int *)(param_1 + 0x2cc) + uVar9 * 0x34 + 0x1c) = fVar12;
  *(float *)(*(int *)(param_1 + 0x2cc) + uVar9 * 0x34 + 0x2c) = fVar12;
  fStack_60 = *pfStack_4c * fVar20;
  fStack_5c = pfStack_4c[1] * fVar20;
  fStack_58 = pfStack_4c[2] * fVar20;
  *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) - fStack_60;
  *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) - fStack_5c;
  *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) - fStack_58;
  uVar2 = *(undefined2 *)(iVar15 + 0xbe);
  *(undefined2 *)(param_1 + 0xbe) = uVar2;
  *(undefined2 *)(param_1 + 0x2220) = uVar2;
  if (*(char *)(param_1 + 0x12bc) == '\0') {
    if ((*(uint *)(iRam002b87a4 + *(int *)(param_2 + 0x20ac)) & 0x80) != 0 ||
        (*(uint *)(*(int *)(param_2 + 0x20ac) + 4) & 0x100) != 0) {
      return;
    }
    uVar18 = uVar18 & 0xfffffff | (uint)(*(float *)(iVar15 + 0x6c) == fVar12) << 0x1e;
    if ((SUB41(uVar18 >> 0x1e,0)) && (iVar8 = func_0x00354f70(param_1,param_2), iVar8 != 0)) {
      return;
    }
    uVar9 = func_0x00349574(param_1);
    uVar9 = uVar9 | *(uint *)(iRam002b83b8 + 0x24);
    bVar17 = uVar9 == 0;
    if (bVar17) {
      uVar9 = *(uint *)(param_1 + 0x1710);
    }
    if ((bVar17 && (uVar9 & 0x800000) == 0) &&
       ((*(uint *)(*(int *)(param_1 + 0x29c8) + 4) & *puRam002b8e64) != 0)) {
      if ((*(char *)((uint)*(byte *)(param_1 + 0x222a) + param_1 + 0x2231) == '\0') &&
         (*(int *)(iRam002b83b8 + 0x28) != 7)) {
        func_0x00349514(param_1,param_2);
        return;
      }
      if ((*(char *)(param_1 + 0x221b) == '\0') && ('\x02' < *(char *)(iRam002b8e68 + param_1))) {
        func_0x0034d688(param_2,param_1,0xff);
      }
      else {
        *(uint *)(param_1 + 0x1714) = *(uint *)(param_1 + 0x1714) ^ 0x100000;
      }
    }
  }
  if (*(int *)(iRam002b83b8 + 0x24) == 0) {
    if (*(char *)(param_1 + 0x2237) == '\0') {
      if (((*(uint *)(iVar15 + 0xe54) & 0x200) == 0) &&
         (((((*(uint *)(iVar15 + 0xe54) & 0x100) == 0 ||
            (iVar15 = (int)*(short *)(param_1 + 0x2238), iVar15 < 2)) || (iVar15 == 99)) ||
          (*(int *)(iRam002b8e74 + *(int *)(iRam002b83b8 + 0x58) * 0x34 + iVar15 * 4 + -8) == -1))))
      {
        fVar20 = *(float *)(param_1 + 0x2214);
        uVar9 = uVar18 & 0xfffffff | (uint)(fVar20 < fVar12) << 0x1f |
                (uint)(fVar20 == fVar12) << 0x1e;
        uVar18 = uVar9 | (uint)(NAN(fVar20) || NAN(fVar12)) << 0x1c;
        bVar4 = (byte)(uVar9 >> 0x18);
        if (!(bool)(bVar4 >> 6 & 1) && bVar4 >> 7 == ((byte)(uVar18 >> 0x1c) & 1)) {
          puStack_a0 = puRam002b87ac;
          func_0x002b9c14(param_2,param_1 + 0x254,*(undefined4 *)(param_1 + 0x2cc),
                          *(undefined4 *)(param_1 + 0x17dc));
          *(float *)(param_1 + 0x2214) = *(float *)(param_1 + 0x2214) - fRam002b8e78;
        }
      }
      else {
        func_0x003604f0(iVar6,param_2);
        *(undefined1 *)(param_1 + 0x2237) = 1;
      }
    }
    else {
      iVar8 = func_0x0036b4ec(iVar6,param_2);
      if (iVar8 == 0) {
        if ((*(int *)(param_1 + 0x284) == 0x31 || *(int *)(param_1 + 0x284) == 0x204) &&
           (*(int *)(param_1 + 0x1794) == 0x22)) {
          fVar20 = *(float *)(param_1 + 0x17a0);
          fVar23 = *(float *)(iRam002b83b8 + 0x130);
          uVar9 = uVar18 & 0xfffffff | (uint)(fVar20 < fVar23) << 0x1f |
                  (uint)(fVar20 == fVar23) << 0x1e;
          uVar18 = uVar9 | (uint)(NAN(fVar20) || NAN(fVar23)) << 0x1c;
          bVar4 = (byte)(uVar9 >> 0x18);
          if (!(bool)(bVar4 >> 6 & 1) && bVar4 >> 7 == ((byte)(uVar18 >> 0x1c) & 1))
          goto LAB_002b88c8;
        }
      }
      else {
LAB_002b88c8:
        *(uint *)(iVar15 + 0xe54) = *(uint *)(iVar15 + 0xe54) & 0xfffffeff;
        *(undefined1 *)(param_1 + 0x2237) = 0;
        *(float *)(param_1 + 0x2214) = fVar11;
      }
      *(float *)(*(int *)(param_1 + 0x17dc) + iStack_54 * 4 + 0xc) = fVar12;
      *(float *)(*(int *)(param_1 + 0x17dc) + iStack_54 * 4 + 0x1c) = fVar12;
      *(float *)(*(int *)(param_1 + 0x17dc) + iStack_54 * 4 + 0x2c) = fVar12;
      if (*(int *)(param_1 + 0x1794) == 0x22) {
        iVar15 = func_0x0036b1e0(*(undefined4 *)(iRam002b83b8 + 0x134),iVar6);
        if (iVar15 != 0) {
          unaff_lr = 0x2b8948;
          uVar21 = uRam002b8e70;
          register0x00000054 = (BADSPACEBASE *)&puStack_a0;
SUB_0036f59c:
          *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
          *(undefined4 *)((int)register0x00000054 + -0x10) = uRam0036f5d4;
          *(undefined4 *)((int)register0x00000054 + -0xc) = uRam0036f5d0;
          func_0x0037547c(uVar21,param_1 + 0x28,4,uRam0036f5d4);
                    /* WARNING: Could not recover jumptable at 0x0036f5cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -4))();
          return;
        }
        func_0x002c3920(param_2,param_1 + 0x254,*(undefined4 *)(param_1 + 0x2cc),
                        *(undefined4 *)(param_1 + 0x17dc));
      }
      else {
        iVar15 = func_0x0036b1e0(uVar21,iVar6);
        if (iVar15 != 0) {
          unaff_lr = 0x2b89c0;
          uVar21 = uRam002b8e70;
          register0x00000054 = (BADSPACEBASE *)&puStack_a0;
          goto SUB_0036f59c;
        }
        puStack_a0 = puRam002b87ac;
        func_0x0035e9fc(param_2,param_1 + 0x254,*(undefined4 *)(param_1 + 0x2cc),
                        *(undefined4 *)(param_1 + 0x17dc));
      }
    }
  }
  fVar20 = fRam002b8e84;
  if ((*(uint *)(param_1 + 0x1710) & 0x100000) != 0) {
    if (*(char *)(param_1 + 0x1749) == '\x02') {
      iVar15 = func_0x0034dd2c(param_1);
      if (iVar15 == 0) {
        uVar21 = 10;
      }
      else if (*(int *)(iRam002b8e7c + 4) == 0) {
        uVar21 = 7;
      }
      else {
        uVar21 = 0xb;
      }
    }
    else {
      uVar21 = 6;
    }
    uVar7 = func_0x0036c5bc(param_2,0);
    iVar15 = func_0x00332284(uVar7,uVar21);
    if (((iVar15 != 0) && ((*(uint *)(*(int *)(param_1 + 0x29c8) + 4) & *puRam002b8e64) == 0)) &&
       ((iVar15 = func_0x003518cc(param_1), iVar15 == 0 &&
        ((*(uint *)(param_1 + 0x1710) & uRam002b8e80) == 0)))) {
      puStack_a0 = (undefined1 *)0x0;
      sVar5 = func_0x002c036c(param_2,param_1,1);
      iVar15 = iRam002b83b8;
      *(short *)(param_1 + 0x1758) = sVar5 - *(short *)(param_1 + 0xbe);
      *(undefined4 *)(param_2 + 0x19c) = *(undefined4 *)(iVar15 + 0x13c);
      iVar6 = func_0x0036c5bc(param_2,0);
      if (iVar6 == 0) {
        return;
      }
      func_0x00367c54(iVar6);
      func_0x00367c60(*(undefined4 *)(iVar15 + 0x138),iVar6);
      return;
    }
    *(undefined1 *)(param_1 + 0x1749) = 0;
    *(undefined2 *)(param_1 + 0x2238) = 1;
    iVar15 = iRam002b87b8;
    *(undefined4 *)(iRam002b87b8 + 0xcc) = uVar14;
    *(undefined1 *)(iVar15 + 0xd4) = 0;
    *(uint *)(param_1 + 0x1710) = *(uint *)(param_1 + 0x1710) & 0xffefffff;
    func_0x002ded60();
    iVar15 = func_0x0036c5bc(param_2,0);
    if (iVar15 == 0) {
      return;
    }
    func_0x00367c48();
    return;
  }
  if (*(char *)(param_1 + 0x12bc) != '\0') goto LAB_002b8fc0;
  iVar15 = *(int *)(param_1 + 0x12b8);
  if (*(short *)(param_1 + 0x2238) < 0) {
    *(undefined2 *)(param_1 + 0x2238) = 99;
  }
  else {
    fVar23 = (float)(((int)*(char *)(iStack_50 + 0xb4) >> 0x1f) + 1);
    fVar24 = *(float *)(iVar15 + 0x2c) + fRam002b8e84;
    fVar25 = *(float *)(iVar15 + 0x2c) - fRam002b8e84;
    fStack_64 = fVar23;
    fVar22 = (float)func_0x003596d0(param_2,param_1,iRam002b8e88 + (int)fVar23 * 0xc,&fStack_70);
    uVar9 = uVar18 & 0xfffffff | (uint)(fVar22 < fVar25) << 0x1f | (uint)(fVar22 == fVar25) << 0x1e;
    uVar19 = uVar9 | (uint)(NAN(fVar22) || NAN(fVar25)) << 0x1c;
    bVar4 = (byte)(uVar9 >> 0x18);
    if (((bool)(bVar4 >> 6 & 1) || bVar4 >> 7 != ((byte)(uVar19 >> 0x1c) & 1)) ||
       (uVar19 = uVar18 & 0xfffffff | (uint)(fVar24 <= fVar22) << 0x1d, SUB41(uVar19 >> 0x1d,0))) {
LAB_002b8d10:
      fVar23 = *(float *)(*(int *)(param_1 + 0x12b8) + 0x2c);
      uVar18 = (uint)fStack_64 ^ 1;
      fVar22 = (float)func_0x003596d0(param_2,param_1,iRam002b8e88 + uVar18 * 0xc,&fStack_70);
      if ((fVar23 - fVar20 < fVar22) &&
         (uVar19 = uVar19 & 0xfffffff | (uint)(fVar23 + fVar20 <= fVar22) << 0x1d,
         !SUB41(uVar19 >> 0x1d,0))) {
        apuStack_9c[0] = auStack_7c;
        puStack_a0 = auStack_84;
        iVar6 = func_0x002c1d18(param_2,param_1,iRam002b8e8c + uVar18 * 0xc,auStack_80);
        if (iVar6 == 0) {
          apuStack_9c[0] = auStack_7c;
          puStack_a0 = auStack_84;
          iVar6 = func_0x002c1d18(param_2,param_1,iRam002b8e90 + uVar18 * 0xc,auStack_80);
          if (iVar6 == 0) {
            *(char *)(param_1 + 0x12b4) = -*(char *)(iStack_50 + 0xb4);
            goto LAB_002b8dd0;
          }
        }
      }
    }
    else {
      apuStack_9c[0] = auStack_7c;
      puStack_a0 = auStack_84;
      iVar6 = func_0x002c1d18(param_2,param_1,iRam002b8e8c + (int)fVar23 * 0xc,auStack_80);
      if (iVar6 != 0) goto LAB_002b8d10;
      apuStack_9c[0] = auStack_7c;
      puStack_a0 = auStack_84;
      iVar6 = func_0x002c1d18(param_2,param_1,iRam002b8e90 + (int)fVar23 * 0xc,auStack_80);
      if (iVar6 != 0) goto LAB_002b8d10;
LAB_002b8dd0:
      iVar6 = func_0x0037571c(param_2);
      if (((iVar6 == 0) && (*(char *)(param_2 + 0x7f12) == '\0')) &&
         ((uVar18 = *(uint *)(iVar15 + 0xe54), (uVar18 & 0x40) != 0 ||
          ((cVar3 = *(char *)(iVar15 + 0x1a4), (cVar3 == '\x05' || cVar3 == '\0') || cVar3 == '\x06'
           && ((uVar18 & 0x80000) == 0 && (uVar18 & 0x2000000) == 0)))))) {
        *(uint *)(param_1 + 0x1714) = *(uint *)(param_1 + 0x1714) | 0x400000;
        uVar18 = *(uint *)(iVar15 + 0xe54);
        if (((uVar18 & 0x40) != 0) ||
           (((cVar3 = *(char *)(iVar15 + 0x1a4),
             (cVar3 == '\x05' || cVar3 == '\0') || cVar3 == '\x06' &&
             ((uVar18 & 0x80000) == 0 && (uVar18 & 0x2000000) == 0)) &&
            ((*(uint *)(*(int *)(param_1 + 0x29c8) + 4) & *puRam002b8e64) != 0)))) {
          *(undefined4 *)(iVar15 + 0x128) = 0;
          uVar1 = *(undefined1 *)(param_1 + 0x2a6);
          *(undefined1 *)(param_1 + 0x2a6) = 0;
          func_0x0036055c(param_2,param_1,uRam002b9118,0);
          *(undefined1 *)(param_1 + 0x2a6) = uVar1;
          *(float *)(param_1 + 0x2264) = fVar22 - *(float *)(iVar15 + 0x2c);
          fStack_68 = fRam002b911c;
          iVar15 = *(int *)(param_1 + 0x12b8);
          uVar21 = *(undefined4 *)(iVar15 + 0x2c);
          uVar14 = *(undefined4 *)(iVar15 + 0x30);
          *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(iVar15 + 0x28);
          *(undefined4 *)(param_1 + 0x2c) = uVar21;
          *(undefined4 *)(param_1 + 0x30) = uVar14;
          fStack_70 = *pfStack_4c * fStack_68;
          fStack_6c = pfStack_4c[1] * fStack_68;
          fStack_68 = pfStack_4c[2] * fStack_68;
          *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + fStack_70;
          *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) + fStack_6c;
          *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) + fStack_68;
          if (*(char *)(iStack_50 + 0xb4) < '\0') {
            uVar21 = 0x26;
          }
          else {
            uVar21 = 0x24;
          }
          uVar14 = func_0x003603c0(param_1 + 0x254,uVar21);
          uVar14 = VectorSignedToFloat(uVar14,(byte)(uVar19 >> 0x15) & 3);
          func_0x00360190(fVar11,fVar12,uVar14,fVar12,param_1 + 0x254,param_2,uVar21,2);
          return;
        }
      }
    }
  }
  iVar15 = func_0x003518dc(param_1,param_2);
  if (iVar15 != 0) {
    return;
  }
LAB_002b8fc0:
  if (*(int *)(param_1 + 0x16f8) == 0) {
    iVar15 = func_0x0033bd6c(param_1);
    if (iVar15 == 0) {
      func_0x002ded60();
      if ((*(int *)(param_2 + 0x2130) != 0) && (*(char *)(param_1 + 0x2237) == '\0')) {
        func_0x002bf814(param_1,param_2,*(int *)(param_2 + 0x2130),0);
      }
    }
    else {
      iVar15 = func_0x004c6444();
      if (iVar15 == 0) {
        func_0x002d0518();
        func_0x00306f04();
        func_0x002c0804();
        *(undefined2 *)(iStack_48 + 0xf0) = *(undefined2 *)(param_1 + 0x48);
        *(undefined2 *)(iStack_48 + 0xf2) = *(undefined2 *)(param_1 + 0x4a);
        *(undefined2 *)(iStack_48 + 0xf4) = *(undefined2 *)(param_1 + 0x4c);
      }
      puStack_a0 = (undefined1 *)0x0;
      sVar5 = func_0x002c036c(param_2,param_1,1);
      *(short *)(param_1 + 0x1758) = sVar5 - *(short *)(param_1 + 0xbe);
    }
  }
  else {
    iVar15 = func_0x0033bd6c(param_1);
    if (iVar15 == 0) {
      func_0x003341e4(param_1,0);
    }
    else {
      sVar5 = func_0x003341e4(param_1,1);
      iVar15 = iRam002b9120;
      sVar5 = sVar5 - *(short *)(param_1 + 0xbe);
      *(short *)(param_1 + 0x1758) = sVar5;
      if ((sVar5 < iVar15) || (iVar15 = -iVar15, iVar15 < sVar5)) {
        sVar5 = (short)iVar15;
      }
      *(short *)(param_1 + 0x1758) = sVar5;
      *(short *)(param_1 + 0x4a) = sVar5 + *(short *)(param_1 + 0xbe);
      *(uint *)(param_1 + 0x29b8) = *(uint *)(param_1 + 0x29b8) | 0x10000000;
      *(ushort *)(param_1 + 0x174a) = *(ushort *)(param_1 + 0x174a) | 0x80;
    }
  }
  return;
}

