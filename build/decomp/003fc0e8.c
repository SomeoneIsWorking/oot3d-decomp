// OoT3D decomp @ 003fc0e8  name=FUN_003fc0e8  size=236

void FUN_003fc0e8(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  bool bVar8;
  
  FUN_00310ad0(*(undefined4 *)(param_1 + 8));
  FUN_00414c6c(DAT_003fc120);
  FUN_004152b8(DAT_003fc124);
  FUN_00414c6c(DAT_003fc128);
  FUN_00415418(DAT_003fc12c);
  uVar1 = DAT_003fc130;
  iVar5 = *DAT_00415150;
  uVar6 = *(uint *)(iVar5 + 0x38);
  bVar8 = uVar6 == DAT_003fc130;
  if (bVar8) {
    uVar6 = (uint)*(byte *)(iVar5 + 0xc);
  }
  if (!bVar8 || uVar6 != 0) {
    *(uint *)(iVar5 + 0x38) = DAT_003fc130;
    puVar3 = DAT_0041515c;
    uVar2 = DAT_00415158;
    puVar7 = (undefined4 *)*DAT_0041515c;
    if (*(char *)(iVar5 + 0x3c) == '\0') {
      if (*(char *)(iVar5 + 0xc) == '\0' || (undefined4 *)*DAT_00415154 <= puVar7) {
        return;
      }
      uVar4 = 0;
    }
    else {
      if ((undefined4 *)*DAT_00415154 <= puVar7) {
        return;
      }
      if ((uVar1 == 0x404) == (*(int *)(iVar5 + 0x34) == 0x901)) {
        uVar4 = 1;
      }
      else {
        uVar4 = 2;
      }
    }
    *puVar7 = uVar4;
    puVar7[1] = uVar2;
    *puVar3 = puVar7 + 2;
    return;
  }
  return;
}

