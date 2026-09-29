// OoT3D decomp @ 0024ef48  name=FUN_0024ef48  size=704

void FUN_0024ef48(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int extraout_r1;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  float extraout_s1;
  float fVar10;
  int local_70;
  int local_6c;
  int local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_44;
  float local_40;
  float local_3c;
  float local_34;
  float local_30;
  float local_2c;

  iVar4 = DAT_0024f208;
  if (*(int *)(param_1 + 0x7dc) != DAT_0024f208) {
    FUN_00357fd0(*(undefined4 *)(DAT_0024f20c + param_2),*(undefined4 *)(param_1 + 0x178),
                 param_1 + 0x28);
    local_6c = 0;
    local_70 = param_1;
    FUN_0035e240(param_1 + 0x1a4,param_1 + 0x148,DAT_0024f210);
  }
  if ((*(int *)(param_1 + 0x7c) != 0) &&
     ((*(short *)(param_1 + 0x7e0) < 0x79 || (*(int *)(param_1 + 0x7dc) == DAT_0024f214)))) {
    FUN_003687b4(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x84),
                 *(undefined4 *)(param_1 + 0x30),*(int *)(param_1 + 0x7c),&local_54);
    iVar1 = DAT_0024f218;
    local_70 = DAT_0024f218;
    local_6c = DAT_0024f21c;
    local_68 = DAT_0024f218;
    fVar8 = (float)FUN_00372070(&local_54,&local_54,&local_70);
    fVar2 = DAT_0024f244;
    iVar3 = *(int *)(param_1 + 0x7dc);
    bVar5 = iVar3 == iVar4;
    iVar4 = extraout_r1;
    if (!bVar5) {
      iVar4 = DAT_0024f220;
    }
    bVar6 = iVar3 == iVar4;
    if (!bVar5 && !bVar6) {
      iVar4 = DAT_0024f224;
    }
    bVar7 = iVar3 == iVar4;
    if ((!bVar5 && !bVar6) && !bVar7) {
      iVar4 = DAT_0024f228;
    }
    fVar10 = extraout_s1;
    if (((!bVar5 && !bVar6) && !bVar7) && iVar3 != iVar4) {
      fVar8 = *(float *)(param_1 + 0x54);
      fVar10 = DAT_0024f22c;
    }
    if (((bVar5 || bVar6) || bVar7) || iVar3 == iVar4) {
      fVar8 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x7e0),
                                         (byte)(in_fpscr >> 0x15) & 3);
      if (*(short *)(param_1 + 0x7e0) < 1) {
        fVar8 = fVar8 * DAT_0024f230 * DAT_0024f234 - DAT_0024f238;
      }
      else {
        fVar8 = DAT_0024f238 + fVar8 * DAT_0024f230 * DAT_0024f234;
      }
      iVar4 = 0x50 - (int)fVar8;
      if (0x50 < iVar4) {
        iVar4 = 0x50;
      }
      fVar8 = (float)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
      fVar10 = DAT_0024f23c;
    }
    fVar9 = fVar8 * fVar10 * DAT_0024f240;
    local_54 = local_54 * fVar9;
    local_44 = local_44 * fVar9;
    local_34 = local_34 * fVar9;
    local_50 = local_50 * DAT_0024f244;
    local_40 = local_40 * DAT_0024f244;
    local_30 = local_30 * DAT_0024f244;
    local_4c = local_4c * fVar9;
    local_3c = local_3c * fVar9;
    local_2c = local_2c * fVar9;
    iVar3 = *(int *)(param_1 + 0x7dc);
    iVar4 = DAT_0024f248;
    if (iVar3 != DAT_0024f248) {
      iVar4 = DAT_0024f258;
    }
    if (iVar3 != DAT_0024f248 && iVar3 != iVar4) {
      fVar9 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x36),
                                         (byte)(in_fpscr >> 0x15) & 3);
      FUN_003735e8(DAT_0024f250 + fVar9 * DAT_0024f24c + DAT_0024f254,&local_54,1);
    }
    else {
      fVar9 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xbe),
                                         (byte)(in_fpscr >> 0x15) & 3);
      FUN_003735e8(DAT_0024f250 + fVar9 * DAT_0024f24c + DAT_0024f254,&local_54,1);
    }
    local_70 = DAT_0024f25c;
    local_6c = iVar1;
    local_68 = DAT_0024f260;
    FUN_00372070(&local_54,&local_54,&local_70);
    *(undefined1 *)(*(int *)(param_1 + 0x7d8) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x7d8),&local_54);
    local_58 = fVar2 - fVar8 * fVar10 * DAT_0024f264;
    local_64 = 0;
    uStack_60 = 0;
    uStack_5c = 0;
    local_70 = 2;
    FUN_00358778(*(undefined4 *)(param_1 + 0x7d8),0,4,&local_64);
    FUN_00372170(*(undefined4 *)(param_1 + 0x7d8),0);
  }
  return;
}
