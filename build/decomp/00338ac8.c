// OoT3D decomp @ 00338ac8  name=FUN_00338ac8  size=292

undefined4 FUN_00338ac8(float param_1,int param_2,int param_3,int param_4)

{
  uint in_fpscr;
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  
  fVar1 = (float)func_0x00367ef0(*(undefined4 *)(param_2 + 0xd8));
  fVar3 = fRam00338bec;
  fStack_34 = fVar1 + param_1;
  fStack_38 = fRam00338bec;
  fStack_30 = fRam00338bec;
  if (param_4 != 0) {
    uVar2 = VectorSignedToFloat((int)*(short *)(*piRam00338bf0 + 0x1a6),(byte)(in_fpscr >> 0x15) & 3
                               );
    uVar2 = func_0x00367e88(uVar2,param_2 + 0x150,(int)*(short *)(param_2 + 0xea),
                            (int)*(short *)(param_3 + 6));
    fVar1 = (float)func_0x00355804(uVar2,fVar1);
    fStack_34 = fStack_34 - fVar1;
  }
  func_0x00367df4(*(undefined4 *)(param_2 + 0x118),*(undefined4 *)(param_2 + 0x114),uRam00338bf4,
                  &fStack_38,param_2 + 300);
  if ((*(uint *)(iRam00338bf8 + *(int *)(param_2 + 0xd8)) & 0x100) != 0) {
    fVar3 = *(float *)(*(int *)(param_2 + 0xd8) + 0x1760) * fRam00338bfc;
  }
  fStack_44 = *(float *)(param_2 + 0xdc) + *(float *)(param_2 + 300);
  fStack_40 = *(float *)(param_2 + 0xe0) + *(float *)(param_2 + 0x130) + fVar3;
  fStack_3c = *(float *)(param_2 + 0xe4) + *(float *)(param_2 + 0x134);
  func_0x00367df4(*(undefined4 *)(param_2 + 0x148),*(undefined4 *)(param_2 + 0x148),uRam00338c00,
                  &fStack_44,param_2 + 0x80);
  return 1;
}

