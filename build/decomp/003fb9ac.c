// OoT3D decomp @ 003fb9ac  name=FUN_003fb9ac  size=504

void FUN_003fb9ac(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_54 [4];
  undefined4 local_44;
  uint local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  iVar2 = *(int *)(param_1 + 0x354);
  local_3c = *(undefined4 *)(iVar2 + 0xf0);
  local_2c = *(undefined4 *)(iVar2 + 0x100);
  local_38 = *(undefined4 *)(iVar2 + 0xf4);
  local_28 = *(undefined4 *)(iVar2 + 0x104);
  local_34 = *(undefined4 *)(iVar2 + 0xf8);
  local_24 = *(undefined4 *)(iVar2 + 0x108);
  local_30 = *(undefined4 *)(iVar2 + 0xfc);
  local_20 = *(undefined4 *)(iVar2 + 0x10c);
  FUN_0031485c(param_1 + 0x18,&local_3c);
  iVar2 = 0;
  do {
    if (iVar2 < *(int *)(**(int **)(param_1 + 0x350) + 0x24)) {
      iVar3 = iVar2 * 0x28 + 0x28;
      FUN_003146e4(param_1 + 0x18,iVar2,**(int **)(param_1 + 0x350) + iVar3);
      uVar1 = FUN_003306fc(*(undefined4 *)(param_1 + 0x354),
                           *(undefined2 *)(**(int **)(param_1 + 0x350) + iVar3 + 0x24));
      FUN_0031448c(param_1 + 0x18,iVar2,uVar1);
    }
    else {
      FUN_0031466c(param_1 + 0x18,iVar2);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 6);
  local_44 = 0;
  local_40 = 0;
  local_54[0] = 0;
  local_54[1] = 0;
  local_54[2] = 0;
  local_54[3] = 0;
  local_64 = *DAT_003fbba4;
  uStack_60 = DAT_003fbba4[1];
  uStack_5c = DAT_003fbba4[2];
  uStack_58 = DAT_003fbba4[3];
  iVar2 = 0;
  if ((*(uint *)(**(int **)(param_1 + 0x350) + 0x1c) & 0x80) == 0) {
    uStack_58 = 0;
  }
  do {
    iVar3 = FUN_00313ae8(*(undefined4 *)(param_1 + 0x350),iVar2);
    if (iVar3 != 0) {
      FUN_0031432c(param_1 + 0x18,iVar2,*(int *)(param_1 + 0x354) + iVar2 * 0x30 + 0x110);
      local_54[iVar2] = 1;
      *(undefined2 *)((int)&local_44 + iVar2 * 2) = 0xde1;
      FUN_00307e34(*(undefined4 *)(param_1 + 0x350),param_1 + 0x18,iVar2);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  FUN_003145d0(param_1 + 0x18,local_44 & 0xffff,local_44._2_2_,local_40 & 0xffff);
  FUN_0031459c(param_1 + 0x18,local_54);
  FUN_00314538(param_1 + 0x18,&local_64);
  FUN_0040fbc8(*(undefined4 *)(param_1 + 0x350),param_1 + 0x18);
  FUN_0040fb94(*(undefined4 *)(param_1 + 0x350),param_1 + 0x18);
  FUN_0040fc34(*(undefined4 *)(param_1 + 0x350),param_1 + 0x18);
  FUN_00313ebc(*(undefined4 *)(param_1 + 0x350),param_1 + 0x18);
  return;
}

