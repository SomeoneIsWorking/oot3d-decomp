// OoT3D decomp @ 00282cc8  name=FUN_00282cc8  size=424

void FUN_00282cc8(int param_1,int param_2)

{
  short sVar1;
  uint in_fpscr;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_58 [4];
  float local_48;
  float local_40;
  float local_38;
  float local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  float local_1c;

  if (*(int *)(param_1 + 0x918) == DAT_00282e70) {
    local_58[0] = 2.8026e-43;
    local_58[1] = 0.0;
    FUN_0036f410(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                 *(undefined4 *)(param_1 + 0x30),param_1 + 0x95c,*(undefined1 *)(param_1 + 0x92a),
                 *(undefined1 *)(param_1 + 0x92b),*(undefined1 *)(param_1 + 0x92c));
    *(undefined1 *)(*(int *)(param_1 + 0x94c) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x94c),param_1 + 0x148);
    FUN_00372170(*(undefined4 *)(param_1 + 0x94c),0);
    return;
  }
  local_28 = *DAT_00282e74;
  uStack_24 = DAT_00282e74[1];
  uStack_20 = DAT_00282e74[2];
  local_1c = (float)VectorUnsignedToFloat
                              ((uint)*(byte *)(param_1 + 0x929),(byte)(in_fpscr >> 0x15) & 3);
  local_1c = local_1c * DAT_00282e78;
  FUN_00357388(param_1,&local_28,4,2);
  FUN_00372224(local_58,param_1 + 0x148);
  sVar1 = FUN_0036e70c(*(undefined4 *)(param_2 + *(short *)(DAT_00282e7c + param_2) * 4 + 0xa54));
  fVar2 = (float)VectorSignedToFloat((int)(short)(sVar1 + -0x8000),(byte)(in_fpscr >> 0x15) & 3);
  fVar2 = fVar2 * DAT_00282e80;
  if (fVar2 != DAT_00282e84) {
    fVar3 = (float)FUN_003727f0();
    fVar2 = (float)FUN_00372674(fVar2);
    fVar4 = local_58[0] * fVar3;
    local_58[0] = local_58[0] * fVar2 - local_58[2] * fVar3;
    local_58[2] = fVar4 + local_58[2] * fVar2;
    fVar4 = local_48 * fVar3;
    local_48 = local_48 * fVar2 - local_40 * fVar3;
    local_40 = fVar4 + local_40 * fVar2;
    fVar4 = local_38 * fVar3;
    local_38 = local_38 * fVar2 - local_30 * fVar3;
    local_30 = fVar4 + local_30 * fVar2;
  }
  *(undefined1 *)(*(int *)(param_1 + 0x950) + 0xac) = 1;
  FUN_003721e0(*(undefined4 *)(param_1 + 0x950),local_58);
  FUN_00372170(*(undefined4 *)(param_1 + 0x950),1);
  return;
}
