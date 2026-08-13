// OoT3D decomp @ 003731e0  name=FUN_003731e0  size=104

undefined4 FUN_003731e0(int param_1)

{
  float fVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 unaff_d8;
  float fVar8;
  undefined8 unaff_d9;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;

  fVar8 = fRam00485388;
  fVar5 = fRam0048537c;
  fVar6 = fRam0036b80c;
  fVar7 = fRam0036b804;
  iVar4 = *piRam0036b7fc;
  switch(*(undefined1 *)(param_1 + 0x71)) {
  default:
    goto LAB_0036b5bc;
  case 1:
    fVar7 = (float)VectorSignedToFloat((int)*(short *)(iVar4 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
    fVar7 = *(float *)(param_1 + 0x3c) + *(float *)(param_1 + 0x40) * fVar7 * fRam0036b800;
    *(float *)(param_1 + 0x3c) = fVar7;
    fVar5 = *(float *)(param_1 + 0x4c);
    if (fVar7 < fVar6) {
      fVar7 = fVar7 + fVar5;
code_r0x0036b5a8:
      *(float *)(param_1 + 0x3c) = fVar7;
    }
    else if (fVar5 <= fVar7) {
      fVar7 = fVar7 - fVar5;
      goto code_r0x0036b5a8;
    }
    func_0x002bb34c(param_1,0);
LAB_0036b5bc:
    return 0;
  case 2:
    fVar7 = (float)VectorSignedToFloat((int)*(short *)(iVar4 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
    fVar5 = *(float *)(param_1 + 0x48);
    if (*(float *)(param_1 + 0x3c) == fVar5) {
      func_0x002bb34c(param_1,0);
      return 1;
    }
    fVar7 = *(float *)(param_1 + 0x3c) + *(float *)(param_1 + 0x40) * fVar7 * fRam0036b800;
    *(float *)(param_1 + 0x3c) = fVar7;
    if (fVar6 < (fVar7 - fVar5) * *(float *)(param_1 + 0x40)) {
      *(float *)(param_1 + 0x3c) = fVar5;
    }
    else {
      fVar5 = *(float *)(param_1 + 0x4c);
      if (fVar7 < fVar6) {
        fVar7 = fVar7 + fVar5;
      }
      else {
        if (fVar7 < fVar5) goto code_r0x0036b650;
        fVar7 = fVar7 - fVar5;
      }
      *(float *)(param_1 + 0x3c) = fVar7;
    }
code_r0x0036b650:
    func_0x002bb34c(param_1,0);
    return 0;
  case 3:
    fVar8 = *(float *)(param_1 + 0x34);
    fVar5 = (float)VectorSignedToFloat((int)*(short *)(iVar4 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
    fVar5 = fVar8 - *(float *)(param_1 + 0x38) * fVar5 * fRam0036b800;
    *(float *)(param_1 + 0x34) = fVar5;
    if (fVar5 <= fVar6) {
      if (*(byte *)(param_1 + 0x70) < 2) {
        *(undefined1 *)(param_1 + 0x71) = 1;
      }
      else {
        *(undefined1 *)(param_1 + 0x71) = 2;
      }
      *(float *)(param_1 + 0x34) = fVar6;
    }
    uVar3 = func_0x00324154(0x3410,param_1);
    func_0x002c3814(fVar7 - *(float *)(param_1 + 0x34) / fVar8,uVar3,*(undefined1 *)(param_1 + 0x74)
                    ,*(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x7c));
    return 0;
  case 4:
    fVar7 = (float)VectorSignedToFloat((int)*(short *)(iVar4 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
    fVar7 = *(float *)(param_1 + 0x3c) + *(float *)(param_1 + 0x40) * fVar7 * fRam0036b808;
    *(float *)(param_1 + 0x3c) = fVar7;
    if (fVar6 <= fVar7) {
      fVar6 = *(float *)(param_1 + 0x4c);
      if (fVar7 < fVar6) goto code_r0x0036b86c;
      goto code_r0x0036b864;
    }
code_r0x0036b848:
    fVar7 = fVar7 + *(float *)(param_1 + 0x4c);
    break;
  case 5:
    fVar7 = (float)VectorSignedToFloat((int)*(short *)(iVar4 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
    fVar7 = *(float *)(param_1 + 0x3c) + *(float *)(param_1 + 0x40) * fVar7 * fRam0036b808;
    *(float *)(param_1 + 0x3c) = fVar7;
    fVar6 = *(float *)(param_1 + 0x44);
    if (fVar6 <= fVar7) {
      if (*(float *)(param_1 + 0x48) <= fVar7) {
        *(float *)(param_1 + 0x3c) = (fVar7 - *(float *)(param_1 + 0x48)) + fVar6;
      }
    }
    else {
      *(float *)(param_1 + 0x3c) = (fVar7 - fVar6) + *(float *)(param_1 + 0x48);
    }
    goto code_r0x0036b86c;
  case 6:
    fVar7 = (float)VectorSignedToFloat((int)*(short *)(iVar4 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
    if (*(float *)(param_1 + 0x3c) == *(float *)(param_1 + 0x48)) {
      func_0x003204a4(param_1,*(undefined4 *)(param_1 + 0x30),*(undefined1 *)(param_1 + 0x74),
                      *(undefined4 *)(param_1 + 0x78));
      func_0x002bb1cc(param_1);
      return 1;
    }
    fVar7 = *(float *)(param_1 + 0x3c) + *(float *)(param_1 + 0x40) * fVar7 * fRam0036b808;
    *(float *)(param_1 + 0x3c) = fVar7;
    if (fVar6 < (fVar7 - *(float *)(param_1 + 0x48)) * *(float *)(param_1 + 0x40)) {
      *(float *)(param_1 + 0x3c) = *(float *)(param_1 + 0x48);
      goto code_r0x0036b86c;
    }
    if (fVar7 < fVar6) goto code_r0x0036b848;
    fVar6 = *(float *)(param_1 + 0x4c);
    if (fVar7 < fVar6) goto code_r0x0036b86c;
code_r0x0036b864:
    fVar7 = fVar7 - fVar6;
    break;
  case 7:
    fVar5 = *(float *)(param_1 + 0x34);
    fVar8 = (float)VectorSignedToFloat((int)*(short *)(iVar4 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
    fVar8 = fVar5 - *(float *)(param_1 + 0x38) * fVar8 * fRam0036b808;
    *(float *)(param_1 + 0x34) = fVar8;
    if (fVar8 <= fVar6) {
      if (*(byte *)(param_1 + 0x70) < 2) {
        *(undefined1 *)(param_1 + 0x71) = 4;
      }
      else {
        if (*(byte *)(param_1 + 0x70) < 4) {
          uVar2 = 6;
        }
        else {
          uVar2 = 5;
        }
        *(undefined1 *)(param_1 + 0x71) = uVar2;
      }
      *(float *)(param_1 + 0x34) = fVar6;
    }
    if (*(char *)(param_1 + 0x76) != '\0') {
      func_0x0030f900();
      return 0;
    }
    func_0x0030f6b0(fVar7 - *(float *)(param_1 + 0x34) / fVar5,*(undefined1 *)(param_1 + 0x74),
                    *(undefined1 *)(param_1 + 0x75),*(undefined4 *)(param_1 + 0x78),
                    *(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x7c));
    return 0;
  case 8:
    uVar3 = (undefined4)unaff_d8;
    uVar9 = (undefined4)((ulonglong)unaff_d8 >> 0x20);
    uVar10 = (undefined4)unaff_d9;
    uVar11 = (undefined4)((ulonglong)unaff_d9 >> 0x20);
    fVar6 = *(float *)(param_1 + 0x34) * fRam0048537c;
    fVar7 = (float)VectorSignedToFloat((int)*(short *)(*piRam00485380 + 0x110),
                                       (byte)(in_fpscr >> 0x15) & 3);
    fVar7 = *(float *)(param_1 + 0x34) - *(float *)(param_1 + 0x38) * fVar7 * fRam00485384;
    *(float *)(param_1 + 0x34) = fVar7;
    if (fVar7 <= fVar8) {
      if (*(byte *)(param_1 + 0x70) < 2) {
        *(undefined1 *)(param_1 + 0x71) = 4;
      }
      else {
        if (*(byte *)(param_1 + 0x70) < 4) {
          uVar2 = 6;
        }
        else {
          uVar2 = 5;
        }
        *(undefined1 *)(param_1 + 0x71) = uVar2;
      }
      *(float *)(param_1 + 0x34) = fVar8;
      fVar7 = *(float *)(param_1 + 0x34);
    }
    fVar1 = fRam0048538c;
    iVar4 = (int)(short)(int)(fVar7 * fVar5);
    if (*(char *)(param_1 + 0x50) < '\0') {
      fVar7 = (float)func_0x00338f60();
      fVar7 = fVar1 - fVar7;
      fVar6 = (float)func_0x00338f60(iVar4);
      fVar6 = fVar1 - fVar6;
    }
    else {
      fVar7 = (float)func_0x002cfca0((int)(short)(int)fVar6);
      fVar6 = (float)func_0x002cfca0(iVar4);
    }
    if (fVar6 != fVar8) {
      fVar8 = fVar6 / fVar7;
    }
    if (*(char *)(param_1 + 0x76) == '\0') {
      func_0x0030f6b0(fVar1 - fVar8,*(undefined1 *)(param_1 + 0x74),*(undefined1 *)(param_1 + 0x75),
                      *(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x78),
                      *(undefined4 *)(param_1 + 0x7c),uVar3,uVar9,uVar10,uVar11);
    }
    else {
      func_0x0030f900();
    }
    return 0;
  }
  *(float *)(param_1 + 0x3c) = fVar7;
code_r0x0036b86c:
  func_0x002bb1cc(param_1);
  return 0;
}
