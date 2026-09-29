// OoT3D decomp @ 0047cbf4  name=FUN_0047cbf4  size=172

float FUN_0047cbf4(float param_1,undefined4 param_2,float *param_3)

{
  int iVar1;
  uint in_fpscr;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auStack_18 [4];
  int local_14;

  iVar1 = FUN_002cf090(param_2,0,&local_14,auStack_18,param_3,0,0);
  if (iVar1 != 0) {
    fVar2 = (float)VectorSignedToFloat((int)*(short *)(local_14 + 10),(byte)(in_fpscr >> 0x15) & 3);
    fVar3 = (float)VectorSignedToFloat((int)*(short *)(local_14 + 0xc),(byte)(in_fpscr >> 0x15) & 3)
    ;
    fVar4 = (float)VectorSignedToFloat((int)*(short *)(local_14 + 0xe),(byte)(in_fpscr >> 0x15) & 3)
    ;
    return fVar2 * DAT_0047cca0 * *param_3 + fVar3 * DAT_0047cca0 * param_3[1] +
           fVar4 * DAT_0047cca0 * param_3[2] + *(float *)(local_14 + 0x10);
  }
  return param_1;
}
