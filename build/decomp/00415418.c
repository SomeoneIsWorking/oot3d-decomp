// OoT3D decomp @ 00415418  name=FUN_00415418  size=180

void FUN_00415418(uint param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  bool bVar7;

  iVar4 = *DAT_004154cc;
  uVar5 = *(uint *)(iVar4 + 0x34);
  bVar7 = uVar5 == param_1;
  if (bVar7) {
    uVar5 = (uint)*(byte *)(iVar4 + 0xc);
  }
  if (!bVar7 || uVar5 != 0) {
    *(uint *)(iVar4 + 0x34) = param_1;
    puVar2 = DAT_004154d8;
    uVar1 = DAT_004154d4;
    puVar6 = (undefined4 *)*DAT_004154d8;
    if (*(char *)(iVar4 + 0x3c) == '\0') {
      if (*(char *)(iVar4 + 0xc) == '\0' || (undefined4 *)*DAT_004154d0 <= puVar6) {
        return;
      }
      uVar3 = 0;
    }
    else {
      if ((undefined4 *)*DAT_004154d0 <= puVar6) {
        return;
      }
      if ((*(int *)(iVar4 + 0x38) == 0x404) == (param_1 == 0x901)) {
        uVar3 = 1;
      }
      else {
        uVar3 = 2;
      }
    }
    *puVar6 = uVar3;
    puVar6[1] = uVar1;
    *puVar2 = puVar6 + 2;
    return;
  }
  return;
}
