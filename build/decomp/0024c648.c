// OoT3D decomp @ 0024c648  name=FUN_0024c648  size=100

void FUN_0024c648(int param_1,int param_2)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;

  fVar3 = (float)FUN_002cfca0((int)(short)((short)*(undefined4 *)(param_2 + 0x5bf4) *
                                          (short)DAT_0024c6ac));
  uVar2 = DAT_0024c6b4;
  fVar1 = DAT_0024c6b0;
  *(short *)(param_1 + 0xbc) = (short)(int)(fVar3 * DAT_0024c6b0);
  fVar3 = (float)FUN_00338f60((int)(short)((short)*(undefined4 *)(param_2 + 0x5bf4) * (short)uVar2))
  ;
  *(short *)(param_1 + 0xc0) = (short)(int)(fVar3 * fVar1);
  return;
}
