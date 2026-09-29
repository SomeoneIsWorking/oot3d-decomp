// OoT3D decomp @ 00333b48  name=FUN_00333b48  size=604

void FUN_00333b48(undefined4 param_1,int param_2)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint in_fpscr;
  uint uVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;

  iVar4 = DAT_00333dc0;
  fVar3 = DAT_00333dbc;
  fVar2 = DAT_00333db4;
  fVar14 = DAT_00333dac;
  fVar11 = DAT_00333da8;
  piVar1 = DAT_00333da4;
  if ((*(short *)(param_2 + 0x1c) >> 8 == 5) && (iVar9 = *(int *)(param_2 + 0x458), iVar9 != 0)) {
    iVar8 = *DAT_00333da4;
    fVar13 = (float)VectorSignedToFloat((int)*(short *)(iVar8 + 0x1340),(byte)(in_fpscr >> 0x15) & 3
                                       );
    *(float *)(iVar9 + 0x1708) = fVar13 * DAT_00333da8;
    fVar13 = (float)VectorSignedToFloat(*(short *)(iVar8 + 0x134c) + 0x19,
                                        (byte)(in_fpscr >> 0x15) & 3);
    *(float *)(iVar9 + 0x170c) = fVar13 * fVar14;
    fVar14 = (float)VectorSignedToFloat(*(short *)(iVar8 + 0x1342) + -0x2d,
                                        (byte)(in_fpscr >> 0x15) & 3);
    *(float *)(iVar9 + 0x1710) = fVar14 * fVar11;
    *(undefined4 *)(iVar9 + 0x1704) = DAT_00333db0;
    *(float *)(iVar9 + 0x1728) = fVar2;
    iVar7 = DAT_00333db8;
    fVar14 = (float)VectorSignedToFloat(*(short *)(iVar8 + 0x135a) + -10,
                                        (byte)(in_fpscr >> 0x15) & 3);
    *(float *)(iVar9 + 0x1720) = fVar14 * fVar11;
    local_38 = (float)VectorSignedToFloat((int)*(short *)(iVar7 + iVar8),
                                          (byte)(in_fpscr >> 0x15) & 3);
    local_38 = local_38 - fVar3;
    fVar14 = (float)FUN_002cfca0((int)*(short *)(iVar4 + 4));
    uVar5 = DAT_00333dd4;
    fVar11 = DAT_00333dcc;
    iVar7 = *piVar1;
    fVar13 = (float)VectorSignedToFloat((int)*(short *)(iVar7 + 0x9fc),(byte)(in_fpscr >> 0x15) & 3)
    ;
    fVar15 = (float)VectorSignedToFloat((int)*(short *)(iVar7 + 0x9f6),(byte)(in_fpscr >> 0x15) & 3)
    ;
    local_34 = fVar15 + DAT_00333dc4 + fVar14 * fVar13;
    local_30 = (float)VectorSignedToFloat((int)*(short *)(iVar7 + 0x9f8),
                                          (byte)(in_fpscr >> 0x15) & 3);
    local_30 = local_30 - DAT_00333dc8;
    *(short *)(iVar4 + 4) = *(short *)(iVar4 + 4) + *(short *)(iVar7 + 0x9fa) * 0x1000 + 0x2000;
    fVar14 = (float)VectorSignedToFloat((int)*(short *)(param_2 + 0xbe),(byte)(in_fpscr >> 0x15) & 3
                                       );
    fVar14 = fVar14 * fVar11 * DAT_00333dd0;
    uVar10 = in_fpscr & 0xfffffff | (uint)(fVar14 == fVar2) << 0x1e;
    uVar12 = uVar5;
    fVar11 = fVar2;
    if (!SUB41(uVar10 >> 0x1e,0)) {
      fVar11 = (float)FUN_003727f0(fVar14);
      uVar12 = FUN_00372674(fVar14);
    }
    *(undefined4 *)(param_2 + 0x148) = uVar12;
    *(float *)(param_2 + 0x14c) = fVar2;
    *(float *)(param_2 + 0x150) = fVar11;
    *(float *)(param_2 + 0x154) = fVar2;
    *(undefined4 *)(param_2 + 0x15c) = uVar5;
    *(float *)(param_2 + 0x158) = fVar2;
    *(float *)(param_2 + 0x160) = fVar2;
    *(float *)(param_2 + 0x164) = fVar2;
    *(float *)(param_2 + 0x168) = -fVar11;
    *(float *)(param_2 + 0x16c) = fVar2;
    *(undefined4 *)(param_2 + 0x170) = uVar12;
    *(float *)(param_2 + 0x174) = fVar2;
    FUN_003735ac(&local_44,param_2 + 0x148,&local_38);
    pfVar6 = DAT_00333dd8;
    *(float *)(iVar9 + 0x172c) = *DAT_00333dd8 + local_44;
    *(float *)(iVar9 + 0x1730) = pfVar6[1] + local_40;
    *(float *)(iVar9 + 0x1734) = pfVar6[2] + local_3c;
    local_38 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x9f4),
                                          (byte)(uVar10 >> 0x15) & 3);
    local_38 = fVar3 - local_38;
    FUN_003735ac(&local_44,param_2 + 0x148,&local_38);
    *(float *)(iVar9 + 0x1738) = *pfVar6 + local_44;
    *(float *)(iVar9 + 0x173c) = pfVar6[1] + local_40;
    *(float *)(iVar9 + 0x1740) = pfVar6[2] + local_3c;
  }
  return;
}
