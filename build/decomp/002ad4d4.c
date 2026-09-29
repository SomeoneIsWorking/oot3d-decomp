// OoT3D decomp @ 002ad4d4  name=FUN_002ad4d4  size=300

void FUN_002ad4d4(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_4c [2];
  float local_44;
  float local_3c;
  float local_34;
  float local_2c;
  float local_24;

  FUN_00372224(local_4c,param_1 + 0x148);
  fVar6 = DAT_002ad600;
  iVar2 = FUN_003695f8();
  fVar4 = DAT_002ad604;
  if (iVar2 != 0) {
    fVar6 = DAT_002ad604;
  }
  sVar1 = FUN_0036e70c(*(undefined4 *)(param_2 + *(short *)(DAT_002ad608 + param_2) * 4 + 0xa54));
  fVar3 = (float)VectorSignedToFloat((int)(short)((sVar1 - *(short *)(param_1 + 0xbe)) + -0x8000),
                                     (byte)(in_fpscr >> 0x15) & 3);
  fVar3 = fVar3 * DAT_002ad60c;
  if (fVar3 != fVar4) {
    fVar4 = (float)FUN_003727f0(fVar3);
    fVar3 = (float)FUN_00372674(fVar3);
    fVar5 = local_4c[0] * fVar4;
    local_4c[0] = local_4c[0] * fVar3 - local_44 * fVar4;
    local_44 = fVar5 + local_44 * fVar3;
    fVar5 = local_3c * fVar4;
    local_3c = local_3c * fVar3 - local_34 * fVar4;
    local_34 = fVar5 + local_34 * fVar3;
    fVar5 = local_2c * fVar4;
    local_2c = local_2c * fVar3 - local_24 * fVar4;
    local_24 = fVar5 + local_24 * fVar3;
  }
  if (*(int *)(param_1 + 0x1a4) != 0) {
    *(float *)(*(int *)(*(int *)(param_1 + 0x1a4) + 0xc) + 0xc) = fVar6;
    *(undefined1 *)(*(int *)(param_1 + 0x1a4) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x1a4),local_4c);
    FUN_00372170(*(undefined4 *)(param_1 + 0x1a4),0);
  }
  return;
}
