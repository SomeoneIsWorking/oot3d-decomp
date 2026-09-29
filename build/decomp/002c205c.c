// OoT3D decomp @ 002c205c  name=FUN_002c205c  size=232

undefined4 FUN_002c205c(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;

  uVar1 = DAT_002c220c;
  iVar4 = DAT_002c2208;
  if (*(uint *)(DAT_002c2204 + param_2) < 2) {
    if (((*(uint *)(DAT_002c2208 + 0xbc) & 1) == 0) &&
       (iVar3 = FUN_003679b4(DAT_002c2208 + 0xbc), puVar2 = DAT_002c2210, iVar3 != 0)) {
      *DAT_002c2210 = uVar1;
      puVar2[1] = uVar1;
      puVar2[2] = uVar1;
    }
    uVar5 = *(uint *)(iVar4 + 0xb8);
    if ((*(uint *)(iVar4 + 0xb8) & 1) == 0) {
      iVar4 = FUN_003679b4(DAT_002c2214);
      puVar2 = DAT_002c2218;
      uVar5 = 0;
      if (iVar4 != 0) {
        *DAT_002c2218 = uVar1;
        puVar2[1] = uVar1;
        puVar2[2] = uVar1;
        uVar5 = DAT_002c2214;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_003759d0(*(undefined4 *)(param_2 + 0x84),*(undefined4 *)(param_2 + 0xd8),uVar5);
  }
  return 0;
}
