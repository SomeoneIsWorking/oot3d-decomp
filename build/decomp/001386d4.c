// OoT3D decomp @ 001386d4  name=FUN_001386d4  size=428

void FUN_001386d4(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  undefined2 uVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  bool bVar18;
  uint in_fpscr;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  undefined1 auStack_94 [48];
  float afStack_64 [2];
  float fStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  int iStack_48;

  iVar15 = *(int *)(param_1 + 0x124);
  iVar8 = FUN_0036c5bc(param_2,0);
  FUN_003731e0(param_1 + 0x1a4);
  fVar5 = fRam00138de8;
  uVar13 = uRam00138de4;
  fVar20 = fRam00138de0;
  uVar11 = uRam00138ddc;
  uVar4 = uRam00138a10;
  uVar3 = uRam00138a0c;
  uVar2 = uRam00138a08;
  uVar21 = uRam00138a04;
  uVar1 = uRam00138a00;
  fVar19 = fRam001389fc;
  uVar14 = uRam001389f8;
  uVar12 = uRam001389f4;
  iStack_48 = param_2 + 0x2298;
  iStack_4c = param_1 + 0x854;
  puVar17 = (undefined4 *)(param_1 + 0x828);
  puVar16 = (undefined4 *)(param_1 + 0x81c);
  switch(*(undefined2 *)(param_1 + 0x818)) {
  case 0:
    *puRam00138a14 = 0;
    *puRam00138a18 = 2;
    *(undefined2 *)(param_1 + 0x818) = 1;
    func_0x00367494(param_2,iStack_48);
    func_0x0036e980(param_2,param_1,1);
    uVar6 = func_0x00367d74(param_2);
    *(undefined2 *)(param_1 + 0x81a) = uVar6;
    FUN_00320d7c(param_2,0,1);
    FUN_00320d7c(param_2,(int)*(short *)(param_1 + 0x81a),7);
    uVar11 = *(undefined4 *)(iVar8 + 0x90);
    uVar13 = *(undefined4 *)(iVar8 + 0x94);
    *puVar16 = *(undefined4 *)(iVar8 + 0x8c);
    *(undefined4 *)(param_1 + 0x820) = uVar11;
    *(undefined4 *)(param_1 + 0x824) = uVar13;
    uVar11 = *(undefined4 *)(iVar8 + 0x84);
    uVar13 = *(undefined4 *)(iVar8 + 0x88);
    *puVar17 = *(undefined4 *)(iVar8 + 0x80);
    *(undefined4 *)(param_1 + 0x82c) = uVar11;
    *(undefined4 *)(param_1 + 0x830) = uVar13;
    *(undefined4 *)(param_1 + 0x848) = uVar2;
    *(undefined4 *)(param_1 + 0x844) = uVar2;
    *(undefined4 *)(param_1 + 0x840) = uVar2;
    *(undefined4 *)(param_1 + 0x83c) = uVar2;
    *(undefined4 *)(param_1 + 0x838) = uVar2;
    *(undefined4 *)(param_1 + 0x834) = uVar2;
    *(undefined4 *)(param_1 + 0x880) = uVar21;
    *(undefined4 *)(param_1 + 0x860) = uVar1;
    *(undefined4 *)(param_1 + 0x85c) = uVar1;
    *(undefined4 *)(param_1 + 0x858) = uVar1;
    *(undefined4 *)(param_1 + 0x878) = uVar1;
    *(undefined4 *)(param_1 + 0x874) = uVar1;
    *(undefined4 *)(param_1 + 0x870) = uVar1;
    *(undefined2 *)(param_1 + 0x2dc) = 0;
    *(undefined2 *)(param_1 + 0x2c8) = 0;
  case 1:
    sVar7 = *(short *)(param_1 + 0x2c8) + 1;
    iVar8 = (int)sVar7;
    if (iVar8 < 0xf) {
      uVar21 = uVar3;
    }
    *(short *)(param_1 + 0x2c8) = sVar7;
    if ((0xe < iVar8) && (uVar21 = uVar12, 0x13 < iVar8)) {
      uVar21 = uRam00138a1c;
    }
    if (iVar8 == 1 || iVar8 == 0x28) {
      iVar9 = iVar8;
      if (iVar8 == 0x28) {
        iVar9 = iRam00138a20;
      }
      *(undefined2 *)(param_1 + 0x2c4) = 0x14;
      if (iVar8 == 0x28) {
        func_0x0048961c(iVar9);
      }
      func_0x00375bcc(param_1,uRam00138a24);
    }
    func_0x00373500(uVar21,uVar3,uVar3,param_1 + 0x1e4);
    fVar19 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x92),(byte)(in_fpscr >> 0x15) & 3
                                       );
    FUN_003735e8(fRam00138a30 + fVar19 * fRam00138a28 * fRam00138a2c,auStack_94,0);
    uStack_58 = uVar4;
    uStack_54 = uVar4;
    uStack_50 = uRam00138a34;
    func_0x003735ac(afStack_64,auStack_94,&uStack_58);
    iVar8 = iRam00138a38;
    *(float *)(param_1 + 0x84c) = *(float *)(param_1 + 0x28) + afStack_64[0];
    *(undefined4 *)(param_1 + 0x850) = uVar14;
    *(float *)(param_1 + 0x854) = *(float *)(param_1 + 0x30) + fStack_5c;
    if (iVar8 <= *(int *)(param_1 + 0x40)) {
      *(undefined4 *)(param_1 + 0x864) = *(undefined4 *)(param_1 + 0x3c);
      *(int *)(param_1 + 0x868) = *(int *)(param_1 + 0x40);
      *(undefined4 *)(param_1 + 0x86c) = *(undefined4 *)(param_1 + 0x44);
    }
    if (*(short *)(param_1 + 0x2dc) == 0) {
      iVar8 = FUN_003736fc(uRam00138a3c,uVar3,param_1 + 0x1a4);
      if (iVar8 != 0) {
        *(undefined2 *)(iRam00138a40 + iVar15) = 0x5a;
      }
      if (0x95 < *(short *)(param_1 + 0x2c8)) {
        *(undefined2 *)(param_1 + 0x818) = 2;
        *(undefined2 *)(param_1 + 0x2dc) = 0x4b;
      }
    }
    else {
      iVar8 = FUN_003736fc(uRam00138a44,uVar3,param_1 + 0x1a4);
      if (iVar8 != 0) {
        func_0x00374a58(uRam00138a48,param_1 + 0x1a4,6);
      }
    }
    break;
  case 2:
    if (*(short *)(param_1 + 0x2dc) == 0) {
      *(undefined4 *)(param_1 + 0x140) = 0;
      *(undefined2 *)(param_1 + 0x818) = 3;
      *(undefined1 *)(iVar15 + 0x940) = 2;
      *(undefined4 *)(param_1 + 0x87c) = uVar4;
      *(undefined2 *)(param_1 + 0x2b8) = 0;
    }
    else {
      func_0x00373500(uRam00138dd4,uRam00138a0c,uRam00138dd0,param_1 + 0x2c);
    }
    break;
  case 3:
    if (*(int *)(iVar15 + 0x2c) < iRam00138dd8) {
      if (0x3000 < *(short *)(iVar15 + 0x34)) {
        uVar12 = *(undefined4 *)(iVar15 + 0x2c);
        uVar14 = *(undefined4 *)(iVar15 + 0x30);
        *(undefined4 *)(param_1 + 0x864) = *(undefined4 *)(iVar15 + 0x28);
        *(undefined4 *)(param_1 + 0x868) = uVar12;
        *(undefined4 *)(param_1 + 0x86c) = uVar14;
        *(undefined4 *)(param_1 + 0x868) = uVar13;
        *(undefined4 *)(param_1 + 0x84c) = *(undefined4 *)(iVar15 + 0x28);
        *(undefined4 *)(param_1 + 0x850) = uVar11;
        *(float *)(param_1 + 0x854) = *(float *)(iVar15 + 0x30) + fVar20;
      }
    }
    else {
      uVar12 = *(undefined4 *)(iVar15 + 0x2c);
      uVar14 = *(undefined4 *)(iVar15 + 0x30);
      *(undefined4 *)(param_1 + 0x864) = *(undefined4 *)(iVar15 + 0x28);
      *(undefined4 *)(param_1 + 0x868) = uVar12;
      *(undefined4 *)(param_1 + 0x86c) = uVar14;
      *(undefined4 *)(param_1 + 0x84c) = *(undefined4 *)(param_1 + 0x28);
      func_0x00373500(fVar5,uVar3,fVar19,param_1 + 0x850);
      func_0x00373500(*(float *)(iVar15 + 0x30) + fVar5,uVar3,uRam00138dec,iStack_4c);
      if (*(short *)(param_1 + 0x2b8) == 0) {
        *(undefined2 *)(param_1 + 0x2b8) = 1;
        *(undefined4 *)(param_1 + 0x87c) = uVar4;
        *(undefined4 *)(param_1 + 0x880) = uVar21;
        func_0x0036e980(param_2,iVar15,1);
      }
    }
    uVar10 = iVar15 + 0x800;
    bVar18 = *(short *)(iVar15 + 0x88a) == 0xca;
    if (bVar18) {
      uVar10 = (uint)*(ushort *)(iVar15 + 0x8b0);
    }
    if (bVar18 && uVar10 == 8) {
      *(undefined2 *)(param_1 + 0x818) = 4;
      *(undefined4 *)(param_1 + 0x87c) = uVar4;
      *(undefined4 *)(param_1 + 0x880) = uVar21;
      *(undefined4 *)(param_1 + 0x850) = uVar11;
      *(float *)(param_1 + 0x854) = *(float *)(iVar15 + 0x30) + fVar20;
    }
    break;
  case 4:
    func_0x00373500(uRam00138a08,uRam00138a0c,uRam00138a08,param_1 + 0x868);
    *(undefined4 *)(param_1 + 0x864) = uVar4;
    *(undefined4 *)(param_1 + 0x86c) = uVar4;
    *(undefined4 *)(param_1 + 0x84c) = uVar4;
    *(undefined4 *)(param_1 + 0x850) = uVar14;
    func_0x00373500(uRam00138df4,uVar12,uRam00138df0,iStack_4c);
    iVar9 = iRam00138df8;
    if (*(short *)(iVar15 + 0x8aa) != 0) {
      sVar7 = *(short *)(iVar15 + 0x8aa) + -1;
      *(short *)(iVar15 + 0x8aa) = sVar7;
      fVar20 = (float)VectorSignedToFloat((int)sVar7,(byte)(in_fpscr >> 0x15) & 3);
      fVar20 = fVar20 * fVar19;
      if (iVar9 < (int)fVar20) {
        fVar20 = fRam00138dfc;
      }
      if (((int)sVar7 & 1U) == 0) {
        fVar20 = -fVar20;
      }
      *(float *)(param_1 + 0x884) = fVar20;
    }
    if (*(short *)(iVar15 + 0x88a) == 0xcd) {
      *(undefined2 *)(param_1 + 0x818) = 5;
      uVar12 = *(undefined4 *)(param_1 + 0x820);
      uVar14 = *(undefined4 *)(param_1 + 0x824);
      *(undefined4 *)(iVar8 + 0x8c) = *puVar16;
      *(undefined4 *)(iVar8 + 0x90) = uVar12;
      *(undefined4 *)(iVar8 + 0x94) = uVar14;
      uVar12 = *(undefined4 *)(param_1 + 0x820);
      uVar14 = *(undefined4 *)(param_1 + 0x824);
      *(undefined4 *)(iVar8 + 0xa4) = *puVar16;
      *(undefined4 *)(iVar8 + 0xa8) = uVar12;
      *(undefined4 *)(iVar8 + 0xac) = uVar14;
      uVar12 = *(undefined4 *)(param_1 + 0x82c);
      uVar14 = *(undefined4 *)(param_1 + 0x830);
      *(undefined4 *)(iVar8 + 0x80) = *puVar17;
      *(undefined4 *)(iVar8 + 0x84) = uVar12;
      *(undefined4 *)(iVar8 + 0x88) = uVar14;
      func_0x0036e9b8(param_2,(int)*(short *)(param_1 + 0x81a),0);
      *(undefined2 *)(param_1 + 0x81a) = 0;
      func_0x00367374(param_2,iStack_48);
      func_0x0036e980(param_2,param_1,7);
      func_0x0036aa20(uVar4,uVar2,uVar4,param_2 + 0x208c,param_1,param_2,0x5d,0,0,0,0xffffffff);
      func_0x0036ec14(param_2,(int)*(char *)(iRam00138e00 + param_2));
      *puRam00138a18 = 0;
    }
  }
  if (*(short *)(param_1 + 0x81a) != 0) {
    func_0x00373500(*(undefined4 *)(param_1 + 0x84c),*(undefined4 *)(param_1 + 0x858),
                    *(float *)(param_1 + 0x834) * *(float *)(param_1 + 0x87c),puVar16);
    func_0x00373500(*(undefined4 *)(param_1 + 0x850),*(undefined4 *)(param_1 + 0x85c),
                    *(float *)(param_1 + 0x838) * *(float *)(param_1 + 0x87c),param_1 + 0x820);
    func_0x00373500(*(undefined4 *)(param_1 + 0x854),*(undefined4 *)(param_1 + 0x860),
                    *(float *)(param_1 + 0x83c) * *(float *)(param_1 + 0x87c),param_1 + 0x824);
    func_0x00373500(*(undefined4 *)(param_1 + 0x864),*(undefined4 *)(param_1 + 0x870),
                    *(float *)(param_1 + 0x840) * *(float *)(param_1 + 0x87c),puVar17);
    func_0x00373500(*(undefined4 *)(param_1 + 0x868),*(undefined4 *)(param_1 + 0x874),
                    *(float *)(param_1 + 0x844) * *(float *)(param_1 + 0x87c),param_1 + 0x82c);
    func_0x00373500(*(undefined4 *)(param_1 + 0x86c),*(undefined4 *)(param_1 + 0x878),
                    *(float *)(param_1 + 0x848) * *(float *)(param_1 + 0x87c),param_1 + 0x830);
    func_0x00373500(uVar3,uVar3,*(undefined4 *)(param_1 + 0x880),param_1 + 0x87c);
    *(float *)(param_1 + 0x82c) = *(float *)(param_1 + 0x82c) + *(float *)(param_1 + 0x884);
    FUN_00367b14(param_2,(int)*(short *)(param_1 + 0x81a),puVar17,puVar16);
    func_0x00373500(uVar4,uVar3,uVar1,param_1 + 0x884);
  }
  return;
}
