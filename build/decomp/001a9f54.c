// OoT3D decomp @ 001a9f54  name=FUN_001a9f54  size=1028

void FUN_001a9f54(int param_1,int param_2)

{
  short sVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint in_fpscr;
  float fVar17;

  sVar1 = *(short *)(param_1 + 0x1c);
  iVar16 = (int)sVar1;
  if (*(short *)(DAT_001aa3a8 + iVar16 * 2) == 1) {
    iVar11 = 0;
  }
  else {
    iVar11 = FUN_00363c10(param_2 + 0x3a58);
    if (iVar11 < 0) goto LAB_001a9fa0;
  }
  *(char *)(param_1 + 0x2f2) = (char)iVar11;
LAB_001a9fa0:
  *(undefined4 *)(param_1 + 0x2e8) = DAT_001aa3ac;
  *(undefined2 *)(param_1 + 0x2ee) = 0;
  *(undefined2 *)(param_1 + 0x2ec) = 0;
  *(undefined2 *)(param_1 + 0x2f0) = 0;
  *(undefined4 *)(param_1 + 0x2f8) = 0;
  *(undefined4 *)(param_1 + 0x2fc) = 0;
  *(undefined4 *)(param_1 + 0x300) = 0;
  *(undefined4 *)(param_1 + 0x304) = 0;
  *(undefined4 *)(param_1 + 0x308) = 0;
  *(undefined4 *)(param_1 + 0x30c) = 0;
  *(undefined4 *)(param_1 + 0x310) = 0;
  *(undefined4 *)(param_1 + 0x314) = 0;
  *(undefined4 *)(param_1 + 0x318) = 0;
  *(undefined4 *)(param_1 + 0x31c) = 0;
  *(undefined4 *)(param_1 + 800) = 0;
  *(undefined4 *)(param_1 + 0x324) = 0;
  *(undefined4 *)(param_1 + 0x328) = 0;
  *(undefined4 *)(param_1 + 0x32c) = 0;
  *(undefined4 *)(param_1 + 0x330) = 0;
  *(undefined4 *)(param_1 + 0x334) = 0;
  *(undefined4 *)(param_1 + 0x338) = 0;
  *(undefined4 *)(param_1 + 0x33c) = 0;
  *(undefined4 *)(param_1 + 0x340) = 0;
  *(undefined4 *)(param_1 + 0x344) = 0;
  *(undefined4 *)(param_1 + 0x348) = 0;
  *(undefined4 *)(param_1 + 0x34c) = 0;
  *(undefined4 *)(param_1 + 0x350) = 0;
  *(undefined4 *)(param_1 + 0x354) = 0;
  *(undefined4 *)(param_1 + 0x358) = 0;
  *(undefined4 *)(param_1 + 0x35c) = 0;
  *(undefined4 *)(param_1 + 0x360) = 0;
  *(undefined4 *)(param_1 + 0x364) = 0;
  *(undefined4 *)(param_1 + 0x368) = 0;
  uVar10 = DAT_001aa424;
  uVar12 = DAT_001aa3f4;
  uVar9 = DAT_001aa3e8;
  uVar7 = DAT_001aa3dc;
  uVar13 = DAT_001aa3b8;
  cVar2 = (char)sVar1;
  switch(iVar16) {
  case 0:
    *(undefined4 *)(param_1 + 0x2e4) = DAT_001aa3b0;
    *(undefined4 *)(param_1 + 0x1a4) = DAT_001aa3b4;
    FUN_0037572c(uVar13,param_1);
    uVar9 = DAT_001aa3dc;
    iVar11 = DAT_001aa3d8;
    fVar8 = DAT_001aa3d4;
    uVar7 = DAT_001aa3d0;
    fVar6 = DAT_001aa3cc;
    uVar13 = DAT_001aa3c8;
    fVar5 = DAT_001aa3c4;
    fVar4 = DAT_001aa3c0;
    fVar3 = DAT_001aa3bc;
    iVar14 = 0;
    do {
      iVar15 = param_1 + iVar14 * 4;
      fVar17 = (float)VectorSignedToFloat(iVar14,(byte)(in_fpscr >> 0x15) & 3);
      *(float *)(iVar15 + 0x1d4) = fVar17 * fVar3 - fVar4;
      fVar17 = (float)FUN_00371e50(fVar5);
      *(float *)(iVar15 + 0x214) = fVar17 + fVar5;
      fVar17 = (float)FUN_00371e50(uVar13);
      *(float *)(iVar15 + 0x254) = fVar6 - fVar17;
      fVar17 = (float)FUN_00371e50(uVar13);
      *(char *)(param_1 + iVar14 + 0x2d4) = (char)(int)fVar17;
      fVar17 = (float)FUN_00371e50(uVar7);
      *(float *)(iVar15 + 0x294) = fVar17 + fVar8;
      if (*(int *)(param_1 + 0x36c) != 0) {
        uVar12 = FUN_00372f0c(*(int *)(param_1 + 0x36c),
                              *(undefined4 *)
                               (iVar11 + (uint)*(byte *)(param_1 + iVar14 + 0x2d4) * 4));
        FUN_00372d94(*(undefined4 *)(*(int *)(iVar15 + 0x318) + 0xc),uVar12);
      }
      iVar14 = iVar14 + 1;
      *(undefined4 *)(iVar15 + 0x214) = uVar9;
    } while (iVar14 < 0x10);
    *(undefined4 *)(param_1 + 0x1d0) = uVar9;
    break;
  case 1:
    *(undefined4 *)(param_1 + 0x2e4) = DAT_001aa3e0;
    *(undefined4 *)(param_1 + 0x1a4) = DAT_001aa3e4;
    FUN_0037572c(uVar9,param_1);
    break;
  case 2:
    *(undefined4 *)(param_1 + 0x2e4) = DAT_001aa3ec;
    *(undefined4 *)(param_1 + 0x1a4) = DAT_001aa3f0;
    FUN_0037572c(uVar12,param_1);
    uVar13 = DAT_001aa3b8;
    *(undefined4 *)(param_1 + 0x1c4) = DAT_001aa3b8;
    *(undefined4 *)(param_1 + 0x1c8) = uVar13;
    uVar13 = DAT_001aa3dc;
    *(undefined4 *)(param_1 + 0x1cc) = DAT_001aa3dc;
    *(undefined4 *)(param_1 + 0x1d0) = uVar13;
    break;
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
    *(undefined4 *)(param_1 + 0x2e4) = DAT_001aa3f8;
    *(undefined4 *)(param_1 + 0x1a4) = DAT_001aa3fc;
    FUN_0037572c(uVar7,param_1);
    *(char *)(param_1 + 0x2f3) = cVar2 + -3;
    break;
  case 9:
  case 10:
    *(undefined4 *)(param_1 + 0x2e4) = DAT_001aa3f8;
    FUN_0037572c(uVar7,param_1);
    *(undefined4 *)(param_1 + 0x1a4) = DAT_001aa400;
    break;
  case 0xb:
    *(undefined4 *)(param_1 + 0x2e4) = DAT_001aa3f8;
    FUN_0037572c(uVar7,param_1);
    *(undefined4 *)(param_1 + 0x1a4) = DAT_001aa404;
    *(undefined4 *)(param_1 + 0x68) = uVar7;
    *(undefined4 *)(param_1 + 100) = uVar7;
    uVar13 = DAT_001aa408;
    *(undefined4 *)(param_1 + 0x60) = uVar7;
    FUN_00375bcc(param_1,uVar13);
    break;
  case 0xc:
    FUN_0037572c(DAT_001aa3dc,param_1);
    *(undefined4 *)(param_1 + 0x1a4) = DAT_001aa40c;
    *(undefined4 *)(param_1 + 0x2e4) = DAT_001aa410;
    FUN_00375d3c(param_2,param_2 + 0x208c,param_1,7);
    break;
  case 0xd:
    FUN_0037572c(DAT_001aa414,param_1);
    uVar13 = DAT_001aa418;
    *(undefined4 *)(param_1 + 0x140) = DAT_001aa41c;
    *(undefined4 *)(param_1 + 0x2e8) = uVar13;
    *(undefined1 *)(param_1 + 0x2f3) = 0;
    *(undefined1 *)(param_1 + 0x1e) = *(undefined1 *)(param_1 + 0x2f2);
    *(undefined1 *)(param_1 + 0x2f4) = 1;
    FUN_00372f38(param_1,param_2,param_1 + 0x368,1,0);
    break;
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x20;
    *(undefined4 *)(param_1 + 0x2e4) = DAT_001aa3f8;
    *(undefined4 *)(param_1 + 0x1a4) = DAT_001aa420;
    *(undefined2 *)(param_1 + 0x2ec) = 1;
    FUN_0037572c(uVar10,param_1);
    *(char *)(param_1 + 0x2f3) = cVar2 + -0xe;
  }
  if (iVar16 == 9) {
    *(undefined1 *)(param_1 + 0x2f3) = 0;
  }
  else if (iVar16 == 10) {
    *(undefined1 *)(param_1 + 0x2f3) = 5;
  }
  else if (iVar16 == 0xb) {
    *(undefined1 *)(param_1 + 0x2f3) = 4;
  }
  FUN_003591e4(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
               *(undefined4 *)(param_1 + 0x30),param_1 + 0x1a8,0xff,0xff,0xff,100,0);
  uVar13 = FUN_0034faa8(param_2,param_2 + 0xa70,param_1 + 0x1a8);
  *(undefined4 *)(param_1 + 0x1c0) = uVar13;
  return;
}
