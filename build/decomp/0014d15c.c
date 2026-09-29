// OoT3D decomp @ 0014d15c  name=FUN_0014d15c  size=404

void FUN_0014d15c(int param_1)

{
  float fVar1;
  uint in_fpscr;
  float fVar2;
  float fVar3;
  int local_30;
  float local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  float local_18;

  fVar1 = DAT_0014d2f0;
  local_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  local_18 = (float)VectorUnsignedToFloat
                              ((uint)*(byte *)(param_1 + 0x84a),(byte)(in_fpscr >> 0x15) & 3);
  local_18 = local_18 * DAT_0014d2f0;
  FUN_00357388(param_1,&local_24,4);
  local_2c = 0.0;
  local_30 = param_1;
  FUN_0035e240(param_1 + 0x1a4,param_1 + 0x148,0,DAT_0014d2f4);
  if (*(char *)(param_1 + 0x842) != '\0') {
    local_2c = -*(float *)(param_1 + 0xc4);
    local_30 = DAT_0014d2f8;
    local_28 = DAT_0014d2f8;
    FUN_00372070(param_1 + 0x148,param_1 + 0x148,&local_30);
    fVar2 = *(float *)(param_1 + 0x924) * DAT_0014d2fc;
    fVar3 = *(float *)(param_1 + 0x928) * DAT_0014d2fc;
    *(float *)(param_1 + 0x148) = *(float *)(param_1 + 0x148) * fVar2;
    *(float *)(param_1 + 0x158) = *(float *)(param_1 + 0x158) * fVar2;
    *(float *)(param_1 + 0x168) = *(float *)(param_1 + 0x168) * fVar2;
    *(float *)(param_1 + 0x14c) = *(float *)(param_1 + 0x14c) * fVar3;
    *(float *)(param_1 + 0x15c) = *(float *)(param_1 + 0x15c) * fVar3;
    *(float *)(param_1 + 0x16c) = *(float *)(param_1 + 0x16c) * fVar3;
    *(float *)(param_1 + 0x150) = *(float *)(param_1 + 0x150) * fVar2;
    *(float *)(param_1 + 0x160) = *(float *)(param_1 + 0x160) * fVar2;
    *(float *)(param_1 + 0x170) = *(float *)(param_1 + 0x170) * fVar2;
    FUN_003695cc(DAT_0014d300,DAT_0014d300,DAT_0014d300,*(float *)(param_1 + 0x92c) * fVar1,
                 *(undefined4 *)(param_1 + 0x930),0,4,2);
    *(undefined1 *)(*(int *)(param_1 + 0x930) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x930),param_1 + 0x148);
    FUN_00372170(*(undefined4 *)(param_1 + 0x930),0);
  }
  return;
}
