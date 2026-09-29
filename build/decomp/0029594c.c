// OoT3D decomp @ 0029594c  name=FUN_0029594c  size=1212

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0029594c(int param_1,int param_2)

{
  int iVar1;
  ushort uVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  undefined4 local_3c;
  float local_38;
  undefined4 uStack_34;

  uVar4 = DAT_00295c98;
  fVar3 = DAT_00295c94;
  FUN_0036e168(DAT_00295c94,DAT_00295c9c,DAT_00295c98,DAT_00295c94,param_1 + 0x6c);
  FUN_00370734(param_1 + 0x1a4);
  if ((*(ushort *)(param_1 + 0x90) & 0x42) != 0) {
    if ((*(ushort *)(param_1 + 0x90) & 0x40) == 0) {
      local_3c = 1;
      FUN_0037378c(uVar4,param_2,param_1 + 0x6d0,2,0x50);
      local_3c = 1;
      FUN_0037378c(uVar4,param_2,param_1 + 0x6dc,2,0x50);
      local_3c = 1;
      FUN_0037378c(uVar4,param_2,param_1 + 0x6e8,2,0x50);
      local_3c = 1;
      FUN_0037378c(uVar4,param_2,param_1 + 0x6f4,2,0x50);
      FUN_00375bcc(param_1,DAT_00295ca0);
    }
    else {
      FUN_00375bcc(param_1,DAT_00295ca4);
    }
  }
  if (((*(ushort *)(param_1 + 0x90) & 2) != 0) ||
     ((*(short *)(param_1 + 0x1c) == -2 && ((*(ushort *)(param_1 + 0x90) & 0x40) != 0)))) {
    if (*(char *)(param_1 + 0x65a) == '\0') {
      FUN_00326470(param_1);
    }
    else {
      *(char *)(param_1 + 0x65a) = *(char *)(param_1 + 0x65a) + -1;
    }
  }
  uVar6 = DAT_00295cac;
  uVar5 = DAT_00295ca8;
  if ((((*(ushort *)(param_1 + 0x90) & 3) == 0) &&
      ((*(short *)(param_1 + 0x1c) != -2 || ((*(ushort *)(param_1 + 0x90) & 0x60) == 0)))) ||
     (fVar3 < *(float *)(param_1 + 100))) {
    *(undefined4 *)(param_1 + 0x70) = DAT_00295cac;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x1000000;
    FUN_00375a18(param_1 + 0xbe,(int)*(short *)(param_1 + 0x92),1,1000);
    if ((DAT_00295e44 <= *(int *)(param_1 + 100)) && ((*(ushort *)(param_1 + 0x90) & 1) != 0)) {
      FUN_0034c128(param_2,param_1 + 0x6d0);
      FUN_0034c128(param_2,param_1 + 0x6dc);
      FUN_0034c128(param_2,param_1 + 0x6e8);
      FUN_0034c128(param_2,param_1 + 0x6f4);
    }
    if (((*(byte *)(param_1 + 0x670) & 2) == 0) && ((*(uint *)(param_1 + 4) & 0x40) != 0)) {
      FUN_003761f0(param_2,param_2 + 0x5c78,param_1 + 0x660);
      return;
    }
    uVar11 = *(uint *)(DAT_00295e48 + param_2);
    *(byte *)(param_1 + 0x670) = *(byte *)(param_1 + 0x670) & 0xfd;
    FUN_00370350(uVar5,param_1 + 0x1a4,0);
    *(undefined4 *)(param_1 + 0x6c) = DAT_00295e4c;
    *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x92);
    uVar10 = *(uint *)(param_1 + 0x664);
    bVar12 = uVar10 == uVar11;
    if (bVar12) {
      uVar10 = (uint)*(byte *)(param_1 + 0x670);
    }
    if (bVar12 && (uVar10 & 4) == 0) {
      FUN_00375bcc(uVar11,DAT_00295e50);
    }
    *(undefined4 *)(param_1 + 0x63c) = DAT_00295e54;
    return;
  }
  *(float *)(param_1 + 0x6c) = fVar3;
  FUN_00375a18(param_1 + 0xbe,(int)*(short *)(param_1 + 0x92),1,4000);
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
  uVar8 = DAT_00295cb8;
  if ((*(short *)(param_1 + 0x1c) == -2) && ((*(ushort *)(param_1 + 0x90) & 0x20) != 0)) {
    if ((*(ushort *)(param_1 + 0x90) & 0x40) != 0) {
      local_3c = *(undefined4 *)(param_1 + 0x28);
      uStack_34 = *(undefined4 *)(param_1 + 0x30);
      *(ushort *)(param_1 + 0x90) = *(ushort *)(param_1 + 0x90) & 0xffbf;
      fVar7 = DAT_00295cb4;
      local_38 = *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x88);
      *(float *)(param_1 + 0x70) = fVar3;
      *(float *)(param_1 + 100) = *(float *)(param_1 + 100) * fVar7;
      FUN_00362068(param_2,&local_3c,0,500);
      return;
    }
    FUN_0036e168(fVar3,uVar4,DAT_00295cb8,fVar3,param_1 + 100);
    FUN_0036e168(*(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x88),uVar4,uVar8,fVar3,
                 param_1 + 0x2c);
    if (*(float *)(param_1 + 0x88) != fVar3) {
      return;
    }
  }
  else if (*(uint *)(param_1 + 0x84) < DAT_00295cb0) {
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x84);
  }
  uVar8 = DAT_00295ccc;
  uVar4 = DAT_00295cc8;
  iVar14 = *(int *)(param_1 + 0x98);
  iVar9 = DAT_00295cbc + -0xf60000;
  bVar13 = SBORROW4(iVar14,DAT_00295cbc);
  iVar1 = iVar14 - DAT_00295cbc;
  bVar12 = iVar14 == DAT_00295cbc;
  if (DAT_00295cbc < iVar14) {
    iVar15 = *(int *)(param_1 + 0x9c);
    bVar13 = SBORROW4(iVar15,iVar9);
    iVar1 = iVar15 - iVar9;
    bVar12 = iVar15 == iVar9;
  }
  if (!bVar12 && iVar1 < 0 == bVar13) {
    FUN_00370350(DAT_003264b8,param_1 + 0x1a4,0);
    *(undefined1 *)(param_1 + 0x638) = 6;
                    /* WARNING: Subroutine does not return */
    FUN_003702c8(0xf,0x1e);
  }
  bVar13 = SBORROW4(iVar14,DAT_00295cc0);
  iVar1 = iVar14 - DAT_00295cc0;
  bVar12 = iVar14 == DAT_00295cc0;
  if (iVar14 <= DAT_00295cc0) {
    iVar14 = *(int *)(param_1 + 0x9c);
    bVar13 = SBORROW4(iVar14,iVar9);
    iVar1 = iVar14 - iVar9;
    bVar12 = iVar14 == iVar9;
  }
  if (bVar12 || iVar1 < 0 != bVar13) {
    if (*(char *)(param_1 + 0x65a) == '\0') {
      FUN_0036e734(param_1 + 0x1a4,1);
      *(undefined1 *)(param_1 + 0x638) = 10;
      fVar3 = DAT_00326468;
      if (((*(ushort *)(param_1 + 0x90) & 3) != 0) ||
         ((*(short *)(param_1 + 0x1c) == -2 && ((*(ushort *)(param_1 + 0x90) & 0x20) != 0)))) {
        if (*(float *)(param_1 + 100) <= DAT_00326468) {
          *(float *)(param_1 + 0x70) = DAT_00326468;
          *(float *)(param_1 + 100) = fVar3;
          *(float *)(param_1 + 0x6c) = fVar3;
        }
      }
      *(undefined4 *)(param_1 + 0x63c) = DAT_0032646c;
      return;
    }
    *(undefined4 *)(param_1 + 100) = DAT_00295cc4;
    *(undefined4 *)(param_1 + 0x6c) = uVar5;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x1000000;
    *(undefined4 *)(param_1 + 0x70) = uVar6;
    if (*(short *)(param_1 + 0x1c) != -2) goto LAB_00295d14;
    uVar2 = *(ushort *)(param_1 + 0x90);
  }
  else {
    *(undefined4 *)(param_1 + 100) = DAT_00295cc4;
    *(undefined4 *)(param_1 + 0x6c) = uVar5;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x1000000;
    *(undefined4 *)(param_1 + 0x70) = uVar6;
    if (*(short *)(param_1 + 0x1c) != -2) goto LAB_00295d14;
    uVar2 = *(ushort *)(param_1 + 0x90);
  }
  if ((uVar2 & 0x20) != 0) {
    FUN_00375bcc(param_1,uVar4);
    return;
  }
LAB_00295d14:
  FUN_00375bcc(param_1,uVar8);
  return;
}
