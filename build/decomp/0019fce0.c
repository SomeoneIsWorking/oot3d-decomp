// OoT3D decomp @ 0019fce0  name=FUN_0019fce0  size=196

void FUN_0019fce0(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];

  fVar1 = DAT_0019fda4;
  *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) + DAT_0019fda4;
  uVar3 = FUN_0036e81c(param_2 + 0xa98,param_1 + 0x7c,auStack_20,param_1,param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x84) = uVar3;
  iVar2 = FUN_0035e8a0(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30),param_2,
                       param_2 + 0xa98,param_1 + 0xc,auStack_1c);
  if (iVar2 != 0) {
    fVar4 = *(float *)(param_1 + 0xc) - DAT_0019fda8;
    if (*(float *)(param_1 + 0x84) < fVar4) {
      *(float *)(param_1 + 0xc) = fVar4;
      *(float *)(param_1 + 0x2c) = (fVar4 + *(float *)(param_1 + 0x84)) * fVar1;
      FUN_00364394(param_1);
      return;
    }
  }
  FUN_00374428(param_1);
  return;
}
