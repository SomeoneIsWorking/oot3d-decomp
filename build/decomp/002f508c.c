// OoT3D decomp @ 002f508c  name=FUN_002f508c  size=8

/* WARNING: Removing unreachable block (ram,0x002f5164) */
/* WARNING: Removing unreachable block (ram,0x002f5174) */
/* WARNING: Removing unreachable block (ram,0x002f51b0) */
/* WARNING: Removing unreachable block (ram,0x002f51c0) */
/* WARNING: Removing unreachable block (ram,0x002f5180) */
/* WARNING: Removing unreachable block (ram,0x002f51c4) */
/* WARNING: Removing unreachable block (ram,0x002f51d4) */
/* WARNING: Removing unreachable block (ram,0x002f5188) */
/* WARNING: Removing unreachable block (ram,0x002f51d8) */
/* WARNING: Removing unreachable block (ram,0x002f51e8) */
/* WARNING: Removing unreachable block (ram,0x002f5190) */
/* WARNING: Removing unreachable block (ram,0x002f5198) */
/* WARNING: Removing unreachable block (ram,0x002f51a8) */
/* WARNING: Removing unreachable block (ram,0x002f521c) */
/* WARNING: Removing unreachable block (ram,0x002f522c) */
/* WARNING: Removing unreachable block (ram,0x002f5268) */
/* WARNING: Removing unreachable block (ram,0x002f5278) */
/* WARNING: Removing unreachable block (ram,0x002f5238) */
/* WARNING: Removing unreachable block (ram,0x002f527c) */
/* WARNING: Removing unreachable block (ram,0x002f528c) */
/* WARNING: Removing unreachable block (ram,0x002f5240) */
/* WARNING: Removing unreachable block (ram,0x002f5290) */
/* WARNING: Removing unreachable block (ram,0x002f52a0) */
/* WARNING: Removing unreachable block (ram,0x002f5248) */
/* WARNING: Removing unreachable block (ram,0x002f5250) */
/* WARNING: Removing unreachable block (ram,0x002f5260) */

void FUN_002f508c(int param_1)

{
  undefined4 *puVar1;
  uint *puVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  int *piVar6;
  uint uVar7;
  char acStack_220 [256];
  char acStack_120 [256];

  pcVar5 = acStack_220;
  if (*(char *)(DAT_002f532c + 0xe) == '\0') {
    FUN_00343280(acStack_120,0x100);
    FUN_00343280(acStack_220,0x100);
    pcVar4 = acStack_120;
    iVar3 = 0x100;
    puVar2 = (uint *)(param_1 + 0x40);
    do {
      if ((*puVar2 & 1) != 0) {
        *pcVar4 = '\x01';
      }
      pcVar4 = pcVar4 + 1;
      if ((*puVar2 & 4) != 0) {
        *pcVar5 = 1;
      }
      iVar3 = iVar3 + -1;
      pcVar5 = pcVar5 + 1;
      *puVar2 = *puVar2 | 5;
      puVar2 = puVar2 + 4;
    } while (iVar3 != 0);
    uVar7 = 0;
    if (*(int *)(param_1 + 0x30) != 0) {
      do {
        piVar6 = (int *)(*(int *)(param_1 + 0x2c) + uVar7 * 0x28);
        iVar3 = FUN_002db234();
        if (iVar3 != 1) {
          iVar3 = param_1 + *piVar6 * 0x10;
          *(uint *)(iVar3 + 0x40) = *(uint *)(iVar3 + 0x40) & 0xfffffffe;
        }
        iVar3 = FUN_002db234();
        if (iVar3 != 1) {
          iVar3 = param_1 + *piVar6 * 0x10;
          *(uint *)(iVar3 + 0x40) = *(uint *)(iVar3 + 0x40) & 0xfffffffb;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(uint *)(param_1 + 0x30));
    }
    puVar2 = (uint *)(param_1 + 0x40);
    iVar3 = 0x100;
    pcVar5 = acStack_120;
    pcVar4 = acStack_220;
    do {
      if (*pcVar5 != '\0') {
        *puVar2 = *puVar2 | 1;
      }
      if (*pcVar4 != '\0') {
        *puVar2 = *puVar2 | 4;
      }
      iVar3 = iVar3 + -1;
      puVar2 = puVar2 + 4;
      pcVar5 = pcVar5 + 1;
      pcVar4 = pcVar4 + 1;
    } while (iVar3 != 0);
  }
  else {
    puVar1 = (undefined4 *)(param_1 + 0x30);
    iVar3 = 0x80;
    do {
      puVar1[4] = 8;
      iVar3 = iVar3 + -1;
      puVar1 = puVar1 + 8;
      *puVar1 = 8;
    } while (iVar3 != 0);
  }
  FUN_0030661c(param_1);
  return;
}
