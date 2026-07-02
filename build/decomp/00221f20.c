// OoT3D decomp @ 00221f20  name=FUN_00221f20  size=1512

uint FUN_00221f20(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  short sVar7;
  short sVar8;
  int iVar9;
  uint uVar10;
  short *psVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  
  *(undefined2 *)(param_1 + 0x254) = 1;
  *(short *)(param_1 + 0x230) = *(short *)(param_1 + 0x230) + 1;
  if (*(short *)(param_1 + 0x26e) != 0) {
    *(short *)(param_1 + 0x26e) = *(short *)(param_1 + 0x26e) + -1;
  }
  if (*(short *)(param_1 + 0x270) != 0) {
    *(short *)(param_1 + 0x270) = *(short *)(param_1 + 0x270) + -1;
  }
  if (*(short *)(param_1 + 0x272) != 0) {
    *(short *)(param_1 + 0x272) = *(short *)(param_1 + 0x272) + -1;
  }
  *(undefined2 *)(param_1 + 0x250) = 0;
  (**(code **)(param_1 + 0x22c))(param_1,param_2);
  *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x36);
  if (*(short *)(param_1 + 0x252) == 0) {
    FUN_00376864(param_1);
  }
  else {
    *(undefined2 *)(param_1 + 0x252) = 0;
  }
  if (uRam00222294 < *(uint *)(param_1 + 0x2c)) {
    FUN_00376340(uRam0022229c,uRam0022229c,uRam00222298,param_2,param_1,5);
  }
  else {
    FUN_00376340(uRam002222a0,uRam0022229c,uRam00222298,param_2,param_1,1);
  }
  uVar3 = uRam002222a8;
  uVar2 = uRam002222a4;
  if (*(short *)(param_1 + 0x25a) == 0) {
    if (*(short *)(param_1 + 0x250) == 0) {
      if (*(char *)(*(int *)(param_2 + 0x20ac) + 0x247e) != '\0') {
        *(undefined *)(*(int *)(param_2 + 0x20ac) + 0x247e) = 0;
        *(undefined2 *)(param_1 + 0x238) = 0x12;
      }
      if (((*(ushort *)(param_1 + 0x230) & 0xf) == 0) &&
         (iVar14 = FUN_003759d0(), iVar14 < iRam002222ac)) {
        *(undefined2 *)(param_1 + 0x238) = 0xb;
      }
    }
    sVar7 = *(short *)(param_1 + 0x240);
    if (sVar7 < 1) {
      sVar7 = *(short *)(param_1 + 0x242);
    }
    if (sVar7 < 1) {
      sVar7 = *(short *)(param_1 + 0x244);
    }
    if (0 < sVar7) {
      *(undefined2 *)(param_1 + 0x238) = 0xb;
    }
    if (*(short *)(param_1 + 0x238) == 0) {
      FUN_00370084(param_1 + 0x234,0,1,2000);
      FUN_00370084(param_1 + 0x236,0,1,2000);
    }
    else {
      *(short *)(param_1 + 0x238) = *(short *)(param_1 + 0x238) + -1;
      fVar4 = fRam002222b0;
      FUN_00370084(param_1 + 0x234,(int)(short)(int)(*(float *)(param_1 + 0x1050) * fRam002222b4),1,
                   2000);
      FUN_00370084(param_1 + 0x236,(int)(short)(int)(*(float *)(param_1 + 0x1054) * fVar4),1,2000);
    }
    if (*(short *)(param_1 + 0x250) == 1) {
      FUN_00370084(param_1 + 0x23c,0,3,1000);
      FUN_00370084(param_1 + 0x23a,0,3,1000);
    }
    else {
      sVar7 = FUN_0036e800(param_1,*(undefined4 *)(param_2 + 0x20ac));
      sVar7 = sVar7 - *(short *)(param_1 + 0xbe);
      sVar8 = FUN_00339f1c(param_1,*(undefined4 *)(param_2 + 0x20ac));
      iVar14 = (int)(short)(sVar8 - *(short *)(param_1 + 0xbc));
      if (0x8000 < (int)*(short *)(param_1 + 0xbc) + 0x4000U) {
        sVar7 = -(sVar7 + -0x8000);
        iVar14 = iRam002222b8;
      }
      iVar13 = (int)sVar7;
      iVar9 = iRam002222bc;
      if ((iRam002222bc < iVar13) || (iVar9 = (iRam002222bc >> 0xd) - iRam002222bc, iVar13 < iVar9))
      {
        iVar13 = iVar9;
      }
      FUN_00370084(param_1 + 0x23c,iVar13,3,2000);
      FUN_00370084(param_1 + 0x23a,iVar14,3,2000);
    }
    uVar5 = uRam002222c0;
    FUN_00373500(uVar3,uVar2,uRam002222c0,param_1 + 0x294);
    FUN_00373500(uVar3,uVar2,uVar5,param_1 + 0x2c0);
  }
  iVar14 = iRam00222544;
  uVar15 = uRam002222cc;
  uVar6 = uRam002222c8;
  uVar5 = uRam002222c4;
  iVar9 = (int)*(short *)(param_1 + 0x254);
  if ((iVar9 == 1) && ((*(ushort *)(param_1 + 0x230) & 0x10) != 0)) {
    FUN_00373500(uRam002222cc,uRam002222c8,uRam002222c4,param_1 + 0x2a0);
    FUN_00373500(uVar15,uVar6,uVar5,param_1 + 0x2a4);
    FUN_00373500(uVar15,uVar6,uVar5,param_1 + 0x2a8);
  }
  else if (*(ushort *)(param_1 + 0x256) == 0) {
    FUN_00373500(*(undefined4 *)(iRam00222544 + iVar9 * 0xc),uRam002222c8,uRam002222c4,
                 param_1 + 0x2a0);
    FUN_00373500(*(undefined4 *)(iVar14 + *(short *)(param_1 + 0x254) * 0xc + 4),uVar6,uVar5,
                 param_1 + 0x2a4);
    FUN_00373500(*(undefined4 *)(iVar14 + *(short *)(param_1 + 0x254) * 0xc + 8),uVar6,uVar5,
                 param_1 + 0x2a8);
  }
  else if ((*(ushort *)(param_1 + 0x256) & 2) == 0) {
    *(undefined4 *)(param_1 + 0x2a0) = *(undefined4 *)(iRam00222544 + iVar9 * 0xc);
    *(undefined4 *)(param_1 + 0x2a4) =
         *(undefined4 *)(iVar14 + *(short *)(param_1 + 0x254) * 0xc + 4);
    *(undefined4 *)(param_1 + 0x2a8) =
         *(undefined4 *)(iVar14 + *(short *)(param_1 + 0x254) * 0xc + 8);
  }
  else {
    iVar14 = iRam00222544 + 0x48;
    *(undefined4 *)(param_1 + 0x2a0) = *(undefined4 *)(iVar14 + iVar9 * 0xc);
    *(undefined4 *)(param_1 + 0x2a4) =
         *(undefined4 *)(iVar14 + *(short *)(param_1 + 0x254) * 0xc + 4);
    *(undefined4 *)(param_1 + 0x2a8) =
         *(undefined4 *)(iVar14 + *(short *)(param_1 + 0x254) * 0xc + 8);
  }
  iVar14 = iRam00222548;
  FUN_00373500(*(undefined4 *)(iRam00222548 + *(short *)(param_1 + 0x254) * 0xc),uVar6,uVar5,
               param_1 + 0x2ac);
  FUN_00373500(*(undefined4 *)(iVar14 + *(short *)(param_1 + 0x254) * 0xc + 4),uVar6,uVar5,
               param_1 + 0x2b0);
  FUN_00373500(*(undefined4 *)(iVar14 + *(short *)(param_1 + 0x254) * 0xc + 8),uVar6,uVar5,
               param_1 + 0x2b4);
  if (((*(ushort *)(param_1 + 0x230) & 0x7f) == 0) &&
     (sVar7 = *(short *)(param_1 + 0x23e) + 1, *(short *)(param_1 + 0x23e) = sVar7, 2 < sVar7)) {
    *(undefined2 *)(param_1 + 0x23e) = 0;
  }
  uVar6 = uRam00222550;
  uVar5 = uRam0022254c;
  iVar14 = 0;
  do {
    iVar9 = param_1 + iVar14 * 2;
    sVar7 = *(short *)(iVar9 + 0x246);
    uVar15 = uVar3;
    if (sVar7 != 0) {
      *(short *)(iVar9 + 0x246) = sVar7 + -1;
      uVar15 = uVar5;
    }
    FUN_00373500(uVar15,uVar2,uVar6,param_1 + iVar14 * 4 + 0x284);
    iVar14 = (int)(short)((short)iVar14 + 1);
  } while (iVar14 < 4);
  uVar10 = (uint)*(ushort *)(param_1 + 0x25a);
  if (uVar10 == 0) {
    FUN_00262258(param_1,param_2);
    piVar12 = (int *)(param_1 + 0xb78);
    psVar11 = (short *)(param_2 + 0x5c78);
    FUN_00376168(param_2);
    FUN_003762a4(param_2,psVar11,piVar12);
    uVar10 = *(uint *)(param_1 + 0x22c);
    uVar1 = uRam00222554;
    if (uVar10 != uRam00222554) {
      uVar1 = uRam00222558;
    }
    if ((uVar10 != uRam00222554 && uVar10 != uVar1) &&
       ((uVar10 != uRam0022255c || (uVar10 = (uint)*(ushort *)(param_1 + 0x270), uVar10 == 0)))) {
      iVar14 = FUN_00366738();
      if (iVar14 != 1) {
        (**(code **)(DAT_00376274 + (uint)*(byte *)(param_1 + 0xb8d) * 4))(param_2,piVar12);
        if ((((*piVar12 == 0) || (*(int *)(*piVar12 + 0x13c) != 0)) &&
            (uVar10 = (uint)*psVar11, (int)uVar10 < 0x32)) &&
           ((*(ushort *)(param_2 + 0x5c7a) & 1) == 0)) {
          *(int **)(psVar11 + uVar10 * 2 + 2) = piVar12;
          *psVar11 = *psVar11 + 1;
          return uVar10;
        }
      }
      return 0xffffffff;
    }
  }
  return uVar10;
}

