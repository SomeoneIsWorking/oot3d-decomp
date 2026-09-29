// OoT3D decomp @ 00127448  name=FUN_00127448  size=548

void FUN_00127448(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;

  if (*(short *)(param_1 + 0x1c) != 0) {
    *(short *)(param_1 + 0x1c) = *(short *)(param_1 + 0x1c) + -1;
  }
  FUN_003731e0(param_1 + 0x1a4);
  uVar1 = DAT_001275f0;
  iVar2 = FUN_003736fc(DAT_001275f4,DAT_001275f0,param_1 + 0x1a4);
  if ((iVar2 != 0) || (iVar2 = FUN_003736fc(DAT_001275f8,uVar1,param_1 + 0x1a4), iVar2 != 0)) {
    FUN_00375bcc(param_1,DAT_001275fc);
  }
  iVar2 = 0x14 - *(short *)(param_1 + 0x1c);
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  iVar2 = 0x14 - iVar2;
  if (10 < iVar2) {
    iVar2 = 10;
  }
  fVar5 = (float)VectorSignedToFloat(iVar2 << 1,(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(param_1 + 0x3a8) = *(float *)(DAT_00127600 + 0x20) + fVar5;
  *(short *)(param_1 + 0xbc) = (short)iVar2 * -0x100 + -0x4000;
  *(short *)(param_1 + 0xbe) = *(short *)(param_1 + 0xbe) + (short)iVar2 * 0x2c0;
  fVar5 = (float)FUN_002cfca0();
  *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0xc) + fVar5 * DAT_00127604;
  fVar5 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbc));
  fVar5 = fVar5 * DAT_00127608;
  fVar4 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
  *(float *)(param_1 + 0x28) = *(float *)(param_1 + 8) + fVar5 * fVar4;
  fVar4 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbe));
  *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x10) + fVar5 * fVar4;
  uVar1 = DAT_0012760c;
  if ((*(byte *)(param_1 + 0x3d1) & 2) != 0) {
    *(undefined2 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x70) = uVar1;
    uVar3 = DAT_00127618;
    *(undefined4 *)(param_1 + 100) = DAT_00127610;
    uVar1 = DAT_00127614;
    *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0xbe) + -0x8000;
    *(undefined4 *)(param_1 + 0x6c) = uVar1;
    FUN_00375bcc(param_1,uVar3);
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x30;
    *(undefined4 *)(param_1 + 0x228) = DAT_0012761c;
    FUN_00375b70(param_2,param_1);
    return;
  }
  if (*(short *)(param_1 + 0x1c) == 0) {
    if (*(int *)(param_1 + 0x228) != DAT_00180554) {
      FUN_0037572c(DAT_00180558,param_1);
      *(undefined1 *)(param_1 + 0x3d4) = 6;
      uVar1 = DAT_00180568;
      *(byte *)(param_1 + 0x3d1) = *(byte *)(param_1 + 0x3d1) & 0xfb;
      uVar3 = DAT_00180560;
      if (*(int *)(DAT_0018055c + 4) != 0) {
        uVar3 = DAT_00180564;
      }
      *(undefined4 *)(param_1 + 0x3e0) = uVar3;
      *(undefined4 *)(param_1 + 0x400) = uVar1;
      uVar1 = DAT_0018056c;
      *(undefined4 *)(param_1 + 0x404) = DAT_0018056c;
      *(undefined4 *)(param_1 + 0x3ac) = uVar1;
    }
    *(undefined2 *)(param_1 + 0x1c) = 0x28;
    *(undefined4 *)(param_1 + 0x228) = DAT_00180570;
    return;
  }
  return;
}
