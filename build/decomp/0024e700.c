// OoT3D decomp @ 0024e700  name=FUN_0024e700  size=2104

/* WARNING: Possible PIC construction at 0x0024e9f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0024eea8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0024e9f8) */
/* WARNING: Removing unreachable block (ram,0x0024ea04) */
/* WARNING: Removing unreachable block (ram,0x0024ea1c) */
/* WARNING: Removing unreachable block (ram,0x0024ea44) */
/* WARNING: Removing unreachable block (ram,0x0024eaec) */
/* WARNING: Removing unreachable block (ram,0x0024ea50) */
/* WARNING: Removing unreachable block (ram,0x0024eb10) */
/* WARNING: Removing unreachable block (ram,0x0024eb7c) */
/* WARNING: Removing unreachable block (ram,0x0024eb80) */
/* WARNING: Removing unreachable block (ram,0x0024eb84) */
/* WARNING: Removing unreachable block (ram,0x0024eb88) */
/* WARNING: Removing unreachable block (ram,0x0024eb8c) */
/* WARNING: Removing unreachable block (ram,0x0024ebac) */
/* WARNING: Removing unreachable block (ram,0x0024ec00) */
/* WARNING: Removing unreachable block (ram,0x0024ec10) */
/* WARNING: Removing unreachable block (ram,0x0024ec24) */
/* WARNING: Removing unreachable block (ram,0x0024ecf0) */
/* WARNING: Removing unreachable block (ram,0x0024ed04) */
/* WARNING: Removing unreachable block (ram,0x0024edc0) */

