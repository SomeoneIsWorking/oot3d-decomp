// OoT3D decomp @ 003146e4  name=FUN_003146e4  size=372

void FUN_003146e4(undefined4 *param_1,int param_2,undefined2 *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int local_58 [4];
  int iStack_48;
  int iStack_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  byte local_30 [13];
  byte local_23;
  byte local_22;
  byte local_21;

  iVar2 = 0;
  do {
    bVar1 = FUN_00307b50(param_3[iVar2 + 6]);
    local_30[iVar2] = bVar1;
    bVar1 = FUN_00307b50(param_3[iVar2 + 0xc]);
    local_30[iVar2 + 3] = bVar1;
    bVar1 = FUN_00409740(param_3[iVar2 + 9]);
    local_30[iVar2 + 6] = bVar1;
    bVar1 = FUN_004097c8(param_3[iVar2 + 0xf]);
    iVar3 = iVar2 + 1;
    local_30[iVar2 + 9] = bVar1;
    iVar2 = iVar3;
  } while (iVar3 < 3);
  local_30[0xc] = FUN_00409640(*param_3);
  local_23 = FUN_004096c0(param_3[1]);
  local_22 = FUN_00307b20(param_3[2]);
  local_21 = FUN_00307b20(param_3[3]);
  local_40 = (uint)local_30[0] | (uint)local_30[1] << 4 |
             (uint)local_30[2] << 8 | (uint)local_30[3] << 0x10 | (uint)local_30[4] << 0x14 |
             (uint)local_30[5] << 0x18;
  local_3c = (uint)local_30[6] | (uint)local_30[7] << 4 |
             (uint)local_30[8] << 8 | (uint)local_30[9] << 0xc | (uint)local_30[10] << 0x10 |
             (uint)local_30[0xb] << 0x14;
  local_38 = (uint)local_30[0xc] | (uint)local_23 << 0x10;
  local_34 = (uint)local_22 | (uint)local_21 << 0x10;
  local_58[0] = *DAT_00314858;
  local_58[1] = DAT_00314858[1];
  local_58[2] = DAT_00314858[2];
  local_58[3] = DAT_00314858[3];
  iStack_48 = DAT_00314858[4];
  iStack_44 = DAT_00314858[5];
  FUN_00307bd8(*param_1,local_58[param_2],3,1,0xf,&local_40);
  FUN_00307bd8(*param_1,local_58[param_2] + 4,1,1,0xf,&local_34);
  return;
}
