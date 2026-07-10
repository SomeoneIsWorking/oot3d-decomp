// OoT3D decomp @ 0013fd24  name=FUN_0013fd24  size=232

void FUN_0013fd24(int param_1,int param_2)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = *(float *)(param_1 + 0x28);
  fVar3 = *(float *)(param_1 + 0x30);
  if (*(short *)(param_1 + 0x5de) == 0) {
    *(float *)(param_1 + 0x638) = fVar2;
    *(float *)(param_1 + 0x62c) = fVar2;
    *(undefined4 *)(param_1 + 0x63c) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(param_1 + 0x630) = *(undefined4 *)(param_1 + 0x2c);
    uVar1 = DAT_0013fe10;
    *(float *)(param_1 + 0x640) = fVar3;
    *(float *)(param_1 + 0x634) = fVar3;
    *(undefined2 *)(param_1 + 0x61c) = 0;
    *(undefined2 *)(param_1 + 0x5da) = 0;
    *(undefined2 *)(param_1 + 0x5dc) = 0;
    *(undefined4 *)(param_1 + 0x680) = uVar1;
    *(undefined4 *)(param_1 + 0x67c) = uVar1;
    *(undefined4 *)(param_1 + 0x6c) = uVar1;
    *(undefined4 *)(param_1 + 0x60c) = uVar1;
    *(undefined4 *)(param_1 + 0x604) = uVar1;
    *(undefined4 *)(param_1 + 0x600) = uVar1;
    *(undefined4 *)(param_1 + 0x608) = uVar1;
    uVar1 = DAT_0013fe14;
    if (*(short *)(param_1 + 0x1c) == 4) {
      *(undefined2 *)(param_1 + 0x1c) = 0;
    }
    *(undefined4 *)(param_1 + 0x5d0) = uVar1;
    return;
  }
  fVar2 = (float)FUN_003696ec(fVar2 - *(float *)(*(int *)(DAT_0013fe0c + param_2) + 0x28),
                              fVar3 - *(float *)(*(int *)(DAT_0013fe0c + param_2) + 0x30));
  *(short *)(param_1 + 0x664) = (short)(int)(fVar2 * DAT_0013fe18);
  FUN_00359e34(param_1,param_2,0);
  FUN_003631d0(param_1,param_2,2);
  return;
}

