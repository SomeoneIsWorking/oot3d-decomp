// OoT3D decomp @ 001ba11c  name=FUN_001ba11c  size=264

void FUN_001ba11c(int param_1,int param_2)

{
  uint uVar1;
  uint in_fpscr;
  float fVar2;
  float fVar3;
  float fVar4;

  if (*(short *)(*(int *)(param_2 + 0x20ac) + 0x2248) == 0) {
    *(uint *)(param_1 + 0x6c4) = *(uint *)(param_1 + 0x6c4) & 0xfffffffd;
    *(uint *)(param_1 + 0x71c) = *(uint *)(param_1 + 0x71c) | 2;
    uVar1 = *(uint *)(param_1 + 0x774) | 2;
  }
  else {
    *(uint *)(param_1 + 0x6c4) = *(uint *)(param_1 + 0x6c4) | 2;
    *(uint *)(param_1 + 0x71c) = *(uint *)(param_1 + 0x71c) & 0xfffffffd;
    uVar1 = *(uint *)(param_1 + 0x774) & 0xfffffffd;
  }
  *(uint *)(param_1 + 0x774) = uVar1;
  FUN_00357fd0(*(undefined4 *)(param_2 + 0x20ac),*(undefined4 *)(param_1 + 0x178),param_1 + 0x28);
  fVar2 = (float)VectorUnsignedToFloat
                           ((uint)*(byte *)(param_1 + 0x947),(byte)(in_fpscr >> 0x15) & 3);
  fVar3 = (float)VectorUnsignedToFloat
                           ((uint)*(byte *)(param_1 + 0x946),(byte)(in_fpscr >> 0x15) & 3);
  fVar4 = (float)VectorUnsignedToFloat
                           ((uint)*(byte *)(param_1 + 0x945),(byte)(in_fpscr >> 0x15) & 3);
  FUN_00342be0(fVar4 * DAT_001ba224,fVar3 * DAT_001ba224,fVar2 * DAT_001ba224,
               *(undefined4 *)(param_1 + 0x97c),param_1,4,0);
  FUN_0035e240(param_1 + 0x1a4,param_1 + 0x148,0,DAT_001ba228,param_1,0);
  return;
}
