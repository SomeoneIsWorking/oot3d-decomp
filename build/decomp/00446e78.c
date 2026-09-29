// OoT3D decomp @ 00446e78  name=FUN_00446e78  size=236

void FUN_00446e78(void)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  undefined4 uStack_14;
  undefined4 uStack_10;

  uVar1 = DAT_00446f70;
  iVar6 = DAT_00446f64;
  iVar5 = *(int *)(DAT_00446f64 + 0x78) + *(int *)(DAT_00446f64 + 0x7c) * 6;
  piVar2 = (int *)(DAT_00446f64 + 0xb0);
  *(int *)(DAT_00446f64 + 100) = iVar5;
  iVar4 = *(int *)(iVar6 + 0x94);
  iVar3 = *piVar2;
  uStack_10 = DAT_00446f78;
  uStack_14 = uVar1;
  if ((((iVar5 == 5) || (uStack_10 = DAT_00446f7c, uStack_14 = DAT_00446f80, iVar5 == 0xb)) ||
      (uStack_10 = DAT_00446f84, uStack_14 = DAT_00446f88, iVar5 == 0x11)) ||
     (uStack_10 = DAT_00446f74, uStack_14 = uVar1, iVar5 == 0x17)) {
    if (iVar4 != -1) {
      iVar6 = 0;
      if (0 < *(int *)(iVar3 + 0xc)) {
        do {
          FUN_002f9430(*(undefined4 *)(iVar3 + 8),&uStack_14,1,iVar6);
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(iVar3 + 0xc));
      }
      return;
    }
  }
  else if (iVar4 != -1) {
    fVar8 = (float)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
    fVar7 = (float)VectorSignedToFloat(*(undefined4 *)(iVar6 + 0x98),(byte)(in_fpscr >> 0x15) & 3);
    FUN_002f7af4((DAT_00446f98 + fVar8 * DAT_00446f8c) - DAT_00446f94,
                 (DAT_00446f90 + fVar7 * DAT_00446f8c) - DAT_00446f94);
    return;
  }
  FUN_002f7af4();
  return;
}
