// OoT3D decomp @ 00228cb4  name=FUN_00228cb4  size=604

void FUN_00228cb4(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint in_fpscr;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_38;
  float local_34;
  float local_30;
  float local_28;
  float local_24;
  float local_20;

  FUN_00372224(&local_48,param_1 + 0x148);
  fVar1 = DAT_00228f14;
  iVar2 = DAT_00228f10;
  if (*(int *)(param_1 + 0x1a4) != DAT_00228f10) {
    FUN_00371fac(&local_48,param_2 + 0x2fc);
    fVar9 = *(float *)(param_1 + 0x298) + fVar1;
    fVar11 = *(float *)(param_1 + 0x29c) + fVar1;
    local_48 = local_48 * fVar9;
    local_38 = local_38 * fVar9;
    local_28 = local_28 * fVar9;
    local_44 = local_44 * fVar11;
    local_34 = local_34 * fVar11;
    local_24 = local_24 * fVar11;
    local_40 = local_40 * fVar1;
    local_30 = local_30 * fVar1;
    local_20 = local_20 * fVar1;
    fVar9 = (float)VectorUnsignedToFloat
                             (*(undefined4 *)(param_1 + 0x2dc),(byte)(in_fpscr >> 0x15) & 3);
    FUN_00371234(*(float *)(param_1 + 0x288) * fVar9 * DAT_00228f18,&local_48,1);
    fVar9 = *(float *)(param_1 + 0x28c) + fVar1;
    local_48 = local_48 * fVar9;
    local_38 = local_38 * fVar9;
    local_28 = local_28 * fVar9;
    local_44 = local_44 * fVar1;
    local_34 = local_34 * fVar1;
    local_24 = local_24 * fVar1;
    local_40 = local_40 * fVar1;
    local_30 = local_30 * fVar1;
    local_20 = local_20 * fVar1;
    fVar9 = (float)VectorUnsignedToFloat
                             (*(undefined4 *)(param_1 + 0x2dc),(byte)(in_fpscr >> 0x15) & 3);
    FUN_00371234(*(float *)(param_1 + 0x288) * fVar9 * DAT_00228f1c,&local_48,1);
    *(undefined1 *)(*(int *)(param_1 + 0x2d4) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x2d4),&local_48);
    FUN_00372170(*(undefined4 *)(param_1 + 0x2d4),0);
  }
  if (*(int *)(param_1 + 0x1a4) != iVar2) {
    *(float *)(param_1 + 0xcc) = (*(float *)(param_1 + 0x298) + fVar1) * DAT_00228f20;
    iVar2 = *(int *)(param_1 + 0x1c4);
    local_54 = *(undefined4 *)(iVar2 + 0x28);
    local_50 = *(undefined4 *)(iVar2 + 0x2c);
    local_4c = *(undefined4 *)(iVar2 + 0x30);
    FUN_003735ac(&local_60,&local_48,&local_54);
    *(undefined4 *)(iVar2 + 0x38) = local_60;
    *(undefined4 *)(iVar2 + 0x3c) = uStack_5c;
    *(undefined4 *)(iVar2 + 0x40) = uStack_58;
    uVar10 = VectorSignedToFloat((int)(short)(int)(*(float *)(iVar2 + 0x34) *
                                                  (*(float *)(param_1 + 0x298) + fVar1)),
                                 (byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(iVar2 + 0x44) = uVar10;
    iVar3 = *(int *)(param_1 + 0x1c4);
    uVar10 = *(undefined4 *)(iVar2 + 0x2c);
    uVar4 = *(undefined4 *)(iVar2 + 0x30);
    uVar5 = *(undefined4 *)(iVar2 + 0x34);
    uVar6 = *(undefined4 *)(iVar2 + 0x38);
    uVar7 = *(undefined4 *)(iVar2 + 0x3c);
    uVar8 = *(undefined4 *)(iVar2 + 0x40);
    *(undefined4 *)(iVar3 + 0x78) = *(undefined4 *)(iVar2 + 0x28);
    *(undefined4 *)(iVar3 + 0x7c) = uVar10;
    *(undefined4 *)(iVar3 + 0x80) = uVar4;
    *(undefined4 *)(iVar3 + 0x84) = uVar5;
    *(undefined4 *)(iVar3 + 0x88) = uVar6;
    *(undefined4 *)(iVar3 + 0x8c) = uVar7;
    *(undefined4 *)(iVar3 + 0x90) = uVar8;
    uVar10 = *(undefined4 *)(iVar2 + 0x48);
    uVar4 = *(undefined4 *)(iVar2 + 0x4c);
    *(undefined4 *)(iVar3 + 0x94) = *(undefined4 *)(iVar2 + 0x44);
    *(undefined4 *)(iVar3 + 0x98) = uVar10;
    *(undefined4 *)(iVar3 + 0x9c) = uVar4;
  }
  return;
}
