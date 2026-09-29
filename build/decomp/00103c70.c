// OoT3D decomp @ 00103c70  name=FUN_00103c70  size=604

void FUN_00103c70(int param_1,int param_2)

{
  short sVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  bool bVar13;
  int iVar14;
  float fVar15;
  int iVar16;
  float fVar17;
  float fVar18;

  iVar10 = *(int *)(DAT_00104030 + param_2);
  (**(code **)(param_1 + 0x29c))(param_1);
  iVar14 = (int)*(float *)(param_2 + 0x3c);
  fVar15 = *(float *)(param_2 + 0x40);
  *(undefined1 *)(param_1 + 0x2d1) = 0;
  *(undefined1 *)(param_1 + 0x2d0) = 0;
  iVar16 = (int)fVar15;
  iVar11 = *(int *)(param_1 + 0x2c8);
  if (iVar11 == 0) {
    if (0x3c < iVar14 + 0x1eU) {
LAB_00103cfc:
      *(int *)(param_1 + 0x2c8) = iVar14;
      *(undefined1 *)(param_1 + 0x2d0) = 1;
    }
  }
  else if (iVar14 + 0x1eU < 0x3d) {
    *(undefined4 *)(param_1 + 0x2c8) = 0;
  }
  else {
    if (iVar11 * iVar14 < 0) goto LAB_00103cfc;
    iVar14 = iVar14 + iVar11;
    *(int *)(param_1 + 0x2c8) = iVar14;
    if (iVar14 < 0x7d1) {
      if (iVar14 < -1999) {
        iVar14 = -2000;
      }
      *(int *)(param_1 + 0x2c8) = iVar14;
    }
    else {
      *(undefined4 *)(param_1 + 0x2c8) = 2000;
    }
  }
  iVar14 = *(int *)(param_1 + 0x2cc);
  if (iVar14 == 0) {
    if (iVar16 + 0x1eU < 0x3d) goto LAB_00103d8c;
  }
  else {
    if (iVar16 + 0x1eU < 0x3d) {
      *(undefined4 *)(param_1 + 0x2cc) = 0;
      goto LAB_00103d8c;
    }
    if (-1 < iVar14 * iVar16) {
      iVar16 = iVar16 + iVar14;
      *(int *)(param_1 + 0x2cc) = iVar16;
      if (iVar16 < 0x7d1) {
        if (iVar16 < -1999) {
          iVar16 = -2000;
        }
        *(int *)(param_1 + 0x2cc) = iVar16;
      }
      else {
        *(undefined4 *)(param_1 + 0x2cc) = 2000;
      }
      goto LAB_00103d8c;
    }
  }
  *(int *)(param_1 + 0x2cc) = iVar16;
  *(undefined1 *)(param_1 + 0x2d1) = 1;
LAB_00103d8c:
  piVar12 = (int *)(param_1 + 0x2a4);
  uVar8 = 0;
  do {
    iVar16 = *piVar12;
    if (iVar16 != 0) {
      sVar1 = *(short *)(param_1 + 0x2a0);
      if ((((((((sVar1 == 9 || sVar1 == 10) || sVar1 == 0xb) || sVar1 == 0xc) || sVar1 == 0xd) ||
            sVar1 == 0x18) || sVar1 == 0xe) || (*(char *)(param_1 + 0x2f9) != '\0')) &&
         (*(byte *)(param_1 + 0x2fa) == uVar8)) {
        *(undefined2 *)(iVar16 + 0x1c8) = 1;
      }
      else {
        *(undefined2 *)(iVar16 + 0x1c8) = 0;
      }
    }
    fVar3 = DAT_0010403c;
    fVar2 = DAT_00104038;
    fVar15 = DAT_00104034;
    uVar8 = uVar8 + 1;
    piVar12 = piVar12 + 1;
  } while ((int)uVar8 < 8);
  if (*(char *)(param_1 + 0x374) == '\0') {
    fVar17 = *(float *)(param_1 + 0x36c) + DAT_00104034;
    if (0x3f800000 < (int)fVar17) {
      *(undefined1 *)(param_1 + 0x374) = 1;
      fVar17 = fVar2;
    }
  }
  else {
    fVar17 = *(float *)(param_1 + 0x36c) - DAT_00104034;
    if (fVar17 < DAT_0010403c) {
      *(undefined1 *)(param_1 + 0x374) = 0;
      fVar17 = fVar3;
    }
  }
  fVar5 = DAT_00104044;
  fVar4 = DAT_00104040;
  *(float *)(param_1 + 0x36c) = fVar17;
  bVar13 = *(char *)(param_1 + 0x375) != '\0';
  if (bVar13) {
    *(undefined1 *)(param_1 + 0x375) = 0;
  }
  fVar18 = fVar3;
  if ((!bVar13) && (fVar18 = *(float *)(param_1 + 0x370) + fVar15, 0x3f800000 < (int)fVar18)) {
    *(undefined1 *)(param_1 + 0x375) = 1;
    fVar18 = fVar2;
  }
  fVar6 = DAT_00104048;
  uVar8 = -(int)(fVar17 * fVar4) & 0xff;
  *(float *)(param_1 + 0x370) = fVar18;
  uVar9 = -(int)(fVar17 * fVar5) & 0xff;
  *(uint *)(param_1 + 0x318) = uVar8;
  *(uint *)(param_1 + 0x31c) = uVar9;
  *(undefined4 *)(param_1 + 800) = 0xb4;
  *(undefined4 *)(param_1 + 0x314) = 0xff;
  fVar17 = fRam00104058;
  *(uint *)(param_1 + 0x350) = uVar8;
  *(uint *)(param_1 + 0x354) = uVar9;
  uVar7 = uRam0010404c;
  *(undefined4 *)(param_1 + 0x358) = 0xb4;
  *(undefined4 *)(param_1 + 0x34c) = 0xff;
  *(undefined4 *)(param_1 + 0x35c) = uVar7;
  *(undefined4 *)(param_1 + 0x324) = uRam00104050;
  uVar7 = uRam00104054;
  *(undefined4 *)(param_1 + 0x360) = uRam00104054;
  *(undefined4 *)(param_1 + 0x328) = uVar7;
  *(float *)(param_1 + 0x344) = fVar18 * fVar6 + fVar17;
  *(float *)(param_1 + 0x30c) = fRam0010405c - fVar18 * fVar6;
  *(undefined4 *)(param_1 + 0x348) = uVar7;
  *(undefined4 *)(param_1 + 0x310) = uVar7;
  if (*(char *)(param_1 + 0x2f8) == '\0') {
    fVar15 = *(float *)(param_1 + 0x2f4) + fVar15;
    if (0x3f7fffff < (int)fVar15) {
      *(undefined1 *)(param_1 + 0x2f8) = 1;
      fVar15 = fVar2;
    }
  }
  else {
    fVar15 = *(float *)(param_1 + 0x2f4) - fVar15;
    if (fVar15 <= fVar3) {
      *(undefined1 *)(param_1 + 0x2f8) = 0;
      fVar15 = fVar3;
    }
  }
  fVar2 = fRam00104060;
  *(float *)(param_1 + 0x2f4) = fVar15;
  *(undefined4 *)(param_1 + 0x2e4) = 0;
  *(uint *)(param_1 + 0x2e8) = 0x50U - (int)(fVar15 * fVar2) & 0xff;
  *(undefined4 *)(param_1 + 0x2ec) = 0xff;
  *(undefined4 *)(param_1 + 0x2f0) = 0xff;
  FUN_00372aa8(param_1 + 0x292,(int)*(short *)(param_1 + 0x294),800);
  if (iVar10 != 0) {
    (**(code **)(iRam00104064 + *(short *)(param_1 + 0x2a0) * 4))(param_1,param_2,iVar10);
  }
  FUN_00376864(param_1);
  FUN_00376340(uRam0010406c,uRam00104068,fVar3,param_2,param_1,5);
  FUN_0037322c(uRam00104070,param_1);
  FUN_0037572c(*(undefined4 *)(iRam00104074 + *(short *)(param_1 + 0x1c) * 4),param_1);
  if (*(code **)(param_1 + 0x22c) != (code *)0x0) {
    (**(code **)(param_1 + 0x22c))(param_1,param_2);
  }
  FUN_0036b4ec(param_1 + 0x1a4,0);
  return;
}
