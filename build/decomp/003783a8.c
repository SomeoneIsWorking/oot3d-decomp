// OoT3D decomp @ 003783a8  name=FUN_003783a8  size=900

void FUN_003783a8(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  float fVar4;
  int iVar5;
  float local_28;
  float local_24;
  float local_20;

  uVar2 = DAT_003786b4;
  iVar1 = DAT_003786b0;
  if (((*(uint *)(DAT_003786b0 + 0x28) & 1) == 0) &&
     (iVar5 = FUN_003679b4(DAT_003786b0 + 0x28), puVar3 = DAT_003786b8, iVar5 != 0)) {
    *DAT_003786b8 = uVar2;
    puVar3[1] = uVar2;
    puVar3[2] = uVar2;
  }
  if (((*(uint *)(iVar1 + 0x24) & 1) == 0) &&
     (iVar5 = FUN_003679b4(DAT_003786bc), puVar3 = DAT_003786c0, iVar5 != 0)) {
    *DAT_003786c0 = uVar2;
    puVar3[1] = uVar2;
    puVar3[2] = uVar2;
  }
  fVar4 = DAT_003786c4;
  if (((*(uint *)(iVar1 + 0x20) & 1) == 0) &&
     (iVar5 = FUN_003679b4(DAT_003786c8), puVar3 = DAT_003786cc, iVar5 != 0)) {
    *DAT_003786cc = uVar2;
    puVar3[1] = uVar2;
    puVar3[2] = fVar4;
  }
  if (((*(uint *)(iVar1 + 0x1c) & 1) == 0) &&
     (iVar5 = FUN_003679b4(DAT_003786d0), puVar3 = DAT_003786d8, iVar5 != 0)) {
    *DAT_003786d8 = DAT_003786d4;
    puVar3[1] = uVar2;
    puVar3[2] = uVar2;
  }
  if (-1 < *(char *)(DAT_003786dc + param_2)) {
    FUN_003735ac(param_4 + *(char *)(DAT_003786dc + param_2) * 0xc + 0xc20,param_3,DAT_003786b8);
  }
  if (param_2 == 1) {
    FUN_003735ac(param_4 + 0xb30,param_3,DAT_003786b8);
    return;
  }
  if (param_2 == 0x12) {
    FUN_003735ac(param_4 + 0x3c,param_3,DAT_003786b8);
    return;
  }
  if (param_2 != 2) {
    if (param_2 == 0xd) {
      FUN_003735ac(param_4 + 0xb6c,param_3,DAT_003786c0);
      return;
    }
    if (param_2 == 0x11) {
      local_28 = DAT_003786e0;
      local_24 = (float)DAT_003786e4;
      local_20 = (float)DAT_003786e8;
      FUN_003735ac(param_4 + 0xb60,param_3,DAT_003786cc);
      if (*(char *)(param_4 + 0xb90) == '\0') {
        FUN_003735ac(param_4 + 0xb94,param_3,DAT_003786d8);
      }
      *(undefined1 *)(param_4 + 0xb90) = 0;
      if (*(short *)(DAT_003786ec + param_4) == 2) {
        FUN_003735ac(param_4 + 0xc0c,param_3,&local_28);
      }
    }
    else {
      if (param_2 == 0xb) {
        local_28 = DAT_003786f0;
        local_24 = DAT_003786f4;
        local_20 = DAT_00378700;
        if (*(char *)(param_4 + 0xac4) == '\x01') {
          local_28 = DAT_003786f0 + *(float *)(iVar1 + 0x2c);
          local_24 = DAT_003786f4 + *(float *)(iVar1 + 0x30);
          local_20 = DAT_00378700 + *(float *)(iVar1 + 0x34);
        }
        else if (*(char *)(param_4 + 0xac4) == '\x02') {
          local_28 = DAT_003786f8;
          local_24 = DAT_003786fc;
          local_20 = DAT_00378704;
        }
        FUN_003735ac(param_4 + 0xb54,param_3,&local_28);
        return;
      }
      if (param_2 == 0xf) {
        local_28 = DAT_003786f0;
        local_24 = DAT_003786f4;
        local_20 = fVar4;
        if (*(char *)(param_4 + 0xac4) == '\x01') {
          local_28 = DAT_003786f0 + *(float *)(iVar1 + 0x38);
          local_24 = DAT_003786f4 + *(float *)(iVar1 + 0x3c);
          local_20 = fVar4 + *(float *)(iVar1 + 0x40);
        }
        else if (*(char *)(param_4 + 0xac4) == '\x02') {
          local_28 = DAT_003786f8;
          local_24 = DAT_003786fc;
          local_20 = DAT_00378784;
        }
        FUN_003735ac(param_4 + 0xb48,param_3,&local_28);
        return;
      }
    }
    return;
  }
  FUN_003735ac(param_4 + 0xb3c,param_3,DAT_003786b8);
  return;
}
