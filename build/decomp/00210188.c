// OoT3D decomp @ 00210188  name=FUN_00210188  size=536

void FUN_00210188(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  float local_60;
  float local_5c;
  float local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;

  fVar7 = DAT_002103a0;
  iVar4 = FUN_003695f8();
  fVar1 = DAT_002103a4;
  iVar5 = *(int *)(param_1 + 0x1e8);
  if (iVar4 != 0) {
    fVar7 = DAT_002103a4;
  }
  iVar4 = 0;
  if (iVar5 != 0) {
    iVar4 = *(int *)(iVar5 + 0xc);
  }
  if (iVar5 != 0) {
    *(float *)(iVar4 + 0xc) = fVar7;
  }
  iVar5 = *(int *)(param_1 + 0x1ec);
  iVar4 = 0;
  if (iVar5 != 0) {
    iVar4 = *(int *)(iVar5 + 0xc);
  }
  if (iVar5 != 0) {
    *(float *)(iVar4 + 0xc) = fVar7;
  }
  FUN_00372224(&local_54,param_1 + 0x148);
  local_58 = *(float *)(param_1 + 0x1fc);
  local_60 = *(float *)(param_1 + 0x1f0) * local_58;
  local_5c = *(float *)(param_1 + 500) * local_58;
  local_58 = *(float *)(param_1 + 0x1f8) * local_58;
  FUN_00372070(&local_54,&local_54,&local_60);
  fVar3 = DAT_002103b0;
  fVar2 = DAT_002103ac;
  fVar7 = DAT_002103a8;
  fVar6 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x1cc),(byte)(in_fpscr >> 0x15) & 3);
  FUN_003735e8(fVar6 * DAT_002103a8 * DAT_002103ac * DAT_002103b0,&local_54,1);
  *(undefined1 *)(*(int *)(param_1 + 0x1e8) + 0xac) = 1;
  FUN_003721e0(*(undefined4 *)(param_1 + 0x1e8),&local_54);
  FUN_00372170(*(undefined4 *)(param_1 + 0x1e8),0);
  if (*(int *)(param_1 + 0x1ec) != 0) {
    local_54 = *(undefined4 *)(param_1 + 0x148);
    uStack_50 = *(undefined4 *)(param_1 + 0x14c);
    uStack_4c = *(undefined4 *)(param_1 + 0x150);
    uStack_48 = *(undefined4 *)(param_1 + 0x154);
    uStack_44 = *(undefined4 *)(param_1 + 0x158);
    local_40 = *(undefined4 *)(param_1 + 0x15c);
    uStack_3c = *(undefined4 *)(param_1 + 0x160);
    uStack_38 = *(undefined4 *)(param_1 + 0x164);
    uStack_34 = *(undefined4 *)(param_1 + 0x168);
    uStack_30 = *(undefined4 *)(param_1 + 0x16c);
    local_2c = *(undefined4 *)(param_1 + 0x170);
    uStack_28 = *(undefined4 *)(param_1 + 0x174);
    local_58 = *(float *)(param_1 + 0x1fc);
    local_60 = *(float *)(param_1 + 0x1f0) * local_58;
    local_5c = *(float *)(param_1 + 500) * local_58;
    local_58 = *(float *)(param_1 + 0x1f8) * local_58;
    FUN_00372070(&local_54,&local_54,&local_60);
    if (*(short *)(param_1 + 0x1c) == 0x27) {
      fVar6 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x1cc),
                                         (byte)(in_fpscr >> 0x15) & 3);
      FUN_003735e8(fVar6 * fVar7 * fVar2 * fVar3,&local_54,1);
      local_60 = DAT_002103b4;
      local_5c = fVar1;
      local_58 = fVar1;
      FUN_00372070(&local_54,&local_54,&local_60);
      fVar7 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x1cc),
                                         (byte)(in_fpscr >> 0x15) & 3);
      FUN_003735e8(fVar7 * DAT_002103b8 * fVar2 * fVar3,&local_54,1);
      local_60 = DAT_002103bc;
      local_5c = fVar1;
      local_58 = fVar1;
      FUN_00372070(&local_54,&local_54,&local_60);
    }
    *(undefined1 *)(*(int *)(param_1 + 0x1ec) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x1ec),&local_54);
    FUN_00372170(*(undefined4 *)(param_1 + 0x1ec),0);
  }
  return;
}
