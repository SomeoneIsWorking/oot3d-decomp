// OoT3D decomp @ 00161a60  name=FUN_00161a60  size=1784

void FUN_00161a60(int param_1,int param_2)

{
  short sVar1;
  float fVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  int *piVar8;
  undefined4 unaff_r7;
  undefined4 unaff_lr;
  uint in_fpscr;
  undefined8 unaff_d8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;

  uVar10 = CONCAT44(unaff_r6,unaff_r5);
  FUN_003510b0(param_1,DAT_00161d9c);
  FUN_0037572c(DAT_00161da0,param_1);
  uVar7 = DAT_00161db0;
  *(undefined4 *)(param_1 + 0x70) = DAT_00161da4;
  FUN_00372d4c(uVar7,DAT_00161da8,param_1 + 0xbc,DAT_00161dac);
  *(undefined1 *)(param_1 + 0x1a4) = 0;
  *(undefined4 *)(param_1 + 0x6c) = uVar7;
  fVar2 = DAT_00161db4;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x30);
  *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x40) + fVar2;
  *(undefined1 *)(param_1 + 0x1a5) = 0;
  FUN_00353dd0(param_2);
  FUN_00353d24(param_2,param_1 + 0x11f0,param_1,DAT_00161db8);
  FUN_00350eb8(param_2);
  FUN_00350d48(param_2,param_1 + 0x1248,param_1,DAT_00161dbc,param_1 + 0x1268);
  FUN_00353dd0(param_2);
  FUN_00353d24(param_2,param_1 + 0x12b8,param_1,DAT_00161dc0);
  FUN_00350d20(param_1 + 0xa0,0,DAT_00161dc4);
  puVar3 = DAT_00161dd0;
  if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
     (iVar4 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80, *(int *)(DAT_00161dc8 + iVar4) != 0)
     ) {
    iVar4 = iVar4 + 0x3a5c;
  }
  else {
    iVar4 = 0;
  }
  iVar4 = iVar4 + 0x10;
  sVar1 = *(short *)(param_2 + 0x104);
  if (sVar1 == 99) {
    if ((*(short *)(param_1 + 0x38) == 0) || (*(int *)(DAT_00161dcc + 0x10) != 0))
    goto LAB_00161d2c;
    if (*(int *)(DAT_00161dcc + 4) == 0) {
      iVar5 = FUN_00350cf4(0x18);
      if ((iVar5 == 0) && (*(short *)(*DAT_00161dd4 + 0x556) == 0)) {
        if (*(short *)(param_1 + 0x38) != 5) goto LAB_00161d2c;
      }
      else if (*(short *)(param_1 + 0x38) != 7) goto LAB_00161d2c;
    }
    else {
      iVar5 = FUN_00350cf4(0x14);
      if (iVar5 == 0) {
        if (*(short *)(param_1 + 0x38) != 1) goto LAB_00161d2c;
      }
      else if (*(short *)(param_1 + 0x38) != 3) {
LAB_00161d2c:
        FUN_00374428(param_1);
        return;
      }
    }
    *(undefined2 *)(param_1 + 0xc0) = 0;
    *(undefined2 *)(param_1 + 0x38) = 0;
    *(undefined2 *)(param_1 + 0x18) = 0;
    uVar6 = ObjectBankArchive_00358ef8(iVar4,0);
    FUN_00358ea8(iVar4,param_2,param_1 + 0x1b8,uVar6,*(undefined4 *)(param_1 + 0x178),6,
                 param_1 + 0x240,param_1 + 0x720,0x18);
    FUN_00373d40(param_1 + 0x1b8,puVar3[*(byte *)(param_1 + 0x1a5)]);
    if (((*(int *)(param_1 + 0x28) != -0x3bc98000) || (*(int *)(param_1 + 0x30) != -0x3b768000)) &&
       ((*(int *)(param_1 + 0x28) != 0x445c0000 || (*(int *)(param_1 + 0x30) != -0x3b6dc000)))) {
LAB_00161f20:
      uVar6 = DAT_00162018;
      if (((*(ushort *)(param_1 + 0x1c) & 0xf0) == 0x10) &&
         ((~*(ushort *)(param_1 + 0x1c) & 0xf) != 0)) {
        *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x10;
        *(undefined1 *)(param_1 + 0x1a4) = 4;
        *(undefined1 *)(param_1 + 0x1a5) = 6;
        *(undefined4 *)(param_1 + 0x1314) = 0;
        *(undefined4 *)(param_1 + 0x6c) = uVar6;
        uVar6 = FUN_0036ae14(param_1 + 0x1b8,puVar3[6]);
        uVar9 = VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
        uVar6 = FUN_00350c68(param_1);
        FUN_00375c08(uVar6,uVar7,uVar9,uVar7,param_1 + 0x1b8,puVar3[*(byte *)(param_1 + 0x1a5)],2);
        return;
      }
      *(undefined1 *)(param_1 + 0x1a4) = 1;
      *(undefined1 *)(param_1 + 0x1a5) = 0;
      *(undefined4 *)(param_1 + 0x6c) = uVar7;
      *(undefined4 *)(param_1 + 0x11e0) = uVar7;
      *(undefined2 *)(param_1 + 0x11e4) = 0;
      *(undefined2 *)(param_1 + 0x11e6) = 0;
      uVar6 = FUN_0036ae14(param_1 + 0x1b8,*puVar3);
      uVar9 = VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
      uVar6 = FUN_00350c68(param_1);
      FUN_00375c08(uVar6,uVar7,uVar9,uVar7,param_1 + 0x1b8,puVar3[*(byte *)(param_1 + 0x1a5)],2);
      return;
    }
  }
  else {
    if (sVar1 != 0x36) {
      if ((((sVar1 == 0x5d) && (*(int *)(param_1 + 0x28) == DAT_00162010)) &&
          (*(int *)(param_1 + 0x2c) == DAT_00162014)) && (*(int *)(param_1 + 0x30) == -0x3bd9c000))
      {
        uVar6 = ObjectBankArchive_00358ef8(iVar4,0);
        FUN_00358ea8(iVar4,param_2,param_1 + 0x1b8,uVar6,*(undefined4 *)(param_1 + 0x178),6,
                     param_1 + 0x240,param_1 + 0x720,0x18);
        FUN_00373d40(param_1 + 0x1b8,puVar3[*(byte *)(param_1 + 0x1a5)]);
        *(undefined1 *)(param_1 + 0x1a4) = 2;
        *(undefined1 *)(param_1 + 0x1a5) = 0;
        *(undefined4 *)(param_1 + 0x6c) = uVar7;
        *(undefined4 *)(param_1 + 0x11e0) = uVar7;
        *(undefined2 *)(param_1 + 0x11e4) = 0;
        *(undefined2 *)(param_1 + 0x11e6) = 0;
        uVar6 = FUN_0036ae14(param_1 + 0x1b8,*puVar3);
        uVar9 = VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
        uVar6 = FUN_00350c68(param_1);
        FUN_00375c08(uVar6,uVar7,uVar9,uVar7,param_1 + 0x1b8,puVar3[*(byte *)(param_1 + 0x1a5)],2);
        return;
      }
      uVar6 = ObjectBankArchive_00358ef8(iVar4,0);
      FUN_00358ea8(iVar4,param_2,param_1 + 0x1b8,uVar6,*(undefined4 *)(param_1 + 0x178),6,
                   param_1 + 0x240,param_1 + 0x720,0x18);
      FUN_00373d40(param_1 + 0x1b8,puVar3[*(byte *)(param_1 + 0x1a5)]);
      goto LAB_00161f20;
    }
    if (*(int *)(DAT_00161dcc + 0x10) == 0) goto LAB_00161d2c;
    uVar7 = ObjectBankArchive_00358ef8(iVar4,0);
    FUN_00358ea8(iVar4,param_2,param_1 + 0x1b8,uVar7,*(undefined4 *)(param_1 + 0x178),6,
                 param_1 + 0x240,param_1 + 0x720,0x18);
    FUN_00373d40(param_1 + 0x1b8,puVar3[*(byte *)(param_1 + 0x1a5)]);
  }
  uVar9 = (undefined4)uVar10;
  uVar11 = (undefined4)((ulonglong)uVar10 >> 0x20);
  *(undefined1 *)(param_1 + 0x1a4) = 3;
  uVar7 = DAT_00385db8;
  *(undefined1 *)(param_1 + 0x1a5) = 0;
  *(undefined4 *)(param_1 + 0x6c) = uVar7;
  *(undefined4 *)(param_1 + 0x11e0) = uVar7;
  *(undefined2 *)(param_1 + 0x11e4) = 0;
  *(undefined2 *)(param_1 + 0x11e6) = 0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x30;
  uVar6 = ObjectBankArchive_00358ef8(iVar4);
  FUN_00358ea8(iVar4,param_2,param_1 + 0xc10,uVar6,*(undefined4 *)(param_1 + 0x178),6,
               param_1 + 0xc98,0,0x18,unaff_d8,unaff_r4,uVar9,uVar11,unaff_r7,unaff_lr);
  iVar4 = DAT_00385dbc;
  uVar6 = FUN_0036ae14(param_1 + 0x1b8,
                       *(undefined4 *)(DAT_00385dbc + (uint)*(byte *)(param_1 + 0x1a5) * 4));
  uVar9 = VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
  uVar6 = FUN_00350c68(param_1);
  FUN_00375c08(uVar6,uVar7,uVar9,uVar7,param_1 + 0x1b8,
               *(undefined4 *)(iVar4 + (uint)*(byte *)(param_1 + 0x1a5) * 4),2);
  iVar4 = 0;
  if (*(int *)(DAT_00385dc0 + param_2) != 0) {
    iVar4 = param_2 + 0x3a5c;
  }
  if (((*DAT_00385dc4 & 1) == 0) && (iVar5 = FUN_003679b4(DAT_00385dc4), iVar5 != 0)) {
    FUN_0036788c(DAT_00385dc8);
  }
  piVar8 = *(int **)(DAT_00385dc8 + 0x17c);
  uVar6 = ObjectBankArchive_00358ef8(iVar4 + 0x10,*(undefined1 *)(DAT_00385dd4 + 1));
  uVar6 = (**(code **)(*piVar8 + 8))(piVar8,uVar6,0);
  *(undefined4 *)(param_1 + 0x1178) = uVar6;
  FUN_00372d4c(uVar7,DAT_00385dd8,param_1 + 0xbc,DAT_00385ddc);
  return;
}
