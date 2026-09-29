// OoT3D decomp @ 001e1dfc  name=FUN_001e1dfc  size=252

void FUN_001e1dfc(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  int local_2c;
  undefined4 local_28;

  iVar3 = 0;
  iStack_30 = param_1;
  local_2c = param_2;
  local_28 = param_3;
  if (0 < *(int *)(param_1 + 0xe4c)) {
    do {
      puVar1 = (undefined4 *)(*(int *)(param_1 + 0xe50) + iVar3 * 0x50 + 0x28);
      local_3c = *puVar1;
      uStack_38 = puVar1[1];
      uStack_34 = puVar1[2];
      FUN_003409ac(local_28,*(undefined1 *)(*(int *)(param_1 + 0xe50) + iVar3 * 0x50 + 0x4c),
                   &local_3c,&local_48);
      iVar4 = iVar3 + 1;
      puVar1 = (undefined4 *)(*(int *)(param_1 + 0xe50) + iVar3 * 0x50 + 0x38);
      *puVar1 = local_48;
      puVar1[1] = uStack_44;
      puVar1[2] = uStack_40;
      iVar2 = *(int *)(param_1 + 0xe50);
      *(float *)(iVar2 + iVar3 * 0x50 + 0x44) =
           *(float *)(iVar3 * 0x50 + 0x34 + iVar2) * *(float *)(iVar3 * 0x50 + 0x48 + iVar2);
      iVar3 = iVar4;
    } while (iVar4 < *(int *)(param_1 + 0xe4c));
  }
  FUN_003762a4(local_2c,local_2c + 0x5c78,param_1 + 0xe34);
  return;
}