int FUN_0024e700(int param_1,int param_2)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  short *psVar5;
  int *piVar6;
  short sVar7;
  undefined4 uVar8;
  int iVar9;
  uint in_fpscr;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  
  fVar13 = fRam0024ea7c;
  iVar9 = *(int *)(param_1 + 0x124);
  *(short *)(param_1 + 0x1aa) = *(short *)(param_1 + 0x1aa) + 1;
  if (*(short *)(param_1 + 0x1a8) != 0) {
    *(short *)(param_1 + 0x1a8) = *(short *)(param_1 + 0x1a8) + -1;
  }
  *(short *)(param_1 + 0xbc) = *(short *)(param_1 + 0xbc) + (short)(int)*(float *)(param_1 + 0x1b0);
  *(short *)(param_1 + 0xbe) = *(short *)(param_1 + 0xbe) + (short)(int)*(float *)(param_1 + 0x1b4);
  *(float *)(param_1 + 0x70) = fVar13;
  *(float *)(param_1 + 100) = *(float *)(param_1 + 100) + fVar13;
  func_0x0036b96c(param_1);
  fVar3 = fRam0024ea94;
  fVar2 = fRam0024ea90;
  uVar16 = uRam0024ea8c;
  uVar8 = uRam0024ea84;
  uVar12 = uRam0024ea80;
  if (*(short *)(param_1 + 0x1c) < 200) {
    func_0x00373500(param_1 + 0x1bc);
    fVar14 = *(float *)(param_1 + 0x58) * fRam0024eac8;
    *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) - fVar14;
    func_0x00376340(uVar8,uVar8,uVar12,param_2,param_1,4);
    *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) + fVar14;
    uVar8 = uRam0024ef04;
    fVar14 = fRam0024ead0;
    uVar12 = uRam0024eacc;
    if (((*(ushort *)(param_1 + 0x90) & 1) == 0) ||
       (uVar10 = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 100) == fVar2) << 0x1e |
                 (uint)(fVar2 <= *(float *)(param_1 + 100)) << 0x1d, bVar1 = (byte)(uVar10 >> 0x18),
       (bool)(bVar1 >> 5 & 1) && !(bool)(bVar1 >> 6))) {
      if ((*(byte *)(param_1 + 0x1d0) & 2) != 0) {
        uVar12 = *(undefined4 *)(iRam0024ef10 + param_2);
        *(byte *)(param_1 + 0x1d0) = *(byte *)(param_1 + 0x1d0) & 0xfd;
        func_0x00375bcc(uVar12,uRam0024ef14);
      }
      func_0x0037632c(param_1,param_1 + 0x1c0);
      piVar6 = (int *)(param_1 + 0x1c0);
      psVar5 = (short *)(param_2 + 0x5c78);
      iVar9 = func_0x00366738();
      if (iVar9 != 1) {
        (**(code **)(iRam00376274 + (uint)*(byte *)(param_1 + 0x1d5) * 4))(param_2,piVar6);
        if ((((*piVar6 == 0) || (*(int *)(*piVar6 + 0x13c) != 0)) &&
            (iVar9 = (int)*psVar5, iVar9 < 0x32)) && ((*(ushort *)(param_2 + 0x5c7a) & 1) == 0)) {
          *(int **)(psVar5 + iVar9 * 2 + 2) = piVar6;
          *psVar5 = *psVar5 + 1;
          return iVar9;
        }
      }
      return -1;
    }
    if (*(short *)(param_1 + 0x1c) != 100 && *(short *)(param_1 + 0x1c) != 0x65) {
      sVar7 = 0;
      do {
        fStack_70 = fVar2;
        fStack_6c = fVar2;
        fStack_68 = fVar2;
        fStack_7c = fVar2;
        fStack_78 = fVar13;
        fStack_74 = fVar2;
        fStack_70 = (float)func_0x003738a8(fVar3);
        fStack_6c = (float)func_0x00371e50(fVar14);
        fStack_6c = fStack_6c + fVar14;
        fStack_68 = (float)func_0x003738a8(fVar3);
        fStack_88 = (float)func_0x003738a8(uVar12);
        fStack_88 = fStack_88 + *(float *)(param_1 + 0x28);
        fStack_84 = (float)func_0x003738a8(uVar12);
        fStack_84 = fStack_84 + *(float *)(param_1 + 0x2c);
        fStack_80 = (float)func_0x003738a8(uVar12);
        fStack_80 = fStack_80 + *(float *)(param_1 + 0x30);
        fVar15 = (float)func_0x00371e50(uVar8);
        uVar16 = VectorSignedToFloat((short)(int)fVar15 + 0xf,(byte)(uVar10 >> 0x15) & 3);
        FUN_00335814(uVar16,iVar9 + 0x2924,&fStack_88,&fStack_70,&fStack_7c);
        sVar7 = sVar7 + 1;
      } while (sVar7 < 2);
    }
  }
  else {
    uVar8 = *(undefined4 *)(param_1 + 0x124);
    func_0x00376340(uRam0024ea84,uRam0024ea84,uRam0024ea80,param_2,param_1,4);
    uVar12 = uRam0024ea98;
    if (((*(ushort *)(param_1 + 0x90) & 1) != 0) && (*(float *)(param_1 + 100) <= fVar2)) {
      uVar11 = func_0x003738a8(uRam0024ea98);
      *(undefined4 *)(param_1 + 0x1b0) = uVar11;
      uVar12 = func_0x003738a8(uVar12);
      *(undefined4 *)(param_1 + 0x1b4) = uVar12;
      uVar12 = func_0x003696ec(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30));
      fVar13 = (float)func_0x003727f0();
      *(float *)(param_1 + 0x60) = fVar13 * fVar3;
      fVar14 = (float)func_0x00372674(uVar12);
      fVar13 = fRam0024ea9c;
      *(float *)(param_1 + 0x68) = fVar14 * fVar3;
      *(float *)(param_1 + 100) = *(float *)(param_1 + 100) * fVar13;
      if ((*(ushort *)(param_1 + 0x1c) & 1) != 0) {
        fStack_88 = fRam0024eaa4;
        fStack_84 = fRam0024eaa0;
        FUN_0037547c(uRam0024eaa8,param_1 + 0x28,4,fRam0024eaa4);
      }
      uVar4 = uRam0024eab8;
      fVar13 = fRam0024eab4;
      uVar11 = uRam0024eab0;
      uVar12 = uRam0024eaac;
      sVar7 = 0;
      do {
        fStack_70 = fVar2;
        fStack_6c = fVar2;
        fStack_68 = fVar2;
        fStack_7c = fVar2;
        fStack_78 = fVar2;
        fStack_74 = fVar2;
        fStack_70 = (float)func_0x003738a8();
        fStack_6c = (float)func_0x00371e50(uVar16);
        fStack_68 = (float)func_0x003738a8();
        fStack_78 = (float)uVar12;
        fStack_88 = (float)func_0x003738a8(uVar11);
        fStack_88 = fStack_88 + *(float *)(param_1 + 0x28);
        fStack_84 = *(float *)(param_1 + 0x84) + fVar3;
        fStack_80 = (float)func_0x003738a8(uVar11);
        fStack_80 = fStack_80 + *(float *)(param_1 + 0x30);
        fVar14 = (float)func_0x00371e50(uVar4);
        FUN_0036442c(fVar14 + fVar13,uVar8,&fStack_88,&fStack_70,&fStack_7c);
        sVar7 = sVar7 + 1;
      } while (sVar7 < 4);
    }
    if (iRam0024eabc <= *(int *)(param_1 + 0x2c)) {
      return iRam0024eabc;
    }
  }
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  return param_1;
}

