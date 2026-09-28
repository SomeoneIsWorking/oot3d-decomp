// OoT3D decomp @ 00240ca0  name=FUN_00240ca0  size=908

void FUN_00240ca0(undefined4 param_1)

{
  undefined2 uVar1;
  short sVar2;
  ushort uVar3;
  undefined4 uVar4;
  int iVar5;
  ushort *puVar6;
  float *pfVar7;
  undefined2 *puVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  int unaff_r5;
  int unaff_r6;
  int iVar13;
  int unaff_r7;
  undefined4 unaff_r8;
  int iVar14;
  int iVar15;
  bool in_ZR;
  uint in_fpscr;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int iVar20;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;

  if (!in_ZR) {
    param_1 = FUN_00347258();
  }
  *(undefined4 *)(unaff_r7 + 0x21c) = param_1;
  in_stack_00000000 = 0x10;
  in_stack_00000004 = 0;
  uVar4 = func_0x00340e14();
  uVar11 = *(undefined4 *)(*(int *)(unaff_r7 + 0x218) + 0x10);
  uVar4 = func_0x00372f0c(uVar4,1);
  *(undefined4 *)(unaff_r5 + 0x2220) = uVar11;
  func_0x00372d94((undefined4 *)(unaff_r5 + 0x2220),uVar4);
  *(undefined1 *)(unaff_r5 + 0x2230) = 1;
  *(undefined4 *)(unaff_r5 + 0x2368) = 0;
  *(undefined4 *)(unaff_r5 + 0x236c) = 0;
  *(undefined4 *)(unaff_r5 + 0x2370) = 0;
  *(undefined4 *)(unaff_r5 + 0x2374) = 0;
  *(undefined4 *)(unaff_r5 + 0x2378) = 0;
  *(undefined4 *)(unaff_r5 + 0x237c) = 0;
  *(undefined4 *)(unaff_r5 + 0x2380) = 0;
  *(undefined4 *)(unaff_r5 + 0x2384) = 0;
  *(undefined4 *)(unaff_r5 + 0x2388) = 0;
  func_0x00343280(unaff_r5 + 0x1ec,uRam00241064);
  *(uint *)(unaff_r7 + 0x20c) = unaff_r5 + 0x1fbU & 0xfffffff0;
  *(undefined4 *)(unaff_r7 + 0x38c) = unaff_r8;
  *(undefined4 *)(unaff_r5 + 0x2368) = 0x2000;
  *(undefined2 *)(unaff_r5 + 0x236c) = 1;
  *(char *)(unaff_r5 + 0x236e) = (char)unaff_r8;
  *(undefined2 *)(unaff_r5 + 0x2370) = 0x40;
  *(undefined2 *)(unaff_r5 + 0x2372) = 0x40;
  *(short *)(unaff_r5 + 0x2374) = (short)uRam00241068;
  *(short *)(unaff_r5 + 0x2376) = (short)uRam0024106c;
  func_0x00353fd4();
  func_0x003532e8();
  uVar4 = func_0x00353ec8();
  *(undefined4 *)(unaff_r5 + 0x1a4) = uVar4;
  FUN_003510b0();
  uVar1 = (undefined2)unaff_r8;
  if ((*(ushort *)(unaff_r5 + 0x1c) & 3) == 0) {
    iVar5 = func_0x0036e864();
    if (iVar5 != 0) {
      *(undefined2 *)(unaff_r5 + 0xbe) = uVar1;
      *(undefined2 *)(unaff_r5 + 0x16) = uVar1;
      *(undefined2 *)(unaff_r5 + 0x36) = uVar1;
    }
    if ((*(ushort *)(unaff_r5 + 0x1c) & 3) == 0) {
      in_stack_00000008 = 0;
      in_stack_0000000c = 6;
      in_stack_00000000 = 0;
      in_stack_00000004 = 0;
      func_0x0036aa20(*(undefined4 *)(unaff_r5 + 0x28),*(float *)(unaff_r5 + 0x2c) + fRam00241074,
                      *(undefined4 *)(unaff_r5 + 0x30),unaff_r6 + 0x208c);
    }
  }
  *(undefined4 *)(unaff_r5 + 0x1bc) = uRam00241078;
  *(undefined2 *)(unaff_r5 + 0x1c0) = uVar1;
  sVar2 = *(short *)(unaff_r5 + 0x16) + *(short *)(unaff_r5 + 0x1c4) * 0x2000;
  *(short *)(unaff_r5 + 0x36) = sVar2;
  *(short *)(unaff_r5 + 0xbe) = sVar2;
  uVar3 = *(ushort *)(unaff_r5 + 0x1c) & 3;
  if ((uVar3 == 1 || uVar3 == 2) && (*(undefined1 *)(unaff_r5 + 3) = 0xff, uVar3 == 1)) {
    iVar12 = 0x20;
    iVar5 = 0;
    pfVar7 = (float *)register0x00000054;
    do {
      iVar12 = iVar12 + -1;
      fVar16 = (float)VectorSignedToFloat(iVar5,(byte)(in_fpscr >> 0x15) & 3);
      fVar17 = (float)VectorSignedToFloat(iVar5 + 1,(byte)(in_fpscr >> 0x15) & 3);
      pfVar7[1] = (fVar16 - fRam0024107c) * (fVar16 - fRam0024107c);
      pfVar7 = pfVar7 + 2;
      *pfVar7 = (fVar17 - fRam0024107c) * (fVar17 - fRam0024107c);
      iVar5 = iVar5 + 2;
    } while (iVar12 != 0);
    iVar13 = *(int *)(unaff_r7 + 0x20c);
    func_0x0034322c(iVar13,0x2000,0);
    fVar17 = fRam00241088;
    iVar12 = iRam00241084;
    fVar16 = fRam00241080;
    iVar14 = 0;
    iVar5 = 0;
    do {
      puVar8 = (undefined2 *)(iVar13 + iVar14 * 2);
      fVar18 = (float)(&stack0x00000004)[iVar5];
      iVar9 = 0x40;
      pfVar7 = (float *)register0x00000054;
      do {
        pfVar7 = pfVar7 + 1;
        fVar19 = fVar18 + *pfVar7 * fVar16;
        if ((int)fVar19 < iVar12) {
          iVar20 = (int)(fVar19 * fVar17);
          if (0x280 - iVar20 < 0xa7) {
            iVar20 = 0x280 - iVar20;
          }
          else {
            iVar20 = 0xa6;
          }
          *puVar8 = (short)((uint)(iVar20 << 0xc) >> 0x10);
        }
        iVar9 = iVar9 + -1;
        puVar8 = puVar8 + 1;
      } while (iVar9 != 0);
      iVar5 = iVar5 + 1;
      iVar14 = iVar14 + 0x40;
    } while (iVar5 < 0x40);
    iVar14 = *(int *)(unaff_r7 + 0x20c);
    iVar13 = 0;
    iVar9 = 0;
    iVar5 = *(int *)(iRam0024108c + 4);
    iVar12 = iRam0024108c + 0x330;
    do {
      iVar15 = iVar14 + iVar13 * 2;
      puVar6 = (ushort *)(iVar15 + 0xf08);
      iVar20 = 0x38;
      do {
        iVar10 = *(int *)(iVar12 + iVar9 * 4);
        if ((int)(*puVar6 & 0xf) < iVar10) {
          *puVar6 = (ushort)((uint)(iVar10 * iVar5 * 0x100) >> 0x10);
        }
        iVar20 = iVar20 + -1;
        puVar6 = puVar6 + 1;
      } while (iVar20 != 0);
      iVar9 = iVar9 + 1;
      *(undefined2 *)(iVar15 + 0xf78) = 2;
      iVar13 = iVar13 + 0x40;
      *(undefined2 *)(iVar15 + 0xf06) = 2;
    } while (iVar9 < 4);
    if ((*(ushort *)(unaff_r5 + 0x1c) & 3) == 1) {
      *(undefined4 *)(unaff_r5 + 0x100) = uRam00241090;
    }
  }
  *(undefined4 *)(unaff_r7 + 0x390) = 0xffffffff;
  return;
}
