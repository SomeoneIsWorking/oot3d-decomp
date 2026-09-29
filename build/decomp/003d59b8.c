// OoT3D decomp @ 003d59b8  name=FUN_003d59b8  size=124

void FUN_003d59b8(int param_1,undefined4 param_2)

{
  short sVar1;
  float fVar2;
  int iVar3;

  FUN_003731e0(param_1 + 0x1a4);
  fVar2 = DAT_003d5a34;
  iVar3 = *(byte *)(param_1 + 0xd0) - 5;
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  *(char *)(param_1 + 0xd0) = (char)iVar3;
  *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) - fVar2;
  if ((*(short *)(param_1 + 0x22c) != 0) &&
     (sVar1 = *(short *)(param_1 + 0x22c) + -1, *(short *)(param_1 + 0x22c) = sVar1, sVar1 != 0)) {
    return;
  }
  FUN_00374444(param_2,param_1,param_1 + 0x28,0xe0);
  FUN_00374428(param_1);
  return;
}
