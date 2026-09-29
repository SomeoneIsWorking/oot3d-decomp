// OoT3D decomp @ 003e01fc  name=FUN_003e01fc  size=152

void FUN_003e01fc(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;

  FUN_003705a0(uRam003e0298,uRam003e0294,param_1 + 0x6c);
  iVar1 = FUN_003705a0(uRam003e029c,*(undefined4 *)(param_1 + 0x6c),param_1 + 100);
  if (iVar1 == 0) {
    fVar2 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbc));
    fVar2 = fVar2 * *(float *)(param_1 + 100);
    fVar3 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbc));
    *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0xc) + *(float *)(param_1 + 100) * fVar3;
    fVar3 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
    *(float *)(param_1 + 0x28) = *(float *)(param_1 + 8) + fVar2 * fVar3;
    fVar3 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbe));
    *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x10) + fVar2 * fVar3;
    return;
  }
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  return;
}
