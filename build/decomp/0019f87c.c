// OoT3D decomp @ 0019f87c  name=FUN_0019f87c  size=152

void FUN_0019f87c(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;

  iVar2 = DAT_0019f918;
  fVar1 = DAT_0019f914;
  *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x1c4) + DAT_0019f914;
  uVar3 = DAT_0019f91c;
  if (*(int *)(param_1 + 0x1c4) < iVar2) {
    FUN_0036e168(DAT_0019f924,DAT_0019f928,DAT_0019f924,DAT_0019f920,param_1 + 0x1c4);
    *(short *)(*(int *)(*(int *)(param_2 + 0xa98) + 0x28) + 0x12) = (short)DAT_0019f92c;
    *(short *)(*(int *)(*(int *)(param_2 + 0xa98) + 0x28) + 0x22) =
         (short)(int)*(float *)(param_1 + 0x2c);
    *(short *)(*(int *)(*(int *)(param_2 + 0xa98) + 0x28) + 0x32) =
         (short)(int)*(float *)(param_1 + 0x2c);
  }
  else {
    *(float *)(param_1 + 0x2c) = fVar1;
    *(undefined4 *)(param_1 + 0x1bc) = uVar3;
  }
  return;
}
