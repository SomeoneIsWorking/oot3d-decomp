// OoT3D decomp @ 00424cb4  name=FUN_00424cb4  size=536

void FUN_00424cb4(int *param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  uint in_fpscr;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_48;
  undefined4 local_44;
  float local_40;
  float local_3c;

  fVar3 = DAT_00424ef0;
  iVar2 = DAT_00424eec;
  iVar6 = DAT_00424ee8;
  fVar11 = DAT_00424ed4;
  uVar1 = DAT_00424ed0;
  if (*param_1 == 8) {
    iVar7 = (int)*(short *)(DAT_00424ed8 + 0x5e);
    iVar8 = 0;
    fVar12 = DAT_00424ed4;
    if (iVar7 == 0) {
      iVar5 = (int)*(short *)(DAT_00424ed8 + 100);
      bVar9 = SBORROW4(iVar5,10);
      iVar7 = iVar5 + -10;
      if (iVar5 < 10) {
        bVar9 = SBORROW4((int)*(short *)(DAT_00424ed8 + 0x62),6);
        iVar7 = *(short *)(DAT_00424ed8 + 0x62) + -6;
      }
      fVar13 = DAT_00424ee4;
      if (iVar7 < 0 == bVar9) goto LAB_00424d60;
    }
    else {
      iVar4 = (int)*(short *)(DAT_00424ed8 + 0x60);
      bVar9 = SBORROW4(iVar4,10);
      iVar5 = iVar4 + -10;
      if (iVar4 < 10) {
        bVar9 = SBORROW4(iVar7,0xb);
        iVar5 = iVar7 + -0xb;
      }
      fVar13 = DAT_00424ed4;
      if (iVar5 < 0 == bVar9) goto LAB_00424d60;
    }
    fVar13 = DAT_00424ed4;
    fVar12 = DAT_00424edc;
    if (param_2 != 0) {
LAB_00424d60:
      if (0x3b < (int)param_2) {
        iVar7 = (int)((longlong)(int)param_2 * (longlong)DAT_00424ee8 + ((ulonglong)param_2 << 0x20)
                     >> 0x20);
        iVar8 = (iVar7 >> 5) - (iVar7 >> 0x1f);
      }
      fVar13 = DAT_00424ecc + fVar13;
      iVar7 = 3;
      do {
        iVar5 = (int)((ulonglong)((longlong)iVar2 * (longlong)iVar8) >> 0x20);
        iVar4 = (int)((ulonglong)((longlong)iVar2 * (longlong)iVar8) >> 0x20);
        fVar10 = (float)VectorSignedToFloat(iVar8 + ((iVar5 >> 2) - (iVar5 >> 0x1f)) * -10,
                                            (byte)(in_fpscr >> 0x15) & 3);
        if ((int)param_2 < 0x3c) {
          fVar10 = fVar11;
        }
        iVar8 = (iVar4 >> 2) - (iVar4 >> 0x1f);
        local_40 = fVar12 + fVar10 * fVar3;
        local_48 = fVar3;
        local_44 = uVar1;
        local_3c = fVar13;
        FUN_002fc40c(param_1[2],&local_40,&local_48,1,iVar7);
        iVar7 = iVar7 + 1;
      } while (iVar7 < 5);
      iVar6 = (int)((longlong)(int)param_2 * (longlong)iVar6 + ((ulonglong)param_2 << 0x20) >> 0x20)
      ;
      iVar7 = 0;
      iVar6 = param_2 + ((iVar6 >> 5) - (iVar6 >> 0x1f)) * -0x3c;
      do {
        iVar8 = (int)((ulonglong)((longlong)iVar2 * (longlong)iVar6) >> 0x20);
        iVar5 = (int)((ulonglong)((longlong)iVar2 * (longlong)iVar6) >> 0x20);
        fVar11 = (float)VectorSignedToFloat(iVar6 + ((iVar8 >> 2) - (iVar8 >> 0x1f)) * -10,
                                            (byte)(in_fpscr >> 0x15) & 3);
        iVar6 = (iVar5 >> 2) - (iVar5 >> 0x1f);
        local_40 = fVar12 + fVar11 * fVar3;
        local_48 = fVar3;
        local_44 = uVar1;
        local_3c = fVar13;
        FUN_002fc40c(param_1[2],&local_40,&local_48,1,iVar7);
        iVar7 = iVar7 + 1;
      } while (iVar7 < 2);
      local_40 = fVar12 + DAT_00424ef4;
      local_48 = DAT_00424ef8;
      local_44 = uVar1;
      local_3c = fVar13;
      FUN_002fc40c(param_1[2],&local_40,&local_48,1,2);
      return;
    }
    FUN_002fcc88(DAT_00424ee0,DAT_00424ee0,param_1);
  }
  return;
}
