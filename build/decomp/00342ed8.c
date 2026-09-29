// OoT3D decomp @ 00342ed8  name=FUN_00342ed8  size=424

bool FUN_00342ed8(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 short *param_5,float *param_6)

{
  short sVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  uint in_fpscr;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float extraout_s10;
  float fVar13;
  float extraout_s11;
  float extraout_s12;
  float extraout_s13;
  undefined4 local_70 [5];
  undefined1 auStack_5c [20];
  undefined1 auStack_48 [20];
  undefined1 auStack_34 [20];

  pcVar4 = (char *)(param_4 + *param_5 * 0x10);
  fVar13 = *param_6;
  if (*param_5 < 0) {
    fVar13 = DAT_00343080;
  }
  cVar2 = *pcVar4;
  bVar9 = false;
  bVar8 = cVar2 != -1;
  if (bVar8) {
    cVar2 = pcVar4[0x10];
  }
  if (bVar8 && cVar2 != -1) {
    pcVar4 = (char *)(int)pcVar4[0x20];
  }
  if ((bVar8 && cVar2 != -1) && pcVar4 != (char *)0xffffffff) {
    iVar3 = 0;
    do {
      iVar7 = iVar3 + 1;
      iVar5 = param_4 + (*param_5 + iVar3) * 0x10;
      uVar10 = VectorSignedToFloat((int)*(short *)(iVar5 + 8),(byte)(in_fpscr >> 0x15) & 3);
      local_70[iVar3 * 5] = uVar10;
      uVar10 = VectorSignedToFloat((int)*(short *)(iVar5 + 10),(byte)(in_fpscr >> 0x15) & 3);
      local_70[iVar3 * 5 + 1] = uVar10;
      uVar10 = VectorSignedToFloat((int)*(short *)(iVar5 + 0xc),(byte)(in_fpscr >> 0x15) & 3);
      local_70[iVar3 * 5 + 2] = uVar10;
      uVar10 = VectorSignedToFloat((int)*(char *)(iVar5 + 1),(byte)(in_fpscr >> 0x15) & 3);
      *(undefined4 *)(auStack_5c + iVar3 * 0x14 + -8) = uVar10;
      *(undefined4 *)(auStack_5c + iVar3 * 0x14 + -4) = *(undefined4 *)(iVar5 + 4);
      iVar3 = iVar7;
    } while (iVar7 < 4);
    FUN_00130b38(fVar13,param_1,param_2,param_3,local_70,auStack_5c,auStack_48,auStack_34);
    fVar13 = DAT_00343084;
    iVar3 = param_4 + *param_5 * 0x10;
    uVar6 = (uint)*(ushort *)(iVar3 + 0x12);
    fVar11 = extraout_s10;
    if (uVar6 != 0) {
      fVar11 = (float)VectorUnsignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
      fVar11 = DAT_00343084 / fVar11;
    }
    uVar6 = (uint)*(ushort *)(iVar3 + 0x22);
    fVar12 = extraout_s12;
    if (uVar6 != 0) {
      fVar12 = (float)VectorUnsignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
      fVar12 = DAT_00343084 / fVar12;
    }
    fVar11 = fVar11 + (fVar12 - fVar11) * extraout_s11;
    if (fVar11 < extraout_s13) {
      fVar11 = extraout_s13;
    }
    fVar12 = *param_6;
    *param_6 = fVar12 + fVar11;
    if (0x3f7fffff < (int)(fVar12 + fVar11)) {
      sVar1 = *param_5;
      *param_5 = sVar1 + 1;
      bVar9 = *(char *)(param_4 + (short)(sVar1 + 1) * 0x10 + 0x30) == -1;
      if (bVar9) {
        *param_5 = 0;
      }
      *param_6 = *param_6 - fVar13;
    }
    return bVar9;
  }
  return true;
}
