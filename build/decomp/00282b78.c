// OoT3D decomp @ 00282b78  name=FUN_00282b78  size=296

void FUN_00282b78(int param_1,int param_2)

{
  short sVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  float fVar7;

  FUN_003731e0(param_1 + 0x1a4);
  (**(code **)(param_1 + 0x8dc))(param_1,param_2);
  FUN_00376864(param_1);
  fVar6 = DAT_00282ca8;
  fVar2 = DAT_00282ca4;
  fVar5 = DAT_00282ca0;
  if (*(short *)(param_1 + 0x8e2) == 0) {
    *(undefined2 *)(param_1 + 0x8e2) = 0x30;
  }
  sVar1 = *(short *)(param_1 + 0x8e2) + -1;
  *(short *)(param_1 + 0x8e2) = sVar1;
  fVar7 = (float)VectorSignedToFloat((int)sVar1,(byte)(in_fpscr >> 0x15) & 3);
  if (sVar1 < 1) {
    fVar6 = fVar7 * fVar5 * fVar2 - fVar6;
  }
  else {
    fVar6 = fVar6 + fVar7 * fVar5 * fVar2;
  }
  fVar5 = (float)FUN_002cfca0((int)(short)((int)fVar6 << 0xb));
  uVar4 = DAT_00282cb8;
  uVar3 = DAT_00282cb0;
  *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x8f0) + fVar5 * DAT_00282cac;
  FUN_00376340(uVar4,DAT_00282cb4,uVar3,param_2,param_1,4);
  FUN_0037322c(DAT_00282cbc,param_1);
  FUN_0037632c(param_1);
  FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x914);
  uVar3 = DAT_00282cc4;
  if (*(char *)(DAT_00282cc0 + param_2) == '\0') {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffff7e;
    *(undefined4 *)(param_1 + 200) = 0;
    return;
  }
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x81;
  *(undefined4 *)(param_1 + 200) = uVar3;
  return;
}
