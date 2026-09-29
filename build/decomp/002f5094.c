// OoT3D decomp @ 002f5094  name=FUN_002f5094  size=664

void FUN_002f5094(int param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  int *piVar6;
  uint uVar7;
  char local_220 [256];
  char local_120 [256];

  pcVar5 = local_220;
  if (*(char *)(DAT_002f532c + 0xe) == '\0') {
    FUN_00343280(local_120,0x100);
    FUN_00343280(local_220,0x100);
    pcVar4 = local_120;
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
        if ((param_2 == 0) || (piVar6[4] != (int)*(short *)(param_2 + 0x104))) {
code_r0x002f51f0:
          iVar3 = FUN_002db234();
        }
        else {
          iVar3 = piVar6[5];
          if (iVar3 == 0) {
            if ((*(uint *)(param_2 + 0x2238) & 1 << (piVar6[6] & 0xffU)) == 0) {
              iVar3 = 0;
            }
            else {
LAB_002f51a8:
              iVar3 = 1;
            }
          }
          else if (iVar3 == 1) {
            if ((*(uint *)(param_2 + 0x2228) & 1 << (piVar6[6] & 0xffU)) != 0) goto LAB_002f51a8;
            iVar3 = 0;
          }
          else if (iVar3 == 2) {
            if ((*(uint *)(param_2 + 0x223c) & 1 << (piVar6[6] & 0xffU)) != 0) goto LAB_002f51a8;
            iVar3 = 0;
          }
          else {
            if (iVar3 != 3) goto code_r0x002f51f0;
            iVar3 = 0;
            if ((*(uint *)(param_2 + 0x2244) & 1 << (piVar6[6] & 0xffU)) != 0) goto LAB_002f51a8;
          }
        }
        if (iVar3 != 1) {
          iVar3 = param_1 + *piVar6 * 0x10;
          *(uint *)(iVar3 + 0x40) = *(uint *)(iVar3 + 0x40) & 0xfffffffe;
        }
        if ((param_2 == 0) || (piVar6[7] != (int)*(short *)(param_2 + 0x104))) {
code_r0x002f52a8:
          iVar3 = FUN_002db234();
        }
        else {
          iVar3 = piVar6[8];
          if (iVar3 == 0) {
            if ((*(uint *)(param_2 + 0x2238) & 1 << (piVar6[9] & 0xffU)) == 0) {
              iVar3 = 0;
            }
            else {
LAB_002f5260:
              iVar3 = 1;
            }
          }
          else if (iVar3 == 1) {
            if ((*(uint *)(param_2 + 0x2228) & 1 << (piVar6[9] & 0xffU)) != 0) goto LAB_002f5260;
            iVar3 = 0;
          }
          else if (iVar3 == 2) {
            if ((*(uint *)(param_2 + 0x223c) & 1 << (piVar6[9] & 0xffU)) != 0) goto LAB_002f5260;
            iVar3 = 0;
          }
          else {
            if (iVar3 != 3) goto code_r0x002f52a8;
            iVar3 = 0;
            if ((*(uint *)(param_2 + 0x2244) & 1 << (piVar6[9] & 0xffU)) != 0) goto LAB_002f5260;
          }
        }
        if (iVar3 != 1) {
          iVar3 = param_1 + *piVar6 * 0x10;
          *(uint *)(iVar3 + 0x40) = *(uint *)(iVar3 + 0x40) & 0xfffffffb;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(uint *)(param_1 + 0x30));
    }
    puVar2 = (uint *)(param_1 + 0x40);
    iVar3 = 0x100;
    pcVar5 = local_120;
    pcVar4 = local_220;
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
