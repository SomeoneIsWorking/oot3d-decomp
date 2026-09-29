// OoT3D decomp @ 0015441c  name=FUN_0015441c  size=132

void FUN_0015441c(int param_1,int param_2)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;

  fVar1 = DAT_001544a4;
  if (*(float *)(param_1 + 0x1a8) != DAT_001544a4) {
    *(uint *)(*(int *)(DAT_001544a0 + param_2) + 0x1714) =
         *(uint *)(*(int *)(DAT_001544a0 + param_2) + 0x1714) & 0xffffffef;
    *(float *)(param_1 + 0x1a8) = fVar1;
  }
  iVar3 = FUN_003705a0(*(undefined4 *)(param_1 + 0xc),DAT_001544a8,param_1 + 0x2c);
  if (iVar3 != 0) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffffef;
    FUN_0036df4c(param_1 + 0x1c0,param_1 + 8);
    uVar2 = DAT_001544ac;
    *(float *)(param_1 + 0x6c) = fVar1;
    *(undefined4 *)(param_1 + 0x1bc) = uVar2;
  }
  return;
}
