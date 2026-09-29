// OoT3D decomp @ 00156b98  name=FUN_00156b98  size=1208

void FUN_00156b98(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  short *psVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  bool bVar12;
  uint in_fpscr;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;

  iVar5 = FUN_0036a7a0(param_2);
  if (iVar5 != 0) {
    return;
  }
  FUN_003731e0(param_1 + 0x1a4);
  iVar5 = DAT_00156fbc;
  if (*(int *)(param_1 + 0x8d4) == 0) {
    if ((int)*(float *)(param_1 + 0x1e0) == 1 || (int)*(float *)(param_1 + 0x1e0) == 6) {
      uVar6 = (uint)*(ushort *)(param_2 + 0x104);
      bVar12 = uVar6 == 99;
      if (bVar12) {
        uVar6 = *(int *)(DAT_00156fbc + 8) - 0xfc00;
      }
      if (!bVar12 || uVar6 != 0x3f4) {
        FUN_00375bcc(param_1,DAT_00156fc0);
        goto LAB_00156c18;
      }
    }
  }
  else {
LAB_00156c18:
    if (*(int *)(param_1 + 0x8d4) == 4) {
      fVar13 = *(float *)(param_1 + 0x1e0);
      fVar16 = fVar13 - *(float *)(param_1 + 0x1e4);
      if ((((int)fVar16 < DAT_00156fc4) && (DAT_00156fc4 <= (int)fVar13)) ||
         (((int)fVar16 < DAT_00156fc8 && (DAT_00156fc8 <= (int)fVar13)))) {
        uVar6 = (uint)*(ushort *)(param_2 + 0x104);
        bVar12 = uVar6 == 99;
        if (bVar12) {
          uVar6 = *(int *)(iVar5 + 8) - 0xfc00;
        }
        if (!bVar12 || uVar6 != 0x3f4) {
          FUN_00375bcc(param_1,DAT_00156fcc);
        }
      }
    }
  }
  uVar15 = DAT_00156fd8;
  uVar1 = DAT_00156fd4;
  local_38 = DAT_00156fd0;
  if ((*(ushort *)(DAT_00156fd0 + 0xe) & 0x800) == 0) {
    *(undefined4 *)(param_1 + 0x8bc) = DAT_00156fd4;
  }
  else {
    *(undefined4 *)(param_1 + 0x8bc) = DAT_00156fdc;
    uVar15 = DAT_00156fe0;
  }
  *(undefined4 *)(param_1 + 0x1e4) = uVar15;
  psVar7 = (short *)(*(int *)(*(int *)(param_2 + 0x5c20) + *(int *)(param_1 + 0x8a8) * 8 + 4) +
                    *(int *)(param_1 + 0x8b0) * 6);
  fVar17 = (float)VectorSignedToFloat((int)*psVar7,(byte)(in_fpscr >> 0x15) & 3);
  fVar16 = (float)VectorSignedToFloat((int)psVar7[2],(byte)(in_fpscr >> 0x15) & 3);
  fVar17 = fVar17 - *(float *)(param_1 + 0x28);
  fVar16 = fVar16 - *(float *)(param_1 + 0x30);
  fVar14 = (float)FUN_003696ec(fVar17,fVar16);
  iVar3 = DAT_00156fec;
  iVar2 = DAT_00156fe8;
  fVar13 = DAT_00156fe4;
  uVar15 = VectorSignedToFloat((int)(fVar14 * DAT_00156fe4),(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(param_1 + 0x8b4) = uVar15;
  *(float *)(param_1 + 0x8b8) = SQRT(fVar17 * fVar17 + fVar16 * fVar16);
  fVar16 = *(float *)(param_1 + 0x8b8);
  while (((int)fVar16 <= iVar3 && (*(int *)(param_1 + 0x8a4) != 0))) {
    piVar11 = (int *)(iVar2 + *(int *)(param_1 + 0x8a4) * 0x10);
    iVar10 = *(int *)(param_1 + 0x8b0) + *piVar11;
    *(int *)(param_1 + 0x8b0) = iVar10;
    iVar8 = piVar11[2];
    if (iVar8 != 0) {
      if (iVar8 == 1) {
        iVar8 = *(byte *)(*(int *)(param_2 + 0x5c20) + *(int *)(param_1 + 0x8a8) * 8) - 1;
      }
      else if (iVar8 == 2) {
        iVar8 = *(int *)(param_1 + 0x8ac);
      }
    }
    iVar9 = piVar11[3];
    if (iVar9 != 0) {
      if (iVar9 == 1) {
        iVar9 = *(byte *)(*(int *)(param_2 + 0x5c20) + *(int *)(param_1 + 0x8a8) * 8) - 1;
      }
      else if (iVar9 == 2) {
        iVar9 = *(int *)(param_1 + 0x8ac);
      }
    }
    if (*piVar11 < 0) {
      if ((iVar8 < iVar10) || (iVar10 < iVar9)) goto LAB_00156dfc;
    }
    else if ((iVar10 < iVar8) || (iVar9 < iVar10)) {
LAB_00156dfc:
      iVar8 = piVar11[1];
      *(int *)(param_1 + 0x8a4) = iVar8;
      *(undefined4 *)(param_1 + 0x8b0) = *(undefined4 *)(iVar2 + iVar8 * 0x10 + 8);
    }
    psVar7 = (short *)(*(int *)(*(int *)(param_2 + 0x5c20) + *(int *)(param_1 + 0x8a8) * 8 + 4) +
                      *(int *)(param_1 + 0x8b0) * 6);
    fVar16 = (float)VectorSignedToFloat((int)*psVar7,(byte)(in_fpscr >> 0x15) & 3);
    fVar17 = (float)VectorSignedToFloat((int)psVar7[2],(byte)(in_fpscr >> 0x15) & 3);
    fVar16 = fVar16 - *(float *)(param_1 + 0x28);
    fVar17 = fVar17 - *(float *)(param_1 + 0x30);
    fVar14 = (float)FUN_003696ec(fVar16,fVar17);
    uVar15 = VectorSignedToFloat((int)(fVar14 * fVar13),(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_1 + 0x8b4) = uVar15;
    fVar16 = SQRT(fVar16 * fVar16 + fVar17 * fVar17);
    *(float *)(param_1 + 0x8b8) = fVar16;
  }
  FUN_00375a18(param_1 + 0xbe,(int)(short)(int)*(float *)(param_1 + 0x8b4),1,DAT_00156ff0,0);
  uVar4 = DAT_00156ff8;
  uVar15 = DAT_00156ff4;
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
  FUN_0036e168(*(undefined4 *)(param_1 + 0x8bc),uVar4,*(undefined4 *)(param_1 + 0x8b8),uVar15,
               param_1 + 0x6c);
  FUN_00376864(param_1);
  FUN_00376340(uVar15,uVar15,uVar15,param_2,param_1,4);
  uVar6 = (uint)*(ushort *)(param_2 + 0x104);
  bVar12 = uVar6 == 99;
  if (bVar12) {
    uVar6 = *(int *)(iVar5 + 8) - 0xfc00;
  }
  if (((!bVar12 || uVar6 != 0x3f4) && (0xa000 < *(ushort *)(iVar5 + 0xc) - 0x3556)) &&
     (*(int *)(param_1 + 0x7c) != 0)) {
    fVar13 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(param_1 + 0x7c) + 0xc),
                                        (byte)(in_fpscr >> 0x15) & 3);
    if (((int)DAT_00157000 < (int)(fVar13 * DAT_00156ffc)) ||
       ((DAT_00157000 | DAT_00157000 << 0x19) < (uint)(fVar13 * DAT_00156ffc))) {
      if (0x1e < *(int *)(param_1 + 0x8d8)) {
        FUN_00353aa4(param_1,1,param_1 + 0x8d4);
        *(undefined4 *)(param_1 + 0x840) = DAT_00157004;
        goto LAB_00157010;
      }
      iVar5 = *(int *)(param_1 + 0x8d8) + 1;
    }
    else {
      iVar5 = 0;
    }
    *(int *)(param_1 + 0x8d8) = iVar5;
  }
LAB_00157010:
  if ((*(ushort *)(local_38 + 0xe) & 0x800) != 0) {
    local_44 = *(undefined4 *)(param_1 + 0x28);
    local_40 = *(undefined4 *)(param_1 + 0x2c);
    local_3c = *(undefined4 *)(param_1 + 0x30);
    if (*(int *)(DAT_0015709c + 0x4e4) != 3) {
      FUN_0037378c(DAT_001570a4,param_2,&local_44,2,DAT_001570a0,0x14,0);
    }
    if ((*(byte *)(param_1 + 0x857) & 1) != 0) {
      FUN_00374bb8(uVar1,DAT_001570a8,param_2,param_1,(int)*(short *)(param_1 + 0x92));
    }
  }
  return;
}
