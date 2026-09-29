// OoT3D decomp @ 0046fa2c  name=FUN_0046fa2c  size=328

void FUN_0046fa2c(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint *puVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;

  piVar1 = DAT_0046fb78;
  bVar7 = false;
  iVar10 = *DAT_0046fb74;
  if ((*(uint *)(iVar10 + 8) & 0x80) == 0) {
    iVar9 = 0;
    do {
      if ((*(uint *)(param_1 + ((int)(iVar9 + 10U) >> 5) * 4) & 1 << (iVar9 + 10U & 0x1f)) != 0) {
        iVar3 = iVar10 + 0x58 + iVar9 * 4;
        if (*(char *)(iVar10 + 0x58 + iVar9 + 0xaf) == '\0') {
          puVar5 = (undefined4 *)*piVar1;
          if ((*(int *)(iVar3 + 4) == 0) ||
             (puVar5 = (undefined4 *)puVar5[iVar9 + 0x204], puVar5 != (undefined4 *)0x0)) {
            FUN_0048280c(*puVar5,iVar9);
          }
        }
        else {
          iVar4 = *piVar1;
          if (*(int *)(iVar3 + 0x10) == 0) {
            FUN_002d0bac(*(undefined4 *)(iVar4 + 4),iVar9);
          }
          else {
            puVar5 = *(undefined4 **)(iVar4 + iVar9 * 4 + 0x81c);
            if (puVar5 != (undefined4 *)0x0) {
              FUN_002d0bac(*puVar5,iVar9);
            }
          }
        }
        bVar7 = true;
      }
      puVar2 = DAT_0046fb80;
      puVar5 = DAT_0046fb7c;
      iVar9 = iVar9 + 1;
    } while (iVar9 < 3);
    uVar8 = 0;
    if (bVar7) {
      uVar8 = *(uint *)(iVar10 + 0x670);
    }
    if (bVar7 && (uVar8 & 7) != 0) {
      puVar6 = (uint *)*DAT_0046fb7c;
      if (puVar6 < (uint *)*DAT_0046fb80) {
        *puVar6 = uVar8;
        puVar6[1] = DAT_0046fb84;
        puVar6 = puVar6 + 2;
        *puVar5 = puVar6;
      }
      if (puVar6 < (uint *)*puVar2) {
        *puVar6 = 0x10000;
        puVar6[1] = DAT_0046fb88;
        *puVar5 = puVar6 + 2;
      }
    }
  }
  return;
}
