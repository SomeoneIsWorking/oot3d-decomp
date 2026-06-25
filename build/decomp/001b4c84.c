// OoT3D decomp @ 001b4c84  name=FUN_001b4c84  size=884

void FUN_001b4c84(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  undefined2 uVar2;
  ushort uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  short sVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  bool bVar12;
  uint in_fpscr;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  if (*(int *)(param_1 + 0xd88) != DAT_001b5010) {
    FUN_003731e0(param_1 + 0x1a4);
    if ((((*(short *)(param_1 + 0xe22) == 0) ||
         (sVar1 = *(short *)(param_1 + 0xe22) + -1, *(short *)(param_1 + 0xe22) = sVar1, sVar1 == 0)
         ) && (sVar1 = *(short *)(DAT_001b5014 + (*(ushort *)(param_1 + 0x1c) & 0x7f) * 0x18 + 0x12)
              , sVar1 != 0)) &&
       (sVar8 = *(short *)(param_1 + 0xe20) + 1, *(short *)(param_1 + 0xe20) = sVar8, sVar1 <= sVar8
       )) {
      uVar2 = FUN_003702c8(0x1e);
      *(undefined2 *)(param_1 + 0xe22) = uVar2;
      *(undefined2 *)(param_1 + 0xe20) = 0;
    }
    if (*(short *)(param_1 + 0xdf0) == 0) {
      FUN_00376864(param_1);
    }
    if ((*(char *)(param_1 + 0x107c) != '\0') &&
       (FUN_00376340(DAT_001b5018,DAT_001b5018,DAT_001b5018,param_2,param_1,4),
       *(short *)(param_2 + 0x104) == 0x20)) {
      *(undefined *)(param_1 + 0x107c) = 0;
    }
  }
  uVar13 = (**(code **)(param_1 + 0xd88))(param_1,param_2);
  iVar5 = DAT_001b5020;
  iVar9 = *(int *)(param_2 + 0x20ac);
  uVar3 = *(ushort *)(param_1 + 0x1c) & 0x7f;
  if (uVar3 == 9) {
LAB_001b4df0:
    if (*(short *)(param_1 + 0xdf0) == 0) {
LAB_001b4dfc:
      uVar4 = 1;
    }
    else {
LAB_001b4de8:
      uVar4 = 2;
    }
  }
  else {
    if (9 < uVar3) {
      if (uVar3 == 10) goto LAB_001b4df0;
      if (uVar3 != 0xc) {
        if (uVar3 == 0x11) goto LAB_001b4e04;
        if (uVar3 != 0x12) goto LAB_001b4de8;
        goto LAB_001b4ddc;
      }
      goto LAB_001b4dfc;
    }
    if ((*(ushort *)(param_1 + 0x1c) & 0x7f) == 0) {
LAB_001b4ddc:
      if (*(short *)(param_1 + 0xdf0) == 0) goto LAB_001b4de8;
    }
    else if (uVar3 != 2) {
      if (uVar3 == 3 || uVar3 == 7) goto LAB_001b4df0;
      goto LAB_001b4de8;
    }
LAB_001b4e04:
    uVar4 = 4;
  }
  uVar10 = *(undefined4 *)(iVar9 + 0x2c);
  uVar11 = *(undefined4 *)(iVar9 + 0x30);
  *(undefined4 *)(param_1 + 0xe08) = *(undefined4 *)(iVar9 + 0x28);
  *(undefined4 *)(param_1 + 0xe0c) = uVar10;
  *(undefined4 *)(param_1 + 0xe10) = uVar11;
  bVar12 = *(int *)(DAT_001b501c + 4) != 0;
  iVar9 = iVar5 + (*(ushort *)(param_1 + 0x1c) & 0x7f) * 0xc;
  if (bVar12) {
    uVar13 = *(undefined4 *)(iVar9 + 4);
  }
  if (!bVar12) {
    uVar13 = *(undefined4 *)(iVar9 + 8);
  }
  *(undefined4 *)(param_1 + 0xe04) = uVar13;
  FUN_0034c664(param_1,param_1 + 0xdf0,
               *(undefined *)(iVar5 + (*(ushort *)(param_1 + 0x1c) & 0x7f) * 0xc),uVar4,param_4);
  uVar13 = DAT_001b5024;
  iVar5 = FUN_00342714(*(undefined4 *)(param_1 + 0xe94),param_2,param_1,param_1 + 0xdf0,DAT_001b5028
                      );
  if ((iVar5 == 0) ||
     (iVar5 = *(int *)(param_2 + 0x20ac), (*(ushort *)(param_1 + 0x1c) & 0x7f) != 5))
  goto LAB_001b4f90;
  iVar9 = FUN_00341e1c(0x1c);
  uVar4 = DAT_001b502c;
  if ((iVar9 == 0) &&
     ((iVar9 = FUN_00341e1c(0x1d), iVar9 == 0 && (iVar9 = FUN_00341e1c(0x19), iVar9 == 0)))) {
    iVar9 = FUN_0036bc84(param_2);
    if ((iVar9 == 0x1b || iVar9 == 0x1c) || iVar9 == 0x1d) {
switchD_001b4f2c_caseD_1b:
      *(short *)(param_1 + 0x116) = (short)uVar4;
    }
    else {
      iVar9 = FUN_0036ef98(param_2);
      if (iVar9 == 0) {
        *(short *)(param_1 + 0x116) = (short)DAT_001b5030;
      }
    }
  }
  else {
    uVar10 = FUN_0036bc84(param_2);
    switch(uVar10) {
    case 0x18:
      uVar2 = (undefined2)DAT_001b5038;
      break;
    case 0x19:
      uVar2 = (undefined2)DAT_001b5034;
      break;
    case 0x1a:
      uVar2 = (undefined2)DAT_001b503c;
      break;
    case 0x1b:
    case 0x1c:
    case 0x1d:
      goto switchD_001b4f2c_caseD_1b;
    default:
      iVar6 = FUN_0036ef98(param_2);
      iVar9 = iVar6;
      if (iVar6 == 0) {
        iVar9 = DAT_001b5040;
      }
      uVar2 = (undefined2)iVar9;
      if (iVar6 != 0) goto LAB_001b4f84;
    }
    *(undefined2 *)(param_1 + 0x116) = uVar2;
  }
LAB_001b4f84:
  *(undefined2 *)(DAT_001b5044 + iVar5) = *(undefined2 *)(param_1 + 0x116);
LAB_001b4f90:
  psVar7 = (short *)(DAT_001b5048 + (*(ushort *)(param_1 + 0x1c) & 0x7f) * 10);
  fVar15 = (float)VectorSignedToFloat((int)*psVar7,(byte)(in_fpscr >> 0x15) & 3);
  fVar16 = (float)VectorSignedToFloat((int)psVar7[1],(byte)(in_fpscr >> 0x15) & 3);
  fVar14 = (float)VectorSignedToFloat((int)psVar7[2],(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(param_1 + 0xdec) = *(float *)(param_1 + 0x30) + fVar14;
  *(float *)(param_1 + 0xde8) = *(float *)(param_1 + 0x2c) + fVar16;
  *(float *)(param_1 + 0xde4) = *(float *)(param_1 + 0x28) + fVar15;
  FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0xd98,uVar13);
  return;
}

