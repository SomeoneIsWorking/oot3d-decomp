// OoT3D decomp @ 00451cd8  name=FUN_00451cd8  size=780

void FUN_00451cd8(int param_1,int param_2)

{
  float fVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  bool bVar7;
  uint in_fpscr;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  uint local_38;
  float local_34;

  fVar1 = DAT_00451fe8;
  fVar11 = DAT_00451fe4;
  iVar3 = (int)(short)(*(short *)(param_1 + 0x2220) - *(short *)(param_1 + 0xbe));
  if (iVar3 < 0) {
    iVar3 = -iVar3;
  }
  *(uint *)(param_1 + 0x1710) = *(uint *)(param_1 + 0x1710) | 0x1000;
  fVar9 = *(float *)(param_1 + 0x221c);
  fVar10 = ABS(fVar9) * fVar11;
  if ((int)fVar10 < 0x3fc00000) {
    fVar10 = fVar11;
  }
  fVar11 = fVar1;
  if (iVar3 < 0x4000) {
    fVar11 = DAT_00451fec;
  }
  FUN_002dd8b0(fVar11 * fVar10,param_1,param_2);
  fVar11 = DAT_00451ff0;
  fVar9 = ABS(fVar9) * DAT_00451ff0;
  fVar10 = DAT_00451ff0;
  if ((0x3effffff < (int)fVar9) && (fVar10 = fVar9, 0x3f800000 < (int)fVar9)) {
    fVar10 = fVar1;
  }
  iVar3 = FUN_0035d260(param_1);
  uVar6 = *(undefined4 *)(DAT_00451ff4 + iVar3 * 4);
  iVar4 = FUN_0035d260(param_1);
  fVar9 = DAT_00452000;
  iVar3 = DAT_00451ff8;
  local_38 = param_1 + 0xd00;
  FUN_002dd7b8(DAT_00452000,*(float *)(param_1 + 0x2254) * DAT_00451ffc,fVar10,param_1 + 0x254,
               param_2,*(undefined4 *)(DAT_00451ff8 + iVar4 * 4),uVar6);
  iVar4 = FUN_003518dc(param_1,param_2);
  if ((((iVar4 == 0) && (iVar4 = FUN_00354f70(param_1,param_2), iVar4 == 0)) &&
      (iVar4 = FUN_00354894(param_1,param_2), iVar4 == 0)) &&
     (iVar4 = FUN_002dde30(param_1,param_2), iVar4 == 0)) {
    FUN_003705a0(fVar1,DAT_00452004,param_1 + 0x2240);
    FUN_0036b3f4(fVar9,param_1,&local_34,&local_38,param_2);
    FUN_002ddba0(param_1,param_2);
    uVar8 = in_fpscr & 0xfffffff | (uint)(local_34 == fVar9) << 0x1e;
    if ((SUB41(uVar8 >> 0x1e,0)) && ((int)*(short *)(param_1 + 0x2268) + 400U < 0x321)) {
      iVar4 = 0;
    }
    else {
      sVar2 = FUN_00368fec(*(undefined4 *)(param_2 + *(short *)(DAT_00452008 + param_2) * 4 + 0xa54)
                          );
      iVar4 = (int)(short)((short)local_38 - sVar2);
      if (iVar4 < 0) {
        iVar4 = -iVar4;
      }
      uVar5 = iVar4 - 0x2000U & 0xffff;
      bVar7 = uVar5 == 0x4000;
      if (0x3fff < uVar5) {
        bVar7 = *(short *)(param_1 + 0x2268) == 0;
      }
      if (bVar7) {
        iVar4 = 1;
      }
      else {
        iVar4 = -1;
      }
    }
    if (iVar4 < 0) {
      FUN_00462a98(param_1,param_2);
    }
    else {
      if (iVar4 == 0) {
        local_34 = fVar9;
        local_38 = (uint)*(ushort *)(param_1 + 0x2220);
      }
      iVar4 = (int)(short)((short)local_38 - *(short *)(param_1 + 0x2220));
      if (iVar4 < 0) {
        iVar4 = -iVar4;
      }
      if (0x4000 < iVar4) {
        iVar3 = FUN_003705a0(fVar9,fVar1);
        if (iVar3 != 0) {
          *(short *)(param_1 + 0x2220) = (short)local_38;
        }
        return;
      }
      FUN_002dd714(local_34 * DAT_0045200c,fVar1,fVar11,param_1 + 0x221c);
      fVar11 = (float)VectorSignedToFloat(iVar4,(byte)(uVar8 >> 0x15) & 3);
      FUN_00370378(param_1 + 0x2220,(int)(short)local_38,(int)(short)(int)(fVar11 * DAT_00452010));
      bVar7 = false;
      if (local_34 == fVar9) {
        bVar7 = *(float *)(param_1 + 0x221c) == fVar9;
      }
      if (bVar7) {
        FUN_0036055c(param_2,param_1,DAT_00452014,1);
        *(float *)(param_1 + 0x2254) = fVar9;
        iVar4 = FUN_0035d260(param_1);
        FUN_00359aa0(param_1 + 0x254,param_2,*(undefined4 *)(iVar3 + iVar4 * 4));
        *(undefined2 *)(param_1 + 0x2238) = 1;
        return;
      }
    }
  }
  return;
}
