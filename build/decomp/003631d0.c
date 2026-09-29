// OoT3D decomp @ 003631d0  name=FUN_003631d0  size=860

void FUN_003631d0(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int *piVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ushort uVar8;
  bool bVar9;
  uint in_fpscr;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;

  fVar3 = DAT_003635c4;
  piVar2 = DAT_003635c0;
  uVar1 = DAT_003635bc;
  fVar11 = DAT_003635b8;
  fVar13 = DAT_003635b4;
  fVar14 = DAT_003635ac;
  if (*(short *)(param_1 + 0x1c) == 0xd) {
    fVar14 = DAT_003635b0;
  }
  if (*(short *)(param_1 + 0x5d4) == 0) {
    if (param_3 == 0) {
      *(undefined4 *)(param_1 + 0x5ec) = DAT_003635bc;
    }
    else {
      *(float *)(param_1 + 0x5ec) = fVar14 * DAT_003635b4;
    }
    uVar8 = *(short *)(param_1 + 0x618) + 1;
    *(ushort *)(param_1 + 0x618) = uVar8;
    bVar9 = (uVar8 & 1) == 0;
    fVar10 = (float)VectorSignedToFloat((int)*(short *)(*piVar2 + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    *(short *)(param_1 + 0x5d4) = (short)(int)(fVar11 / fVar10 + fVar3);
    if (bVar9) {
      *(undefined4 *)(param_1 + 0x5ec) = uVar1;
    }
    if (bVar9 && param_3 == 0) {
      fVar10 = (float)FUN_00371e50(DAT_003635c8);
      fVar10 = (float)VectorSignedToFloat((int)(short)(int)fVar10,(byte)(in_fpscr >> 0x15) & 3);
      fVar12 = (float)VectorSignedToFloat((int)*(short *)(*piVar2 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(short *)(param_1 + 0x5d4) = (short)(int)((fVar10 * DAT_003635cc) / fVar12 + fVar3);
    }
  }
  fVar5 = DAT_003635dc;
  uVar4 = DAT_003635d8;
  fVar12 = DAT_003635d4;
  fVar10 = DAT_003635d0;
  if (*(short *)(param_1 + 0x5d6) == 0) {
    uVar8 = *(short *)(param_1 + 0x61a) + 1U & 1;
    *(ushort *)(param_1 + 0x61a) = uVar8;
    uVar7 = DAT_003635f0;
    uVar6 = DAT_003635e0;
    switch(param_3) {
    case 1:
      fVar13 = (float)VectorSignedToFloat((int)*(short *)(*piVar2 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(short *)(param_1 + 0x5d6) = (short)(int)(fVar11 / fVar13 + fVar3);
      *(float *)(param_1 + 0x5f4) = fVar14 * fVar10;
      *(float *)(param_1 + 0x5f0) = fVar14 * fVar10;
      if (uVar8 != 0) break;
    case 0:
      *(undefined4 *)(param_1 + 0x5f4) = uVar1;
      *(undefined4 *)(param_1 + 0x5f0) = uVar1;
      break;
    case 2:
      fVar11 = (float)VectorSignedToFloat((int)*(short *)(*piVar2 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(short *)(param_1 + 0x5d6) = (short)(int)(fVar12 / fVar11 + fVar3);
      *(float *)(param_1 + 0x5f4) = fVar13;
      *(float *)(param_1 + 0x5f0) = fVar13;
      *(undefined4 *)(param_1 + 0x600) = uVar6;
      *(undefined4 *)(param_1 + 0x608) = uVar6;
      uVar1 = DAT_003635e4;
      *(undefined4 *)(param_1 + 0x604) = DAT_003635e4;
      *(undefined4 *)(param_1 + 0x60c) = uVar1;
      uVar1 = DAT_003635e8;
      if (uVar8 == 0) {
        *(undefined4 *)(param_1 + 0x608) = DAT_003635e8;
        *(undefined4 *)(param_1 + 0x600) = uVar1;
      }
      break;
    case 3:
      fVar13 = (float)VectorSignedToFloat((int)*(short *)(*piVar2 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(short *)(param_1 + 0x5d6) = (short)(int)(fVar12 / fVar13 + fVar3);
      *(undefined4 *)(param_1 + 0x600) = uVar4;
      *(undefined4 *)(param_1 + 0x608) = uVar4;
      uVar1 = uRam003635ec;
      if (uVar8 == 0) {
        *(undefined4 *)(param_1 + 0x600) = uRam003635ec;
        *(undefined4 *)(param_1 + 0x608) = uVar1;
      }
      break;
    case 4:
      fVar13 = (float)VectorSignedToFloat((int)*(short *)(*piVar2 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(short *)(param_1 + 0x5d4) = (short)(int)(fVar5 / fVar13 + fVar3);
      break;
    case 5:
      fVar13 = (float)VectorSignedToFloat((int)*(short *)(*piVar2 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(short *)(param_1 + 0x5d6) = (short)(int)(fVar5 / fVar13 + fVar3);
      *(undefined4 *)(param_1 + 0x600) = uVar7;
      *(undefined4 *)(param_1 + 0x608) = uVar7;
      if (uVar8 == 0) {
        *(undefined4 *)(param_1 + 0x600) = uVar4;
        *(undefined4 *)(param_1 + 0x608) = uVar4;
      }
    }
  }
  uVar1 = DAT_003635f4;
  if (*(float *)(param_1 + 0x660) != *(float *)(param_1 + 0x610)) {
    FUN_00373500(*(float *)(param_1 + 0x610),fVar3,DAT_003635f4,param_1 + 0x660);
  }
  if (*(float *)(param_1 + 0x65c) != *(float *)(param_1 + 0x5ec)) {
    FUN_00373500(*(float *)(param_1 + 0x5ec),fVar3,uVar1,param_1 + 0x65c);
  }
  uVar1 = DAT_003635f8;
  if (*(float *)(param_1 + 0x644) != *(float *)(param_1 + 0x5f4)) {
    FUN_00373500(*(float *)(param_1 + 0x5f4),DAT_003635f8,fVar10,param_1 + 0x644);
  }
  if (*(float *)(param_1 + 0x648) != *(float *)(param_1 + 0x608)) {
    FUN_00373500(*(float *)(param_1 + 0x608),uVar1,fVar10,param_1 + 0x648);
  }
  if (*(float *)(param_1 + 0x64c) != *(float *)(param_1 + 0x60c)) {
    FUN_00373500(*(float *)(param_1 + 0x60c),uVar1,fVar10,param_1 + 0x64c);
  }
  if (*(float *)(param_1 + 0x650) != *(float *)(param_1 + 0x5f0)) {
    FUN_00373500(*(float *)(param_1 + 0x5f0),uVar1,fVar10,param_1 + 0x650);
  }
  if (*(float *)(param_1 + 0x654) != *(float *)(param_1 + 0x600)) {
    FUN_00373500(*(float *)(param_1 + 0x600),uVar1,fVar10,param_1 + 0x654);
  }
  if (*(float *)(param_1 + 0x658) != *(float *)(param_1 + 0x604)) {
    FUN_00373500(*(float *)(param_1 + 0x604),uVar1,fVar10,param_1 + 0x658);
    return;
  }
  return;
}
