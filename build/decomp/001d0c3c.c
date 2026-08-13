// OoT3D decomp @ 001d0c3c  name=FUN_001d0c3c  size=192

undefined4 FUN_001d0c3c(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  float fVar1;
  uint in_fpscr;
  float fVar2;

  fVar1 = fRam001d0cfc;
  if (param_2 == 10) {
    fVar2 = (float)VectorSignedToFloat((int)*(short *)(param_4 + 0x334),(byte)(in_fpscr >> 0x15) & 3
                                      );
    func_0x00371234(fVar2 * fRam001d0cfc,param_3,1);
    fVar2 = (float)VectorSignedToFloat(-(int)*(short *)(param_4 + 0x336),
                                       (byte)(in_fpscr >> 0x15) & 3);
    func_0x003735e8(fVar2 * fVar1,param_3,1);
  }
  else if (param_2 == 0xd) {
    func_0x00371234(*(float *)(param_4 + 0x814) * fRam001d0cfc,param_3,1);
  }
  else if (param_2 == 0xe || param_2 == 0xf) {
    func_0x00371234(*(float *)(param_4 + 0x814) * fRam001d0d00,param_3,1);
  }
  return 0;
}
