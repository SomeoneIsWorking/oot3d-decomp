// OoT3D decomp @ 0043657c  name=FUN_0043657c  size=256

void FUN_0043657c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 int param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 extraout_s0;
  undefined4 extraout_s1;
  undefined4 extraout_s2;
  undefined4 extraout_s3;
  undefined4 extraout_s4;
  undefined4 extraout_s5;
  undefined4 extraout_s6;
  undefined4 extraout_s7;
  undefined1 auStack_6c [48];
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  undefined4 uStack_10;

  if (((*DAT_0043667c & 1) == 0) &&
     (iVar4 = FUN_003679b4(DAT_0043667c), puVar3 = DAT_00436688, uVar2 = DAT_00436684,
     uVar1 = DAT_00436680, param_1 = extraout_s0, param_2 = extraout_s1, param_3 = extraout_s2,
     param_4 = extraout_s3, param_5 = extraout_s4, param_6 = extraout_s5, param_7 = extraout_s6,
     param_8 = extraout_s7, iVar4 != 0)) {
    *DAT_00436688 = DAT_00436680;
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
    param_1 = uVar2;
    param_2 = uVar2;
    param_3 = uVar2;
    param_4 = uVar2;
    param_5 = uVar2;
    param_6 = uVar1;
    param_7 = uVar2;
    param_8 = uVar2;
  }
  FUN_00372224(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,&local_3c,
               DAT_00436688);
  *(undefined4 *)(param_9 + 0x14d0) = local_3c;
  *(undefined4 *)(param_9 + 0x14d4) = uStack_38;
  *(undefined4 *)(param_9 + 0x14d8) = uStack_34;
  *(undefined4 *)(param_9 + 0x14dc) = uStack_30;
  *(undefined4 *)(param_9 + 0x14e0) = uStack_2c;
  *(undefined4 *)(param_9 + 0x14e4) = local_28;
  *(undefined4 *)(param_9 + 0x14e8) = uStack_24;
  *(undefined4 *)(param_9 + 0x14ec) = uStack_20;
  *(undefined4 *)(param_9 + 0x14f0) = uStack_1c;
  *(undefined4 *)(param_9 + 0x14f4) = uStack_18;
  *(undefined4 *)(param_9 + 0x14f8) = local_14;
  *(undefined4 *)(param_9 + 0x14fc) = uStack_10;
  FUN_00372224(auStack_6c,&local_3c);
  FUN_0044a4cc(param_9 + 0x788,auStack_6c);
  FUN_002ea37c(param_9 + 0x788);
  return;
}
