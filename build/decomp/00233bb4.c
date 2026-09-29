// OoT3D decomp @ 00233bb4  name=FUN_00233bb4  size=1004

void FUN_00233bb4(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  float local_38;
  undefined4 *local_34;
  float local_30;

  uVar2 = DAT_00233f3c;
  puVar1 = DAT_00233f38;
  if (((DAT_00233f38[7] & 1) == 0) &&
     (iVar6 = FUN_003679b4(DAT_00233f38 + 7), puVar4 = DAT_00233f48, uVar3 = DAT_00233f44,
     iVar6 != 0)) {
    *DAT_00233f48 = DAT_00233f40;
    puVar4[1] = uVar3;
    puVar4[2] = uVar2;
  }
  if (((puVar1[6] & 1) == 0) &&
     (iVar6 = FUN_003679b4(DAT_00233f4c), puVar4 = DAT_00233f50, iVar6 != 0)) {
    *DAT_00233f50 = uVar2;
    puVar4[1] = uVar2;
    puVar4[2] = uVar2;
  }
  if (((puVar1[5] & 1) == 0) &&
     (iVar6 = FUN_003679b4(DAT_00233f54), puVar4 = DAT_00233f60, uVar3 = DAT_00233f5c, iVar6 != 0))
  {
    *DAT_00233f60 = DAT_00233f58;
    puVar4[1] = uVar3;
    puVar4[2] = uVar2;
  }
  if (((puVar1[4] & 1) == 0) &&
     (iVar6 = FUN_003679b4(DAT_00233f64), puVar4 = DAT_00233f68, iVar6 != 0)) {
    *DAT_00233f68 = uVar2;
    puVar4[1] = uVar2;
    puVar4[2] = uVar2;
  }
  if (*(short *)(param_4 + 0x1c) == 0) {
    if ((param_2 == 9) &&
       (FUN_003735ac(param_4 + 0x904,param_3,DAT_00233f60), uVar3 = DAT_00233f70,
       0 < *(short *)(DAT_00233f6c + param_4))) {
      if (((puVar1[3] & 1) == 0) &&
         (iVar6 = FUN_003679b4(DAT_00233f74), puVar4 = DAT_00233f78, iVar6 != 0)) {
        *DAT_00233f78 = uVar3;
        puVar4[1] = uVar2;
        puVar4[2] = uVar2;
      }
      if (((puVar1[2] & 1) == 0) &&
         (iVar6 = FUN_003679b4(DAT_00233f7c), puVar4 = DAT_00233f80, iVar6 != 0)) {
        *DAT_00233f80 = uVar3;
        puVar4[1] = uVar2;
        puVar4[2] = uVar2;
      }
      if (((puVar1[1] & 1) == 0) &&
         (iVar6 = FUN_003679b4(DAT_00233f84), puVar4 = DAT_00233f90, uVar5 = DAT_00233f8c,
         uVar2 = DAT_00233f88, iVar6 != 0)) {
        *DAT_00233f90 = uVar3;
        puVar4[1] = uVar2;
        puVar4[2] = uVar5;
      }
      if (((*puVar1 & 1) == 0) &&
         (iVar6 = FUN_003679b4(DAT_00233f38), puVar4 = DAT_00233f9c, uVar5 = DAT_00233f98,
         uVar2 = DAT_00233f94, iVar6 != 0)) {
        *DAT_00233f9c = uVar3;
        puVar4[1] = uVar2;
        puVar4[2] = uVar5;
      }
      FUN_003735ac(param_4 + 0x9d8,param_3,DAT_00233f78);
      FUN_003735ac(param_4 + 0x9cc,param_3,DAT_00233f80);
      FUN_003735ac(param_4 + 0x9f0,param_3,DAT_00233f90);
      FUN_003735ac(param_4 + 0x9e4,param_3,DAT_00233f9c);
      local_38 = (float)(param_4 + 0x9f0);
      FUN_0035479c(param_4 + 0x98c,param_4 + 0x9cc,param_4 + 0x9d8,param_4 + 0x9e4);
    }
    local_38 = 3.78351e-44;
    local_34 = DAT_00233f50;
    FUN_00335044(param_4,param_2,0x16);
  }
  if (param_2 == 3) {
    FUN_00357750(0,param_4 + 0xb3c,param_3);
  }
  if (*(short *)(DAT_00233fa0 + param_4) != 0) {
    switch(param_2) {
    case 2:
      iVar6 = 5;
      break;
    case 3:
      iVar6 = 0;
      break;
    case 4:
      iVar6 = 3;
      break;
    default:
      return;
    case 6:
      iVar6 = 1;
      break;
    case 7:
      iVar6 = 4;
      break;
    case 9:
      iVar6 = 2;
      break;
    case 0xc:
      iVar6 = 8;
      break;
    case 0xf:
      iVar6 = 9;
    }
    FUN_003735ac(&local_38,param_3,DAT_00233f68);
    param_4 = param_4 + iVar6 * 6;
    *(short *)(param_4 + 0x1a4) = (short)(int)local_38;
    *(short *)(param_4 + 0x1a6) = (short)(int)(float)local_34;
    *(short *)(param_4 + 0x1a8) = (short)(int)local_30;
  }
  return;
}
