// OoT3D decomp @ 00337518  name=FUN_00337518  size=152

void FUN_00337518(int param_1,float *param_2,undefined4 param_3,int param_4)

{
  float fVar1;
  float fVar2;
  uint in_fpscr;
  int iVar3;
  float fVar4;
  int local_10;

  local_10 = param_4;
  iVar3 = FUN_00358410(*(int *)(param_1 + 0xd4) + 0xa98,&local_10,param_4,param_3);
  fVar2 = DAT_003375b8;
  fVar1 = DAT_003375b4;
  fVar4 = DAT_003375b0;
  if (iVar3 == -0x39060000) {
    *param_2 = DAT_003375b0;
    param_2[1] = fVar1;
  }
  else {
    fVar4 = (float)VectorSignedToFloat((int)*(short *)(local_10 + 10),(byte)(in_fpscr >> 0x15) & 3);
    *param_2 = fVar4 * DAT_003375b8;
    fVar4 = (float)VectorSignedToFloat((int)*(short *)(local_10 + 0xc),(byte)(in_fpscr >> 0x15) & 3)
    ;
    param_2[1] = fVar4 * fVar2;
    fVar4 = (float)VectorSignedToFloat((int)*(short *)(local_10 + 0xe),(byte)(in_fpscr >> 0x15) & 3)
    ;
    fVar4 = fVar4 * fVar2;
  }
  param_2[2] = fVar4;
  return;
}
