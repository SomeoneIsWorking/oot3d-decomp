// OoT3D decomp @ 003eaa34  name=FUN_003eaa34  size=976

void FUN_003eaa34(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  uint in_fpscr;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;

  uVar1 = DAT_003ead44;
  fVar3 = DAT_003ead40;
  fVar2 = DAT_003ead3c;
  if (*(short *)(param_1 + 0xa8c) == 0) {
    fVar10 = (float)FUN_00371e50(DAT_003ead44);
    if ((short)(int)fVar10 + 0x1e < 1) {
      fVar10 = (float)FUN_00371e50(uVar1);
      fVar10 = (float)VectorSignedToFloat((short)(int)fVar10 + 0x1e,(byte)(in_fpscr >> 0x15) & 3);
      fVar10 = fVar10 * fVar2 * fVar3 - fVar3;
    }
    else {
      fVar10 = (float)FUN_00371e50(uVar1);
      fVar10 = (float)VectorSignedToFloat((short)(int)fVar10 + 0x1e,(byte)(in_fpscr >> 0x15) & 3);
      fVar10 = fVar3 + fVar10 * fVar2 * fVar3;
    }
    uVar1 = DAT_003ead48;
    *(short *)(param_1 + 0xa8c) = (short)(int)fVar10;
    FUN_00375bcc(param_1,uVar1);
  }
  fVar10 = DAT_003ead50;
  FUN_00373500(DAT_003ead54,DAT_003ead50,DAT_003ead4c,param_1 + 0xa20);
  uVar11 = DAT_003ead84;
  fVar4 = DAT_003ead64;
  iVar9 = DAT_003ead60;
  fVar13 = DAT_003ead5c;
  uVar1 = DAT_003ead58;
  if (*(char *)(param_1 + 0xa34) == '\0') {
    if (DAT_003ead60 <= *(int *)(param_1 + 0x98)) {
      *(undefined1 *)(param_1 + 0xa34) = 1;
      FUN_00375c08(fVar4,uVar11,uVar11,uVar1,param_1 + 0x228,0x14,0);
    }
  }
  else {
    iVar8 = FUN_003736fc(DAT_003ead68,fVar10,param_1 + 0x228);
    uVar6 = DAT_003ead74;
    uVar5 = DAT_003ead70;
    uVar11 = DAT_003ead6c;
    if (iVar8 == 0) {
      iVar8 = FUN_003736fc(DAT_003ead78,fVar10,param_1 + 0x228);
      if (iVar8 != 0) {
        FUN_0036f00c(uVar6,uVar5,param_2,param_1,param_1 + 0x8d8,3,500,10,1);
        goto LAB_003eabe0;
      }
    }
    else {
      FUN_0036f00c(DAT_003ead74,DAT_003ead70,param_2,param_1,param_1 + 0x8cc,3,500,10,1);
LAB_003eabe0:
      FUN_00375bcc(param_1,uVar11);
      FUN_0036fca8(param_1,param_2,2,10);
    }
    if ((int)*(float *)(param_1 + 0x98) < iVar9) {
      *(undefined1 *)(param_1 + 0xa34) = 0;
      FUN_00370350(uVar1,param_1 + 0x228,0xd);
    }
    else {
      fVar12 = fVar10 + (*(float *)(param_1 + 0x98) - DAT_003ead7c) * DAT_003ead80;
      *(float *)(param_1 + 0x268) = fVar12;
      if (0x40000000 < (int)fVar12) {
        *(float *)(param_1 + 0x268) = fVar13;
      }
      if (*(char *)(param_1 + 0xa30) != '\0') {
        *(float *)(param_1 + 0x268) = *(float *)(param_1 + 0x268) * fVar4;
      }
      *(float *)(param_1 + 0x268) = *(float *)(param_1 + 0x268) * fVar4;
    }
    fVar13 = *(float *)(param_1 + 0x268) * fVar2;
  }
  FUN_003731e0(param_1 + 0x228);
  FUN_00373500(fVar13,fVar3,fVar10,param_1 + 0x6c);
  if (*(short *)(param_1 + 0x89a) == 0) {
    FUN_0036fadc();
  }
  else {
    FUN_00314e90(param_1,param_2);
  }
  if ((*(byte *)(param_1 + 0xa0f) | 1) == 0) {
    if ((*(ushort *)(param_1 + 0x894) & 0x20) != 0) goto LAB_003ead98;
  }
  else {
    iVar9 = (int)(short)(*(short *)(param_1 + 0xbe) - *(short *)(param_1 + 0x92));
    if (0x3000 < iVar9) {
LAB_003ead98:
      iVar9 = 0x3000;
      goto LAB_003eada4;
    }
    if (-0x3001 < iVar9) goto LAB_003eada4;
  }
  iVar9 = DAT_003ead88;
LAB_003eada4:
  FUN_00370084(param_1 + 0xa16,iVar9,5,2000);
  sVar7 = FUN_003758b0(*(undefined4 *)(param_1 + 0x98),DAT_003eae54);
  iVar8 = (int)(short)(sVar7 + -3000);
  iVar9 = DAT_003eae58;
  if ((DAT_003eae58 < iVar8) || (iVar9 = (DAT_003eae58 >> 0xd) - DAT_003eae58, iVar8 < iVar9)) {
    iVar8 = iVar9;
  }
  FUN_00370084(param_1 + 0xa18,iVar8,5,2000);
  FUN_00370084(param_1 + 0x36,(int)*(short *)(param_1 + 0x92),5,
               (int)(short)(int)*(float *)(param_1 + 0xa1c));
  uVar11 = DAT_003eae60;
  uVar1 = DAT_003eae5c;
  if (*(char *)(param_1 + 0xa30) != '\0') {
    uVar11 = DAT_003eae68;
    uVar1 = DAT_003eae64;
  }
  FUN_00373500(uVar1,fVar10,uVar11,param_1 + 0xa1c);
  return;
}
