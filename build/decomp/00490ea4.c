// OoT3D decomp @ 00490ea4  name=FUN_00490ea4  size=1200

/* WARNING: Possible PIC construction at 0x00490f78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0036ec7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00490ff4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00490f7c) */
/* WARNING: Removing unreachable block (ram,0x00491024) */
/* WARNING: Removing unreachable block (ram,0x00490fa0) */
/* WARNING: Removing unreachable block (ram,0x00356058) */
/* WARNING: Removing unreachable block (ram,0x003560bc) */
/* WARNING: Removing unreachable block (ram,0x003560c0) */
/* WARNING: Removing unreachable block (ram,0x003560c4) */
/* WARNING: Removing unreachable block (ram,0x003560c8) */
/* WARNING: Removing unreachable block (ram,0x003560cc) */
/* WARNING: Removing unreachable block (ram,0x003560d0) */
/* WARNING: Removing unreachable block (ram,0x0035607c) */
/* WARNING: Removing unreachable block (ram,0x00356094) */
/* WARNING: Removing unreachable block (ram,0x00356098) */
/* WARNING: Removing unreachable block (ram,0x0035609c) */
/* WARNING: Removing unreachable block (ram,0x003560a0) */
/* WARNING: Removing unreachable block (ram,0x003560a8) */
/* WARNING: Removing unreachable block (ram,0x003560ac) */
/* WARNING: Removing unreachable block (ram,0x003560b0) */
/* WARNING: Removing unreachable block (ram,0x00490ff8) */
/* WARNING: Removing unreachable block (ram,0x003655d0) */
/* WARNING: Removing unreachable block (ram,0x003655e4) */
/* WARNING: Removing unreachable block (ram,0x003655e0) */
/* WARNING: Removing unreachable block (ram,0x003102f0) */
/* WARNING: Removing unreachable block (ram,0x003102fc) */
/* WARNING: Removing unreachable block (ram,0x00310320) */
/* WARNING: Removing unreachable block (ram,0x0031036c) */
/* WARNING: Removing unreachable block (ram,0x00310374) */

