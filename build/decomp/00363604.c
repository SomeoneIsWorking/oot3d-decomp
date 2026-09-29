// OoT3D decomp @ 00363604  name=FUN_00363604  size=956

void FUN_00363604(int param_1,undefined4 param_2,int param_3)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ushort uVar10;
  bool bVar11;
  uint in_fpscr;
  float fVar12;
  float fVar13;
  float fVar14;

  fVar5 = DAT_003639e0;
  piVar4 = DAT_003639dc;
  uVar3 = DAT_003639d8;
  fVar14 = DAT_003639d4;
  uVar2 = DAT_003639d0;
  if (*(short *)(param_1 + 0x5d4) == 0) {
    if (param_3 == 0) {
      *(undefined4 *)(param_1 + 0x5e4) = DAT_003639d8;
    }
    else {
      *(undefined4 *)(param_1 + 0x5e4) = DAT_003639d0;
    }
    uVar10 = *(short *)(param_1 + 0x60e) + 1;
    *(ushort *)(param_1 + 0x60e) = uVar10;
    bVar11 = (uVar10 & 1) == 0;
    fVar12 = (float)VectorSignedToFloat((int)*(short *)(*piVar4 + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    *(short *)(param_1 + 0x5d4) = (short)(int)(fVar14 / fVar12 + fVar5);
    if (bVar11) {
      *(undefined4 *)(param_1 + 0x5e4) = uVar3;
    }
    if (bVar11 && param_3 == 0) {
      fVar12 = (float)FUN_00371e50(DAT_003639e4);
      fVar12 = (float)VectorSignedToFloat((int)(short)(int)fVar12,(byte)(in_fpscr >> 0x15) & 3);
      fVar13 = (float)VectorSignedToFloat((int)*(short *)(*piVar4 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(short *)(param_1 + 0x5d4) = (short)(int)((fVar12 * DAT_003639e8) / fVar13 + fVar5);
    }
  }
  fVar13 = DAT_003639f8;
  uVar7 = DAT_003639f4;
  fVar12 = DAT_003639f0;
  uVar6 = DAT_003639ec;
  if (*(short *)(param_1 + 0x5d8) == 0) {
    uVar10 = *(short *)(param_1 + 0x612) + 1U & 1;
    *(ushort *)(param_1 + 0x612) = uVar10;
    uVar9 = DAT_00363a0c;
    uVar8 = DAT_003639fc;
    switch(param_3) {
    case 1:
      fVar12 = (float)VectorSignedToFloat((int)*(short *)(*piVar4 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(short *)(param_1 + 0x5d8) = (short)(int)(fVar14 / fVar12 + fVar5);
      *(undefined4 *)(param_1 + 0x5ec) = uVar6;
      *(undefined4 *)(param_1 + 0x5e8) = uVar6;
      if (uVar10 != 0) break;
    case 0:
      *(undefined4 *)(param_1 + 0x5ec) = uVar3;
      *(undefined4 *)(param_1 + 0x5e8) = uVar3;
      break;
    case 2:
      fVar14 = (float)VectorSignedToFloat((int)*(short *)(*piVar4 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(short *)(param_1 + 0x5d8) = (short)(int)(fVar12 / fVar14 + fVar5);
      *(undefined4 *)(param_1 + 0x5ec) = uVar2;
      *(undefined4 *)(param_1 + 0x5e8) = uVar2;
      *(undefined4 *)(param_1 + 0x5f8) = uVar8;
      *(undefined4 *)(param_1 + 0x600) = uVar8;
      uVar2 = DAT_00363a00;
      *(undefined4 *)(param_1 + 0x5fc) = DAT_00363a00;
      *(undefined4 *)(param_1 + 0x604) = uVar2;
      uVar2 = DAT_00363a04;
      if (uVar10 == 0) {
        *(undefined4 *)(param_1 + 0x5f8) = DAT_00363a04;
        *(undefined4 *)(param_1 + 0x600) = uVar2;
      }
      break;
    case 3:
      fVar14 = (float)VectorSignedToFloat((int)*(short *)(*piVar4 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(short *)(param_1 + 0x5d8) = (short)(int)(fVar12 / fVar14 + fVar5);
      *(undefined4 *)(param_1 + 0x5f8) = uVar7;
      *(undefined4 *)(param_1 + 0x600) = uVar7;
      uVar2 = DAT_00363a08;
      if (uVar10 == 0) {
        *(undefined4 *)(param_1 + 0x5f8) = DAT_00363a08;
        *(undefined4 *)(param_1 + 0x600) = uVar2;
      }
      break;
    case 4:
      fVar14 = (float)VectorSignedToFloat((int)*(short *)(*piVar4 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      uVar1 = (undefined2)(int)(fVar13 / fVar14 + fVar5);
      *(undefined2 *)(param_1 + 0x5d6) = uVar1;
      *(undefined2 *)(param_1 + 0x5d4) = uVar1;
      break;
    case 5:
      fVar14 = (float)VectorSignedToFloat((int)*(short *)(*piVar4 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(short *)(param_1 + 0x5d8) = (short)(int)(fVar13 / fVar14 + fVar5);
      *(undefined4 *)(param_1 + 0x5f8) = uVar9;
      *(undefined4 *)(param_1 + 0x600) = uVar9;
      if (uVar10 == 0) {
        *(undefined4 *)(param_1 + 0x5f8) = uVar7;
        *(undefined4 *)(param_1 + 0x600) = uVar7;
      }
    }
  }
  uVar2 = DAT_00363a10;
  if (*(float *)(param_1 + 0x640) != *(float *)(param_1 + 0x608)) {
    FUN_00373500(*(float *)(param_1 + 0x608),fVar5,DAT_00363a10,param_1 + 0x640);
  }
  if (*(float *)(param_1 + 0x63c) != *(float *)(param_1 + 0x5e4)) {
    FUN_00373500(*(float *)(param_1 + 0x5e4),fVar5,uVar2,param_1 + 0x63c);
  }
  uVar2 = DAT_00363a14;
  if (*(float *)(param_1 + 0x624) != *(float *)(param_1 + 0x5ec)) {
    FUN_00373500(*(float *)(param_1 + 0x5ec),DAT_00363a14,uVar6,param_1 + 0x624);
  }
  if (*(float *)(param_1 + 0x628) != *(float *)(param_1 + 0x600)) {
    FUN_00373500(*(float *)(param_1 + 0x600),uVar2,uVar6,param_1 + 0x628);
  }
  if (*(float *)(param_1 + 0x62c) != *(float *)(param_1 + 0x604)) {
    FUN_00373500(*(float *)(param_1 + 0x604),uVar2,uVar6,param_1 + 0x62c);
  }
  if (*(float *)(param_1 + 0x630) != *(float *)(param_1 + 0x5e8)) {
    FUN_00373500(*(float *)(param_1 + 0x5e8),uVar2,uVar6,param_1 + 0x630);
  }
  if (*(float *)(param_1 + 0x634) != *(float *)(param_1 + 0x5f8)) {
    FUN_00373500(*(float *)(param_1 + 0x5f8),uVar2,uVar6,param_1 + 0x634);
  }
  if (*(float *)(param_1 + 0x638) != *(float *)(param_1 + 0x5fc)) {
    FUN_00373500(*(float *)(param_1 + 0x5fc),uVar2,uVar6,param_1 + 0x638);
    return;
  }
  return;
}
