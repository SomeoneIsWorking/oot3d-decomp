// OoT3D decomp @ 0036d978  name=FUN_0036d978  size=1428

void FUN_0036d978(int param_1,int param_2)

{
  char cVar1;
  float *pfVar2;
  float fVar3;
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  short *psVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint in_fpscr;
  float fVar13;
  float fVar14;
  float fVar15;
  float *local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;

  pfVar2 = DAT_0036dd34;
  iVar11 = *(int *)(param_1 + 0x228);
  iVar10 = *(int *)(DAT_0036dd2c + param_2);
  if (iVar11 != 0) {
    fVar15 = *(float *)(iVar10 + 0x28) - *(float *)(param_1 + 0x270);
    fVar13 = *(float *)(iVar10 + 0x2c) - *(float *)(param_1 + 0x274);
    fVar14 = *(float *)(iVar10 + 0x30) - *(float *)(param_1 + 0x278);
    if (((*DAT_0036dd30 & 1) == 0) &&
       (iVar5 = FUN_003679b4(DAT_0036dd30), fVar3 = DAT_0036dd38, iVar5 != 0)) {
      *pfVar2 = DAT_0036dd38;
      pfVar2[1] = fVar3;
      pfVar2[2] = fVar3;
    }
    local_38 = *pfVar2;
    local_34 = pfVar2[1];
    local_30 = pfVar2[2];
    if ((iVar11 == iVar10) &&
       ((int)(fVar15 * fVar15 + fVar13 * fVar13 + fVar14 * fVar14) < DAT_0036dd3c)) {
      if (*(short *)(param_1 + 0x27c) == 0) {
        sVar4 = *(short *)(iVar10 + 0xbe) + -0x38e;
      }
      else {
        sVar4 = *(short *)(iVar10 + 0xbe) + 0x38e;
      }
      local_38 = (float)FUN_002cfca0((int)sVar4);
      pfVar2 = DAT_0036dd40;
      local_38 = local_38 * *DAT_0036dd40;
      local_30 = (float)FUN_00338f60((int)sVar4);
      local_30 = local_30 * *pfVar2;
    }
    local_44 = (float *)(*(float *)(iVar11 + 0x3c) + local_38);
    local_40 = *(float *)(iVar11 + 0x40) + local_34;
    local_3c = *(float *)(iVar11 + 0x44) + local_30;
    uVar6 = FUN_00367358(param_1,&local_44);
    iVar5 = (int)(short)(*(short *)(param_1 + 0x36) - (short)uVar6);
    uVar7 = FUN_0036e10c(param_1,&local_44);
    fVar15 = (float)local_44 - *(float *)(param_1 + 0x28);
    fVar13 = local_40 - *(float *)(param_1 + 0x2c);
    iVar12 = (int)(short)(*(short *)(param_1 + 0x34) - (short)uVar7);
    fVar14 = local_3c - *(float *)(param_1 + 0x30);
    fVar13 = (DAT_0036dd44 - SQRT(fVar15 * fVar15 + fVar13 * fVar13 + fVar14 * fVar14)) *
             DAT_0036dd48;
    if ((int)fVar13 < DAT_0036dd4c) {
      fVar13 = DAT_0036dd50;
    }
    if ((iVar11 == iVar10) || ((*(int *)(iVar11 + 0x13c) != 0 && (iVar5 + 0x4000U < 0x8001)))) {
      if (iVar5 < 0) {
        iVar5 = -iVar5;
      }
      fVar14 = (float)VectorSignedToFloat(iVar5,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00370378(param_1 + 0x36,uVar6,(int)(short)(int)(fVar14 * fVar13));
      if (iVar12 < 0) {
        iVar12 = -iVar12;
      }
      fVar14 = (float)VectorSignedToFloat(iVar12,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00370378(param_1 + 0x34,uVar7,(int)(short)(int)(fVar14 * fVar13));
    }
    else {
      *(undefined4 *)(param_1 + 0x228) = 0;
    }
  }
  FUN_0036c648(DAT_0036dd54,param_1);
  FUN_00376864(param_1);
  FUN_00373264(param_1,DAT_0036dd58);
  if ((((*(byte *)(param_1 + 0x1b8) & 2) != 0) &&
      (psVar8 = *(short **)(param_1 + 0x1ac), *psVar8 == 0x15 || *psVar8 == 0x19c)) &&
     (*(short **)(param_1 + 0x22c) = psVar8, *psVar8 == 0x19c)) {
    *(uint *)(psVar8 + 2) = *(uint *)(psVar8 + 2) | 0x2000;
  }
  cVar1 = *(char *)(param_1 + 0x26c);
  if (((cVar1 == '\0') || (*(char *)(param_1 + 0x26c) = cVar1 + -1, cVar1 == '\x01')) ||
     ((*(uint *)(DAT_0036dd5c + iVar10) & 0x1000) != 0)) {
    iVar11 = DAT_0036dd60;
    fVar15 = *(float *)(iVar10 + 0x3c) - *(float *)(param_1 + 0x28);
    fVar13 = *(float *)(iVar10 + 0x40) - *(float *)(param_1 + 0x2c);
    fVar14 = *(float *)(iVar10 + 0x44);
    *(int *)(param_1 + 0x228) = iVar10;
    fVar14 = fVar14 - *(float *)(param_1 + 0x30);
    if (((int)SQRT(fVar15 * fVar15 + fVar13 * fVar13 + fVar14 * fVar14) < iVar11) ||
       ((*(uint *)(DAT_0036dd5c + iVar10) & 0x1000) != 0)) {
      psVar8 = *(short **)(param_1 + 0x22c);
      if (psVar8 != (short *)0x0) {
        FUN_0036df4c(psVar8 + 0x14,iVar10 + 0x28);
        if (*psVar8 == 0x15) {
          *(undefined4 *)(psVar8 + 0x38) = DAT_0036dd64;
          psVar8[0x48] = psVar8[0x48] & 0xfffc;
        }
        else {
          *(uint *)(psVar8 + 2) = *(uint *)(psVar8 + 2) & 0xffffdfff;
        }
      }
      *(uint *)(iVar10 + 0x1710) = *(uint *)(iVar10 + 0x1710) & 0xfdffffff;
      uVar9 = *(uint *)(iVar10 + 0x29b8);
      *(uint *)(iVar10 + 0x29b8) = uVar9 | 0x10000;
      if ((uVar9 & 0x1000) == 0) {
        FUN_00374428(param_1);
      }
      else {
        *(uint *)(iVar10 + 0x29b8) = uVar9 & 0xffffefff | 0x10000;
        *(undefined4 *)(param_1 + 0x268) = DAT_0036dd68;
      }
    }
    goto LAB_0036deec;
  }
  if ((*(byte *)(param_1 + 0x1b8) & 2) == 0) {
    local_44 = &local_30;
    iVar11 = param_2 + 0xa98;
    iVar5 = FUN_00369f9c(iVar11,param_1 + 0x108,param_1 + 0x28,&local_3c,param_1 + 0x78,1,1,1,1);
    if ((iVar5 == 0) ||
       (iVar5 = FUN_00314c68(param_2,param_1,*(undefined4 *)(param_1 + 0x78),local_30,&local_3c),
       iVar5 != 0)) goto LAB_0036deec;
    if ((local_30 != 7.00649e-44) &&
       (psVar8 = (short *)FUN_00359690(iVar11), psVar8 != (short *)0x0)) {
      sVar4 = *psVar8;
      if (sVar4 == 200) {
        psVar8 = (short *)(uint)(ushort)psVar8[0xe];
      }
      if (sVar4 == 200 && psVar8 == (short *)0x0) goto LAB_0036deec;
    }
    iVar5 = FUN_00359690(iVar11,local_30);
    cVar1 = '\0';
    if (iVar5 != 0) {
      cVar1 = *(char *)(iVar5 + 0x19b);
    }
    if (iVar5 == 0 || cVar1 == '\0') {
      iVar11 = FUN_00314c14(iVar11,*(undefined4 *)(param_1 + 0x78),local_30);
      if (iVar11 == 0xb) {
LAB_0036dea0:
        FUN_00375f90(param_2,&local_3c,8);
      }
      else {
LAB_0036debc:
        FUN_0033af2c(param_2,&local_3c,8);
      }
    }
    else if (cVar1 == '\x01') {
      FUN_00314c28(param_2,&local_3c,8);
    }
    else {
      if (cVar1 == '\x02') goto LAB_0036dea0;
      if (cVar1 == '\x03') goto LAB_0036debc;
    }
  }
  else {
    FUN_0036df4c(param_1 + 0x28,param_1 + 0x108);
  }
  *(short *)(param_1 + 0x34) = -*(short *)(param_1 + 0x34);
  *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x36) + -0x8000;
  *(int *)(param_1 + 0x228) = iVar10;
  *(undefined1 *)(param_1 + 0x26c) = 0;
LAB_0036deec:
  iVar10 = *(int *)(param_1 + 0x22c);
  if (iVar10 != 0) {
    if (*(int *)(iVar10 + 0x13c) != 0) {
      uVar6 = *(undefined4 *)(param_1 + 0x2c);
      uVar7 = *(undefined4 *)(param_1 + 0x30);
      *(undefined4 *)(iVar10 + 0x28) = *(undefined4 *)(param_1 + 0x28);
      *(undefined4 *)(iVar10 + 0x2c) = uVar6;
      *(undefined4 *)(iVar10 + 0x30) = uVar7;
      return;
    }
    *(undefined4 *)(param_1 + 0x22c) = 0;
  }
  return;
}
