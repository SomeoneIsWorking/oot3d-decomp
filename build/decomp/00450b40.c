// OoT3D decomp @ 00450b40  name=FUN_00450b40  size=2536

void FUN_00450b40(int param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  uint *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  uint uVar14;
  undefined4 extraout_r1;
  int iVar15;
  undefined4 uVar16;
  bool bVar17;
  uint in_fpscr;
  float fVar18;
  float fVar19;
  float fVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  undefined8 uVar23;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int iStack_40;
  
  piVar1 = piRam00450f50;
  *(undefined2 *)(*piRam00450f50 + 0x110) = 2;
  func_0x002e5708(param_1,param_1 + 0x2e0);
  func_0x002e5a38(param_1 + 0x104,param_1 + 0x2e0);
  fVar3 = fRam00450f58;
  fVar2 = fRam00450f54;
  *(float *)(param_1 + 0x114) = fRam00450f54;
  *(float *)(param_1 + 0x124) = fVar3;
  *(undefined1 *)(param_1 + 0x2df) = 1;
  func_0x002de690(param_1 + 0x104);
  *(undefined4 *)(param_1 + 4) = uRam00450f64;
  *(undefined4 *)(param_1 + 8) = uRam00450f68;
  func_0x0032c5dc(10);
  func_0x004623b0(0,uRam00450f6c,0,7,1);
  func_0x002dee48();
  func_0x002e7ae0(0);
  iVar9 = iRam00450f70;
  *(undefined2 *)(iRam00450f70 + 0xa8) = 0x8001;
  iVar6 = iRam00450f74;
  *(undefined2 *)(iVar9 + -0x14f4) = 0x8001;
  *(undefined2 *)(iVar6 + param_1) = 0x8001;
  FUN_002e47c8(param_1,param_1 + 0x564,1);
  *puRam00450f78 = 10;
  *(undefined1 *)(param_1 + 0x2fe) = 0;
  *(undefined2 *)(param_1 + 0x300) = 0;
  *(undefined1 *)(param_1 + 0x307) = 0;
  *(undefined2 *)(param_1 + 0x308) = 0;
  *(undefined1 *)(param_1 + 0x340) = 0;
  uVar4 = uRam00450f7c;
  *(undefined1 *)(param_1 + 0x2f4) = 99;
  *(undefined1 *)(param_1 + 0x2f5) = 99;
  *(undefined4 *)(param_1 + 0x344) = uVar4;
  *(undefined4 *)(param_1 + 0x34c) = uVar4;
  *(undefined1 *)(param_1 + 0x305) = 0;
  *(undefined1 *)(param_1 + 0x306) = 0;
  *(undefined1 *)(param_1 + 0x389) = 0;
  *(undefined1 *)(param_1 + 0x2fc) = 0;
  *(undefined1 *)(param_1 + 0x2f9) = 0;
  *(undefined1 *)(param_1 + 0x2f7) = 0;
  fVar18 = (float)func_0x002cfca0((int)(short)(*(short *)(iVar9 + -0x14f4) + -0x8000));
  fVar20 = fRam00450f80;
  *(float *)(param_1 + 0x2e8) = fVar18 * fRam00450f80 * fRam00450f84;
  fVar19 = (float)func_0x00338f60((int)(short)(*(short *)(iVar9 + -0x14f4) + -0x8000));
  fVar18 = fRam00450f88;
  *(float *)(param_1 + 0x2ec) = fVar19 * fVar20 * fRam00450f88;
  fVar20 = (float)func_0x00338f60((int)(short)(*(short *)(iVar9 + -0x14f4) + -0x8000));
  *(float *)(param_1 + 0x2f0) = fVar20 * fRam00450f8c * fVar18;
  func_0x002de22c(1,param_1 + 0x2e4,param_1 + 0x564,param_1 + 0x104,1);
  *(undefined4 *)(param_1 + 0x7e8) = 0;
  fVar20 = (float)func_0x003759d0();
  *(int *)(param_1 + 0x7ec) = (int)(fRam00450f94 + fVar20 * fRam00450f90 * fVar3 * fVar2);
  *(undefined4 *)(param_1 + 0x7f0) = 0;
  if (*(char *)(iVar9 + -0x14f2) != '\0') {
    *puRam00450f98 = 0;
    *puRam00450f9c = 0;
    *(undefined1 *)(param_1 + 0x2fe) = 1;
    *(undefined1 *)(param_1 + 0x2fc) = 4;
    *(undefined1 *)(param_1 + 0x2fd) = 4;
    *(undefined2 *)(param_1 + 0x300) = 1;
    *(undefined1 *)(param_1 + 0x307) = 1;
    *(undefined1 *)(param_1 + 0x305) = 3;
    *(undefined1 *)(param_1 + 0x306) = 3;
    *puRam00450fa0 = 0;
    *(undefined2 *)(param_1 + 0x30a) = 1;
    *(undefined2 *)(param_1 + 0x308) = 1;
    *(undefined4 *)(param_1 + 0x7e8) = 0xffffffff;
  }
  iVar6 = *piVar1;
  *(undefined2 *)(iVar6 + 0x7a8) = 0xfff6;
  *(undefined2 *)(iVar6 + 0x7aa) = 0x8000;
  *(undefined2 *)(iVar6 + 0x7ac) = 1000;
  *(undefined2 *)(iVar6 + 0x7ae) = 0xf448;
  *(undefined2 *)(iVar6 + 0x7b0) = 3000;
  *(undefined2 *)(iVar6 + 0x7b2) = 1;
  func_0x0046b0f4();
  func_0x00468280();
  uStack_80 = uRam00450fa4;
  uStack_7c = uRam00450fa8;
  uStack_78 = uRam00450fac;
  uStack_74 = uRam00450fb0;
  uStack_70 = uRam00450fb4;
  uStack_6c = uRam00450fb8;
  uVar7 = func_0x002de6b8(param_1,&uStack_80);
  *(undefined4 *)(param_1 + 0x7f8) = uVar7;
  if (iStack_40 == 0) {
    iStack_40 = func_0x00324fd0(&uStack_80);
  }
  func_0x0031b124(param_1 + 0x7fc,*(undefined4 *)(param_1 + 0x7f8),iStack_40,0);
  iVar6 = func_0x003487ec(uRam00450fbc);
  uVar7 = uRam00450fc0;
  if (iVar6 == 0) {
    *(undefined4 *)(param_1 + 0x86c) = 0;
    *(undefined4 *)(param_1 + 0x870) = 0;
    *(undefined4 *)(param_1 + 0x874) = 0;
    *(undefined4 *)(param_1 + 0x878) = uVar4;
    *(undefined4 *)(param_1 + 0x884) = uVar4;
    *(undefined4 *)(param_1 + 0x87c) = uVar4;
    *(undefined4 *)(param_1 + 0x880) = uVar4;
    *(undefined4 *)(param_1 + 0x88c) = 0;
    *(undefined4 *)(param_1 + 0x8b0) = 0;
    *(undefined4 *)(param_1 + 0x8b8) = 0;
    *(undefined4 *)(param_1 + 0x8bc) = 0;
    *(undefined4 *)(param_1 + 0x9d8) = 0;
    *(undefined4 *)(param_1 + 0x9dc) = 0;
    *(undefined4 *)(param_1 + 0x9e0) = 0;
    *(undefined4 *)(param_1 + 0x9e4) = 0;
    *(undefined4 *)(param_1 + 0x9e8) = 0;
LAB_004514ec:
    uVar8 = uRam0045163c;
    *(undefined4 *)(param_1 + 0x890) = 0;
    *(undefined4 *)(param_1 + 0x894) = 0;
    *(undefined4 *)(param_1 + 0x9ec) = uVar8;
    *(undefined4 *)(param_1 + 0x9f0) = uRam00451640;
    *(undefined4 *)(param_1 + 0x9f4) = uRam00451644;
    *(undefined4 *)(param_1 + 0x9f8) = uRam00451648;
    uVar8 = uRam0045164c;
    *(undefined4 *)(param_1 + 0x9fc) = uVar4;
    *(undefined4 *)(param_1 + 0xa00) = uVar8;
    *(undefined4 *)(param_1 + 0xa04) = uRam00451650;
    uVar8 = uRam00451658;
    *(undefined4 *)(param_1 + 0xa08) = uRam00451654;
    *(undefined4 *)(param_1 + 0xa18) = uVar7;
    *(undefined4 *)(param_1 + 0xa1c) = uVar7;
    *(undefined4 *)(param_1 + 0xa20) = uVar7;
    *(undefined4 *)(param_1 + 0xa24) = uVar8;
    uVar10 = uRam00451668;
    *(undefined4 *)(param_1 + 0xa0c) = uRam0045165c;
    uVar16 = uRam00451670;
    *(undefined4 *)(param_1 + 0xa10) = uRam00451660;
    uVar8 = uRam00451664;
    *(undefined4 *)(param_1 + 0xa14) = uVar7;
    *(undefined4 *)(param_1 + 0xa28) = uVar8;
    uVar8 = uRam0045166c;
    *(undefined4 *)(param_1 + 0xa2c) = uVar10;
    *(undefined4 *)(param_1 + 0xa30) = uVar8;
    *(undefined4 *)(param_1 + 0xa34) = uVar16;
    *(undefined4 *)(param_1 + 0xa38) = uVar4;
    *(undefined4 *)(param_1 + 0xa3c) = uVar4;
    *(undefined4 *)(param_1 + 0xa40) = uVar8;
    *(undefined4 *)(param_1 + 0xa44) = uVar16;
    *(undefined4 *)(param_1 + 0xa54) = uVar7;
    uVar8 = uRam00451674;
    *(undefined4 *)(param_1 + 0xa58) = uVar7;
    *(undefined4 *)(param_1 + 0xa5c) = uVar7;
    *(undefined4 *)(param_1 + 0xa60) = uVar4;
    *(undefined4 *)(param_1 + 0xa48) = uVar10;
    *(undefined4 *)(param_1 + 0xa4c) = uVar8;
    *(undefined4 *)(param_1 + 0xa50) = uVar7;
    if (((*puRam00450fc4 & 1) == 0) && (iVar9 = func_0x003679b4(puRam00450fc4), iVar9 != 0)) {
      func_0x0036788c(iRam00450fc8);
    }
    iVar9 = iRam00451678;
    *(undefined4 *)(iRam00451678 + 0x440) = uRam0045167c;
    *(undefined4 *)(iVar9 + 0x444) = 0;
    *(undefined1 *)(param_1 + 0x101) = 2;
    return;
  }
  uVar8 = func_0x00358ef8(param_1 + 0x7fc,*(char *)(iVar9 + -0x14f2) != '\0');
  puVar5 = puRam00450fc4;
  *(undefined4 *)(param_1 + 0x86c) = uVar8;
  if (((*puVar5 & 1) == 0) && (iVar9 = func_0x003679b4(puVar5), iVar9 != 0)) {
    func_0x0036788c(iRam00450fc8);
  }
  uVar10 = (**(code **)(**(int **)(iRam00450fc8 + 0x17c) + 8))
                     (*(int **)(iRam00450fc8 + 0x17c),*(undefined4 *)(param_1 + 0x86c),0);
  uVar8 = uRam00450fd4;
  *(undefined4 *)(param_1 + 0x874) = uVar10;
  *(undefined4 *)(param_1 + 0x878) = uVar8;
  iVar9 = iRam00450fe0;
  *(undefined4 *)(param_1 + 0x87c) = uRam00450fd8;
  uVar8 = uRam00450fdc;
  *(undefined4 *)(param_1 + 0x880) = uVar4;
  *(undefined4 *)(param_1 + 0x884) = uVar8;
  *(float *)(param_1 + 0x888) = fVar2;
  *(undefined4 *)(param_1 + 0x88c) = 0;
  *(undefined4 *)(param_1 + 0x898) = 0;
  *(undefined4 *)(param_1 + 0x870) = 0;
  uVar8 = uRam00450fe8;
  if (*(char *)(iVar9 + 0xe) != '\0') {
    *(undefined4 *)(param_1 + 0x878) = uRam00450fe4;
  }
  iVar9 = *piVar1;
  *(short *)(iVar9 + 0x794) = (short)uVar8;
  *(undefined2 *)(iVar9 + 0x796) = 0x640;
  *(undefined2 *)(iVar9 + 0x7ae) = 0xf830;
  uStack_b8 = *puRam00450fec;
  uStack_b4 = puRam00450fec[1];
  uStack_b0 = puRam00450fec[2];
  uStack_ac = puRam00450fec[3];
  uStack_a8 = puRam00450fec[4];
  uStack_a4 = puRam00450fec[5];
  uStack_a0 = puRam00450fec[6];
  uStack_9c = puRam00450fec[7];
  uStack_98 = puRam00450fec[8];
  uStack_94 = puRam00450fec[9];
  uStack_e0 = *puRam00450ff0;
  uStack_dc = puRam00450ff0[1];
  uStack_d8 = puRam00450ff0[2];
  uStack_d4 = puRam00450ff0[3];
  uStack_d0 = puRam00450ff0[4];
  uStack_cc = puRam00450ff0[5];
  uStack_c8 = puRam00450ff0[6];
  uStack_c4 = puRam00450ff0[7];
  uStack_c0 = puRam00450ff0[8];
  uStack_bc = puRam00450ff0[9];
  uVar8 = *puRam00450ff4;
  uVar10 = puRam00450ff4[1];
  if (((*puRam00450fc4 & 1) == 0) && (iVar9 = func_0x003679b4(puRam00450fc4), iVar9 != 0)) {
    func_0x0036788c(iRam00450fc8);
  }
  iVar9 = iRam00451438;
  iVar6 = *(int *)(iRam00451438 + 0xf3c);
  puVar12 = &uStack_b8;
  if (*(char *)(iRam00450fe0 + 0xe) != '\0') {
    puVar12 = &uStack_e0;
  }
  if ((undefined4 *)(param_1 + 0x8a0) != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x8a0) = uRam0045143c;
    *(undefined4 *)(param_1 + 0x8a4) = 0;
    *(undefined4 *)(param_1 + 0x8a8) = 0;
    *(undefined1 *)(param_1 + 0x8ac) = 0;
  }
  uVar21 = (**(code **)(*(int *)*puRam0045147c + 0xc))
                     ((int *)*puRam0045147c,0x54,0x451440,uRam00451480);
  uVar22 = uVar21 & 0xffffffff00000000;
  if ((int)uVar21 != 0) {
    uVar22 = func_0x002ffa20();
  }
  uVar14 = (uint)(uVar22 >> 0x20);
  *(int *)(param_1 + 0x8b0) = (int)uVar22;
  uVar16 = puVar12[iVar6];
  bVar17 = *(int *)(param_1 + 0x8a4) != 0;
  if (bVar17) {
    uVar14 = (uint)*(byte *)(param_1 + 0x8ac);
  }
  if (bVar17 && uVar14 != 0) {
    func_0x0034fc68();
  }
  *(undefined4 *)(param_1 + 0x8a4) = 0;
  *(undefined4 *)(param_1 + 0x8a8) = 0;
  *(undefined1 *)(param_1 + 0x8ac) = 0;
  iVar6 = func_0x00301300(uVar16,0,0);
  func_0x0031b9c0(iVar6,1);
  iVar11 = *(int *)(iVar6 + 4);
  *(int *)(param_1 + 0x8a8) = iVar11;
  if (iVar11 != 0) {
    iVar11 = func_0x00305b14(*(undefined4 *)(param_1 + 0x8a8),0x9c00000);
    *(int *)(param_1 + 0x8a4) = iVar11;
    if (iVar11 != 0) {
      uVar16 = func_0x00303ea8(iVar6);
      func_0x0034338c(*(undefined4 *)(param_1 + 0x8a4),uVar16,*(undefined4 *)(param_1 + 0x8a8));
      func_0x00301260(iVar6);
      func_0x0031b99c(iVar6);
      *(undefined1 *)(param_1 + 0x8ac) = 1;
      func_0x002ff8e0(*(undefined4 *)(param_1 + 0x8b0),*(undefined4 *)(param_1 + 0x8a4),0);
      iVar6 = iRam00450fe0;
      *(undefined4 *)(param_1 + 0x8b4) = uVar4;
      if (*(char *)(iVar6 + 0xe) != '\0') {
        uVar8 = uVar10;
      }
      puVar12 = (undefined4 *)func_0x0035010c(4);
      if (puVar12 != (undefined4 *)0x0) {
        *puVar12 = uRam00451484;
      }
      *(undefined4 **)(param_1 + 0x8b8) = puVar12;
      iVar6 = func_0x0035010c(0x1c4);
      uVar10 = 0;
      if (iVar6 != 0) {
        uVar10 = func_0x002e77e8();
      }
      *(undefined4 *)(param_1 + 0x8bc) = uVar10;
      func_0x002e76b8(uVar10,*(undefined4 *)(param_1 + 0x8b8),0x100,0x100,0x80);
      func_0x003446e8(uVar4,*(undefined4 *)(param_1 + 0x8bc),uVar8,0xffffff70,0,0x120,1,
                      param_1 + 0x8c0,0);
      iVar6 = (**(code **)(*(int *)*puRam00451488 + 0xc))
                        ((int *)*puRam00451488,0x1b8,0x451440,uRam0045148c);
      uVar8 = 0;
      if (iVar6 != 0) {
        uVar8 = func_0x00348f34(iVar6,param_1 + 0x8c0);
      }
      *(undefined4 *)(param_1 + 0x9d8) = uVar8;
      iVar6 = (**(code **)(*(int *)*puRam0045147c + 0xc))
                        ((int *)*puRam0045147c,0x54,0x451440,uRam00451490);
      uVar8 = 0;
      if (iVar6 != 0) {
        uVar8 = func_0x002ffa20();
      }
      *(undefined4 *)(param_1 + 0x9dc) = uVar8;
      func_0x002ccf04(*(undefined4 *)(param_1 + 0x8bc),uVar8,0);
      puVar5 = puRam00450fc4;
      uVar8 = extraout_r1;
      if ((*puRam00450fc4 & 1) == 0) {
        uVar23 = func_0x003679b4(puRam00450fc4);
        uVar8 = (int)((ulonglong)uVar23 >> 0x20);
        if ((int)uVar23 != 0) {
          func_0x0036788c(iRam00450fc8);
          uVar8 = uRam00450fd0;
        }
      }
      func_0x00347884(iVar9 + 0x44,uVar8);
      func_0x00348a64(*(undefined4 *)(param_1 + 0x9d8),0,*(undefined4 *)(param_1 + 0x9dc),0x2600,
                      0x2600,uRam00451494,uRam00451494);
      fVar3 = fRam004514a0;
      fVar2 = fRam0045149c;
      iVar6 = iRam00451498;
      iVar11 = 0;
      do {
        if (((*puVar5 & 1) == 0) && (iVar13 = func_0x003679b4(puRam00450fc4), iVar13 != 0)) {
          func_0x0036788c(iRam00450fc8);
        }
        iVar13 = func_0x0034897c(*(undefined4 *)(iVar6 + 0x47c),*(undefined4 *)(param_1 + 0x9d8),0);
        iVar15 = param_1 + iVar11 * 4;
        *(int *)(iVar15 + 0x9e4) = iVar13;
        fVar20 = (float)VectorSignedToFloat(iVar11,(byte)(in_fpscr >> 0x15) & 3);
        *(uint *)(iVar13 + 0x178) = *(uint *)(iVar13 + 0x178) | 0x10;
        iVar13 = iVar11 + 1;
        fVar18 = (float)VectorSignedToFloat(iVar11,(byte)(in_fpscr >> 0x15) & 3);
        iVar11 = *(int *)(iVar15 + 0x9e4);
        *(float *)(iVar11 + 0x3c) = fVar20 + fVar2;
        *(float *)(iVar11 + 0x40) = fVar18 + fVar3;
        *(undefined4 *)(iVar11 + 0x44) = uVar4;
        iVar11 = iVar13;
      } while (iVar13 < 2);
      iVar6 = *(int *)(param_1 + 0x9e8);
      uStack_90 = uVar4;
      uStack_8c = uVar4;
      uStack_88 = uVar4;
      uStack_84 = uVar7;
      *(undefined4 *)(iVar6 + 0xf0) = uVar4;
      *(undefined4 *)(iVar6 + 0xf4) = uVar4;
      *(undefined4 *)(iVar6 + 0xf8) = uVar4;
      *(undefined4 *)(iVar6 + 0xfc) = uVar7;
      if (((*puVar5 & 1) == 0) && (iVar6 = func_0x003679b4(puRam00450fc4), iVar6 != 0)) {
        func_0x0036788c(iRam00450fc8);
      }
      *(int *)(param_1 + 0x9e0) = iVar9 + 0xb8;
      goto LAB_004514ec;
    }
  }
  func_0x00301260(iVar6);
  func_0x0031b99c(iVar6);
  return;
}

