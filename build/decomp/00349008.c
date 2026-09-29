// OoT3D decomp @ 00349008  name=FUN_00349008  size=204

void FUN_00349008(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;

  fVar8 = DAT_003490d8;
  fVar1 = DAT_003490d4;
  iVar3 = (int)*(short *)(param_1 + 0xbe);
  fVar4 = (float)FUN_00338f60(iVar3);
  fVar5 = (float)FUN_002cfca0(iVar3);
  fVar6 = (float)FUN_00338f60(iVar3);
  fVar7 = (float)FUN_002cfca0(iVar3);
  fVar2 = DAT_003490dc;
  *(float *)(param_1 + 0x1f0) = *(float *)(param_1 + 0x28) + fVar4 * fVar1 + fVar5 * fVar8;
  *(undefined4 *)(param_1 + 500) = *(undefined4 *)(param_1 + 0x2c);
  *(float *)(param_1 + 0x1f8) = *(float *)(param_1 + 0x30) + (fVar6 * fVar8 - fVar7 * fVar1);
  iVar3 = (int)*(short *)(param_1 + 0xbe);
  fVar8 = (float)FUN_00338f60(iVar3);
  fVar4 = (float)FUN_002cfca0(iVar3);
  fVar5 = (float)FUN_00338f60(iVar3);
  fVar6 = (float)FUN_002cfca0(iVar3);
  *(float *)(param_1 + 0x248) = *(float *)(param_1 + 0x28) + fVar8 * fVar1 + fVar4 * fVar2;
  *(undefined4 *)(param_1 + 0x24c) = *(undefined4 *)(param_1 + 0x2c);
  *(float *)(param_1 + 0x250) = *(float *)(param_1 + 0x30) + (fVar5 * fVar2 - fVar6 * fVar1);
  return;
}
