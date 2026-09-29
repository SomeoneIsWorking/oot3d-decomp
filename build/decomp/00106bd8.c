// OoT3D decomp @ 00106bd8  name=FUN_00106bd8  size=684

void FUN_00106bd8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  undefined1 uVar4;
  char cVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  uint in_fpscr;
  float fVar10;
  undefined4 uVar11;
  float fVar12;

  FUN_003731e0(param_1 + 0x228);
  uVar2 = DAT_00106e84;
  iVar7 = FUN_003736fc(*(undefined4 *)(param_1 + 0x890),DAT_00106e84,param_1 + 0x228);
  if (iVar7 != 0) {
    FUN_00375bcc(param_1,DAT_00106e88);
    FUN_00375bcc(param_1,DAT_00106e8c);
  }
  fVar3 = DAT_00106e94;
  fVar10 = *(float *)(param_1 + 0x264);
  if (*(char *)(param_1 + 0xa0d) == '\0') {
    if ((*(float *)(param_1 + 0x890) - DAT_00106e98 < fVar10) &&
       (fVar10 < *(float *)(param_1 + 0x890) + DAT_00106e90)) {
      uVar4 = 1;
LAB_00106cd4:
      *(undefined1 *)(param_1 + 0xa0e) = uVar4;
    }
  }
  else {
    fVar12 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00106e9c + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    fVar12 = (float)VectorSignedToFloat((int)(DAT_00106ea0 / fVar12 + DAT_00106e94),
                                        (byte)(in_fpscr >> 0x15) & 3);
    if ((fVar12 + (*(float *)(param_1 + 0x890) - DAT_00106ea4) < fVar10) &&
       (fVar10 < *(float *)(param_1 + 0x890) + DAT_00106e90)) {
      uVar4 = 2;
      goto LAB_00106cd4;
    }
  }
  FUN_0036fc20(fVar3,uVar2,param_1 + 0x6c);
  iVar7 = FUN_003736fc(*(undefined4 *)(param_1 + 0x88c),uVar2,param_1 + 0x228);
  if (iVar7 != 0) {
    cVar5 = '\x01' - *(char *)(param_1 + 0xa0d);
    *(char *)(param_1 + 0xa0d) = cVar5;
    if (((cVar5 == '\x01') && (*(int *)(param_1 + 0x98) < DAT_00106ea8)) &&
       (*(char *)(param_1 + 0xa0f) != '\0')) {
      FUN_00196afc(param_1,param_2);
    }
    else {
      FUN_0036fadc(param_1,param_2);
    }
  }
  if (*(char *)(param_1 + 0xa0f) == '\0') {
    if ((*(ushort *)(param_1 + 0x894) & 0x20) != 0) goto LAB_00106d9c;
  }
  else {
    iVar7 = (int)(short)(*(short *)(param_1 + 0xbe) - *(short *)(param_1 + 0x92));
    if (0x3000 < iVar7) {
LAB_00106d9c:
      iVar7 = 0x3000;
      goto LAB_00106da8;
    }
    if (-0x3001 < iVar7) goto LAB_00106da8;
  }
  iVar7 = DAT_00106eac;
LAB_00106da8:
  FUN_00370084(param_1 + 0xa16,iVar7,5,2000);
  sVar6 = FUN_003758b0(*(undefined4 *)(param_1 + 0x98),DAT_00106eb0);
  iVar8 = (int)(short)(sVar6 + -3000);
  iVar7 = DAT_00106eb4;
  if ((DAT_00106eb4 < iVar8) || (iVar7 = (DAT_00106eb4 >> 0xd) - DAT_00106eb4, iVar8 < iVar7)) {
    iVar8 = iVar7;
  }
  FUN_00370084(param_1 + 0xa18,iVar8,5,2000);
  cVar5 = *(char *)(param_1 + 0xa30);
  bVar9 = cVar5 != '\0';
  if (!bVar9) {
    cVar5 = *(char *)(param_1 + 0xa0d);
  }
  if ((bVar9 || cVar5 != '\0') && (*(char *)(param_1 + 0xa0f) != '\0')) {
    FUN_00370084(param_1 + 0x36,(int)*(short *)(param_1 + 0x92),5,
                 (int)(short)(int)*(float *)(param_1 + 0xa1c));
    uVar11 = DAT_00106ec0;
    uVar1 = DAT_00106ebc;
    if (*(char *)(param_1 + 0xa30) != '\0') {
      uVar11 = DAT_00106ec8;
      uVar1 = DAT_00106ec4;
    }
    FUN_00373500(uVar1,uVar2,uVar11,param_1 + 0xa1c);
    return;
  }
  *(undefined4 *)(param_1 + 0xa1c) = DAT_00106eb8;
  return;
}
