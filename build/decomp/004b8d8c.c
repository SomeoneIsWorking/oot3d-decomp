// OoT3D decomp @ 004b8d8c  name=FUN_004b8d8c  size=536

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_004b8d8c(int param_1,undefined4 param_2)

{
  uint uVar1;
  float fVar2;
  int *piVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  bool bVar8;
  uint in_fpscr;
  float fVar9;
  uint uStack_3c;
  float fStack_38;

  *(uint *)(param_1 + 0x1714) = *(uint *)(param_1 + 0x1714) | 0x20;
  FUN_002be660(param_1);
  iVar5 = FUN_002c3d18(param_2,param_1,DAT_004b8fa4,1);
  uVar7 = DAT_004b8fa8;
  if (iVar5 != 0) {
    return;
  }
  if ((*(uint *)(param_1 + 0x29b8) & 4) != 0) {
    FUN_0036b2d4(param_1,param_2);
    return;
  }
  uVar6 = FUN_00349574(param_1);
  fVar2 = DAT_004b8fb0;
  uVar1 = DAT_004b8fac;
  bVar8 = uVar6 == 0;
  if (bVar8) {
    uVar6 = *(uint *)(param_1 + 0x1710);
  }
  if (bVar8 && (uVar6 & DAT_004b8fac) == 0) {
    iVar5 = FUN_003518cc();
    if ((iVar5 != 0) ||
       (uVar7 = DAT_002c3d04, (DAT_002c3d00 & *(uint *)(DAT_002c3cfc + param_1)) != 0)) {
      uVar7 = DAT_002c3d08;
    }
    FUN_0036055c(param_2,param_1,uVar7,1);
    uVar7 = DAT_002c3d10;
    if (*(int *)(param_1 + 0x284) !=
        *(int *)(DAT_002c3d0c + (uint)*(byte *)(param_1 + 0x1b3) * 4 + 0x30)) {
      *(undefined4 *)(param_1 + 0x2254) = DAT_002c3d10;
      *(undefined4 *)(param_1 + 0x2250) = uVar7;
    }
    *(undefined2 *)(DAT_002c3d14 + param_1) = 0;
    return;
  }
  FUN_0036b3f4(DAT_004b8fb0,param_1,&fStack_38,&uStack_3c,param_2);
  fVar4 = DAT_004b8fb8;
  piVar3 = DAT_004b8fb4;
  iVar5 = (int)(short)(*(short *)(param_1 + 0x2220) - (short)uStack_3c);
  if (iVar5 < 0) {
    iVar5 = -iVar5;
  }
  if (0x6000 < iVar5) {
    fVar9 = (float)VectorSignedToFloat((int)*(short *)(*DAT_004b8fb4 + 0x6a),
                                       (byte)(in_fpscr >> 0x15) & 3);
    iVar5 = FUN_003705a0(fVar2,fVar9 * DAT_004b8fb8,param_1 + 0x221c);
    if (iVar5 == 0) {
      return;
    }
    fStack_38 = fVar2;
    uStack_3c = (uint)*(ushort *)(param_1 + 0x2220);
  }
  if ((*(uint *)(param_1 + 0x1710) & uVar1) == 0) {
LAB_004b8f04:
    iVar5 = FUN_002c3b94(fStack_38,param_1,(int)(short)uStack_3c);
    if (iVar5 < 1) goto LAB_004b8f88;
  }
  else {
    in_fpscr = in_fpscr & 0xfffffff | (uint)(fStack_38 == fVar2) << 0x1e;
    if (!SUB41(in_fpscr >> 0x1e,0)) {
      iVar5 = FUN_002bcd38(param_1,&fStack_38,&uStack_3c,param_2);
      if (iVar5 < 1) goto LAB_004b8f88;
      if ((*(uint *)(param_1 + 0x1710) & uVar1) == 0) goto LAB_004b8f04;
    }
  }
  iVar5 = (int)(short)uStack_3c;
  fVar9 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0x3a),(byte)(in_fpscr >> 0x15) & 3);
  FUN_002dd714(fStack_38,fVar9 * fVar4,DAT_004b8fbc,param_1 + 0x221c);
  FUN_00370378(param_1 + 0x2220,iVar5,(int)*(short *)(*piVar3 + 0x4a));
  FUN_002bcbac(param_1,param_2);
  if (*(float *)(param_1 + 0x221c) != fVar2 || fStack_38 != fVar2) {
    return;
  }
LAB_004b8f88:
  FUN_0036b2d4(uVar7,param_1,param_2);
  return;
}
