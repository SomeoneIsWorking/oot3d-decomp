// OoT3D decomp @ 0025426c  name=FUN_0025426c  size=1268

void FUN_0025426c(int param_1,int param_2)

{
  short sVar1;
  byte bVar2;
  int *piVar3;
  undefined2 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;

  iVar5 = *(int *)(DAT_0025466c + param_2);
  uVar6 = *(undefined4 *)(iVar5 + 0x2c);
  uVar7 = *(undefined4 *)(iVar5 + 0x30);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(iVar5 + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = uVar6;
  *(undefined4 *)(param_1 + 0x30) = uVar7;
  iVar5 = FUN_00357378(param_2);
  fVar11 = DAT_00254678;
  piVar3 = DAT_00254674;
  fVar10 = DAT_00254670;
  if (iVar5 == 0xd || iVar5 == 0x11) {
    *(undefined4 *)(param_1 + 0x140) = 0;
    *(undefined4 *)(param_1 + 0x13c) = 0;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
    return;
  }
  if (*(short *)(param_1 + 0x208) == 1) {
    fVar8 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x20c),(byte)(in_fpscr >> 0x15) & 3
                                      );
    fVar9 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00254674 + 0x110),
                                       (byte)(in_fpscr >> 0x15) & 3);
    if (*(short *)(param_1 + 0x20c) < 1) {
      fVar8 = fVar8 * fVar9 * DAT_00254670 - DAT_00254678;
    }
    else {
      fVar8 = DAT_00254678 + fVar8 * fVar9 * DAT_00254670;
    }
    *(char *)(param_1 + 0x1c1) = (char)(int)fVar8 + '\x19';
  }
  else if (*(short *)(param_1 + 0x208) == 2) {
    fVar8 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x20c),(byte)(in_fpscr >> 0x15) & 3
                                      );
    fVar9 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00254674 + 0x110),
                                       (byte)(in_fpscr >> 0x15) & 3);
    if (*(short *)(param_1 + 0x20c) < 1) {
      fVar8 = fVar8 * fVar9 * DAT_00254670 - DAT_00254678;
    }
    else {
      fVar8 = DAT_00254678 + fVar8 * fVar9 * DAT_00254670;
    }
    *(char *)(param_1 + 0x1c1) = (char)(int)fVar8;
  }
  FUN_0037632c(param_1,param_1 + 0x1a4);
  fVar8 = DAT_00254680;
  *(float *)(param_1 + 0x1e4) = *(float *)(param_1 + 0x54) * DAT_0025467c;
  fVar9 = DAT_00254684;
  *(float *)(param_1 + 0x1e8) = *(float *)(param_1 + 0x58) * fVar8;
  *(float *)(param_1 + 0x1ec) = *(float *)(param_1 + 0x58) * fVar9;
  FUN_003761f0(param_2,param_2 + 0x5c78,param_1 + 0x1a4);
  uVar6 = DAT_002546b4;
  fVar9 = DAT_0025468c;
  fVar8 = DAT_00254688;
  sVar1 = *(short *)(param_1 + 0x208);
  if (sVar1 == 0) {
    *(float *)(param_1 + 0x5c) = DAT_00254688;
    *(float *)(param_1 + 0x58) = fVar8;
    *(float *)(param_1 + 0x54) = fVar8;
    *(undefined2 *)(param_1 + 0x38) = 0;
    *(undefined2 *)(param_1 + 0x36) = 0;
    *(undefined2 *)(param_1 + 0x34) = 0;
    *(undefined2 *)(param_1 + 0xc0) = 0;
    *(undefined2 *)(param_1 + 0xbe) = 0;
    *(undefined2 *)(param_1 + 0xbc) = 0;
    *(float *)(param_1 + 0x1fc) = fVar8;
    uVar6 = DAT_00254698;
    fVar10 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    *(short *)(param_1 + 0x20c) = (short)(int)(DAT_00254694 / fVar10 + fVar11);
    *(undefined4 *)(param_1 + 0x204) = uVar6;
    *(undefined2 *)(param_1 + 0x208) = 1;
  }
  else if (sVar1 == 1) {
    FUN_003705a0(DAT_0025468c,DAT_0025469c,param_1 + 0x1fc);
    if (*(short *)(param_1 + 0x20c) < 1) {
      fVar10 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(short *)(param_1 + 0x20c) = (short)(int)(DAT_002546ac / fVar10 + fVar11);
      *(short *)(param_1 + 0x208) = *(short *)(param_1 + 0x208) + 1;
    }
    else {
      FUN_0036e168(DAT_002546a8,*(undefined4 *)(param_1 + 0x204),DAT_002546a4,DAT_002546a0,
                   param_1 + 0x54);
      *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x54);
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x54);
    }
  }
  else if (sVar1 == 2) {
    if (*(short *)(param_1 + 0x20c) < 1) {
      fVar10 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(short *)(param_1 + 0x20c) = (short)(int)(DAT_002546b0 / fVar10 + fVar11);
      *(undefined2 *)(param_1 + 0x208) = 3;
      *(undefined4 *)(param_1 + 0x204) = uVar6;
    }
  }
  else if (sVar1 == 3) {
    iVar5 = *piVar3;
    fVar12 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x110),(byte)(in_fpscr >> 0x15) & 3)
    ;
    *(float *)(param_1 + 0x1fc) = *(float *)(param_1 + 0x1fc) - fVar12 * DAT_00254690 * fVar10;
    fVar12 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x110),(byte)(in_fpscr >> 0x15) & 3)
    ;
    *(float *)(param_1 + 0x54) =
         *(float *)(param_1 + 0x54) + *(float *)(param_1 + 0x204) * fVar12 * fVar10;
    fVar12 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x110),(byte)(in_fpscr >> 0x15) & 3)
    ;
    *(float *)(param_1 + 0x58) =
         *(float *)(param_1 + 0x58) + *(float *)(param_1 + 0x204) * fVar12 * fVar10;
    fVar12 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x110),(byte)(in_fpscr >> 0x15) & 3)
    ;
    *(float *)(param_1 + 0x5c) =
         *(float *)(param_1 + 0x5c) + *(float *)(param_1 + 0x204) * fVar12 * fVar10;
    in_fpscr = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 0x1fc) == fVar8) << 0x1e |
               (uint)(fVar8 <= *(float *)(param_1 + 0x1fc)) << 0x1d;
    bVar2 = (byte)(in_fpscr >> 0x18);
    if (!(bool)(bVar2 >> 5 & 1) || (bool)(bVar2 >> 6)) {
      *(undefined2 *)(param_1 + 0x208) = 0;
      FUN_00374428(param_1);
    }
  }
  sVar1 = *(short *)(param_1 + 0x20a);
  if (sVar1 == 0) {
    if (*(short *)(param_1 + 0x20e) < 1) {
      fVar10 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(short *)(param_1 + 0x20e) = (short)(int)(DAT_002546b8 / fVar10 + fVar11);
      *(undefined2 *)(param_1 + 0x20a) = 1;
    }
    goto LAB_00254644;
  }
  if (sVar1 == 1) {
    iVar5 = *piVar3;
    fVar10 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x110),(byte)(in_fpscr >> 0x15) & 3)
    ;
    fVar10 = (float)VectorSignedToFloat((int)(DAT_002546b8 / fVar10 + fVar11),
                                        (byte)(in_fpscr >> 0x15) & 3);
    fVar8 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x20e),(byte)(in_fpscr >> 0x15) & 3
                                      );
    *(float *)(param_1 + 0x200) = fVar9 - fVar8 / fVar10;
    if (0 < *(short *)(param_1 + 0x20e)) goto LAB_00254644;
    fVar10 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x110),(byte)(in_fpscr >> 0x15) & 3)
    ;
    *(short *)(param_1 + 0x20e) = (short)(int)(DAT_002547b4 / fVar10 + fVar11);
    uVar4 = 2;
  }
  else {
    if (sVar1 == 2) {
      if (*(short *)(param_1 + 0x20e) < 1) {
        fVar10 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0x110),
                                            (byte)(in_fpscr >> 0x15) & 3);
        *(short *)(param_1 + 0x20e) = (short)(int)(DAT_002546bc / fVar10 + fVar11);
        *(undefined2 *)(param_1 + 0x20a) = 3;
      }
      goto LAB_00254644;
    }
    if (sVar1 != 3) goto LAB_00254644;
    fVar10 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    fVar10 = (float)VectorSignedToFloat((int)(DAT_002546bc / fVar10 + fVar11),
                                        (byte)(in_fpscr >> 0x15) & 3);
    fVar11 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x20e),
                                        (byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x200) = fVar11 / fVar10;
    if (0 < *(short *)(param_1 + 0x20e)) goto LAB_00254644;
    uVar4 = 4;
  }
  *(undefined2 *)(param_1 + 0x20a) = uVar4;
LAB_00254644:
  if (0 < *(short *)(param_1 + 0x20c)) {
    *(short *)(param_1 + 0x20c) = *(short *)(param_1 + 0x20c) + -1;
  }
  if (0 < *(short *)(param_1 + 0x20e)) {
    *(short *)(param_1 + 0x20e) = *(short *)(param_1 + 0x20e) + -1;
  }
  return;
}
