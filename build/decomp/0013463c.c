// OoT3D decomp @ 0013463c  name=FUN_0013463c  size=1508

void FUN_0013463c(int param_1,int param_2)

{
  short sVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  bool bVar24;
  uint in_fpscr;
  uint uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  undefined4 local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  int local_68;

  FUN_00372224(&local_98,param_1 + 0x148);
  fVar3 = DAT_00134a3c;
  fVar2 = DAT_00134a38;
  sVar1 = *(short *)(param_1 + 0xa2c);
  bVar24 = sVar1 == 0;
  if (bVar24) {
    sVar1 = *(short *)(param_1 + 0xa24);
  }
  if (!bVar24 || sVar1 != 0) {
    uVar25 = in_fpscr & 0xfffffff | (uint)(*(float *)(param_2 + 0x7f44) == DAT_00134a38) << 0x1e;
    if (!SUB41(uVar25 >> 0x1e,0)) {
      if (*(short *)(param_1 + 0xa2c) == 0) {
        sVar1 = *(short *)(param_1 + 0xa24) + -8;
        *(short *)(param_1 + 0xa24) = sVar1;
        if (sVar1 < 0) {
          *(undefined2 *)(param_1 + 0xa24) = 0;
        }
      }
      else {
        *(short *)(param_1 + 0xa2c) = *(short *)(param_1 + 0xa2c) + -1;
      }
      FUN_00373500(DAT_00134a44,param_1 + 0xa28);
    }
    iVar4 = DAT_00134a4c;
    sVar1 = *(short *)(param_1 + 0xa3c);
    *(int *)(DAT_00134a4c + 0x3c) = DAT_00134a48 - sVar1;
    uVar5 = DAT_00134a50;
    *(int *)(iVar4 + 0x38) = sVar1 + 1;
    *(undefined4 *)(iVar4 + 0x40) = uVar5;
    fVar26 = (float)FUN_003f9060();
    fVar18 = DAT_00134a90;
    fVar17 = DAT_00134a8c;
    fVar16 = DAT_00134a88;
    fVar15 = DAT_00134a84;
    fVar14 = DAT_00134a80;
    fVar13 = DAT_00134a7c;
    iVar12 = DAT_00134a78;
    iVar11 = DAT_00134a74;
    iVar4 = DAT_00134a70;
    uVar10 = DAT_00134a6c;
    fVar9 = DAT_00134a68;
    fVar8 = DAT_00134a64;
    fVar7 = DAT_00134a60;
    uVar5 = DAT_00134a58;
    fVar6 = DAT_00134a54;
    fVar26 = fVar26 * DAT_00134a54;
    fVar27 = (float)VectorSignedToFloat(3 - *(short *)(param_1 + 0xa2c),(byte)(uVar25 >> 0x15) & 3);
    iVar23 = 0;
    fVar27 = fVar27 * DAT_00134a5c;
    local_68 = param_1 + 0x800;
    do {
      fVar28 = (float)VectorSignedToFloat(iVar23,(byte)(uVar25 >> 0x15) & 3);
      fVar28 = (float)FUN_003727f0(fVar26 + fVar28 * fVar7);
      fVar29 = (float)VectorSignedToFloat(iVar23,(byte)(uVar25 >> 0x15) & 3);
      fVar29 = (float)FUN_00372674(fVar26 + fVar29 * fVar7);
      local_8c = fVar28 * fVar8 + fVar9;
      local_6c = fVar29 * fVar8 + fVar9;
      local_7c = uVar10;
      local_70 = *(float *)(local_68 + 0x228);
      local_98 = local_70 * 1.0;
      local_88 = local_70 * 0.0;
      local_78 = local_70 * 0.0;
      local_94 = local_70 * 0.0;
      local_84 = local_70 * 1.0;
      local_74 = local_70 * 0.0;
      local_90 = local_70 * 0.0;
      local_80 = local_70 * 0.0;
      local_70 = local_70 * 1.0;
      fVar28 = (float)VectorSignedToFloat(iVar23,(byte)(uVar25 >> 0x15) & 3);
      fVar28 = fVar26 + fVar28 * fVar7;
      uVar25 = uVar25 & 0xfffffff | (uint)(fVar28 == fVar2) << 0x1e;
      if (!SUB41(uVar25 >> 0x1e,0)) {
        fVar29 = (float)FUN_003727f0(fVar28);
        fVar28 = (float)FUN_00372674(fVar28);
        fVar30 = local_98 * fVar29;
        local_98 = local_98 * fVar28 - local_90 * fVar29;
        local_90 = fVar30 + local_90 * fVar28;
        fVar30 = local_88 * fVar29;
        local_88 = local_88 * fVar28 - local_80 * fVar29;
        local_80 = fVar30 + local_80 * fVar28;
        fVar30 = local_78 * fVar29;
        local_78 = local_78 * fVar28 - local_70 * fVar29;
        local_70 = fVar30 + local_70 * fVar28;
      }
      iVar20 = DAT_00134a4c;
      iVar19 = *(int *)(DAT_00134a4c + 0x38) * 0xab;
      iVar21 = (int)((ulonglong)((longlong)iVar4 * (longlong)iVar19) >> 0x20);
      iVar19 = DAT_00134a94 * ((iVar21 >> 0xd) - (iVar21 >> 0x1f)) + iVar19;
      *(int *)(DAT_00134a4c + 0x38) = iVar19;
      iVar21 = *(int *)(iVar20 + 0x3c) * 0xac;
      fVar28 = (float)VectorSignedToFloat(iVar19,(byte)(uVar25 >> 0x15) & 3);
      iVar19 = (int)((ulonglong)((longlong)iVar11 * (longlong)iVar21) >> 0x20);
      iVar21 = DAT_00134a98 * ((iVar19 >> 0xd) - (iVar19 >> 0x1f)) + iVar21;
      *(int *)(iVar20 + 0x3c) = iVar21;
      uVar22 = *(int *)(iVar20 + 0x40) * 0xaa;
      fVar29 = (float)VectorSignedToFloat(iVar21,(byte)(uVar25 >> 0x15) & 3);
      iVar19 = (int)((longlong)(int)uVar22 * (longlong)iVar12 + ((ulonglong)uVar22 << 0x20) >> 0x20)
      ;
      iVar19 = ((iVar19 >> 0xe) - (iVar19 >> 0x1f)) * DAT_00134a9c + uVar22;
      *(int *)(iVar20 + 0x40) = iVar19;
      fVar30 = (float)VectorSignedToFloat(iVar19,(byte)(uVar25 >> 0x15) & 3);
      for (fVar28 = fVar28 * fVar13 + fVar29 * fVar14 + fVar30 * fVar15; 0x3f7fffff < (int)fVar28;
          fVar28 = fVar28 - fVar3) {
      }
      FUN_00371234((ABS(fVar28) - fVar16) * fVar17 * fVar18,&local_98,1);
      iVar19 = *(int *)(iVar20 + 0x38) * 0xab;
      iVar21 = (int)((ulonglong)((longlong)iVar4 * (longlong)iVar19) >> 0x20);
      iVar19 = DAT_00134a94 * ((iVar21 >> 0xd) - (iVar21 >> 0x1f)) + iVar19;
      *(int *)(iVar20 + 0x38) = iVar19;
      iVar21 = *(int *)(iVar20 + 0x3c) * 0xac;
      fVar28 = (float)VectorSignedToFloat(iVar19,(byte)(uVar25 >> 0x15) & 3);
      iVar19 = (int)((ulonglong)((longlong)iVar11 * (longlong)iVar21) >> 0x20);
      iVar21 = DAT_00134a98 * ((iVar19 >> 0xd) - (iVar19 >> 0x1f)) + iVar21;
      *(int *)(iVar20 + 0x3c) = iVar21;
      uVar22 = *(int *)(iVar20 + 0x40) * 0xaa;
      fVar29 = (float)VectorSignedToFloat(iVar21,(byte)(uVar25 >> 0x15) & 3);
      iVar19 = (int)((longlong)(int)uVar22 * (longlong)iVar12 + ((ulonglong)uVar22 << 0x20) >> 0x20)
      ;
      iVar19 = ((iVar19 >> 0xe) - (iVar19 >> 0x1f)) * DAT_00134a9c + uVar22;
      *(int *)(iVar20 + 0x40) = iVar19;
      fVar30 = (float)VectorSignedToFloat(iVar19,(byte)(uVar25 >> 0x15) & 3);
      for (fVar28 = fVar28 * fVar13 + fVar29 * fVar14 + fVar30 * fVar15; 0x3f7fffff < (int)fVar28;
          fVar28 = fVar28 - fVar3) {
      }
      if ((int)ABS(fVar28) < 0x3f000000) {
        fVar28 = (float)FUN_003727f0(fVar6);
        fVar29 = (float)FUN_00372674(fVar6);
        fVar30 = local_98 * fVar28;
        local_98 = local_98 * fVar29 - local_90 * fVar28;
        local_90 = fVar30 + local_90 * fVar29;
        fVar30 = local_88 * fVar28;
        local_88 = local_88 * fVar29 - local_80 * fVar28;
        local_80 = fVar30 + local_80 * fVar29;
        fVar30 = local_78 * fVar28;
        local_78 = local_78 * fVar29 - local_70 * fVar28;
        local_70 = fVar30 + local_70 * fVar29;
      }
      fVar28 = DAT_00134c88;
      iVar20 = param_1 + iVar23 * 4;
      iVar19 = *(int *)(iVar20 + 0x328);
      if (iVar19 != 0) {
        *(uint *)(iVar19 + 0x178) = *(uint *)(iVar19 + 0x178) | 2;
        iVar19 = *(int *)(iVar20 + 0x328);
        *(float *)(iVar19 + 0xc) = local_98;
        *(float *)(iVar19 + 0x10) = local_94;
        *(float *)(iVar19 + 0x14) = local_90;
        *(float *)(iVar19 + 0x18) = local_8c;
        *(float *)(iVar19 + 0x1c) = local_88;
        *(float *)(iVar19 + 0x20) = local_84;
        *(float *)(iVar19 + 0x24) = local_80;
        *(undefined4 *)(iVar19 + 0x28) = local_7c;
        *(float *)(iVar19 + 0x2c) = local_78;
        *(float *)(iVar19 + 0x30) = local_74;
        *(float *)(iVar19 + 0x34) = local_70;
        *(float *)(iVar19 + 0x38) = local_6c;
        fVar29 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xa24),
                                            (byte)(uVar25 >> 0x15) & 3);
        iVar19 = *(int *)(iVar20 + 0x328);
        *(undefined4 *)(iVar19 + 0xf0) = uVar5;
        *(undefined4 *)(iVar19 + 0xf4) = uVar5;
        *(undefined4 *)(iVar19 + 0xf8) = uVar5;
        *(float *)(iVar19 + 0xfc) = fVar29 * fVar28;
        iVar19 = *(int *)(iVar20 + 0x328);
        *(undefined4 *)(iVar19 + 0x110) = 0x3f800000;
        *(undefined4 *)(iVar19 + 0x114) = 0;
        *(undefined4 *)(iVar19 + 0x118) = 0;
        *(float *)(iVar19 + 0x11c) = fVar27;
        *(undefined4 *)(iVar19 + 0x120) = 0;
        *(undefined4 *)(iVar19 + 0x124) = 0x3f800000;
        *(undefined4 *)(iVar19 + 0x128) = 0;
        *(float *)(iVar19 + 300) = fVar2;
        *(undefined4 *)(iVar19 + 0x130) = 0;
        *(undefined4 *)(iVar19 + 0x134) = 0;
        *(undefined4 *)(iVar19 + 0x138) = 0x3f800000;
        *(float *)(iVar19 + 0x13c) = fVar2;
        FUN_00371eac(*(undefined4 *)(iVar20 + 0x328),0);
      }
      iVar23 = (int)(short)((short)iVar23 + 1);
    } while (iVar23 < 5);
  }
  return;
}
