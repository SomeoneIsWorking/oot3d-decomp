// OoT3D decomp @ 0020fe10  name=FUN_0020fe10  size=256

void FUN_0020fe10(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;

  uVar2 = 0xb;
  iVar3 = *(int *)(DAT_0020ff10 + param_2);
  if ((*(ushort *)(param_1 + 0x1c) & 0x8000) != 0) {
    uVar2 = 0xd;
  }
  TorchAnimationModel_0034f94c(param_1 + 0x210,param_2,param_1,uVar2);
  FUN_00372d4c(DAT_0020ff1c,DAT_0020ff14,param_1 + 0xbc,DAT_0020ff18);
  FUN_00353dd0(param_2,param_1 + 0x1a8);
  FUN_00353d24(param_2,param_1 + 0x1a8,param_1,DAT_0020ff20);
  FUN_00350318(param_1 + 0xa0,DAT_0020ff24 + 10);
  uVar1 = DAT_0020ff30;
  uVar2 = DAT_0020ff28;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  *(undefined4 *)(param_1 + 0x70) = uVar2;
  *(undefined4 *)(param_1 + 0x6c) = DAT_0020ff2c;
  *(undefined4 *)(param_1 + 100) = uVar1;
  fVar6 = *(float *)(iVar3 + 0x28) - *(float *)(param_1 + 0x28);
  fVar4 = *(float *)(iVar3 + 0x2c) - *(float *)(param_1 + 0x2c);
  fVar5 = *(float *)(iVar3 + 0x30) - *(float *)(param_1 + 0x30);
  *(float *)(param_1 + 0x200) = SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5);
  *(undefined4 *)(param_1 + 0x204) = DAT_0020ff34;
  fVar4 = (float)FUN_00371e50();
  *(short *)(param_1 + 0x20c) = (short)(int)fVar4 + -0x19;
  *(undefined4 *)(param_1 + 0x1a4) = DAT_0020ff38;
  return;
}
