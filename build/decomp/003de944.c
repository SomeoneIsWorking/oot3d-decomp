// OoT3D decomp @ 003de944  name=FUN_003de944  size=1088

void FUN_003de944(int param_1,int param_2)

{
  short sVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  bool bVar11;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;

  *(undefined4 *)(param_1 + 0x6c) = DAT_003dec48;
  fVar4 = DAT_003dec50;
  fVar3 = DAT_003dec4c;
  if (((*(short *)(param_1 + 0x1a8) == 0) ||
      (sVar1 = *(short *)(param_1 + 0x1a8) + -1, *(short *)(param_1 + 0x1a8) = sVar1, sVar1 == 0))
     || ((*(byte *)(param_1 + 0x1f1) & 2) != 0)) {
LAB_003de9b0:
    FUN_00333ddc(param_1,param_2);
    return;
  }
  bVar2 = *(byte *)(param_1 + 0x1f2);
  bVar11 = (bVar2 & 2) != 0;
  if (bVar11) {
    bVar2 = *(byte *)(*(int *)(param_1 + 0x1ec) + 2);
  }
  if (bVar11 && bVar2 != 2) goto LAB_003de9b0;
  local_40 = *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x1bc) * fVar3;
  iVar6 = param_2 + 0xa98;
  local_3c = *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x1c0) * fVar3;
  local_38 = *(float *)(param_1 + 0x30) + *(float *)(param_1 + 0x1c4) * fVar3;
  local_4c = *(float *)(param_1 + 0x28) - *(float *)(param_1 + 0x1bc) * DAT_003dec54;
  local_48 = *(float *)(param_1 + 0x2c) - *(float *)(param_1 + 0x1c0) * DAT_003dec54;
  local_44 = *(float *)(param_1 + 0x30) - *(float *)(param_1 + 0x1c4) * DAT_003dec54;
  iVar7 = FUN_00369f9c(iVar6,&local_40,&local_4c,&local_64,&local_2c,1,1,1,1,&local_34);
  uVar5 = DAT_003dec58;
  puVar10 = (undefined4 *)(param_1 + 0x28);
  if ((iVar7 == 0) || (uVar8 = FUN_0035fee8(iVar6,local_2c,local_34), (uVar8 & 0x30) != 0)) {
LAB_003debb4:
    *(undefined4 *)(param_1 + 0x6c) = uVar5;
    fVar3 = DAT_003dec5c;
    local_40 = local_4c;
    local_3c = local_48;
    local_38 = local_44;
    iVar7 = 0;
    do {
      local_4c = local_40 - *(float *)(param_1 + 0x1b0) * fVar3;
      local_48 = local_3c - *(float *)(param_1 + 0x1b4) * fVar3;
      local_44 = local_38 - *(float *)(param_1 + 0x1b8) * fVar3;
LAB_003dec88:
      iVar9 = FUN_00369f9c(iVar6,&local_40,&local_4c,&local_58,&local_28,1,1,1,1,&local_30);
      if (((iVar9 != 0) && (uVar8 = FUN_0035fee8(iVar6,local_28,local_30), (uVar8 & 0x30) == 0)) &&
         (iVar9 = FUN_0035fe90(iVar6,local_28,local_30), iVar9 == 0)) {
        FUN_003150fc(param_1,local_28,param_2);
        *puVar10 = local_58;
        *(undefined4 *)(param_1 + 0x2c) = uStack_54;
        *(undefined4 *)(param_1 + 0x30) = uStack_50;
        *(char *)(param_1 + 0x81) = (char)local_30;
LAB_003ded30:
        if (iVar7 == 3) {
          *(undefined1 *)(param_1 + 0x1aa) = 0;
          FUN_00333ddc(param_1,param_2);
        }
        goto LAB_003ded4c;
      }
      iVar7 = iVar7 + 1;
      if (2 < iVar7) goto LAB_003ded30;
    } while (iVar7 == 0);
    if (iVar7 == 1) {
      local_4c = local_40 + *(float *)(param_1 + 0x1c8) * fVar3;
      local_48 = local_3c + *(float *)(param_1 + 0x1cc) * fVar3;
      local_44 = local_38 + *(float *)(param_1 + 0x1d0) * fVar3;
    }
    else {
      local_4c = local_40 - *(float *)(param_1 + 0x1c8) * fVar3;
      local_48 = local_3c - *(float *)(param_1 + 0x1cc) * fVar3;
      local_44 = local_38 - *(float *)(param_1 + 0x1d0) * fVar3;
    }
    goto LAB_003dec88;
  }
  iVar7 = FUN_0035fe90(iVar6,local_2c,local_34);
  if (iVar7 != 0) goto LAB_003debb4;
  local_4c = local_40 + *(float *)(param_1 + 0x1b0) * fVar4;
  local_48 = local_3c + *(float *)(param_1 + 0x1b4) * fVar4;
  local_44 = local_38 + *(float *)(param_1 + 0x1b8) * fVar4;
  iVar7 = FUN_00369f9c(iVar6,&local_40,&local_4c,&local_58,&local_28,1,1,1,1,&local_30);
  if ((iVar7 != 0) && (uVar8 = FUN_0035fee8(iVar6,local_28,local_30), (uVar8 & 0x30) == 0)) {
    iVar6 = FUN_0035fe90(iVar6,local_28,local_30);
    if (iVar6 == 0) {
      FUN_003150fc(param_1,local_28,param_2);
      *puVar10 = local_58;
      *(undefined4 *)(param_1 + 0x2c) = uStack_54;
      *(undefined4 *)(param_1 + 0x30) = uStack_50;
      *(undefined1 *)(param_1 + 0x81) = (undefined1)local_30;
      *(undefined4 *)(param_1 + 0x6c) = uVar5;
      goto LAB_003ded4c;
    }
  }
  if (*(int *)(param_1 + 0x7c) != local_2c) {
    FUN_003150fc(param_1,local_2c,param_2);
  }
  *puVar10 = local_64;
  *(undefined4 *)(param_1 + 0x2c) = uStack_60;
  *(undefined4 *)(param_1 + 0x30) = uStack_5c;
  *(undefined1 *)(param_1 + 0x81) = (undefined1)local_34;
LAB_003ded4c:
  FUN_00370378(param_1 + 0xbc,(int)-*(short *)(param_1 + 0x34),0x800);
  FUN_00370378(param_1 + 0xbe,(int)*(short *)(param_1 + 0x36),0x800);
  FUN_00370378(param_1 + 0xc0,(int)*(short *)(param_1 + 0x38),0x800);
  FUN_0034a928(param_1,DAT_003ded9c);
  return;
}
