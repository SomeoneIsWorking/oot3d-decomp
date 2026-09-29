// OoT3D decomp @ 0034dd3c  name=FUN_0034dd3c  size=136

int FUN_0034dd3c(undefined4 param_1,int param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;

  fVar3 = *(float *)(param_2 + 0x12c8) - *(float *)(param_2 + 0x28);
  fVar2 = *(float *)(param_2 + 0x12d0) - *(float *)(param_2 + 0x30);
  iVar4 = (int)SQRT(fVar3 * fVar3 + fVar2 * fVar2);
  iVar1 = FUN_003758b0();
  if (iVar4 < param_4) {
    *param_3 = DAT_0034ddc4;
    iVar1 = (int)*(short *)(param_2 + 0xbe);
  }
  iVar1 = FUN_0033befc(*param_3,param_1,param_2,0,iVar1,2);
  if (iVar1 != 0) {
    iVar4 = 0;
  }
  return iVar4;
}
