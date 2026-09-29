// OoT3D decomp @ 002f78c0  name=FUN_002f78c0  size=216

void FUN_002f78c0(void)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int local_44 [9];

  iVar5 = DAT_002f79a8;
  iVar4 = DAT_002f79a4;
  uVar3 = DAT_002f79a0;
  uVar2 = DAT_002f799c;
  piVar1 = DAT_002f7998;
  iVar8 = 0;
  do {
    local_44[0] = *piVar1;
    local_44[1] = piVar1[1];
    local_44[2] = piVar1[2];
    local_44[3] = piVar1[3];
    local_44[4] = piVar1[4];
    local_44[5] = piVar1[5];
    iVar7 = piVar1[7];
    local_44[6] = piVar1[6];
    local_44[7] = iVar7;
    local_44[8] = piVar1[8];
    iVar6 = local_44[iVar8];
    if (iVar6 != 9) {
      iVar7 = *(int *)(iVar5 + 4);
    }
    uVar9 = uVar2;
    if (iVar6 != 9 && iVar7 != iVar6) {
      uVar9 = uVar3;
    }
    FUN_002e1a5c(uVar9,*(undefined4 *)(iVar4 + 0x10),iVar8);
    iVar8 = iVar8 + 1;
  } while (iVar8 < 9);
  if ((1 < (int)(*(uint *)(iVar5 + 0xb8) & *(uint *)(DAT_002f79ac + 8)) >>
           (uint)*(byte *)(DAT_002f79b0 + 2)) && (*(int *)(iVar5 + 4) == 1)) {
    FUN_002e1a5c(uVar3,*(undefined4 *)(iVar4 + 0x10),0x18);
    return;
  }
  FUN_002e1a5c(uVar2,*(undefined4 *)(iVar4 + 0x10),0x18);
  return;
}
