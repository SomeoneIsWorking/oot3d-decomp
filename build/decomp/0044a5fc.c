// OoT3D decomp @ 0044a5fc  name=FUN_0044a5fc  size=236

void FUN_0044a5fc(undefined1 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;

  *param_1 = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[2] = 0;
  param_1[6] = 0;
  param_1[10] = 0;
  param_1[1] = 0;
  param_1[5] = 0;
  param_1[9] = 0;
  param_1[3] = 0;
  param_1[7] = 0;
  param_1[0xb] = 0;
  iVar1 = FUN_002ea370();
  iVar4 = 0;
  do {
    iVar5 = (int)(char)iVar4;
    local_34 = 1;
    puVar2 = (undefined4 *)(iVar1 + iVar5 * 0x14);
    *puVar2 = 1;
    puVar2[1] = uStack_30;
    puVar2[2] = local_2c;
    puVar2[3] = uStack_28;
    puVar2[4] = uStack_24;
    FUN_002e2330(DAT_0044a6e8,iVar5,&local_34);
    local_54 = 1;
    iVar3 = iVar1 + iVar5 * 0x34;
    *(undefined4 *)(iVar3 + 0x28) = 1;
    *(undefined4 *)(iVar3 + 0x2c) = uStack_50;
    *(undefined4 *)(iVar3 + 0x30) = uStack_4c;
    *(undefined4 *)(iVar3 + 0x34) = uStack_48;
    *(undefined4 *)(iVar3 + 0x38) = uStack_44;
    *(undefined4 *)(iVar3 + 0x3c) = local_40;
    *(undefined4 *)(iVar3 + 0x40) = uStack_3c;
    *(undefined4 *)(iVar3 + 0x44) = uStack_38;
    *(undefined4 *)(iVar3 + 0x48) = local_34;
    *(undefined4 *)(iVar3 + 0x4c) = uStack_30;
    *(undefined4 *)(iVar3 + 0x50) = local_2c;
    *(undefined4 *)(iVar3 + 0x54) = uStack_28;
    *(undefined4 *)(iVar3 + 0x58) = uStack_24;
    FUN_002e21ec(DAT_0044a6e8,iVar5,&local_54);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 2);
  return;
}
