// OoT3D decomp @ 00488374  name=FUN_00488374  size=124

undefined4 * FUN_00488374(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar2 = (undefined4 *)FUN_003042d4(*(undefined4 *)(*(int *)(param_1 + 4) + 0x3c));
  if (puVar2 != (undefined4 *)0x0) {
    *param_3 = *puVar2;
    param_3[1] = puVar2[1];
    param_3[4] = (uint)*(byte *)(puVar2 + 2);
    uVar1 = FUN_0048bd38(puVar2);
    *(undefined *)(param_3 + 5) = uVar1;
    uVar1 = FUN_0048bd5c(puVar2);
    *(undefined *)((int)param_3 + 0x15) = uVar1;
    uVar3 = FUN_0048bdd0(puVar2);
    param_3[3] = uVar3;
    uVar3 = FUN_0048bda8(puVar2);
    param_3[2] = uVar3;
    uVar1 = FUN_0048bd84(puVar2);
    *(undefined *)((int)param_3 + 0x16) = uVar1;
    puVar2 = (undefined4 *)0x1;
  }
  return puVar2;
}

