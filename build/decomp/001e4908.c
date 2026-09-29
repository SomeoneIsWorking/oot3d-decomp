// OoT3D decomp @ 001e4908  name=FUN_001e4908  size=152

undefined4 FUN_001e4908(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;

  uVar1 = DAT_001e49a0;
  if (param_2 == 1) {
    fVar2 = (float)FUN_003727f0();
    fVar3 = (float)FUN_00372674(uVar1);
    fVar4 = *(float *)(param_3 + 4);
    *(float *)(param_3 + 4) = fVar4 * fVar3 + *(float *)(param_3 + 8) * fVar2;
    *(float *)(param_3 + 8) = *(float *)(param_3 + 8) * fVar3 - fVar4 * fVar2;
    fVar4 = *(float *)(param_3 + 0x14);
    *(float *)(param_3 + 0x14) = fVar4 * fVar3 + *(float *)(param_3 + 0x18) * fVar2;
    *(float *)(param_3 + 0x18) = *(float *)(param_3 + 0x18) * fVar3 - fVar4 * fVar2;
    fVar4 = *(float *)(param_3 + 0x24);
    *(float *)(param_3 + 0x24) = fVar4 * fVar3 + *(float *)(param_3 + 0x28) * fVar2;
    *(float *)(param_3 + 0x28) = *(float *)(param_3 + 0x28) * fVar3 - fVar4 * fVar2;
  }
  return 0;
}
