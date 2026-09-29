// OoT3D decomp @ 001344f0  name=FUN_001344f0  size=108

int FUN_001344f0(int param_1,undefined4 param_2)

{
  uint in_fpscr;
  float fVar1;
  float fVar2;
  float fVar3;

  if (0 < *(short *)(param_1 + 0x1c)) {
    fVar1 = (float)FUN_002cfca0((int)(short)(*(short *)(param_1 + 0x18) * *(short *)(param_1 + 0x1c)
                                            ));
    fVar2 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x1c),(byte)(in_fpscr >> 0x15) & 3)
    ;
    fVar3 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 2),(byte)(in_fpscr >> 0x15) & 3);
    fVar1 = fVar1 * (fVar2 / fVar3);
    FUN_00369d44(fVar1,fVar1,param_1,param_2);
    *(short *)(param_1 + 0x1c) = *(short *)(param_1 + 0x1c) + -1;
  }
  return (int)*(short *)(param_1 + 0x1c);
}
