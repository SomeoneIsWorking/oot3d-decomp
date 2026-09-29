// OoT3D decomp @ 00111374  name=FUN_00111374  size=244

undefined4 FUN_00111374(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_24 [12];
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];

  fVar4 = *(float *)(param_2 + 0x28) - *(float *)(param_1 + 0x28);
  fVar5 = *(float *)(param_2 + 0x2c) - *(float *)(param_1 + 0x2c);
  fVar3 = *(float *)(param_2 + 0x30) - *(float *)(param_1 + 0x30);
  if ((int)SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar3 * fVar3) <= DAT_00111468) {
    uVar1 = FUN_003758b0();
    fVar3 = (float)VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
    fVar4 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xbe),(byte)(in_fpscr >> 0x15) & 3)
    ;
    if ((int)(short)(int)(fVar3 - fVar4) + 0x1c70U <= DAT_0011146c) {
      iVar2 = FUN_00369f9c(param_3 + 0xa98,param_1 + 0x28,param_2 + 0x28,auStack_24,auStack_14,1,0,0
                           ,1,auStack_18);
      if (iVar2 == 0) {
        return 1;
      }
    }
  }
  return 0;
}
