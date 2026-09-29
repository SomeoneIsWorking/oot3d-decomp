// OoT3D decomp @ 0028b1cc  name=FUN_0028b1cc  size=992

void FUN_0028b1cc(int param_1,int param_2)

{
  float fVar1;
  float *pfVar2;
  undefined4 uVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_d4 [3];
  float fStack_c8;
  float fStack_c0;
  float local_b8;
  float fStack_ac;
  float fStack_a8;
  float local_a4 [3];
  float local_98;
  float local_90;
  float local_88;
  float local_7c;
  float local_78;
  undefined1 auStack_74 [48];

  FUN_00372224(auStack_74,param_1 + 0x148);
  if (*(short *)(param_1 + 0x1c) == 0) {
    if (*(int *)(param_1 + 0x294) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x294) + 0xac) = 1;
      FUN_003721e0(*(undefined4 *)(param_1 + 0x294),auStack_74);
      FUN_00372170(*(undefined4 *)(param_1 + 0x294),0);
    }
  }
  else {
    if (*(int *)(param_1 + 0x298) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x298) + 0xac) = 1;
      FUN_003721e0(*(undefined4 *)(param_1 + 0x298),auStack_74);
      FUN_00372170(*(undefined4 *)(param_1 + 0x298),0);
    }
    fVar13 = DAT_0028b5b0;
    if (*(int *)(param_1 + 0x1bc) == DAT_0028b5ac) {
      iVar5 = FUN_003695f8();
      fVar1 = DAT_0028b5bc;
      fVar12 = DAT_0028b5b4;
      if (iVar5 != 0) {
        fVar13 = DAT_0028b5b4;
      }
      if (((*DAT_0028b5b8 & 1) == 0) &&
         (iVar5 = FUN_003679b4(DAT_0028b5b8), pfVar2 = DAT_0028b5c0, iVar5 != 0)) {
        *DAT_0028b5c0 = fVar1;
        pfVar2[1] = fVar12;
        pfVar2[2] = fVar12;
        pfVar2[3] = fVar12;
        pfVar2[4] = fVar12;
        pfVar2[5] = fVar1;
        pfVar2[6] = fVar12;
        pfVar2[7] = fVar12;
        pfVar2[8] = fVar12;
        pfVar2[9] = fVar12;
        pfVar2[10] = fVar1;
        pfVar2[0xb] = fVar12;
      }
      FUN_00372224(local_a4,DAT_0028b5c0);
      fVar9 = (float)FUN_00338f60((int)(short)(*(short *)(param_1 + 0x36) + -0x8000));
      fVar10 = (float)FUN_002cfca0((int)(short)(*(short *)(param_1 + 0x36) + -0x8000));
      fVar4 = DAT_0028b5d4;
      uVar3 = DAT_0028b5d0;
      fVar12 = DAT_0028b5cc;
      iVar6 = (int)*(short *)(param_1 + 0x1c0);
      iVar5 = 0x5a - iVar6 >> 1;
      if (3 < iVar5) {
        iVar5 = 3;
      }
      iVar8 = 3 - (iVar6 >> 1);
      iVar7 = (int)((ulonglong)((longlong)DAT_0028b5c4 * (longlong)iVar6) >> 0x20);
      if (iVar8 < 0) {
        iVar8 = 0;
      }
      fVar11 = (float)VectorSignedToFloat(iVar8 * 0x19 +
                                          (9 - (iVar6 + ((iVar7 >> 1) - (iVar7 >> 0x1f)) * -9)) * 4
                                          + 0x37,(byte)(in_fpscr >> 0x15) & 3);
      local_98 = *(float *)(param_1 + 0x28) + fVar11 * fVar10;
      iVar6 = (int)((ulonglong)((longlong)DAT_0028b5c4 * (longlong)(int)*(short *)(param_1 + 0x1c0))
                   >> 0x20);
      fVar11 = (float)VectorSignedToFloat(iVar8 * 0x19 +
                                          (9 - ((int)*(short *)(param_1 + 0x1c0) +
                                               ((iVar6 >> 1) - (iVar6 >> 0x1f)) * -9)) * 4 + 0x37,
                                          (byte)(in_fpscr >> 0x15) & 3);
      local_78 = *(float *)(param_1 + 0x30) + fVar11 * fVar9;
      fVar11 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x15) & 3);
      local_b8 = *(float *)(param_1 + 0x2c) + DAT_0028b5c8;
      local_d4[0] = fVar1 + fVar11 * DAT_0028b5cc;
      fStack_c0 = local_d4[0];
      fStack_ac = local_d4[0];
      for (; local_88 = local_b8, iVar8 < iVar5; iVar8 = iVar8 + 1) {
        fStack_c8 = local_98 + fVar10 * fVar4;
        fStack_a8 = local_78 + fVar9 * fVar4;
        local_d4[0] = local_d4[0] + fVar12;
        fStack_c0 = fStack_c0 + fVar12;
        fStack_ac = fStack_ac + fVar12;
        local_a4[0] = local_d4[0];
        local_98 = fStack_c8;
        local_90 = fStack_c0;
        local_7c = fStack_ac;
        local_78 = fStack_a8;
        FUN_00371fac(local_d4,param_2 + 0x2fc);
        iVar6 = param_1 + iVar8 * 4;
        if (*(int *)(iVar6 + 0x284) != 0) {
          *(undefined1 *)(*(int *)(iVar6 + 0x284) + 0xac) = 1;
          FUN_003721e0(*(undefined4 *)(iVar6 + 0x284),local_d4);
          *(float *)(*(int *)(*(int *)(iVar6 + 0x284) + 0xc) + 0xc) = fVar13;
          FUN_003695cc(fVar1,fVar1,fVar1,uVar3,*(undefined4 *)(iVar6 + 0x284),0,4,2);
          FUN_00372170(*(undefined4 *)(iVar6 + 0x284),0);
        }
        local_b8 = local_88;
        local_d4[0] = local_a4[0];
        fStack_c0 = local_90;
        fStack_ac = local_7c;
      }
      iVar5 = iVar5 * 0x19 + 0x50;
      fVar12 = (float)VectorSignedToFloat(iVar5,(byte)(in_fpscr >> 0x15) & 3);
      fStack_c8 = *(float *)(param_1 + 0x28) + fVar12 * fVar10;
      fVar12 = (float)VectorSignedToFloat(iVar5,(byte)(in_fpscr >> 0x15) & 3);
      fStack_a8 = *(float *)(param_1 + 0x30) + fVar12 * fVar9;
      local_a4[0] = local_d4[0];
      local_98 = fStack_c8;
      local_90 = fStack_c0;
      local_7c = fStack_ac;
      local_78 = fStack_a8;
      FUN_00371fac(local_d4,param_2 + 0x2fc);
      if (*(int *)(param_1 + 0x290) != 0) {
        *(undefined1 *)(*(int *)(param_1 + 0x290) + 0xac) = 1;
        FUN_003721e0(*(undefined4 *)(param_1 + 0x290),local_d4);
        *(float *)(*(int *)(*(int *)(param_1 + 0x290) + 0xc) + 0xc) = fVar13;
        FUN_003695cc(fVar1,fVar1,fVar1,uVar3,*(undefined4 *)(param_1 + 0x290),0,4,2);
        FUN_00372170(*(undefined4 *)(param_1 + 0x290),0);
        return;
      }
    }
  }
  return;
}
