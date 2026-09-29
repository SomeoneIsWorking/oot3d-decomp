// OoT3D decomp @ 0041f0b4  name=FUN_0041f0b4  size=520

void FUN_0041f0b4(int param_1)

{
  char cVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int *piVar12;
  float unaff_lr;
  bool bVar13;
  uint in_fpscr;
  float fVar14;
  undefined1 auStack_a4 [48];
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  int local_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int local_44 [4];

  puVar6 = DAT_0041f2d0;
  fVar5 = DAT_0041f2cc;
  fVar4 = DAT_0041f2c8;
  fVar3 = DAT_0041f2c4;
  iVar9 = DAT_0041f2c0;
  piVar2 = DAT_0041f2bc;
  bVar13 = *(char *)(param_1 + 8) != '\0';
  cVar1 = '\0';
  if (bVar13) {
    cVar1 = *(char *)(param_1 + 0x21);
  }
  if (bVar13 && cVar1 != '\0') {
    piVar12 = DAT_0041f2bc + 0xf;
    iVar10 = 0;
    local_44[0] = *DAT_0041f2bc;
    local_44[1] = DAT_0041f2bc[1];
    local_44[2] = DAT_0041f2bc[2];
    local_44[3] = DAT_0041f2d4;
    do {
      iVar7 = *(int *)(param_1 + 0x10) + local_44[iVar10];
      iVar8 = (int)((ulonglong)((longlong)iVar9 * (longlong)iVar7) >> 0x20);
      fVar14 = (float)VectorSignedToFloat(iVar7 + ((iVar8 >> 2) - (iVar8 >> 0x1f)) * -0x18,
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar14 = fVar14 * fVar3;
      local_58 = fVar14;
      if (0x3f7fffff < (int)fVar14) {
        local_58 = fVar5 - (fVar14 - fVar5);
      }
      in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar4 <= local_58) << 0x1d;
      if (!SUB41(in_fpscr >> 0x1d,0)) {
        local_58 = fVar4;
      }
      local_54 = *piVar12;
      iStack_50 = piVar2[0x10];
      iStack_4c = piVar2[0x11];
      iStack_48 = piVar2[0x12];
      if (*(char *)(param_1 + 0x20) == '\0') {
        uVar11 = 6;
      }
      else {
        uVar11 = 5;
      }
      local_64 = fVar5;
      local_60 = fVar5;
      local_5c = fVar5;
      if (*(char *)(param_1 + 9) == '\0') {
        fVar14 = 2.24208e-44;
        unaff_lr = fVar14;
      }
      else if (*(char *)(param_1 + 9) == '\x01') {
        fVar14 = 4.48416e-44;
        unaff_lr = fVar14;
      }
      local_74 = (float)VectorSignedToFloat((int)unaff_lr / 2,(byte)(in_fpscr >> 0x15) & 3);
      local_74 = *(float *)(param_1 + 0x18) - local_74;
      local_70 = (float)VectorSignedToFloat((int)unaff_lr / 2,(byte)(in_fpscr >> 0x15) & 3);
      local_70 = local_70 + *(float *)(param_1 + 0x18);
      local_6c = (float)VectorSignedToFloat((int)fVar14 / 2,(byte)(in_fpscr >> 0x15) & 3);
      local_6c = *(float *)(param_1 + 0x14) - local_6c;
      local_68 = (float)VectorSignedToFloat((int)fVar14 / 2,(byte)(in_fpscr >> 0x15) & 3);
      local_68 = local_68 + *(float *)(param_1 + 0x14);
      FUN_00434d74(param_1,auStack_a4,iVar10);
      if (((*puVar6 & 1) == 0) && (iVar7 = FUN_003679b4(DAT_0041f2d0), iVar7 != 0)) {
        FUN_0036788c(DAT_0041f2d8);
      }
      unaff_lr = 6.056305e-39;
      FUN_003065d0(local_44[3],uVar11,&local_64,&local_74,*(undefined4 *)(param_1 + 0xc),&local_54,
                   auStack_a4,9);
      iVar10 = iVar10 + 1;
    } while (iVar10 < 3);
    iVar10 = *(int *)(param_1 + 0x10) + 1;
    iVar9 = (int)((ulonglong)((longlong)iVar9 * (longlong)iVar10) >> 0x20);
    *(int *)(param_1 + 0x10) = iVar10 + ((iVar9 >> 2) - (iVar9 >> 0x1f)) * -0x18;
  }
  return;
}
