// OoT3D decomp @ 00307ccc  name=FUN_00307ccc  size=184

void FUN_00307ccc(undefined4 param_1,int param_2,undefined4 *param_3,int param_4,uint *param_5)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  int unaff_r4;
  uint *puVar5;
  int unaff_r7;
  uint *in_r12;

  *param_3 = param_1;
  *in_r12 = unaff_r4 - 0x100000U | uRam00307d88;
  in_r12[1] = param_5[2];
  iVar1 = -3 - (param_4 + -4);
  in_r12[2] = param_5[1];
  iVar1 = (int)(iVar1 + ((uint)(iVar1 >> 0x1f) >> 0x1e)) >> 2;
  iVar4 = -iVar1;
  puVar5 = in_r12 + 4;
  in_r12[3] = *param_5;
  if (iVar1 != 0 && -1 < iVar4) {
    puVar2 = (uint *)(unaff_r7 + 0xc);
    puVar3 = puVar5;
    do {
      *puVar3 = *puVar2;
      iVar4 = iVar4 + -1;
      puVar3[1] = puVar2[-1];
      puVar3[2] = puVar2[-2];
      puVar3[3] = puVar2[-3];
      puVar2 = puVar2 + 4;
      puVar3 = puVar3 + 4;
    } while (iVar4 != 0);
    puVar5 = puVar5 + iVar1 * -4;
  }
  *puVar5 = 0;
  *(uint **)(param_2 + 8) = puVar5 + 1;
  return;
}
