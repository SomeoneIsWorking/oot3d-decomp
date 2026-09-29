// OoT3D decomp @ 003c50e8  name=FUN_003c50e8  size=152

void FUN_003c50e8(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  short sVar4;
  int iVar5;

  iVar5 = FUN_003736fc(*(undefined4 *)(param_1 + 0x1ec),DAT_003c5180,param_1 + 0x1a4);
  uVar3 = DAT_003c5190;
  fVar1 = DAT_003c5184;
  if (iVar5 != 0) {
    *(undefined4 *)(param_1 + 100) = DAT_003c5188;
    *(float *)(param_1 + 0x58) = fVar1;
    uVar2 = DAT_003c518c;
    *(ushort *)(param_1 + 0x36) = *(ushort *)(param_1 + 0x36) ^ 0x8000;
    *(undefined4 *)(param_1 + 0x6c) = uVar2;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
    FUN_003717ac(param_1 + 0x1a4,uVar3,1);
    *(undefined4 *)(param_1 + 0x22c) = DAT_003c5194;
    return;
  }
  *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0x1e0);
  *(float *)(param_1 + 0x58) = (fVar1 / *(float *)(param_1 + 0x1f0)) * *(float *)(param_1 + 0x1e0);
  sVar4 = *(short *)(param_1 + 0xbe) + 0x2000;
  *(short *)(param_1 + 0xbe) = sVar4;
  *(short *)(param_1 + 0x36) = sVar4;
  return;
}
