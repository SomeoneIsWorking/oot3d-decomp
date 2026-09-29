// OoT3D decomp @ 001ded54  name=FUN_001ded54  size=824

void FUN_001ded54(int param_1,int param_2)

{
  short sVar1;
  uint uVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_60 [4];
  float local_50;
  undefined4 uStack_4c;
  float local_48;
  undefined4 local_44;
  float local_40;
  undefined4 local_3c;
  float local_38;
  undefined4 local_34;
  undefined4 local_30 [2];
  undefined4 local_28;
  float local_24;
  float local_20;
  float local_1c;

  if (*(short *)(*(int *)(param_2 + 0x20ac) + 0x2248) == 0) {
    *(uint *)(param_1 + 0x99c) = *(uint *)(param_1 + 0x99c) & 0xfffffffd;
    *(uint *)(param_1 + 0x9f4) = *(uint *)(param_1 + 0x9f4) | 2;
    uVar2 = *(uint *)(param_1 + 0xa4c) | 2;
  }
  else {
    *(uint *)(param_1 + 0x99c) = *(uint *)(param_1 + 0x99c) | 2;
    *(uint *)(param_1 + 0x9f4) = *(uint *)(param_1 + 0x9f4) & 0xfffffffd;
    uVar2 = *(uint *)(param_1 + 0xa4c) & 0xfffffffd;
  }
  *(uint *)(param_1 + 0xa4c) = uVar2;
  fVar5 = DAT_001df08c;
  if (*(short *)(param_1 + 0xc0e) != 0) {
    *(short *)(param_1 + 0xca0) = *(short *)(param_1 + 0xca0) + 0x640;
    sVar1 = *(short *)(param_1 + 0xc0e) + -1;
    *(short *)(param_1 + 0xc0e) = sVar1;
    if (sVar1 == 0) {
      *(undefined2 *)(param_1 + 0xca0) = 0;
    }
    fVar3 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xc0e),(byte)(in_fpscr >> 0x15) & 3
                                      );
    fVar4 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xca0));
    fVar6 = *(float *)(param_1 + 0x2c) - *(float *)(param_1 + 0xc20);
    sVar1 = (short)(int)(fVar4 * fVar3 * fVar5 * DAT_001df090);
    local_24 = (float)FUN_002cfca0((int)sVar1);
    local_24 = local_24 * fVar6;
    local_20 = (float)FUN_00338f60((int)sVar1);
    fVar5 = DAT_001df094;
    local_20 = local_20 * fVar6;
    local_1c = DAT_001df094;
    FUN_00372224(local_60,param_1 + 0x148);
    local_60[3] = *(float *)(param_1 + 0xc1c);
    local_44 = *(undefined4 *)(param_1 + 0xc20);
    local_34 = *(undefined4 *)(param_1 + 0xc24);
    local_60[2] = 0.0;
    local_60[1] = 0.0;
    local_60[0] = 1.0;
    local_50 = 0.0;
    uStack_4c = 0x3f800000;
    local_48 = 0.0;
    local_40 = 0.0;
    local_3c = 0;
    local_38 = 1.0;
    fVar3 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x36),(byte)(in_fpscr >> 0x15) & 3)
    ;
    fVar3 = fVar3 * DAT_001df098;
    if (fVar3 != fVar5) {
      fVar5 = (float)FUN_003727f0(fVar3);
      fVar3 = (float)FUN_00372674(fVar3);
      fVar4 = local_60[0] * fVar5;
      local_60[0] = local_60[0] * fVar3 - local_60[2] * fVar5;
      local_60[2] = fVar4 + local_60[2] * fVar3;
      fVar4 = local_50 * fVar5;
      local_50 = local_50 * fVar3 - local_48 * fVar5;
      local_48 = fVar4 + local_48 * fVar3;
      fVar4 = local_40 * fVar5;
      local_40 = local_40 * fVar3 - local_38 * fVar5;
      local_38 = fVar4 + local_38 * fVar3;
    }
    FUN_003735ac(local_30,local_60,&local_24);
    *(short *)(param_1 + 0xc0) = sVar1 * -2;
    *(undefined4 *)(param_1 + 0x28) = local_30[0];
    *(undefined4 *)(param_1 + 0x30) = local_28;
  }
  FUN_0035e3a4(param_1 + 0xcac,0,(int)*(short *)(param_1 + 0xca6));
  FUN_0035e330(param_1 + 0xcac);
  if (*(short *)(param_1 + 0x1c) == 0) {
    FUN_0036932c();
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),3);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),6);
    FUN_0037266c(*(undefined4 *)(param_1 + 0x1cc),1);
    FUN_0037266c(*(undefined4 *)(param_1 + 0x1cc),4);
    FUN_0037266c(*(undefined4 *)(param_1 + 0x1cc),7);
  }
  else {
    FUN_0037266c(*(undefined4 *)(param_1 + 0x1cc),0);
    FUN_0037266c(*(undefined4 *)(param_1 + 0x1cc),3);
    FUN_0037266c(*(undefined4 *)(param_1 + 0x1cc),6);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),1);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),4);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),7);
  }
  FUN_0035e240(param_1 + 0x1a4,param_1 + 0x148,DAT_001df0a0,DAT_001df09c,param_1,0);
  return;
}
