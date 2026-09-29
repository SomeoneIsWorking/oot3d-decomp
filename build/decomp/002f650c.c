// OoT3D decomp @ 002f650c  name=FUN_002f650c  size=280

undefined4 FUN_002f650c(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  uint in_fpscr;
  float fVar10;
  float fVar11;
  uint local_44 [5];
  undefined4 local_30;
  undefined4 local_2c;

  pbVar6 = (byte *)FUN_0033f400();
  iVar2 = DAT_002f662c;
  uVar1 = DAT_002f6628;
  uVar9 = 0;
  local_44[0] = *DAT_002f6624;
  local_44[1] = DAT_002f6624[1];
  local_44[2] = DAT_002f6624[2];
  local_44[3] = DAT_002f6624[3];
  local_44[4] = DAT_002f6624[4];
  iVar8 = 0;
  do {
    local_30 = uVar1;
    uVar7 = FUN_002f9430(*(undefined4 *)(iVar2 + 8),&local_30,1,iVar8 + 0x67);
    fVar5 = DAT_002f6638;
    fVar4 = DAT_002f6634;
    uVar3 = DAT_002f6630;
    iVar8 = iVar8 + 1;
  } while (iVar8 < 5);
  if (pbVar6 != (byte *)0x0) {
    uVar7 = (uint)pbVar6[1];
  }
  if (pbVar6 != (byte *)0x0 && uVar7 != 0) {
    iVar8 = 0;
    do {
      if ((uint)*pbVar6 == local_44[iVar8]) {
        if ((uint)pbVar6[2] != *(uint *)(iVar2 + 0x34)) {
          *(uint *)(iVar2 + 0x34) = (uint)pbVar6[2];
          *(undefined4 *)(iVar2 + 0x30) = 0;
        }
        local_30 = uVar3;
        local_2c = uVar3;
        FUN_002f9430(*(undefined4 *)(iVar2 + 8),&local_30,1,iVar8 + 0x67);
        fVar10 = (float)VectorSignedToFloat(*(undefined4 *)(iVar2 + 0x30),
                                            (byte)(in_fpscr >> 0x15) & 3);
        fVar11 = fVar10 * fVar4;
        if (0x3f800000 < (int)(fVar10 * fVar4)) {
          fVar11 = fVar5;
        }
        FUN_002f8b80(fVar11,fVar5,*(undefined4 *)(iVar2 + 8),1,iVar8 + 0x67);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < 5);
    uVar9 = 1;
    *(int *)(iVar2 + 0x30) = *(int *)(iVar2 + 0x30) + 1;
  }
  return uVar9;
}
