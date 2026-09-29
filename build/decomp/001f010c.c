// OoT3D decomp @ 001f010c  name=FUN_001f010c  size=416

void FUN_001f010c(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  float local_64;
  float local_60;
  float local_54;
  float local_50;
  float local_44;
  float local_40;

  sVar1 = *(short *)(DAT_001f02ac + param_1);
  FUN_00372224(&local_64,param_1 + 0x148);
  uVar12 = DAT_001f02b0;
  iVar5 = FUN_003695f8();
  uVar2 = DAT_001f02b8;
  if (iVar5 != 0) {
    uVar12 = DAT_001f02b4;
  }
  if (sVar1 == 0) {
    uVar12 = DAT_001f02b4;
  }
  FUN_00369014(DAT_001f02b8,&local_64,1);
  local_84 = DAT_001f02c0;
  uStack_80 = DAT_001f02c4;
  uStack_7c = DAT_001f02c8;
  uStack_78 = DAT_001f02cc;
  uStack_74 = DAT_001f02d0;
  uStack_70 = DAT_001f02d4;
  uStack_6c = DAT_001f02d8;
  uStack_68 = DAT_001f02dc;
  FUN_00371234(uVar2,&local_64,1,DAT_001f02c0,DAT_001f02c4,DAT_001f02bc);
  uVar4 = DAT_001f02e8;
  fVar3 = DAT_001f02e4;
  uVar2 = DAT_001f02e0;
  iVar5 = 0;
  iVar7 = 0;
  do {
    fVar8 = (float)FUN_003727f0(uVar2);
    fVar9 = (float)FUN_00372674(uVar2);
    fVar11 = local_54;
    fVar10 = local_64;
    iVar6 = param_1 + iVar5 * 4;
    local_64 = local_64 * fVar9 + local_60 * fVar8;
    local_60 = local_60 * fVar9 - fVar10 * fVar8;
    local_54 = local_54 * fVar9 + local_50 * fVar8;
    local_50 = local_50 * fVar9 - fVar11 * fVar8;
    fVar10 = local_44 * fVar8;
    local_44 = local_44 * fVar9 + local_40 * fVar8;
    local_40 = local_40 * fVar9 - fVar10;
    if (*(int *)(iVar6 + 0x2f8) != 0) {
      fVar10 = (float)VectorUnsignedToFloat
                                ((uint)*(byte *)((int)&local_84 + iVar7 + 1),
                                 (byte)(in_fpscr >> 0x15) & 3);
      fVar11 = (float)VectorUnsignedToFloat
                                ((uint)*(byte *)((int)&local_84 + iVar7),
                                 (byte)(in_fpscr >> 0x15) & 3);
      fVar8 = (float)VectorUnsignedToFloat
                               ((uint)(byte)(&stack0xffffff7b)[iVar7],(byte)(in_fpscr >> 0x15) & 3);
      FUN_003695cc(fVar8 * fVar3,fVar11 * fVar3,fVar10 * fVar3,uVar4,*(int *)(iVar6 + 0x2f8),0,4);
      *(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x2f8) + 0xc) + 0xc) = uVar12;
      *(undefined1 *)(*(int *)(iVar6 + 0x2f8) + 0xac) = 1;
      FUN_003721e0(*(undefined4 *)(iVar6 + 0x2f8),&local_64);
      FUN_00372170(*(undefined4 *)(iVar6 + 0x2f8),0);
    }
    iVar5 = iVar5 + 1;
    iVar7 = iVar7 + 6;
  } while (iVar5 < 6);
  return;
}