void FUN_00490ea4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  int unaff_r4;
  int iVar16;
  int unaff_r5;
  int unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 *puVar17;
  undefined4 unaff_lr;
  uint in_fpscr;
  float fVar18;
  undefined8 unaff_d8;
  undefined4 uStack_18;
  
  iVar14 = iRam0049102c;
  puVar17 = &uStack_18;
  uVar11 = param_1 + iRam00491028;
  uVar12 = uVar11;
  if (0x54 < uVar11) {
    uVar12 = 0;
  }
  uStack_18 = param_4;
  if ((*(byte *)(iRam0049102c + uVar12) & 2) == 0) {
    if (0x54 < uVar11) {
      uVar11 = 0;
    }
    if ((*(byte *)(iRam0049102c + uVar11) & 4) == 0) {
      iVar14 = 0;
      iVar13 = 0;
      unaff_lr = 0x490ff8;
      unaff_r4 = iVar14;
    }
    else {
      iVar14 = 0;
      iVar13 = 1;
      puVar17 = (undefined4 *)register0x00000054;
    }
  }
  else {
    unaff_r5 = iRam0049102c + -0x120;
    *(int *)(iRam0049102c + -0x98) = param_1;
    unaff_r4 = func_0x00366684(3);
    func_0x00355fac(0,1,0,8);
    func_0x00355fac(3,1,0,8);
    uStack_18 = 0xf;
    func_0x002d7878(1,0,1,0x7f);
    uStack_18 = 0xf;
    func_0x002d7878(1,3,1,0x7f);
    func_0x002d7854(1,0);
    unaff_r6 = iRam00491030;
    if (unaff_r4 != iRam00491030) {
      func_0x002d7854(1,3,0);
    }
    iVar13 = 1;
    param_1 = *(int *)(iVar14 + -0x98);
    unaff_lr = 0x490f7c;
    iVar14 = iVar13;
  }
  iVar2 = iRam0036eef4;
  pcVar1 = pcRam0036eef0;
  puVar17[-1] = unaff_lr;
  puVar17[-2] = unaff_r11;
  puVar17[-3] = unaff_r10;
  puVar17[-4] = unaff_r9;
  puVar17[-5] = unaff_r8;
  puVar17[-6] = unaff_r7;
  puVar17[-7] = unaff_r6;
  puVar17[-8] = unaff_r5;
  puVar17[-9] = unaff_r4;
  *(undefined8 *)(puVar17 + -0xb) = unaff_d8;
  if (*pcRam0036eef0 == '\0') {
    piVar15 = (int *)(iRam0036eef4 + iVar13 * 4);
    piVar5 = (int *)*piVar15;
    if (piVar5 != (int *)0x0) {
      puVar17[-0xf] = 0x36ec80;
      puVar17[-0x10] = iVar13;
      puVar17[-0x11] = iVar14;
      puVar17[-0x12] = piVar15;
      *(undefined8 *)(puVar17 + -0x14) = unaff_d8;
                    /* WARNING: Could not recover jumptable at 0x0031031c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar5 + 0x10))(piVar5);
      return;
    }
    if (pcRam0036eef0[3] == '\0') {
      uVar6 = func_0x0030f0ec();
      func_0x002dd484(uVar6,piVar15,param_1,0);
    }
    else {
      uVar6 = func_0x0030f0ec();
      func_0x002d44a4(uVar6,piVar15,param_1,0);
    }
    if (*piVar15 != 0) {
      func_0x004bde38(*piVar15,iVar14);
    }
    fVar3 = fRam0036ef00;
    uVar6 = uRam0036eefc;
    iVar14 = iRam0036eef8;
    puVar7 = (undefined4 *)(iRam0036eef8 + iVar13 * 0x50);
    *puVar7 = uRam0036eefc;
    puVar7[1] = uVar6;
    puVar7[2] = fVar3;
    puVar7[3] = 0;
    puVar7[4] = uVar6;
    puVar7[5] = uVar6;
    puVar7[6] = fVar3;
    puVar7[7] = 0;
    puVar7[8] = uVar6;
    puVar7[9] = uVar6;
    puVar7[10] = fVar3;
    puVar7[0xb] = 0;
    puVar7[0xc] = uVar6;
    puVar7[0xd] = uVar6;
    puVar7[0xe] = fVar3;
    puVar7[0xf] = 0;
    puVar7[0x10] = uVar6;
    puVar7[0x11] = uVar6;
    puVar7[0x12] = fVar3;
    puVar7[0x13] = 0;
    puVar7 = (undefined4 *)(iVar14 + 0x1c0 + iVar13 * 0x10);
    *puVar7 = uVar6;
    puVar7[1] = uVar6;
    puVar7[2] = fVar3;
    puVar7[3] = 0;
    puVar7 = (undefined4 *)(iVar14 + 0x200 + iVar13 * 0x10);
    *puVar7 = uVar6;
    puVar7[1] = uVar6;
    puVar7[2] = fVar3;
    puVar7[3] = 0;
    iVar16 = iVar14 + 0x140 + iVar13 * 0x20;
    func_0x0030ee14(puVar17 + -0xc,piVar15);
    puVar8 = (undefined1 *)(iVar16 + -2);
    puVar10 = (undefined1 *)(iVar16 + -1);
    iVar14 = 8;
    do {
      puVar8[2] = 0x7f;
      puVar10[2] = 0x7f;
      puVar8 = puVar8 + 4;
      *puVar8 = 0x7f;
      iVar14 = iVar14 + -1;
      puVar10 = puVar10 + 4;
      *puVar10 = 0x7f;
    } while (iVar14 != 0);
    iVar14 = func_0x0030f0ec();
    uVar12 = func_0x00481a68(*(undefined4 *)(iVar14 + 4),param_1);
    fVar4 = fRam0036ef04;
    if (uVar12 != 0) {
      if ((uVar12 & 0x7f0000) != 0) {
        *(char *)(iVar16 + ((uVar12 & 0xf000000) >> 0x17) + 1) = (char)((uVar12 & 0x7f0000) >> 0x10)
        ;
      }
      if ((uVar12 & 0x7f) != 0) {
        *(char *)(iVar16 + ((uVar12 & 0xf00) >> 7) + 1) = (char)(uVar12 & 0x7f);
      }
      if (pcVar1[1] != '\0') {
        uVar12 = 0;
        do {
          iVar9 = puVar17[-0xc];
          fVar18 = (float)VectorUnsignedToFloat
                                    ((uint)*(byte *)(iVar16 + uVar12 * 2 + 1),
                                     (byte)(in_fpscr >> 0x15) & 3);
          iVar14 = 0;
          if (iVar9 != 0) {
            iVar14 = 1 << (uVar12 & 0xff);
          }
          if (iVar9 != 0) {
            func_0x0030ed80(fVar18 * fVar4,iVar9,iVar14);
          }
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < 0x10);
      }
    }
    if (param_1 == iRam0036ef08 && iVar13 == 0) {
      func_0x0030ee14(puVar17 + -0xd,iVar2);
      uVar12 = 0;
      do {
        if ((1 << (uVar12 & 0xff) & 3U) != 0) {
          puVar8 = (undefined1 *)(iVar16 + uVar12 * 2);
          *puVar8 = 0;
          fVar18 = fVar3;
          if (pcVar1[1] != '\0') {
            fVar18 = (float)VectorUnsignedToFloat
                                      ((uint)(byte)puVar8[1],(byte)(in_fpscr >> 0x15) & 3);
            fVar18 = fVar18 * fVar4 * fVar3;
          }
          if (puVar17[-0xd] != 0) {
            func_0x0030ed80(fVar18);
          }
        }
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < 0x10);
      func_0x0030ede0(puVar17 + -0xd);
    }
    iVar14 = iRam0036ef0c;
    pcVar1[2] = '\0';
    if ((uint)(iVar14 + param_1) < 4) {
      pcVar1[0xc] = '\0';
      pcVar1[0xd] = '\0';
      pcVar1[0xe] = '\0';
      pcVar1[0xf] = '\0';
      pcVar1[2] = '\x01';
    }
    func_0x0030ede0(puVar17 + -0xc);
  }
  return;
}

