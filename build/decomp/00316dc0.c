// OoT3D decomp @ 00316dc0  name=FUN_00316dc0  size=776

void FUN_00316dc0(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float *pfVar8;
  float *pfVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint in_fpscr;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  float fStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  float fStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  int iStack_58;
  
  uVar7 = uRam003170dc;
  fVar6 = fRam003170d8;
  fVar5 = fRam003170d4;
  fVar4 = fRam003170d0;
  fVar3 = fRam003170cc;
  fVar2 = fRam003170c8;
  iVar11 = 0;
  iVar13 = (int)*(short *)(param_2 + 0x886);
  if (10 < iVar13) {
    iVar13 = 10;
  }
  if (0 < iVar13) {
    iStack_58 = param_6 * 5;
    do {
      if (param_6 == 0) {
        fStack_64 = fVar3;
        fStack_60 = *(float *)(iRam003170ec + iVar11 * 4) * *(float *)(param_2 + 0x2264) * fVar4;
        fVar16 = *(float *)(iRam003170e0 + iVar11 * 4) * *(float *)(param_2 + 0x2264);
        fVar14 = fVar3;
      }
      else {
        fVar14 = *(float *)(param_2 + 0x2264);
        pfVar9 = (float *)(iRam003170e8 + iVar11 * 4);
        pfVar8 = (float *)(iRam003170e4 + -0x48 + iVar11 * 4);
        fVar16 = *(float *)(iRam003170e0 + iVar11 * 4) * fVar14 * fVar2;
        fVar15 = *(float *)(iRam003170e4 + iVar11 * 4);
        if (param_6 == 1) {
          fStack_60 = *pfVar8 * fVar14 * fVar2;
          fStack_64 = -*pfVar9 * *(float *)(param_2 + 0x2264);
          fVar14 = fVar15 * fVar14;
        }
        else {
          fStack_60 = *pfVar8 * fVar14 * fVar2;
          fStack_64 = *pfVar9 * *(float *)(param_2 + 0x2264);
          fVar14 = -fVar15 * fVar14;
        }
      }
      fStack_5c = fVar3;
      uVar10 = iVar11 * -3 + 0x2d + (int)*(short *)(param_2 + 0x892);
      lVar1 = (longlong)(int)uVar10 * (longlong)iRam003170f0 + ((ulonglong)uVar10 << 0x20);
      iVar12 = (int)(short)(((short)(int)(lVar1 >> 0x25) - (short)(lVar1 >> 0x3f)) * -0x2d +
                           (short)uVar10);
      pfVar9 = (float *)(param_4 + iVar12 * 0xc);
      FUN_003735e8(pfVar9[1],&uStack_a0,0);
      func_0x00369014(-*pfVar9,&uStack_a0,1);
      func_0x003735ac(&fStack_70,&uStack_a0,&fStack_64);
      pfVar8 = (float *)(param_3 + iVar12 * 0xc);
      fStack_94 = *pfVar8 + fStack_70;
      fStack_84 = pfVar8[1] + fStack_6c;
      fStack_74 = pfVar8[2] + fStack_68;
      uStack_98 = 0;
      uStack_9c = 0;
      uStack_a0 = 0x3f800000;
      uStack_90 = 0;
      uStack_8c = 0x3f800000;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_7c = 0;
      uStack_78 = 0x3f800000;
      FUN_003735e8(pfVar9[1] + fVar14,&uStack_a0,1);
      func_0x00369014(fVar16 - *pfVar9,&uStack_a0,1);
      fVar14 = (float)VectorSignedToFloat(iVar11,(byte)(in_fpscr >> 0x15) & 3);
      fVar15 = (float)VectorSignedToFloat(iVar11,(byte)(in_fpscr >> 0x15) & 3);
      fVar16 = *(float *)(param_5 + iVar12 * 4);
      func_0x00371348((fVar6 - fVar15 * fVar5) * fVar16,(fVar6 - fVar14 * fVar5) * fVar16,&uStack_a0
                      ,1);
      func_0x00369014(uVar7,&uStack_a0,1);
      iVar12 = *(int *)(param_2 + (iVar11 + iStack_58 * 2) * 4 + 0x7ec);
      if (iVar12 != 0) {
        *(undefined4 *)(*(int *)(iVar12 + 0xc) + 0xc) = *(undefined4 *)(param_2 + 0x87c);
        func_0x003721e0(iVar12,&uStack_a0);
        *(undefined1 *)(iVar12 + 0xac) = 1;
        func_0x00372170(iVar12,1);
      }
      iVar11 = (int)(short)((short)iVar11 + 1);
    } while (iVar11 < iVar13);
  }
  return;
}

