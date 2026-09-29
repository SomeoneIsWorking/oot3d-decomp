// OoT3D decomp @ 0029c594  name=FUN_0029c594  size=272

void FUN_0029c594(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  uint in_fpscr;
  undefined4 uVar3;
  float fVar4;
  float local_28;
  float local_24;
  undefined4 local_20;
  undefined1 auStack_1c [4];

  if ((*(uint *)(*(int *)(DAT_0029c6a4 + param_2) + 0x1710) & DAT_0029c6a8) == 0) {
    (**(code **)(param_1 + 0x1a4))(param_1,param_2);
    fVar1 = DAT_0029c6b0;
    local_28 = *(float *)(param_1 + 0x28);
    fVar4 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xc0),(byte)(in_fpscr >> 0x15) & 3)
    ;
    *(short *)(param_1 + 0xc0) =
         (short)(int)(fVar4 - (local_28 - *(float *)(param_1 + 0x108)) * DAT_0029c6ac);
    local_24 = *(float *)(param_1 + 0x2c) + fVar1;
    local_20 = *(undefined4 *)(param_1 + 0x30);
    uVar3 = FUN_0036e81c(param_2 + 0xa98,param_1 + 0x7c,auStack_1c,param_1,&local_28);
    *(undefined4 *)(param_1 + 0x84) = uVar3;
    iVar2 = *(int *)(param_1 + 0x1c4);
    *(undefined4 *)(iVar2 + 0x38) = *(undefined4 *)(param_1 + 0x28);
    *(float *)(iVar2 + 0x3c) = *(float *)(param_1 + 0x2c) + fVar1;
    *(undefined4 *)(iVar2 + 0x40) = *(undefined4 *)(param_1 + 0x30);
    if ((*(byte *)(param_1 + 0x1b8) & 1) != 0) {
      FUN_003761f0(param_2,param_2 + 0x5c78,param_1 + 0x1a8);
    }
    FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x1a8);
  }
  return;
}
