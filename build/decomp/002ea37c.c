// OoT3D decomp @ 002ea37c  name=FUN_002ea37c  size=204

void FUN_002ea37c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 local_10;
  undefined4 uStack_c;
  
  if (((*DAT_002ea448 & 1) == 0) &&
     (iVar4 = FUN_003679b4(DAT_002ea448), puVar3 = DAT_002ea454, uVar2 = DAT_002ea450,
     uVar1 = DAT_002ea44c, iVar4 != 0)) {
    *DAT_002ea454 = DAT_002ea44c;
    puVar3[1] = uVar2;
    puVar3[2] = uVar2;
    puVar3[3] = uVar2;
    puVar3[4] = uVar2;
    puVar3[5] = uVar1;
    puVar3[6] = uVar2;
    puVar3[7] = uVar2;
    puVar3[8] = uVar2;
    puVar3[9] = uVar2;
    puVar3[10] = uVar1;
    puVar3[0xb] = uVar2;
  }
  FUN_00372224(&local_38,DAT_002ea454);
  *(undefined4 *)(param_1 + 0x18) = local_38;
  *(undefined4 *)(param_1 + 0x1c) = uStack_34;
  *(undefined4 *)(param_1 + 0x20) = uStack_30;
  *(undefined4 *)(param_1 + 0x24) = uStack_2c;
  *(undefined4 *)(param_1 + 0x28) = uStack_28;
  *(undefined4 *)(param_1 + 0x2c) = local_24;
  *(undefined4 *)(param_1 + 0x30) = uStack_20;
  *(undefined4 *)(param_1 + 0x34) = uStack_1c;
  *(undefined4 *)(param_1 + 0x38) = uStack_18;
  *(undefined4 *)(param_1 + 0x3c) = uStack_14;
  *(undefined4 *)(param_1 + 0x40) = local_10;
  *(undefined4 *)(param_1 + 0x44) = uStack_c;
  return;
}

