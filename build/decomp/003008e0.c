// OoT3D decomp @ 003008e0  name=FUN_003008e0  size=212

undefined4
FUN_003008e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9)

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

  if (((*DAT_003009b4 & 1) == 0) &&
     (iVar4 = FUN_003679b4(DAT_003009b4), puVar3 = DAT_003009c0, uVar2 = DAT_003009bc,
     uVar1 = DAT_003009b8, param_1 = extraout_s0, param_2 = extraout_s1, param_3 = extraout_s2,
     param_4 = extraout_s3, param_5 = extraout_s4, param_6 = extraout_s5, param_7 = extraout_s6,
     param_8 = extraout_s7, iVar4 != 0)) {
    *DAT_003009c0 = DAT_003009b8;
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
    puVar3[0xc] = uVar2;
    puVar3[0xd] = uVar2;
    puVar3[0xe] = uVar2;
    puVar3[0xf] = uVar1;
    param_1 = uVar2;
    param_2 = uVar1;
    param_3 = uVar2;
    param_4 = uVar2;
    param_5 = uVar2;
    param_6 = uVar1;
    param_7 = uVar2;
    param_8 = uVar2;
  }
  FUN_00324744(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,DAT_003009c0)
  ;
  return param_9;
}
