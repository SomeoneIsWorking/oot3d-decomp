// OoT3D decomp @ 001af180  name=FUN_001af180  size=992

void FUN_001af180(int param_1,int param_2)

{
  uint uVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  uint in_fpscr;
  float fVar10;
  float fVar11;
  short local_2c [2];
  ushort local_28 [2];

  iVar6 = *(int *)(param_1 + 0xb00);
  *(int *)(param_1 + 0xb00) = (int)*(float *)(param_1 + 0x2d0);
  if (iVar6 != (int)*(float *)(param_1 + 0x2d0)) {
    iVar6 = *(int *)(param_1 + 0x230);
    if (iVar6 == 0) {
      if (((int)*(float *)(param_1 + 0x2d0) != 9) && ((int)*(float *)(param_1 + 0x2d0) != 0x17))
      goto LAB_001af280;
    }
    else if (iVar6 == 1) {
      if (((int)*(float *)(param_1 + 0x2d0) != 10) && ((int)*(float *)(param_1 + 0x2d0) != 0x19))
      goto LAB_001af280;
    }
    else if ((iVar6 != 2) || ((int)*(float *)(param_1 + 0x2d0) != 0x14)) goto LAB_001af280;
    FUN_00375bcc(param_1,DAT_001af57c);
  }
LAB_001af280:
  FUN_0037632c(param_1,param_1 + 0x1a8);
  FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x1a8);
  (**(code **)(param_1 + 0x1a4))(param_1,param_2);
  iVar6 = DAT_001af580;
  if (*(int *)(param_1 + 0x200) == 2) {
    FUN_0036be34(param_2,*(undefined2 *)(param_1 + 0x116));
    *(undefined4 *)(param_1 + 0x200) = 1;
  }
  else if (*(int *)(param_1 + 0x200) == 1) {
    uVar7 = 1;
    uVar3 = FUN_003769d8(param_2 + 0x28a0);
    uVar1 = DAT_001af584;
    switch(uVar3) {
    case 4:
      iVar6 = FUN_00346964(param_2);
      if (iVar6 != 0) {
        iVar6 = FUN_00369f3c(param_2);
        if (iVar6 == 0) {
          *(short *)(param_1 + 0x116) = (short)uVar1;
          FUN_00350248(param_1,3,param_1 + 0x230);
        }
        else {
          *(short *)(param_1 + 0x116) = (short)DAT_001af588;
          FUN_00350248(param_1,1,param_1 + 0x230);
        }
        uVar7 = 2;
      }
      break;
    case 6:
      iVar4 = FUN_00346964(param_2);
      if ((iVar4 != 0) &&
         (bVar9 = *(ushort *)(param_1 + 0x116) == uVar1, uVar7 = (uint)bVar9, bVar9)) {
        FUN_00345fcc(param_2);
        FUN_00376a78(param_2,0x2c);
        *(ushort *)(iVar6 + 0xe) = *(ushort *)(iVar6 + 0xe) | 0x400;
        FUN_00376a60(0x1e);
        uVar7 = 2;
        *(short *)(param_1 + 0x116) = (short)DAT_001af58c;
      }
    }
    *(uint *)(param_1 + 0x200) = uVar7;
  }
  else {
    iVar4 = FUN_0036bc98(param_1,param_2);
    uVar1 = DAT_001af590;
    uVar8 = DAT_001af590 + 6;
    uVar7 = DAT_001af590 + 1;
    if (iVar4 == 0) {
      FUN_00363a20(param_2,param_1,local_28,local_2c);
      if ((((local_28[0] < 0x141) && (-1 < local_2c[0])) && (local_2c[0] < 0xf1)) &&
         (iVar4 = FUN_0036bb28(DAT_001af598,param_1,param_2), iVar4 != 0)) {
        iVar4 = *(int *)(param_2 + 0x20ac);
        uVar5 = FUN_0036bba8(param_2,0xf);
        if ((*(ushort *)(iVar6 + 0xe) & 0x400) == 0) {
          if ((*(char *)(iVar4 + 0x1b7) != '\x03') && (uVar7 = uVar5, uVar5 == 0)) {
            uVar7 = uVar1;
          }
        }
        else {
          uVar7 = uVar5;
          if (uVar5 == 0) {
            uVar7 = uVar8;
          }
        }
        *(short *)(param_1 + 0x116) = (short)uVar7;
      }
    }
    else {
      if ((*(ushort *)(param_1 + 0x116) == DAT_001af590) || (*(ushort *)(param_1 + 0x116) != uVar8))
      {
        FUN_00350248(param_1,3,param_1 + 0x230);
      }
      if (*(ushort *)(param_1 + 0x116) == uVar7 || *(ushort *)(param_1 + 0x116) == uVar8) {
        FUN_00350248(param_1,1,param_1 + 0x230);
      }
      if (*(ushort *)(param_1 + 0x116) == uVar7) {
        FUN_00372244(param_2 + 0x5fcc,0x1e,DAT_001af594);
      }
      *(undefined4 *)(param_1 + 0x200) = 1;
    }
  }
  iVar6 = *(int *)(param_1 + 0x208) + -1;
  *(int *)(param_1 + 0x208) = iVar6;
  fVar10 = DAT_001af5a4;
  fVar2 = DAT_001af5a0;
  if (iVar6 < 0) {
    iVar6 = *(int *)(param_1 + 0x204) + 1;
    *(int *)(param_1 + 0x204) = iVar6;
    if (2 < iVar6) {
      iVar6 = 0;
      *(undefined4 *)(param_1 + 0x204) = 0;
    }
    iVar6 = *(int *)(DAT_001af59c + iVar6 * 4);
    fVar11 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
    if (iVar6 < 1) {
      fVar10 = fVar11 * fVar2 * fVar10 - fVar10;
    }
    else {
      fVar10 = fVar10 + fVar11 * fVar2 * fVar10;
    }
    *(int *)(param_1 + 0x208) = (int)fVar10;
  }
  return;
}
