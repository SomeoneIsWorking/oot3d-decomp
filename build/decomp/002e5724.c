// OoT3D decomp @ 002e5724  name=FUN_002e5724  size=728

void FUN_002e5724(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  short sVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  uint uVar10;
  int iVar11;
  uint in_fpscr;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  
  FUN_00343280(param_1,0x1bc);
  piVar4 = DAT_002e5a00;
  iVar3 = DAT_002e59fc;
  if (*(int *)(DAT_002e59fc + 0xc) != 0) {
    uVar10 = (uint)*(short *)(DAT_002e59fc + 2);
    if (0 < (int)uVar10) {
      puVar8 = (undefined2 *)(DAT_002e59fc + 0xb2);
      puVar9 = (undefined2 *)(*DAT_002e5a00 + 0x192);
      if ((uVar10 & 1) != 0) {
        puVar8 = (undefined2 *)(DAT_002e59fc + 0xb4);
        puVar9 = (undefined2 *)(*DAT_002e5a00 + 0x194);
        *puVar9 = *puVar8;
      }
      uVar2 = puVar8[1];
      for (iVar11 = (int)uVar10 >> 1; iVar11 != 0; iVar11 = iVar11 + -1) {
        uVar1 = puVar8[2];
        puVar9[1] = uVar2;
        uVar2 = puVar8[3];
        puVar9 = puVar9 + 2;
        *puVar9 = uVar1;
        puVar8 = puVar8 + 2;
      }
    }
    uVar10 = (uint)*(short *)(iVar3 + 4);
    if (0 < (int)uVar10) {
      puVar9 = (undefined2 *)(*piVar4 + 0x252);
      puVar8 = DAT_002e5a04;
      if ((uVar10 & 1) != 0) {
        puVar8 = DAT_002e5a04 + 1;
        puVar9 = (undefined2 *)(*piVar4 + 0x254);
        *puVar9 = *puVar8;
      }
      uVar2 = puVar8[1];
      for (iVar11 = (int)uVar10 >> 1; iVar11 != 0; iVar11 = iVar11 + -1) {
        uVar1 = puVar8[2];
        puVar9[1] = uVar2;
        uVar2 = puVar8[3];
        puVar9 = puVar9 + 2;
        *puVar9 = uVar1;
        puVar8 = puVar8 + 2;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
    *(undefined2 *)(*piVar4 + 0x304) = 0xffff;
  }
  *(int *)(iVar3 + 0xa4) = param_4;
  *(int *)(param_1 + 0xd4) = param_4;
  sVar7 = *(short *)(iVar3 + 6);
  *(short *)(iVar3 + 6) = sVar7 + 1;
  if (sVar7 != 0) {
    iVar11 = *(int *)(param_4 + 0xa54);
    while (((((iVar11 != 0 && (*(short *)(iVar11 + 0x178) == sVar7)) ||
             ((*(int *)(param_4 + 0xa58) != 0 &&
              (*(short *)(*(int *)(param_4 + 0xa58) + 0x178) == sVar7)))) ||
            ((*(int *)(param_4 + 0xa5c) != 0 &&
             (*(short *)(*(int *)(param_4 + 0xa5c) + 0x178) == sVar7)))) ||
           ((*(int *)(param_4 + 0xa60) != 0 &&
            (*(short *)(*(int *)(param_4 + 0xa60) + 0x178) == sVar7))))) {
      sVar7 = *(short *)(iVar3 + 6);
      *(short *)(iVar3 + 6) = sVar7 + 1;
      if (sVar7 == 0) break;
      if (sVar7 == 0) {
        *(undefined2 *)(iVar3 + 6) = 2;
      }
    }
  }
  *(short *)(param_1 + 0x178) = sVar7;
  *(undefined2 *)(param_1 + 0x17e) = 0x3fff;
  FUN_0035fb94(param_1 + 0x182,param_1 + 0x17c);
  uVar6 = DAT_002e5a0c;
  uVar5 = DAT_002e5a08;
  *(undefined4 *)(param_1 + 0x98) = DAT_002e5a08;
  *(undefined4 *)(param_1 + 0x9c) = uVar6;
  uVar12 = DAT_002e5a10;
  *(undefined4 *)(param_1 + 0xa0) = uVar5;
  *(undefined4 *)(param_1 + 0x144) = uVar12;
  uVar12 = DAT_002e5a14;
  *(undefined4 *)(param_1 + 0x108) = DAT_002e5a14;
  *(undefined4 *)(param_1 + 0x110) = uVar12;
  iVar11 = *piVar4;
  uVar12 = VectorSignedToFloat((int)*(short *)(iVar11 + 0x1a2),(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(param_1 + 0x10c) = uVar12;
  fVar13 = DAT_002e5a18;
  fVar14 = (float)VectorSignedToFloat((int)*(short *)(iVar11 + 0x198),(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(param_1 + 0x114) = fVar14 * DAT_002e5a18;
  fVar14 = (float)VectorSignedToFloat((int)*(short *)(iVar11 + 0x19a),(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(param_1 + 0x118) = fVar14 * fVar13;
  fVar14 = (float)VectorSignedToFloat((int)*(short *)(iVar11 + 0x19c),(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(param_1 + 0x11c) = fVar14 * fVar13;
  *(undefined4 *)(iVar3 + 0x1c) = 0x20;
  *(undefined4 *)(iVar3 + 0x18) = 0;
  *(undefined2 *)(param_1 + 0x19c) = 0x21;
  *(undefined2 *)(param_1 + 0x18a) = 0x21;
  *(undefined2 *)(param_1 + 0x18c) = 0;
  *(undefined2 *)(param_1 + 0x1ae) = 0xffff;
  *(undefined2 *)(param_1 + 400) = 0xffff;
  *(undefined2 *)(param_1 + 0x18e) = 0x32;
  *(undefined2 *)(param_1 + 0x1b0) = 0x7fff;
  *(undefined2 *)(param_1 + 0x1a8) = 0xffff;
  *(undefined2 *)(param_1 + 0x194) = 0x4000;
  *(undefined4 *)(param_1 + 0x148) = uVar6;
  *(undefined4 *)(param_1 + 0xb0) = uVar5;
  *(undefined4 *)(param_1 + 0xb4) = uVar5;
  *(undefined4 *)(param_1 + 0xb8) = uVar5;
  *(undefined4 *)(iVar3 + 0x14) = 0xff00;
  uVar6 = DAT_002e5a24;
  fVar13 = (float)VectorSignedToFloat((int)*(short *)(iVar11 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
  *(int *)(iVar3 + 0x28) = (int)(DAT_002e5a1c / fVar13 + DAT_002e5a20);
  *(undefined4 *)(param_1 + 0xd0) = uVar6;
  *(undefined *)(param_1 + 0x1b6) = 1;
  *(undefined4 *)(param_1 + 0xbc) = uVar5;
  *(undefined4 *)(param_1 + 0xcc) = uVar5;
  *(undefined4 *)(param_1 + 200) = uVar5;
  *(undefined2 *)(param_1 + 0x1b4) = 0;
  *(undefined2 *)(param_1 + 0x1b2) = 0;
  return;
}

