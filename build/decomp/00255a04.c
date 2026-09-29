// OoT3D decomp @ 00255a04  name=FUN_00255a04  size=456

void FUN_00255a04(int param_1,int param_2)

{
  float fVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 extraout_s0;
  undefined4 uVar9;
  float fVar10;
  float local_54;
  float local_50;
  float local_4c;
  float local_44;
  float local_40;
  float local_3c;
  float local_34;
  float local_30;
  float local_2c;

  FUN_00372224(&local_54,param_1 + 0x148);
  sVar2 = FUN_0036e70c(*(undefined4 *)(param_2 + *(short *)(param_2 + 0xa64) * 4 + 0xa54));
  fVar1 = DAT_00255bd0;
  fVar5 = (float)VectorSignedToFloat((int)(short)((sVar2 - *(short *)(param_1 + 0xbe)) + -0x8000),
                                     (byte)(in_fpscr >> 0x15) & 3);
  fVar5 = fVar5 * DAT_00255bcc;
  if (fVar5 != DAT_00255bd0) {
    fVar6 = (float)FUN_003727f0(fVar5);
    fVar5 = (float)FUN_00372674(fVar5);
    fVar10 = local_54 * fVar6;
    local_54 = local_54 * fVar5 - local_4c * fVar6;
    local_4c = fVar10 + local_4c * fVar5;
    fVar10 = local_44 * fVar6;
    local_44 = local_44 * fVar5 - local_3c * fVar6;
    local_3c = fVar10 + local_3c * fVar5;
    fVar10 = local_34 * fVar6;
    local_34 = local_34 * fVar5 - local_2c * fVar6;
    local_2c = fVar10 + local_2c * fVar5;
  }
  uVar9 = DAT_00255bd4;
  iVar3 = *(int *)(param_2 + *(short *)(param_2 + 0xa66) * 4 + 0xa54);
  if ((iVar3 != 0) && (*(short *)(iVar3 + 0x18a) == 0x19)) {
    fVar7 = (float)FUN_003727f0(DAT_00255bd4);
    fVar8 = (float)FUN_00372674(uVar9);
    fVar5 = local_4c * fVar7;
    local_4c = local_4c * fVar8 - local_50 * fVar7;
    fVar6 = local_3c * fVar7;
    local_3c = local_3c * fVar8 - local_40 * fVar7;
    fVar10 = local_2c * fVar7;
    local_2c = local_2c * fVar8 - local_30 * fVar7;
    local_50 = local_50 * fVar8 + fVar5;
    local_40 = local_40 * fVar8 + fVar6;
    local_30 = local_30 * fVar8 + fVar10;
  }
  *(undefined1 *)(*(int *)(param_1 + 0x1e8) + 0xac) = 1;
  FUN_003721e0(*(undefined4 *)(param_1 + 0x1e8),&local_54);
  *(undefined1 *)(*(int *)(param_1 + 0x1e8) + 0xad) = 1;
  iVar3 = FUN_003695f8();
  uVar9 = extraout_s0;
  if (iVar3 == 0) {
    uVar9 = DAT_00255bd8;
  }
  iVar4 = *(int *)(*(int *)(param_1 + 0x1e8) + 0xc);
  if (iVar3 == 0) {
    *(undefined4 *)(iVar4 + 0xc) = uVar9;
  }
  else {
    *(float *)(iVar4 + 0xc) = fVar1;
  }
  FUN_00372170(*(undefined4 *)(param_1 + 0x1e8),0);
  return;
}
