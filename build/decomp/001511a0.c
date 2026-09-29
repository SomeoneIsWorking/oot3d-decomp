// OoT3D decomp @ 001511a0  name=FUN_001511a0  size=808

void FUN_001511a0(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  uint in_fpscr;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_78;
  float local_74;
  float local_70;
  float local_68;
  float local_64;
  float local_60;
  float local_58;
  float local_54;
  float local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  float local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  float local_2c;

  FUN_00354570();
  fVar6 = DAT_001514c8;
  local_2c = DAT_001514cc;
  if ((*(ushort *)(param_1 + 0xace) & 1) != 0) {
    local_2c = DAT_001514d0;
  }
  local_38 = *DAT_001514d4;
  uStack_34 = DAT_001514d4[1];
  uStack_30 = DAT_001514d4[2];
  local_2c = *(float *)(param_1 + 0xaf8) * local_2c;
  FUN_00358778(*(undefined4 *)(param_1 + 0x5dc),0,4,&local_38,2);
  fVar1 = DAT_001514d8;
  if ((*(int *)(param_1 + 0x7c) != 0) && (*(uint *)(param_1 + 0x84) < DAT_001514dc)) {
    FUN_003687b4(*(undefined4 *)(param_1 + 0x28),*(uint *)(param_1 + 0x84),
                 *(undefined4 *)(param_1 + 0x30),*(int *)(param_1 + 0x7c),&local_68);
    FUN_003713fc(fVar1,DAT_001514e0,fVar1,&local_68,1);
    FUN_00371348(*(float *)(param_1 + 0x54) * DAT_001514e4,DAT_001514e8,
                 *(float *)(param_1 + 0x5c) * DAT_001514e4,&local_68,1);
    *(undefined1 *)(*(int *)(param_1 + 0x5dc) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x5dc),&local_68);
    FUN_00372170(*(undefined4 *)(param_1 + 0x5dc),1);
  }
  fVar2 = DAT_001514ec;
  if (*(short *)(param_1 + 0xad4) == 1) {
    iVar3 = 0;
    local_3c = *(float *)(param_1 + 0xaf8) * fVar6;
    local_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    do {
      FUN_00372224(&local_78,param_1 + 0x148);
      fVar6 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
      fVar6 = fVar6 * fVar2;
      uVar5 = in_fpscr & 0xfffffff | (uint)(fVar6 == fVar1) << 0x1e;
      if (!SUB41(uVar5 >> 0x1e,0)) {
        fVar7 = (float)FUN_003727f0(fVar6);
        fVar6 = (float)FUN_00372674(fVar6);
        fVar10 = local_78 * fVar7;
        local_78 = local_78 * fVar6 - local_70 * fVar7;
        local_70 = fVar10 + local_70 * fVar6;
        fVar10 = local_68 * fVar7;
        local_68 = local_68 * fVar6 - local_60 * fVar7;
        local_60 = fVar10 + local_60 * fVar6;
        fVar10 = local_58 * fVar7;
        local_58 = local_58 * fVar6 - local_50 * fVar7;
        local_50 = fVar10 + local_50 * fVar6;
      }
      fVar6 = *(float *)(param_1 + 0xaf4);
      in_fpscr = uVar5 & 0xfffffff | (uint)(fVar6 == fVar1) << 0x1e;
      if (!SUB41(in_fpscr >> 0x1e,0)) {
        fVar8 = (float)FUN_003727f0(fVar6);
        fVar9 = (float)FUN_00372674(fVar6);
        fVar6 = local_74 * fVar8;
        local_74 = local_74 * fVar9 - local_78 * fVar8;
        fVar7 = local_64 * fVar8;
        local_64 = local_64 * fVar9 - local_68 * fVar8;
        fVar10 = local_54 * fVar8;
        local_54 = local_54 * fVar9 - local_58 * fVar8;
        local_78 = local_78 * fVar9 + fVar6;
        local_68 = local_68 * fVar9 + fVar7;
        local_58 = local_58 * fVar9 + fVar10;
      }
      iVar4 = param_1 + iVar3 * 4;
      *(undefined1 *)(*(int *)(iVar4 + 0x4f0) + 0xac) = 1;
      FUN_003721e0(*(undefined4 *)(iVar4 + 0x4f0),&local_78);
      FUN_00358778(*(undefined4 *)(iVar4 + 0x4f0),0,4,&local_48,2);
      FUN_00372170(*(undefined4 *)(iVar4 + 0x4f0),0);
      iVar3 = (int)(short)((short)iVar3 + 1);
    } while (iVar3 < 8);
  }
  else if (*(short *)(param_1 + 0xad4) == 0) {
    FUN_00372224(&local_68,param_1 + 0x148);
    FUN_00371fac(&local_68,param_2 + 0x2fc);
    fVar6 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xc0),(byte)(in_fpscr >> 0x15) & 3)
    ;
    FUN_00371234(fVar6 * DAT_001514f0 * DAT_001514f4,&local_68,1);
    *(undefined1 *)(*(int *)(param_1 + 0x4f0) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x4f0),&local_68);
    FUN_00372170(*(undefined4 *)(param_1 + 0x4f0),0);
    return;
  }
  return;
}
