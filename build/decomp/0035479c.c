// OoT3D decomp @ 0035479c  name=FUN_0035479c  size=244

void FUN_0035479c(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  fVar1 = DAT_00354890;
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  *(undefined4 *)(param_1 + 0x58) = *param_4;
  *(undefined4 *)(param_1 + 0x5c) = uVar2;
  *(undefined4 *)(param_1 + 0x60) = uVar3;
  uVar2 = param_5[1];
  uVar3 = param_5[2];
  *(undefined4 *)(param_1 + 100) = *param_5;
  *(undefined4 *)(param_1 + 0x68) = uVar2;
  *(undefined4 *)(param_1 + 0x6c) = uVar3;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  *(undefined4 *)(param_1 + 0x40) = *param_2;
  *(undefined4 *)(param_1 + 0x44) = uVar2;
  *(undefined4 *)(param_1 + 0x48) = uVar3;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  *(undefined4 *)(param_1 + 0x4c) = *param_3;
  *(undefined4 *)(param_1 + 0x50) = uVar2;
  *(undefined4 *)(param_1 + 0x54) = uVar3;
  *(short *)(param_1 + 0x70) =
       (short)(int)((*(float *)(param_1 + 0x58) + *(float *)(param_1 + 100)) * fVar1);
  *(short *)(param_1 + 0x72) =
       (short)(int)((*(float *)(param_1 + 0x5c) + *(float *)(param_1 + 0x68)) * fVar1);
  *(short *)(param_1 + 0x74) =
       (short)(int)((*(float *)(param_1 + 0x60) + *(float *)(param_1 + 0x6c)) * fVar1);
  *(short *)(param_1 + 0x76) =
       (short)(int)((*(float *)(param_1 + 0x40) + *(float *)(param_1 + 0x4c)) * fVar1);
  *(short *)(param_1 + 0x78) =
       (short)(int)((*(float *)(param_1 + 0x44) + *(float *)(param_1 + 0x50)) * fVar1);
  *(short *)(param_1 + 0x7a) =
       (short)(int)((*(float *)(param_1 + 0x48) + *(float *)(param_1 + 0x54)) * fVar1);
  return;
}

