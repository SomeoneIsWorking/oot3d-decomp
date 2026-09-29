// OoT3D decomp @ 00230704  name=FUN_00230704  size=692

void FUN_00230704(int param_1,int param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_38;
  float local_34;
  float local_30;
  float local_28;
  float local_24;
  float local_20;

  uVar7 = (uint)*(ushort *)(DAT_002309b8 + param_2);
  FUN_003720a4(*(undefined4 *)(DAT_002309b8 + -0x20c + param_2),&local_48);
  local_54 = *(float *)(DAT_002309bc + 4);
  local_50 = local_54 + DAT_002309c0;
  local_4c = local_54 + DAT_002309c4;
  FUN_00372070(&local_48,&local_48,&local_54);
  uVar4 = DAT_002309cc;
  local_48 = local_48 * DAT_002309c8;
  local_38 = local_38 * DAT_002309c8;
  local_28 = local_28 * DAT_002309c8;
  local_44 = local_44 * DAT_002309c8;
  local_34 = local_34 * DAT_002309c8;
  local_24 = local_24 * DAT_002309c8;
  local_40 = local_40 * DAT_002309c8;
  local_30 = local_30 * DAT_002309c8;
  local_20 = local_20 * DAT_002309c8;
  fVar8 = (float)FUN_003727f0();
  fVar9 = (float)FUN_00372674(uVar4);
  fVar10 = local_40 * fVar8;
  local_40 = local_40 * fVar9 - local_44 * fVar8;
  fVar2 = local_30 * fVar8;
  local_30 = local_30 * fVar9 - local_34 * fVar8;
  fVar3 = local_20 * fVar8;
  local_20 = local_20 * fVar9 - local_24 * fVar8;
  local_44 = local_44 * fVar9 + fVar10;
  local_34 = local_34 * fVar9 + fVar2;
  local_24 = local_24 * fVar9 + fVar3;
  FUN_003721e0(*(undefined4 *)(param_1 + 0x1a4),&local_48);
  *(undefined1 *)(*(int *)(param_1 + 0x1a4) + 0xac) = 1;
  FUN_00372170(*(undefined4 *)(param_1 + 0x1a4),0);
  fVar3 = DAT_002309e8;
  uVar4 = DAT_002309e4;
  iVar5 = DAT_002309e0;
  fVar2 = DAT_002309dc;
  fVar10 = DAT_002309d4;
  iVar6 = *DAT_002309d0;
  fVar8 = (float)VectorSignedToFloat((int)*(short *)(iVar6 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
  fVar9 = (float)VectorSignedToFloat(uVar7,(byte)(in_fpscr >> 0x15) & 3);
  in_fpscr = in_fpscr & 0xfffffff;
  uVar1 = in_fpscr | (uint)(fVar9 <= DAT_002309dc + (DAT_002309d4 / fVar8) * DAT_002309d8) << 0x1d;
  if (!SUB41(uVar1 >> 0x1d,0)) {
    if ((int)*(float *)(param_1 + 0x1bc) < DAT_002309e0) {
      fVar8 = (float)VectorSignedToFloat((int)*(short *)(iVar6 + 0x110),(byte)(uVar1 >> 0x15) & 3);
      *(float *)(param_1 + 0x1bc) =
           *(float *)(param_1 + 0x1bc) + fVar8 * DAT_002309ec * DAT_002309e8;
    }
    else {
      *(undefined4 *)(param_1 + 0x1bc) = DAT_002309e4;
    }
  }
  fVar8 = DAT_002309f4;
  fVar11 = (float)VectorSignedToFloat(uVar7,(byte)(uVar1 >> 0x15) & 3);
  fVar9 = (float)VectorSignedToFloat((int)*(short *)(iVar6 + 0x110),(byte)(uVar1 >> 0x15) & 3);
  uVar1 = in_fpscr | (uint)(fVar11 <= fVar2 + (fVar10 / fVar9) * DAT_002309f0) << 0x1d;
  if (!SUB41(uVar1 >> 0x1d,0)) {
    if ((int)*(float *)(param_1 + 0x1c0) < iVar5) {
      fVar9 = (float)VectorSignedToFloat((int)*(short *)(iVar6 + 0x110),(byte)(uVar1 >> 0x15) & 3);
      *(float *)(param_1 + 0x1c0) = *(float *)(param_1 + 0x1c0) + fVar9 * DAT_002309f4 * fVar3;
    }
    else {
      *(undefined4 *)(param_1 + 0x1c0) = uVar4;
    }
  }
  fVar11 = (float)VectorSignedToFloat(uVar7,(byte)(uVar1 >> 0x15) & 3);
  fVar9 = (float)VectorSignedToFloat((int)*(short *)(iVar6 + 0x110),(byte)(uVar1 >> 0x15) & 3);
  in_fpscr = in_fpscr | (uint)(fVar11 <= fVar2 + (fVar10 / fVar9) * DAT_002309f8) << 0x1d;
  if (!SUB41(in_fpscr >> 0x1d,0)) {
    if (iVar5 <= (int)*(float *)(param_1 + 0x1c4)) {
      *(undefined4 *)(param_1 + 0x1c4) = uVar4;
      return;
    }
    fVar10 = (float)VectorSignedToFloat((int)*(short *)(iVar6 + 0x110),(byte)(in_fpscr >> 0x15) & 3)
    ;
    *(float *)(param_1 + 0x1c4) = *(float *)(param_1 + 0x1c4) + fVar10 * fVar8 * fVar3;
  }
  return;
}
