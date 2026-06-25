// OoT3D decomp @ 001a35cc  name=FUN_001a35cc  size=100

void FUN_001a35cc(float *param_1,undefined2 *param_2,int param_3)

{
  int iVar1;
  undefined2 uVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  float fVar5;
  
  iVar1 = DAT_001a3630;
  fVar5 = (float)VectorSignedToFloat((int)*(float *)(param_3 + 0x28),(byte)(in_fpscr >> 0x15) & 3);
  fVar3 = (float)VectorSignedToFloat((int)*(float *)(param_3 + 0x2c),(byte)(in_fpscr >> 0x15) & 3);
  fVar4 = SQRT(fVar5 * fVar5 + fVar3 * fVar3);
  *param_1 = fVar4;
  if (iVar1 < (int)fVar4) {
    fVar4 = DAT_001a3634;
  }
  *param_1 = fVar4;
  uVar2 = FUN_003758b0(fVar3,-fVar5);
  *param_2 = uVar2;
  return;
}

