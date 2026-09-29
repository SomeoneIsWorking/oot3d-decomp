// OoT3D decomp @ 0014d304  name=FUN_0014d304  size=256

void FUN_0014d304(int param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  uint in_fpscr;
  uint uVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;

  fVar1 = DAT_0014d404;
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x1b0);
  fVar4 = *(float *)(param_1 + 0x6c) + *(float *)(param_1 + 0x1a8);
  *(float *)(param_1 + 0x6c) = fVar4;
  uVar6 = DAT_0014d418;
  fVar2 = DAT_0014d414;
  fVar5 = DAT_0014d408;
  if (((uint)fVar4 <= (uint)fVar1) && (fVar5 = fVar4, DAT_0014d40c < (int)fVar4)) {
    fVar5 = DAT_0014d410;
  }
  *(float *)(param_1 + 0x6c) = fVar5;
  FUN_0036e168(fVar2,uVar6,uVar6,fVar2,param_1 + 0x6c);
  uVar3 = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 0x6c) == fVar2) << 0x1e;
  if (!SUB41(uVar3 >> 0x1e,0)) {
    FUN_0037547c(DAT_0014d424,param_1 + 0x28,4,DAT_0014d420,DAT_0014d420,DAT_0014d41c);
  }
  *(float *)(param_1 + 0x1ac) = fVar2;
  *(float *)(param_1 + 0x1a8) = fVar2;
  FUN_00376864(param_1);
  uVar8 = VectorSignedToFloat((int)*(short *)(param_1 + 0xb0),(byte)(uVar3 >> 0x15) & 3);
  uVar7 = VectorSignedToFloat((int)*(short *)(param_1 + 0xb0),(byte)(uVar3 >> 0x15) & 3);
  uVar6 = VectorSignedToFloat((int)*(short *)(param_1 + 0xb2),(byte)(uVar3 >> 0x15) & 3);
  FUN_00376340(uVar6,uVar7,uVar8,param_2,param_1,0x1d);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x30);
  return;
}
