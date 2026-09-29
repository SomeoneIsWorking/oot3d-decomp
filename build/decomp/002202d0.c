// OoT3D decomp @ 002202d0  name=FUN_002202d0  size=196

void FUN_002202d0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;

  uVar2 = DAT_0022039c;
  uVar1 = DAT_00220398;
  iVar5 = DAT_00220394;
  if (((*(uint *)(DAT_00220394 + 8) & 1) == 0) &&
     (iVar4 = FUN_003679b4(DAT_00220394 + 8), puVar3 = DAT_002203a0, iVar4 != 0)) {
    *DAT_002203a0 = uVar1;
    puVar3[1] = uVar2;
    puVar3[2] = uVar1;
  }
  if (((*(uint *)(iVar5 + 4) & 1) == 0) &&
     (iVar5 = FUN_003679b4(DAT_002203a4), puVar3 = DAT_002203a8, iVar5 != 0)) {
    *DAT_002203a8 = uVar1;
    puVar3[1] = uVar2;
    puVar3[2] = uVar1;
  }
  (**(code **)(param_1 + 0x284))(param_1,param_2);
  *(undefined4 *)(param_1 + 0x264) = *(undefined4 *)(param_1 + 600);
  *(undefined4 *)(param_1 + 0x268) = *(undefined4 *)(param_1 + 0x25c);
  *(undefined4 *)(param_1 + 0x26c) = *(undefined4 *)(param_1 + 0x260);
  return;
}
