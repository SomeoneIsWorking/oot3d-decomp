// OoT3D decomp @ 00492a3c  name=FUN_00492a3c  size=1088

void FUN_00492a3c(int param_1,int param_2)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  short *psVar6;
  undefined4 uVar7;
  bool bVar8;
  uint in_fpscr;
  uint uVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_34 [4];
  float local_30;

  *(uint *)(param_1 + 0x1714) = *(uint *)(param_1 + 0x1714) | 0x20;
  iVar3 = FUN_0036b4ec(param_1 + 0x254);
  iVar4 = FUN_0036b1e0(DAT_00492e18,param_1 + 0x254);
  piVar2 = DAT_00492e1c;
  if (iVar4 != 0) {
    fVar11 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00492e1c + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    iVar4 = (int)(DAT_00492e20 / fVar11 + DAT_00492e24);
    if (*(char *)(DAT_00492e28 + param_1) <= iVar4) {
      iVar4 = (int)*(char *)(DAT_00492e28 + param_1);
    }
    *(char *)(param_1 + 0x2488) = (char)iVar4;
    *(undefined1 *)(param_1 + 0x227b) = 0;
  }
  iVar4 = FUN_003518dc(param_1,param_2);
  if (iVar4 != 0) {
    return;
  }
  iVar4 = FUN_00354f70(param_1,param_2);
  if (iVar4 != 0) {
    return;
  }
  iVar4 = FUN_00354894(param_1,param_2);
  fVar11 = DAT_00492e2c;
  if (iVar4 != 0) {
    return;
  }
  if (*(short *)(param_1 + 0x2238) != 0) {
    FUN_003705a0(DAT_00492e2c,DAT_00492e30,param_1 + 0x221c);
    iVar4 = FUN_0034b33c(DAT_00492e34,param_2,param_1,param_1 + 0x254);
    if (iVar4 == 0) {
      return;
    }
    if (iVar4 < 1 && iVar3 == 0) {
      return;
    }
    goto LAB_002c2224;
  }
  if (DAT_00492e38 <= *(int *)(param_1 + 0x221c)) {
    uVar5 = *(ushort *)(param_1 + 0x90) & 0x200;
    bVar8 = (*(ushort *)(param_1 + 0x90) & 0x200) != 0;
    if (bVar8) {
      uVar5 = *(uint *)(DAT_00492e3c + 0x48);
    }
    if (bVar8 && (int)uVar5 < 0x2000) {
LAB_00492bec:
      if (((*(char *)(param_1 + 0x80) != '2') &&
          (psVar6 = (short *)FUN_00359690(param_2 + 0xa98), psVar6 != (short *)0x0)) &&
         (*psVar6 == 0x1a0)) {
        psVar6[0xc] = 1;
      }
LAB_00492c1c:
      FUN_003604f0(param_1 + 0x254,param_2,
                   *(undefined4 *)(DAT_00492e40 + (uint)*(byte *)(param_1 + 0x1b3) * 4 + 0x1e0));
      *(float *)(param_1 + 0x221c) = -*(float *)(param_1 + 0x221c);
      uVar7 = FUN_0036c5bc(param_2,0);
      uVar7 = FUN_0036f848(uVar7,3);
      FUN_0036f7c0(uVar7,DAT_00492e44);
      FUN_0036f6b0(uVar7,3,0,0,0);
      FUN_0036f628(uVar7,0xc);
      FUN_0036f59c(param_1,DAT_00492e48);
      if (*(char *)(param_1 + 2) == '\x02') {
        FUN_0036f59c(param_1,DAT_00492e4c + (uint)*(ushort *)(*(int *)(param_1 + 0x170c) + 0xf4));
      }
      else {
        FUN_0036aeb4(param_1 + 0x28);
      }
      *(undefined2 *)(param_1 + 0x2238) = 1;
      return;
    }
    if (((*(byte *)(param_1 + 0x1322) & 2) != 0) &&
       (psVar6 = *(short **)(param_1 + 0x131c), *psVar6 == 0x77)) {
      iVar3 = (int)(short)(*(short *)(param_1 + 0x36) - psVar6[0x49]);
      if (iVar3 < 0) {
        iVar3 = -iVar3;
      }
      if (0x6000 < iVar3) {
        if (psVar6 != (short *)0x0) {
          psVar6[0xb] = 1;
          goto LAB_00492c1c;
        }
        goto LAB_00492bec;
      }
    }
  }
  fVar10 = (float)FUN_0036b4d0(DAT_00492e50,param_1 + 0x254);
  uVar5 = in_fpscr & 0xfffffff | (uint)(fVar11 <= fVar10) << 0x1d;
  if ((SUB41(uVar5 >> 0x1d,0)) && (iVar3 = FUN_002c22a0(param_1,param_2), iVar3 != 0)) {
    return;
  }
  fVar10 = (float)FUN_0036b4d0(DAT_00492e54,param_1 + 0x254);
  uVar5 = uVar5 & 0xfffffff | (uint)(fVar10 < fVar11) << 0x1f;
  uVar9 = uVar5 | (uint)(NAN(fVar10) || NAN(fVar11)) << 0x1c;
  if ((byte)(uVar5 >> 0x1f) != ((byte)(uVar9 >> 0x1c) & 1)) {
    FUN_0036b3f4(DAT_00492e58,param_1,&local_30,auStack_34,param_2);
    local_30 = local_30 * DAT_00492e5c;
    if (((int)local_30 < DAT_00492e60) ||
       (*(char *)((uint)*(byte *)(param_1 + 0x222a) + param_1 + 0x2231) != '\0')) {
      local_30 = DAT_00492e64;
    }
    sVar1 = *(short *)(param_1 + 0xbe);
    fVar11 = (float)VectorSignedToFloat((int)*(short *)(*piVar2 + 0x3a),(byte)(uVar9 >> 0x15) & 3);
    FUN_002dd714(local_30,fVar11 * DAT_00492e68,param_1 + 0x221c);
    FUN_00370378(param_1 + 0x2220,(int)sVar1,(int)*(short *)(*piVar2 + 0x4a));
    iVar3 = FUN_002c205c(param_2,param_1);
    if (iVar3 != 0) {
      FUN_0034a928(param_1,DAT_00492e6c);
    }
    FUN_002c1ec8(param_2,param_1);
    FUN_00360a1c(param_1,DAT_00492e70);
    return;
  }
LAB_002c2224:
  FUN_003518cc();
  FUN_0036055c(param_2,param_1);
  iVar3 = FUN_003518cc(param_1);
  if (iVar3 != 0) {
    *(undefined2 *)(DAT_002c229c + param_1) = 1;
  }
  return;
}
