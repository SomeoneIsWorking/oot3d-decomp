// OoT3D decomp @ 0013f334  name=FUN_0013f334  size=188

void FUN_0013f334(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  float fVar3;

  fVar1 = DAT_0013f3f0;
  fVar3 = *(float *)(param_1 + 0x1e4) * DAT_0013f3f0;
  *(float *)(param_1 + 0xd64) = fVar3;
  if (*(float *)(param_1 + 0xd6c) * fVar1 <= fVar3) {
    *(undefined4 *)(param_1 + 0xd64) = DAT_0013f3f4;
  }
  FUN_003731e0(param_1 + 0x1a8);
  iVar2 = FUN_003769d8(param_2 + 0x28a0);
  if ((iVar2 == *(short *)(param_1 + 0xd2e)) && (iVar2 = FUN_00346964(param_2), iVar2 != 0)) {
    FUN_003725e0(param_2);
    *(undefined2 *)(param_1 + 0xd36) = 0;
    *(undefined4 *)(param_1 + 0x1a4) = DAT_0013f3f8;
    FUN_0036ae48(*(undefined4 *)(param_2 + *(short *)(DAT_0013f3fc + param_2) * 4 + 0xa54));
  }
  FUN_0035a3f8(param_1,param_2);
  FUN_0036d44c(param_1,param_2,0);
  return;
}
