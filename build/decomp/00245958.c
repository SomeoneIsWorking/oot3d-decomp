// OoT3D decomp @ 00245958  name=FUN_00245958  size=904

void FUN_00245958(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint in_fpscr;
  undefined4 uVar8;
  undefined4 uVar9;

  uVar9 = DAT_00245c94;
  uVar5 = DAT_00245c90;
  uVar3 = DAT_00245c74;
  iVar2 = DAT_00245c68;
  bVar1 = *(byte *)(param_1 + 0x1a5);
  uVar6 = (uint)bVar1;
  iVar4 = *(int *)(DAT_00245c68 + uVar6 * 4);
  if (iVar4 == 0) {
    iVar4 = *(int *)(param_1 + 500);
    if ((*(char *)(param_1 + 0x1a5) == '\0') &&
       (((iVar7 = FUN_003736fc(DAT_00245c94,DAT_00245c90,param_1 + 0x1b8), iVar7 != 0 ||
         (iVar7 = FUN_003736fc(DAT_00245c98,uVar5,param_1 + 0x1b8), iVar7 != 0)) &&
        ((*(ushort *)(param_1 + 0x11ae) & 1) == 0)))) {
      iVar4 = FUN_003736fc(uVar9,uVar5,param_1 + 0x1b8);
      uVar9 = DAT_00245c88;
      uVar5 = DAT_00245c84;
      uVar8 = DAT_00245c9c;
      if (iVar4 == 0) {
        *(ushort *)(param_1 + 0x11ae) = *(ushort *)(param_1 + 0x11ae) | 1;
        uVar8 = DAT_00245c9c;
      }
LAB_00245b70:
      FUN_0037547c(uVar8,param_1 + 0x28,4,uVar9,uVar9,uVar5);
    }
    else {
      uVar9 = DAT_00245c88;
      uVar5 = DAT_00245c84;
      if (((*(char *)(param_1 + 0x1a5) == '\x03') && (DAT_00245ca0 < iVar4)) &&
         ((*(ushort *)(param_1 + 0x11ae) & 2) == 0)) {
        *(ushort *)(param_1 + 0x11ae) = *(ushort *)(param_1 + 0x11ae) | 2;
        uVar8 = DAT_00245ca4;
        goto LAB_00245b70;
      }
    }
    *(undefined4 *)(param_1 + 0x6c) = uVar3;
    *(undefined4 *)(param_1 + 0x11e0) = uVar3;
  }
  else if (iVar4 == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  if ((*(byte *)(param_1 + 0x1a5) == uVar6) && (iVar4 = FUN_003731e0(param_1 + 0x1b8), iVar4 == 0))
  {
    return;
  }
  uVar9 = DAT_00245f90;
  iVar4 = DAT_00245f8c;
  uVar5 = DAT_00245f88;
  iVar7 = param_1 + 0x11cc;
  if (*(byte *)(param_1 + 0x1a5) != uVar6) {
    *(byte *)(param_1 + 0x1a5) = bVar1;
    *(ushort *)(param_1 + 0x11ae) = *(ushort *)(param_1 + 0x11ae) & 0xfffc;
    if (uVar6 == 1) {
      FUN_0037547c(uVar5,iVar7,4,DAT_00245c88,DAT_00245c88,DAT_00245c84);
    }
    else {
      uVar5 = DAT_00245f94;
      if (uVar6 != 3) {
        if (*(char *)(param_1 + 0x1a5) != '\x05' && *(char *)(param_1 + 0x1a5) != '\x06')
        goto LAB_00245dec;
        iVar7 = param_1 + 0x28;
        uVar5 = DAT_00245f98;
      }
      FUN_0037547c(uVar5,iVar7,4,DAT_00245c88,DAT_00245c88,DAT_00245c84);
    }
    goto LAB_00245dec;
  }
  if (*(int *)(iVar2 + (uint)*(byte *)(param_1 + 0x1a5) * 4) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  *(ushort *)(param_1 + 0x11ae) = *(ushort *)(param_1 + 0x11ae) & 0xfffc;
  if (uVar6 == 1) {
    FUN_0037547c(uVar5,iVar7,4,DAT_00245c88,DAT_00245c88,DAT_00245c84);
  }
  else {
    uVar5 = DAT_00245f94;
    if (uVar6 != 3) {
      if (*(char *)(param_1 + 0x1a5) != '\x05' && *(char *)(param_1 + 0x1a5) != '\x06')
      goto LAB_00245f20;
      iVar7 = param_1 + 0x28;
      uVar5 = DAT_00245f98;
    }
    FUN_0037547c(uVar5,iVar7,4,DAT_00245c88,DAT_00245c88,DAT_00245c84);
  }
LAB_00245f20:
  if (*(byte *)(param_1 + 0x1a5) == uVar6) {
    uVar5 = FUN_0036ae14(param_1 + 0x1b8,
                         *(undefined4 *)(iVar4 + (uint)*(byte *)(param_1 + 0x1a5) * 4));
    uVar9 = VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
    uVar5 = FUN_00350c68(param_1);
    FUN_00375c08(uVar5,uVar3,uVar9,uVar3,param_1 + 0x1b8,
                 *(undefined4 *)(iVar4 + (uint)*(byte *)(param_1 + 0x1a5) * 4),2);
    return;
  }
  *(byte *)(param_1 + 0x1a5) = bVar1;
LAB_00245dec:
  uVar5 = FUN_0036ae14(param_1 + 0x1b8,*(undefined4 *)(iVar4 + (uint)*(byte *)(param_1 + 0x1a5) * 4)
                      );
  uVar8 = VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
  uVar5 = FUN_00350c68(param_1);
  FUN_00375c08(uVar5,uVar3,uVar8,uVar9,param_1 + 0x1b8,
               *(undefined4 *)(iVar4 + (uint)*(byte *)(param_1 + 0x1a5) * 4),2);
  return;
}
