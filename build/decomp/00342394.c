// OoT3D decomp @ 00342394  name=FUN_00342394  size=364

void FUN_00342394(undefined4 param_1,int param_2,undefined4 param_3,float *param_4,int param_5)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  undefined1 local_68;
  undefined1 local_67;
  undefined1 local_66;
  undefined1 local_64;
  undefined1 local_63;
  undefined1 local_62;
  undefined1 local_61;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  float local_50;
  undefined4 local_4c;
  float local_48;
  float local_44;
  float local_40;

  fVar5 = DAT_00342518;
  uVar4 = DAT_00342514;
  uVar3 = DAT_00342510;
  fVar2 = DAT_0034250c;
  uVar1 = DAT_00342508;
  iVar6 = 0;
  local_58 = DAT_00342500;
  local_60 = DAT_00342500;
  local_5c = DAT_00342504;
  local_64 = 0x9b;
  local_63 = 0xff;
  local_62 = 0xff;
  local_61 = 0xff;
  local_68 = 200;
  local_67 = 200;
  local_66 = 200;
  if (0 < param_5) {
    do {
      fVar7 = (float)FUN_003738a8(uVar1);
      fVar8 = (float)FUN_003738a8(uVar3);
      local_48 = (float)FUN_003738a8(param_1);
      local_48 = local_48 + *param_4;
      local_44 = (float)FUN_00371e50(param_1);
      local_44 = local_44 + param_4[1];
      local_40 = (float)FUN_003738a8(param_1);
      local_40 = local_40 + param_4[2];
      local_54 = FUN_003738a8(uVar4);
      local_50 = (float)FUN_00371e50(uVar4);
      local_50 = local_50 + fVar5;
      local_4c = FUN_003738a8(uVar4);
      FUN_0034e63c(fVar7 + fVar2,param_3,&local_48,&local_54,&local_60,&local_64,&local_68,
                   (int)fVar8 + 0xc);
      iVar6 = iVar6 + 1;
    } while (iVar6 < param_5);
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    FUN_0034e568(param_3,param_4,8);
    return;
  }
  FUN_003757a8();
  return;
}
