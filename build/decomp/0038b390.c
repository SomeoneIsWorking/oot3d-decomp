// OoT3D decomp @ 0038b390  name=FUN_0038b390  size=924

void FUN_0038b390(int param_1,int param_2)

{
  short *psVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int unaff_r5;
  bool bVar8;
  bool bVar9;
  uint in_fpscr;
  float fVar10;
  undefined4 uVar11;

  (**(code **)(param_1 + 0x1bc))();
  iVar5 = DAT_0038b734;
  iVar7 = DAT_0038b72c;
  if (*(short *)(param_1 + 0x1c) == -1) {
    if (*(short *)(param_2 + 0x104) == 0x51) {
      uVar3 = *(uint *)(DAT_0038b72c + 0xbc);
      uVar6 = *(uint *)(DAT_0038b730 + 0x48);
      bVar8 = (uVar6 & uVar3) != 0;
      if (bVar8) {
        uVar6 = *(uint *)(DAT_0038b730 + 0x4c);
      }
      bVar9 = (uVar6 & uVar3) != 0;
      uVar6 = DAT_0038b730;
      if (bVar8 && bVar9) {
        uVar6 = *(uint *)(DAT_0038b730 + 0x50);
      }
      if ((bVar8 && bVar9) && (uVar3 & uVar6) != 0) {
        uVar6 = (uint)*(ushort *)(DAT_0038b734 + 0xfc);
        bVar8 = (*(ushort *)(DAT_0038b734 + 0xfc) & 1) == 0;
        if (bVar8) {
          uVar6 = *(uint *)(DAT_0038b72c + 4);
        }
        if (bVar8 && uVar6 == 1) {
          unaff_r5 = *(int *)(DAT_0038b738 + param_2);
          if ((((*(uint *)(unaff_r5 + 0x28) < DAT_0038b73c) &&
               ((int)*(uint *)(unaff_r5 + 0x28) < (int)(DAT_0038b73c + 0x80000000))) &&
              ((int)(DAT_0038b73c + 0x80a60000) < *(int *)(unaff_r5 + 0x30))) &&
             ((*(int *)(unaff_r5 + 0x30) < DAT_0038b740 &&
              (iVar4 = FUN_0037577c(param_2), iVar4 == 0)))) {
            *(ushort *)(iVar5 + 0xfc) = *(ushort *)(iVar5 + 0xfc) | 1;
            FUN_0034cbf8(0x82);
            *(undefined4 *)(param_1 + 0x1bc) = DAT_0038b744;
            FUN_0036e980(param_2,unaff_r5,8);
            FUN_003716f0(param_2,0xcd,0x14,4);
            *(undefined2 *)(DAT_0038b748 + 0xa0) = 0xfff1;
          }
          else {
            iVar5 = FUN_0034cc28(DAT_0038b750,param_1,DAT_0038b74c);
            if (iVar5 != 0) {
              *(undefined1 *)(DAT_0038b754 + param_2) = 1;
            }
          }
        }
      }
    }
    psVar1 = DAT_0038b75c;
    if (*(int *)(DAT_0038b758 + 0x4e8) == 5) {
      if (*DAT_0038b75c == 0x32) {
        uVar6 = (uint)*(ushort *)(iVar7 + 0xc);
        iVar5 = DAT_0038b760;
        if (DAT_0038b760 < (int)uVar6) {
          iVar5 = DAT_0038b760 + 0x10000;
        }
        fVar10 = (float)VectorSignedToFloat(iVar5 - uVar6,(byte)(in_fpscr >> 0x15) & 3);
        uVar11 = VectorFloatToUnsigned(fVar10 * DAT_0038b764,3);
        *DAT_0038b75c = (short)uVar11;
      }
      if (*(ushort *)(iVar7 + 0xc) - 0x2aac < DAT_0038b768) {
        *psVar1 = 0;
      }
    }
  }
  uVar2 = DAT_0038b778;
  uVar11 = DAT_0038b770;
  iVar7 = *(int *)(param_1 + 0x128);
  if (iVar7 != 0) {
    unaff_r5 = *(int *)(iVar7 + 0x128);
  }
  if (iVar7 == 0 || unaff_r5 == 0) {
    return;
  }
  if (DAT_0038b76c < *(short *)(param_1 + 0xbc)) {
    FUN_003695cc(DAT_0038b770,DAT_0038b770,DAT_0038b770,DAT_0038b770,*(undefined4 *)(iVar7 + 0x1dc),
                 3,4,0);
    FUN_003695cc(uVar11,uVar11,uVar11,uVar11,*(undefined4 *)(iVar7 + 0x1dc),2,4,0);
    FUN_003695cc(uVar11,uVar11,uVar11,uVar11,*(undefined4 *)(unaff_r5 + 0x1dc),3,4,0);
    FUN_003695cc(uVar11,uVar11,uVar11,uVar11,*(undefined4 *)(unaff_r5 + 0x1dc),2,4,0);
    return;
  }
  if (*(short *)(param_1 + 0xbc) <= DAT_0038b774) {
    FUN_003695cc(DAT_0038b770,DAT_0038b770,DAT_0038b770,DAT_0038b778,*(undefined4 *)(iVar7 + 0x1dc),
                 3,4,0);
    FUN_003695cc(uVar11,uVar11,uVar11,uVar2,*(undefined4 *)(iVar7 + 0x1dc),2,4,0);
    FUN_003695cc(uVar11,uVar11,uVar11,uVar2,*(undefined4 *)(unaff_r5 + 0x1dc),3,4,0);
    FUN_003695cc(uVar11,uVar11,uVar11,uVar2,*(undefined4 *)(unaff_r5 + 0x1dc),2,4,0);
    return;
  }
  FUN_003695cc(DAT_0038b770,DAT_0038b770,DAT_0038b770,DAT_0038b778,*(undefined4 *)(iVar7 + 0x1dc),3,
               4,0);
  FUN_003695cc(uVar11,uVar11,uVar11,uVar11,*(undefined4 *)(iVar7 + 0x1dc),2,4,0);
  FUN_003695cc(uVar11,uVar11,uVar11,uVar2,*(undefined4 *)(unaff_r5 + 0x1dc),3,4,0);
  FUN_003695cc(uVar11,uVar11,uVar11,uVar11,*(undefined4 *)(unaff_r5 + 0x1dc),2,4,0);
  return;
}
