// OoT3D decomp @ 0039bca0  name=FUN_0039bca0  size=288

void FUN_0039bca0(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;

  uVar1 = DAT_0039bdc4;
  iVar5 = DAT_0039bdc0;
  if (((*(uint *)(DAT_0039bdc0 + 8) & 1) == 0) &&
     (iVar4 = FUN_003679b4(DAT_0039bdc0 + 8), puVar2 = DAT_0039bdc8, iVar4 != 0)) {
    *DAT_0039bdc8 = uVar1;
    puVar2[1] = uVar1;
    puVar2[2] = uVar1;
  }
  if (((*(uint *)(iVar5 + 4) & 1) == 0) &&
     (iVar5 = FUN_003679b4(DAT_0039bdcc), puVar2 = DAT_0039bdd4, uVar3 = DAT_0039bdd0, iVar5 != 0))
  {
    *DAT_0039bdd4 = uVar1;
    puVar2[1] = uVar1;
    puVar2[2] = uVar3;
  }
  if (param_2 == 9) {
    FUN_003735ac(param_4 + 700,param_3,DAT_0039bdc8);
  }
  else if (param_2 == 8) {
    FUN_003735ac(param_4 + 0x2b0,param_3,DAT_0039bdd4);
  }
  if ((*(char *)(param_4 + 0x271) == '\0') && (*(int *)(param_4 + 0x238) != DAT_0039bdd8)) {
    return;
  }
  FUN_003735ac(param_4 + param_2 * 0xc + 0x2c8,param_3,DAT_0039bdc8);
  return;
}
