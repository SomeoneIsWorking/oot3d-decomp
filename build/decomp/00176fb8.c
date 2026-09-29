// OoT3D decomp @ 00176fb8  name=FUN_00176fb8  size=236

void FUN_00176fb8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;

  FUN_0036b96c();
  uVar2 = DAT_001770a8;
  iVar1 = DAT_001770a4;
  fVar7 = *(float *)(param_1 + 0x28) - *(float *)(param_1 + 8);
  fVar4 = *(float *)(param_1 + 0x2c) - *(float *)(param_1 + 0xc);
  fVar5 = *(float *)(param_1 + 0x30) - *(float *)(param_1 + 0x10);
  if (*(float *)(DAT_001770a4 + (*(ushort *)(param_1 + 0x1c) & 0xff) * 4) <
      SQRT(fVar7 * fVar7 + fVar4 * fVar4 + fVar5 * fVar5)) {
    fVar4 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0x36));
    fVar7 = *(float *)(iVar1 + (*(ushort *)(param_1 + 0x1c) & 0xff) * 4);
    fVar5 = (float)FUN_00338f60((int)*(short *)(param_1 + 0x36));
    uVar3 = DAT_001770b0;
    uVar2 = DAT_001770ac;
    fVar6 = *(float *)(iVar1 + (*(ushort *)(param_1 + 0x1c) & 0xff) * 4);
    *(float *)(param_1 + 0x28) = *(float *)(param_1 + 8) + fVar4 * fVar7;
    *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x10) + fVar5 * fVar6;
    *(undefined4 *)(param_1 + 0x1bc) = uVar2;
    FUN_00375bcc(param_1,uVar3);
    return;
  }
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xefc7ffff;
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  return;
}
