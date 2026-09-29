// OoT3D decomp @ 0034ecb0  name=FUN_0034ecb0  size=1084

undefined4 FUN_0034ecb0(int param_1,int param_2,int param_3)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  undefined4 uVar7;
  int local_78;
  undefined4 local_74;
  undefined4 local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  float local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int local_3c;

  fVar1 = DAT_0034f068;
  pfVar6 = (float *)(param_1 + 0x28);
  uVar7 = 0;
  local_60 = *pfVar6 + *(float *)(param_1 + 0x71c) * DAT_0034f06c;
  local_5c = *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x720) * DAT_0034f06c;
  local_58 = *(float *)(param_1 + 0x30) + *(float *)(param_1 + 0x724) * DAT_0034f06c;
  local_6c = *pfVar6 - *(float *)(param_1 + 0x71c) * DAT_0034f06c;
  local_68 = *(float *)(param_1 + 0x2c) - *(float *)(param_1 + 0x720) * DAT_0034f06c;
  local_64 = *(float *)(param_1 + 0x30) - *(float *)(param_1 + 0x724) * DAT_0034f06c;
  local_3c = param_2 + 0xa98;
  iVar2 = FUN_00369f9c(local_3c,&local_60,&local_6c,&local_54,&local_78,1,1,1,0,&local_70);
  if ((iVar2 == 0) || (uVar3 = FUN_0035fee8(local_3c,local_78,local_70), (uVar3 & 0x30) != 0)) {
LAB_0034edd8:
    iVar2 = 0;
  }
  else {
    iVar4 = FUN_0035fe90(local_3c,local_78,local_70);
    iVar2 = local_78;
    if (iVar4 != 0) goto LAB_0034edd8;
  }
  if ((iVar2 == 0) || (*(char *)(param_1 + 0x718) != '\0')) {
    iVar2 = 0;
    local_60 = local_6c;
    local_5c = local_68;
    local_58 = local_64;
    do {
      local_6c = local_60 - *(float *)(param_1 + 0x734) * fVar1;
      local_68 = local_5c - *(float *)(param_1 + 0x738) * fVar1;
      local_64 = local_58 - *(float *)(param_1 + 0x73c) * fVar1;
      while( true ) {
        iVar4 = FUN_00369f9c(local_3c,&local_60,&local_6c,&local_48,&local_78,1,1,1,0,&local_74);
        if (((iVar4 == 0) || (uVar3 = FUN_0035fee8(local_3c,local_78,local_74), (uVar3 & 0x30) != 0)
            ) || (iVar5 = FUN_0035fe90(local_3c,local_78,local_74), iVar4 = local_78, iVar5 != 0)) {
          iVar4 = 0;
        }
        if (iVar4 != 0) {
          if (param_3 == 1) {
            FUN_0035fc00(param_1,param_2);
            *pfVar6 = local_48;
            *(undefined4 *)(param_1 + 0x2c) = uStack_44;
            *(undefined4 *)(param_1 + 0x30) = uStack_40;
            *(char *)(param_1 + 0x81) = (char)local_74;
          }
          goto LAB_0034f078;
        }
        iVar2 = iVar2 + 1;
        if (2 < iVar2) goto LAB_0034f08c;
        if (iVar2 == 0) break;
        if (iVar2 == 1) {
          local_6c = local_60 + *(float *)(param_1 + 0x728) * fVar1;
          local_68 = local_5c + *(float *)(param_1 + 0x72c) * fVar1;
          local_64 = local_58 + *(float *)(param_1 + 0x730) * fVar1;
        }
        else {
          local_6c = local_60 - *(float *)(param_1 + 0x728) * fVar1;
          local_68 = local_5c - *(float *)(param_1 + 0x72c) * fVar1;
          local_64 = local_58 - *(float *)(param_1 + 0x730) * fVar1;
        }
      }
    } while( true );
  }
  local_6c = local_60 + *(float *)(param_1 + 0x734) * fVar1;
  local_68 = local_5c + *(float *)(param_1 + 0x738) * fVar1;
  local_64 = local_58 + *(float *)(param_1 + 0x73c) * fVar1;
  iVar4 = FUN_00369f9c(local_3c,&local_60,&local_6c,&local_48,&local_78,1,1,1,0,&local_74);
  if ((iVar4 == 0) || (uVar3 = FUN_0035fee8(local_3c,local_78,local_74), (uVar3 & 0x30) != 0)) {
LAB_0034eea0:
    local_78 = 0;
  }
  else {
    iVar4 = FUN_0035fe90(local_3c,local_78,local_74);
    if (iVar4 != 0) goto LAB_0034eea0;
  }
  if (local_78 == 0) {
    if (*(int *)(param_1 + 0x7c) != iVar2) {
      FUN_0035fc00(param_1,param_2,iVar2);
    }
    *pfVar6 = local_54;
    *(undefined4 *)(param_1 + 0x2c) = uStack_50;
    *(undefined4 *)(param_1 + 0x30) = uStack_4c;
    local_74._0_1_ = (undefined1)local_70;
  }
  else {
    if (param_3 != 1) goto LAB_0034f078;
    FUN_0035fc00(param_1,param_2);
    *pfVar6 = local_48;
    *(undefined4 *)(param_1 + 0x2c) = uStack_44;
    *(undefined4 *)(param_1 + 0x30) = uStack_40;
  }
  *(undefined1 *)(param_1 + 0x81) = (undefined1)local_74;
LAB_0034f078:
  uVar7 = 1;
LAB_0034f08c:
  FUN_00375a18(param_1 + 0xbc,(int)*(short *)(param_1 + 0x34),8,4000,1);
  FUN_00375a18(param_1 + 0xbe,(int)*(short *)(param_1 + 0x36),8,4000,1);
  FUN_00375a18(param_1 + 0xc0,(int)*(short *)(param_1 + 0x38),8,4000,1);
  return uVar7;
}
