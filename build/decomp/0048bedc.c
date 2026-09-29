// OoT3D decomp @ 0048bedc  name=FUN_0048bedc  size=124

undefined4 FUN_0048bedc(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;

  iVar2 = FUN_003042d4(*(undefined4 *)(*(int *)(param_1 + 4) + 0x3c));
  if ((iVar2 != 0) && (iVar3 = FUN_0030429c(iVar2), iVar3 == 3)) {
    puVar4 = (undefined4 *)FUN_004958c0(iVar2);
    *param_3 = *puVar4;
    param_3[1] = puVar4[1];
    uVar1 = FUN_00495798(puVar4);
    *(undefined1 *)(param_3 + 2) = uVar1;
    iVar2 = FUN_004957c0(puVar4);
    *(bool *)((int)param_3 + 9) = iVar2 != 0;
    return 1;
  }
  return 0;
}
