// OoT3D decomp @ 003acd84  name=FUN_003acd84  size=84

void FUN_003acd84(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  
  fVar1 = DAT_003acdd8;
  if ((*(ushort *)(param_1 + 0x90) & 1) != 0) {
    fVar3 = *(float *)(param_1 + 100);
    if (fVar3 == DAT_003acdd8 || fVar3 < DAT_003acdd8 != (NAN(fVar3) || NAN(DAT_003acdd8))) {
      *(float *)(param_1 + 100) = DAT_003acdd8;
      uVar2 = DAT_003acddc;
      *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
      *(float *)(param_1 + 0x6c) = fVar1;
      FUN_003717ac(param_1 + 0x1a4,uVar2,2);
      *(undefined4 *)(param_1 + 0x22c) = DAT_003acde0;
    }
  }
  return;
}

