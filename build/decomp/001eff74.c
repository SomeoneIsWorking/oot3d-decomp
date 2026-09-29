// OoT3D decomp @ 001eff74  name=FUN_001eff74  size=388

void FUN_001eff74(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;

  FUN_00372224(&local_54,param_1 + 0x148);
  fVar2 = DAT_001f00f8;
  iVar3 = FUN_003695f8();
  fVar1 = fVar2;
  if (iVar3 != 0) {
    fVar1 = DAT_001f00fc;
  }
  if ((*(ushort *)(param_1 + 0x2ec) & 1) == 0) {
    if (*(short *)(param_1 + 0x1c) < 9) {
      iVar3 = *(int *)(param_1 + 0x35c);
      *(float *)(*(int *)(iVar3 + 0xc) + 0xc) = fVar2;
      iVar4 = *(int *)(param_1 + 0x360);
      *(float *)(*(int *)(iVar4 + 0xc) + 0xc) = fVar2;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x318);
      *(float *)(*(int *)(iVar3 + 0xc) + 0xc) = fVar2;
      iVar4 = *(int *)(param_1 + 0x31c);
      *(float *)(*(int *)(iVar4 + 0xc) + 0xc) = fVar2;
    }
    FUN_0036c174(&local_54,&local_54,param_2 + 0x2fc);
    fVar2 = DAT_001f0100;
    fVar5 = (float)VectorUnsignedToFloat
                             ((uint)*(ushort *)(param_1 + 0x2f0) * 6,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00371234(fVar5 * fVar1 * DAT_001f0100 * DAT_001f0104,&local_54,1);
    if (iVar3 != 0) {
      *(undefined1 *)(iVar3 + 0xac) = 1;
      FUN_003721e0(iVar3,&local_54);
      FUN_00372170(iVar3,0);
    }
    local_54 = *(undefined4 *)(param_1 + 0x148);
    uStack_50 = *(undefined4 *)(param_1 + 0x14c);
    uStack_4c = *(undefined4 *)(param_1 + 0x150);
    uStack_48 = *(undefined4 *)(param_1 + 0x154);
    uStack_44 = *(undefined4 *)(param_1 + 0x158);
    uStack_40 = *(undefined4 *)(param_1 + 0x15c);
    local_3c = *(undefined4 *)(param_1 + 0x160);
    uStack_38 = *(undefined4 *)(param_1 + 0x164);
    uStack_34 = *(undefined4 *)(param_1 + 0x168);
    uStack_30 = *(undefined4 *)(param_1 + 0x16c);
    uStack_2c = *(undefined4 *)(param_1 + 0x170);
    uStack_28 = *(undefined4 *)(param_1 + 0x174);
    FUN_0036c174(&local_54,&local_54,param_2 + 0x2fc);
    fVar5 = (float)VectorUnsignedToFloat
                             ((uint)*(ushort *)(param_1 + 0x2f0) * 6,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00371234(fVar5 * fVar1 * fVar2 * DAT_001f0108,&local_54,1);
    if (iVar4 != 0) {
      *(undefined1 *)(iVar4 + 0xac) = 1;
      FUN_003721e0(iVar4,&local_54);
      FUN_00372170(iVar4,0);
    }
  }
  return;
}
