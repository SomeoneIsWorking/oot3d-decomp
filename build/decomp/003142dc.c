// OoT3D decomp @ 003142dc  name=FUN_003142dc  size=76

/* WARNING: Removing unreachable block (ram,0x00307c98) */

void FUN_003142dc(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;

  iVar1 = *param_1;
  puVar5 = *(undefined4 **)(iVar1 + 8);
  *puVar5 = 0x8000005a;
  puVar5[1] = uRam00307d84;
  puVar5[2] = param_2[3];
  puVar5[3] = uRam00307d88 | 0x700000;
  puVar5[4] = param_2[2];
  puVar5[5] = param_2[1];
  iVar4 = 1;
  puVar5[6] = *param_2;
  puVar2 = param_2 + 7;
  puVar3 = puVar5 + 7;
  do {
    *puVar3 = *puVar2;
    iVar4 = iVar4 + -1;
    puVar3[1] = puVar2[-1];
    puVar3[2] = puVar2[-2];
    puVar3[3] = puVar2[-3];
    puVar2 = puVar2 + 4;
    puVar3 = puVar3 + 4;
  } while (iVar4 != 0);
  puVar5[0xb] = 0;
  *(undefined4 **)(iVar1 + 8) = puVar5 + 0xc;
  return;
}
