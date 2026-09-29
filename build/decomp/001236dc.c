// OoT3D decomp @ 001236dc  name=FUN_001236dc  size=392

void FUN_001236dc(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;

  FUN_003731e0(param_1 + 0x1a4);
  FUN_00370378(param_1 + 0xbc,0,0x800);
  uVar1 = DAT_00123868;
  fVar5 = *(float *)(param_1 + 0x1e0);
  FUN_003705a0(*(float *)(param_1 + 0x84) +
               (*(float *)(param_1 + 0xc) - *(float *)(param_1 + 0x84)) * DAT_00123864,DAT_00123868,
               param_1 + 0x7e0);
  fVar2 = DAT_0012386c;
  fVar4 = (float)FUN_00372674((fVar5 - DAT_0012386c) * DAT_00123870);
  iVar3 = DAT_00123878;
  *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x7e0) - fVar4 * DAT_00123874;
  if (iVar3 < (int)fVar5) {
    FUN_003705a0(DAT_00123880,DAT_0012387c,param_1 + 0x6c);
  }
  else {
    FUN_003705a0(uVar1,DAT_0012387c,param_1 + 0x6c);
  }
  if (*(short *)(param_1 + 0x22c) != 0) {
    *(short *)(param_1 + 0x22c) = *(short *)(param_1 + 0x22c) + -1;
  }
  if ((*(ushort *)(param_1 + 0x90) & 8) != 0) {
    *(undefined2 *)(param_1 + 0x22e) = *(undefined2 *)(param_1 + 0x82);
  }
  iVar3 = FUN_00375a18(param_1 + 0xbe,(int)*(short *)(param_1 + 0x22e),2,0x200,0x80);
  if (iVar3 == 0) {
    *(short *)(param_1 + 0x22e) = *(short *)(param_1 + 0x92) + -0x8000;
  }
  fVar4 = *(float *)(param_1 + 0xc);
  if (fVar4 < *(float *)(param_1 + 0x2c)) {
    if (fVar4 < *(float *)(param_1 + 0x84)) {
      FUN_00370350(DAT_00123884,param_1 + 0x1a4,2);
      *(float *)(param_1 + 0x6c) = fVar2;
      *(byte *)(param_1 + 0x7f8) = *(byte *)(param_1 + 0x7f8) | 1;
      *(undefined2 *)(param_1 + 0x22c) = 0;
      *(undefined4 *)(param_1 + 0x228) = DAT_00123888;
      goto LAB_00123844;
    }
    *(float *)(param_1 + 0x2c) = fVar4;
  }
  if (*(short *)(param_1 + 0x22c) != 0) {
    return;
  }
LAB_00123844:
  FUN_00364394(param_1);
  return;
}
