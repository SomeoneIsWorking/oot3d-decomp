// OoT3D decomp @ 0034e27c  name=FUN_0034e27c  size=168

void FUN_0034e27c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;

  fVar7 = DAT_0034e324;
  iVar1 = *(int *)(param_2 + (uint)*(byte *)(param_2 + 0x2fa) * 4 + 0x2a4);
  uVar2 = *(undefined4 *)(iVar1 + 0x40);
  uVar3 = *(undefined4 *)(iVar1 + 0x44);
  *(undefined4 *)(param_2 + 0x2d4) = *(undefined4 *)(iVar1 + 0x3c);
  *(undefined4 *)(param_2 + 0x2d8) = uVar2;
  *(undefined4 *)(param_2 + 0x2dc) = uVar3;
  fVar8 = *(float *)(param_1 + 0x1b8) - *(float *)(param_2 + 0x2d4);
  fVar4 = *(float *)(param_1 + 0x1bc) - *(float *)(param_2 + 0x2d8);
  fVar6 = *(float *)(param_1 + 0x1c0) - *(float *)(param_2 + 0x2dc);
  fVar7 = fVar7 / SQRT(fVar8 * fVar8 + fVar4 * fVar4 + fVar6 * fVar6);
  fVar5 = *(float *)(DAT_0034e328 + 0x1c);
  *(float *)(param_2 + 0x2d4) = *(float *)(param_2 + 0x2d4) + fVar8 * fVar7 * fVar5;
  *(float *)(param_2 + 0x2d8) = *(float *)(param_2 + 0x2d8) + fVar4 * fVar7 * fVar5;
  *(float *)(param_2 + 0x2dc) = *(float *)(param_2 + 0x2dc) + fVar6 * fVar7 * fVar5;
  return;
}
