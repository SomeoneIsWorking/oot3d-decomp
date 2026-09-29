// OoT3D decomp @ 00286590  name=FUN_00286590  size=764

void FUN_00286590(int param_1,int param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  float fVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  undefined4 local_78;
  float local_74;
  undefined1 auStack_70 [48];
  float local_40;
  float local_3c;
  float local_38;

  iVar6 = (((uint)*(ushort *)(param_1 + 0x1c) << 0x16) >> 0x1c) * 0x4b + 0x96;
  FUN_00357fd0(*(undefined4 *)(DAT_0028688c + param_2),*(undefined4 *)(param_1 + 0x178),
               param_1 + 0x28);
  FUN_003721e0(*(undefined4 *)(param_1 + 0x270),param_1 + 0x148);
  puVar1 = DAT_00286890;
  *(undefined1 *)(*(int *)(param_1 + 0x270) + 0xac) = 1;
  if (((*puVar1 & 1) == 0) && (iVar5 = FUN_003679b4(puVar1), iVar5 != 0)) {
    FUN_0036788c(DAT_00286894);
  }
  uVar2 = DAT_002868a0;
  FUN_00330b98(DAT_002868a0,*(undefined4 *)(param_1 + 0x270),0);
  fVar3 = DAT_002868b4;
  fVar8 = DAT_002868a4;
  iVar5 = (int)*(short *)(param_1 + 0x27c);
  if (iVar5 == 0) {
    return;
  }
  if (iVar6 < iVar5) {
    fVar7 = (float)VectorSignedToFloat(0xf - (iVar5 - iVar6),(byte)(in_fpscr >> 0x15) & 3);
    fVar10 = DAT_002868a8;
  }
  else {
    fVar10 = DAT_002868a4;
    if (0x1c < iVar5 - 1U) goto LAB_00286690;
    fVar7 = (float)VectorSignedToFloat(iVar5,(byte)(in_fpscr >> 0x15) & 3);
    fVar10 = DAT_002868ac;
  }
  fVar10 = fVar7 * fVar10;
LAB_00286690:
  fVar10 = fVar10 * DAT_002868b0;
  local_7c = DAT_002868b4;
  local_78 = DAT_002868b8;
  local_74 = DAT_002868b4;
  FUN_00372070(auStack_70,param_1 + 0x148,&local_7c);
  sVar4 = FUN_0036e70c(*(undefined4 *)(param_2 + *(short *)(DAT_002868bc + param_2) * 4 + 0xa54));
  fVar7 = (float)VectorSignedToFloat((int)(short)(sVar4 - *(short *)(param_1 + 0xbe)),
                                     (byte)(in_fpscr >> 0x15) & 3);
  FUN_0036c258((DAT_002868c4 + fVar7 * DAT_002868c0) * DAT_002868c8 * DAT_002868cc * DAT_002868c8,
               &local_b0,&local_b4);
  fVar7 = fVar8 - local_b4;
  local_94 = fVar8 / SQRT(fVar3 * fVar3 + fVar8 * fVar8 + fVar3 * fVar3);
  fVar9 = fVar3 * local_94;
  fVar8 = fVar8 * local_94;
  local_94 = fVar3 * local_94;
  local_a8 = fVar7 * fVar9 * fVar8;
  local_98 = local_b4 + fVar7 * fVar8 * fVar8;
  local_ac = local_b4 + fVar7 * fVar9 * fVar9;
  local_a4 = fVar7 * fVar9 * local_94;
  local_84 = local_b4 + fVar7 * local_94 * local_94;
  local_9c = local_a8 + local_b0 * local_94;
  local_a8 = local_a8 - local_b0 * local_94;
  local_94 = fVar7 * fVar8 * local_94;
  local_8c = local_a4 - local_b0 * fVar8;
  local_a4 = local_a4 + local_b0 * fVar8;
  local_88 = local_94 + local_b0 * fVar9;
  local_a0 = fVar3;
  local_94 = local_94 - local_b0 * fVar9;
  local_90 = fVar3;
  local_80 = fVar3;
  FUN_0036c174(auStack_70,auStack_70,&local_ac);
  local_40 = fVar10;
  local_3c = fVar10;
  local_38 = fVar10;
  FUN_003283a0(auStack_70,auStack_70,&local_40);
  FUN_003721e0(*(undefined4 *)(param_1 + 0x274),auStack_70);
  *(undefined1 *)(*(int *)(param_1 + 0x274) + 0xac) = 1;
  iVar6 = FUN_003695f8();
  if (iVar6 == 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x278) + 0xc) = DAT_002868d0;
  }
  else {
    *(float *)(*(int *)(param_1 + 0x278) + 0xc) = fVar3;
  }
  if (((*puVar1 & 1) == 0) && (iVar6 = FUN_003679b4(DAT_00286890), iVar6 != 0)) {
    FUN_0036788c(DAT_00286894);
  }
  FUN_00330b98(uVar2,*(undefined4 *)(param_1 + 0x274),0);
  return;
}
