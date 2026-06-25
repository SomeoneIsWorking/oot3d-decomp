// OoT3D decomp @ 00165684  name=FUN_00165684  size=680

void FUN_00165684(int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  char cVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  
  if ((*(ushort *)(param_1 + 0x1c) & 0xff) < 0xd) {
    iVar6 = param_2 + 0x3a58;
    cVar4 = FUN_00363c10(iVar6,0xc5);
    *(char *)(param_1 + 0x22f) = cVar4;
    iVar8 = DAT_00165930;
    if (cVar4 < '\0') goto LAB_00165754;
    iVar7 = (*(ushort *)(param_1 + 0x1c) & 0xff) * 0xb;
    bVar1 = *(byte *)(DAT_0016592c + iVar7);
    iVar7 = iVar7 + DAT_0016592c;
    bVar2 = *(byte *)(iVar7 + 1);
    cVar4 = FUN_00363c10(iVar6,(int)*(short *)(DAT_00165930 + (uint)*(byte *)(iVar7 + 6) * 8));
    *(char *)(param_1 + 0x22e) = cVar4;
    if (cVar4 < '\0') goto LAB_00165754;
    cVar4 = FUN_00363c10(iVar6,(int)*(short *)(iVar8 + (uint)bVar2 * 8));
    *(char *)(param_1 + 0x22d) = cVar4;
    if (cVar4 < '\0') goto LAB_00165754;
    cVar4 = FUN_00363c10(iVar6,(int)*(short *)(iVar8 + -0x30 + (uint)bVar1 * 0x10));
    *(char *)(param_1 + 0x22c) = cVar4;
    if (cVar4 < '\0') goto LAB_00165754;
  }
  else {
LAB_00165754:
    FUN_00374428(param_1);
  }
  iVar8 = (int)*(short *)(param_2 + 0x104);
  if (iVar8 == 0x29) {
    if (((*(int *)(DAT_00165938 + 4) == 0) &&
        ((*(uint *)(DAT_00165938 + 0xbc) & *DAT_00165934) == 0)) &&
       ((*(ushort *)(param_1 + 0x1c) & 0xff) == 6)) goto LAB_00165808;
  }
  else if (iVar8 < 0x2a) {
    if (iVar8 == 0x26) {
      uVar5 = *(ushort *)(param_1 + 0x1c) & 0xff;
      if ((uVar5 == 7 || uVar5 == 8) || uVar5 == 0xb) goto LAB_00165808;
    }
    else if (iVar8 == 0x27) {
      if ((*(int *)(DAT_00165938 + 4) == 0) &&
         ((*(uint *)(DAT_00165938 + 0xbc) & *DAT_00165934) == 0)) {
        uVar5 = *(ushort *)(param_1 + 0x1c) & 0xff;
        if (uVar5 == 1 || uVar5 == 9) goto LAB_00165808;
      }
      else if ((*(ushort *)(param_1 + 0x1c) & 0xff) == 9) goto LAB_00165808;
    }
    else {
      bVar10 = iVar8 == 0x28;
      if (bVar10) {
        iVar8 = *(int *)(DAT_00165938 + 4);
      }
      if ((bVar10 && iVar8 == 0) && ((*(uint *)(DAT_00165938 + 0xbc) & *DAT_00165934) == 0)) {
        uVar5 = *(ushort *)(param_1 + 0x1c);
        bVar10 = (uVar5 & 0xff) == 0;
        if (!bVar10) {
          uVar5 = uVar5 & 0xff;
        }
        if (bVar10 || uVar5 == 4) goto LAB_00165808;
      }
    }
  }
  else if (iVar8 == 0x2d) {
    if ((*(int *)(DAT_00165938 + 4) == 0) && ((*(uint *)(DAT_00165938 + 0xbc) & *DAT_00165934) == 0)
       ) {
      uVar5 = *(ushort *)(param_1 + 0x1c) & 0xff;
      if (uVar5 == 5 || uVar5 == 10) goto LAB_00165808;
    }
    else if ((*(ushort *)(param_1 + 0x1c) & 0xff) == 10) goto LAB_00165808;
  }
  else if (iVar8 == 0x55) {
    uVar5 = *(ushort *)(param_1 + 0x1c) & 0xff;
    if ((uVar5 < 7) || (uVar5 == 0xc)) {
      uVar9 = *(uint *)(DAT_00165938 + 0xbc);
      bVar10 = (uVar9 & *DAT_00165934) != 0;
      if (!bVar10) {
        uVar9 = *(uint *)(DAT_00165938 + 4);
      }
      if (bVar10 || uVar9 != 0) goto LAB_00165808;
    }
  }
  else if ((iVar8 == 0x5b) &&
          (*(char *)((uint)*(byte *)(DAT_0016593c + 0x2d) + DAT_00165940) == '1'))
  goto LAB_00165808;
  FUN_00374428(param_1);
LAB_00165808:
  uVar3 = DAT_00165944;
  *(undefined4 *)(param_1 + 0xc98) = 0;
  *(undefined *)(param_1 + 0xca4) = 0;
  *(undefined4 *)(param_1 + 0x228) = uVar3;
  return;
}

