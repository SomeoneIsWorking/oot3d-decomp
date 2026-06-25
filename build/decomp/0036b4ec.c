// OoT3D decomp @ 0036b4ec  name=FUN_0036b4ec  size=1372

int FUN_0036b4ec(int param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  float fVar3;
  undefined uVar4;
  undefined4 uVar5;
  int iVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 unaff_d8;
  float fVar10;
  undefined8 unaff_d9;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  fVar10 = DAT_00485388;
  fVar7 = DAT_0048537c;
  fVar8 = DAT_0036b80c;
  fVar9 = DAT_0036b804;
  iVar6 = *DAT_0036b7fc;
  switch(*(undefined *)(param_1 + 0x71)) {
  default:
    goto switchD_0036b538_caseD_0;
  case 1:
    fVar9 = (float)VectorSignedToFloat((int)*(short *)(iVar6 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
    fVar9 = *(float *)(param_1 + 0x3c) + *(float *)(param_1 + 0x40) * fVar9 * DAT_0036b800;
    *(float *)(param_1 + 0x3c) = fVar9;
    fVar7 = *(float *)(param_1 + 0x4c);
    if (fVar9 < fVar8) {
      fVar9 = fVar9 + fVar7;
LAB_0036b5a8:
      *(float *)(param_1 + 0x3c) = fVar9;
    }
    else if (fVar9 < fVar7 == (NAN(fVar9) || NAN(fVar7))) {
      fVar9 = fVar9 - fVar7;
      goto LAB_0036b5a8;
    }
    FUN_002bb34c(param_1,param_2);
    param_2 = 0;
switchD_0036b538_caseD_0:
    return param_2;
  case 2:
    fVar9 = (float)VectorSignedToFloat((int)*(short *)(iVar6 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
    fVar7 = *(float *)(param_1 + 0x48);
    if (*(float *)(param_1 + 0x3c) == fVar7) {
      FUN_002bb34c(param_1,param_2);
      return 1;
    }
    fVar9 = *(float *)(param_1 + 0x3c) + *(float *)(param_1 + 0x40) * fVar9 * DAT_0036b800;
    *(float *)(param_1 + 0x3c) = fVar9;
    fVar10 = (fVar9 - fVar7) * *(float *)(param_1 + 0x40);
    if (fVar10 == fVar8 || fVar10 < fVar8 != (NAN(fVar10) || NAN(fVar8))) {
      fVar7 = *(float *)(param_1 + 0x4c);
      if (fVar9 < fVar8) {
        fVar9 = fVar9 + fVar7;
      }
      else {
        if (fVar9 < fVar7 != (NAN(fVar9) || NAN(fVar7))) goto LAB_0036b650;
        fVar9 = fVar9 - fVar7;
      }
      *(float *)(param_1 + 0x3c) = fVar9;
    }
    else {
      *(float *)(param_1 + 0x3c) = fVar7;
    }
LAB_0036b650:
    FUN_002bb34c(param_1,param_2);
    return 0;
  case 3:
    fVar10 = *(float *)(param_1 + 0x34);
    fVar7 = (float)VectorSignedToFloat((int)*(short *)(iVar6 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
    fVar7 = fVar10 - *(float *)(param_1 + 0x38) * fVar7 * DAT_0036b800;
    *(float *)(param_1 + 0x34) = fVar7;
    if (fVar7 <= fVar8) {
      if (*(byte *)(param_1 + 0x70) < 2) {
        *(undefined *)(param_1 + 0x71) = 1;
      }
      else {
        *(undefined *)(param_1 + 0x71) = 2;
      }
      *(float *)(param_1 + 0x34) = fVar8;
    }
    uVar5 = FUN_00324154(param_2 + 0x3410,param_1);
    FUN_002c3814(fVar9 - *(float *)(param_1 + 0x34) / fVar10,uVar5,*(undefined *)(param_1 + 0x74),
                 *(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x7c));
    return 0;
  case 4:
    fVar9 = (float)VectorSignedToFloat((int)*(short *)(iVar6 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
    fVar9 = *(float *)(param_1 + 0x3c) + *(float *)(param_1 + 0x40) * fVar9 * DAT_0036b808;
    *(float *)(param_1 + 0x3c) = fVar9;
    if (fVar8 <= fVar9) {
      fVar8 = *(float *)(param_1 + 0x4c);
      if (fVar9 < fVar8 != (NAN(fVar9) || NAN(fVar8))) goto LAB_0036b86c;
      goto LAB_0036b864;
    }
LAB_0036b848:
    fVar9 = fVar9 + *(float *)(param_1 + 0x4c);
    break;
  case 5:
    fVar9 = (float)VectorSignedToFloat((int)*(short *)(iVar6 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
    fVar9 = *(float *)(param_1 + 0x3c) + *(float *)(param_1 + 0x40) * fVar9 * DAT_0036b808;
    *(float *)(param_1 + 0x3c) = fVar9;
    fVar8 = *(float *)(param_1 + 0x44);
    if (fVar8 <= fVar9) {
      fVar7 = *(float *)(param_1 + 0x48);
      bVar1 = fVar9 < fVar7;
      bVar2 = NAN(fVar9);
      if (bVar1 == (bVar2 || NAN(fVar7))) {
        fVar9 = (fVar9 - fVar7) + fVar8;
      }
      if (bVar1 == (bVar2 || NAN(fVar7))) {
        *(float *)(param_1 + 0x3c) = fVar9;
      }
    }
    else {
      *(float *)(param_1 + 0x3c) = (fVar9 - fVar8) + *(float *)(param_1 + 0x48);
    }
    goto LAB_0036b86c;
  case 6:
    fVar9 = (float)VectorSignedToFloat((int)*(short *)(iVar6 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
    if (*(float *)(param_1 + 0x3c) == *(float *)(param_1 + 0x48)) {
      FUN_003204a4(param_1,*(undefined4 *)(param_1 + 0x30),*(undefined *)(param_1 + 0x74),
                   *(undefined4 *)(param_1 + 0x78));
      FUN_002bb1cc(param_1);
      return 1;
    }
    fVar9 = *(float *)(param_1 + 0x3c) + *(float *)(param_1 + 0x40) * fVar9 * DAT_0036b808;
    *(float *)(param_1 + 0x3c) = fVar9;
    fVar7 = (fVar9 - *(float *)(param_1 + 0x48)) * *(float *)(param_1 + 0x40);
    if (fVar7 != fVar8 && fVar7 < fVar8 == (NAN(fVar7) || NAN(fVar8))) {
      *(float *)(param_1 + 0x3c) = *(float *)(param_1 + 0x48);
      goto LAB_0036b86c;
    }
    if (fVar9 < fVar8) goto LAB_0036b848;
    fVar8 = *(float *)(param_1 + 0x4c);
    if (fVar9 < fVar8 != (NAN(fVar9) || NAN(fVar8))) goto LAB_0036b86c;
LAB_0036b864:
    fVar9 = fVar9 - fVar8;
    break;
  case 7:
    fVar7 = *(float *)(param_1 + 0x34);
    fVar10 = (float)VectorSignedToFloat((int)*(short *)(iVar6 + 0x110),(byte)(in_fpscr >> 0x15) & 3)
    ;
    fVar10 = fVar7 - *(float *)(param_1 + 0x38) * fVar10 * DAT_0036b808;
    *(float *)(param_1 + 0x34) = fVar10;
    if (fVar10 <= fVar8) {
      if (*(byte *)(param_1 + 0x70) < 2) {
        *(undefined *)(param_1 + 0x71) = 4;
      }
      else {
        if (*(byte *)(param_1 + 0x70) < 4) {
          uVar4 = 6;
        }
        else {
          uVar4 = 5;
        }
        *(undefined *)(param_1 + 0x71) = uVar4;
      }
      *(float *)(param_1 + 0x34) = fVar8;
    }
    if (*(char *)(param_1 + 0x76) != '\0') {
      FUN_0030f900();
      return 0;
    }
    FUN_0030f6b0(fVar9 - *(float *)(param_1 + 0x34) / fVar7,*(undefined *)(param_1 + 0x74),
                 *(undefined *)(param_1 + 0x75),*(undefined4 *)(param_1 + 0x78),
                 *(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x7c));
    return 0;
  case 8:
    uVar5 = (undefined4)unaff_d8;
    uVar11 = (undefined4)((ulonglong)unaff_d8 >> 0x20);
    uVar12 = (undefined4)unaff_d9;
    uVar13 = (undefined4)((ulonglong)unaff_d9 >> 0x20);
    fVar8 = *(float *)(param_1 + 0x34) * DAT_0048537c;
    fVar9 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00485380 + 0x110),
                                       (byte)(in_fpscr >> 0x15) & 3);
    fVar9 = *(float *)(param_1 + 0x34) - *(float *)(param_1 + 0x38) * fVar9 * DAT_00485384;
    *(float *)(param_1 + 0x34) = fVar9;
    if (fVar9 <= fVar10) {
      if (*(byte *)(param_1 + 0x70) < 2) {
        *(undefined *)(param_1 + 0x71) = 4;
      }
      else {
        if (*(byte *)(param_1 + 0x70) < 4) {
          uVar4 = 6;
        }
        else {
          uVar4 = 5;
        }
        *(undefined *)(param_1 + 0x71) = uVar4;
      }
      *(float *)(param_1 + 0x34) = fVar10;
      fVar9 = *(float *)(param_1 + 0x34);
    }
    fVar3 = DAT_0048538c;
    iVar6 = (int)(short)(int)(fVar9 * fVar7);
    if (*(char *)(param_1 + 0x50) < '\0') {
      fVar9 = (float)FUN_00338f60();
      fVar9 = fVar3 - fVar9;
      fVar8 = (float)FUN_00338f60(iVar6);
      fVar8 = fVar3 - fVar8;
    }
    else {
      fVar9 = (float)FUN_002cfca0((int)(short)(int)fVar8);
      fVar8 = (float)FUN_002cfca0(iVar6);
    }
    if (fVar8 != fVar10) {
      fVar10 = fVar8 / fVar9;
    }
    if (*(char *)(param_1 + 0x76) == '\0') {
      FUN_0030f6b0(fVar3 - fVar10,*(undefined *)(param_1 + 0x74),*(undefined *)(param_1 + 0x75),
                   *(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x78),
                   *(undefined4 *)(param_1 + 0x7c),uVar5,uVar11,uVar12,uVar13);
    }
    else {
      FUN_0030f900();
    }
    return 0;
  }
  *(float *)(param_1 + 0x3c) = fVar9;
LAB_0036b86c:
  FUN_002bb1cc(param_1);
  return 0;
}

