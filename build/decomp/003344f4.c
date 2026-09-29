// OoT3D decomp @ 003344f4  name=FUN_003344f4  size=916

void FUN_003344f4(int param_1,undefined4 param_2,int param_3)

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

  fVar5 = DAT_003348a8;
  piVar4 = DAT_003348a4;
  uVar3 = DAT_003348a0;
  fVar14 = DAT_0033489c;
  uVar2 = DAT_00334898;
  if (*(short *)(param_1 + 0x5d4) == 0) {
    if (param_3 == 0) {
      *(undefined4 *)(param_1 + 0x5e4) = DAT_003348a0;
    }
    else {
      *(undefined4 *)(param_1 + 0x5e4) = DAT_00334898;
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
      fVar12 = (float)FUN_00371e50(DAT_003348ac);
      fVar12 = (float)VectorSignedToFloat((int)(short)(int)fVar12,(byte)(in_fpscr >> 0x15) & 3);
      fVar13 = (float)VectorSignedToFloat((int)*(short *)(*piVar4 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(short *)(param_1 + 0x5d4) = (short)(int)((fVar12 * DAT_003348b0) / fVar13 + fVar5);
    }
  }
  fVar13 = DAT_003348c0;
  uVar7 = DAT_003348bc;
  fVar12 = DAT_003348b8;
  uVar6 = DAT_003348b4;
  if (*(short *)(param_1 + 0x5d8) == 0) {
    uVar10 = *(short *)(param_1 + 0x612) + 1U & 1;
    *(ushort *)(param_1 + 0x612) = uVar10;
    uVar9 = DAT_003348d4;
    uVar8 = DAT_003348c4;
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
      uVar2 = DAT_003348c8;
      *(undefined4 *)(param_1 + 0x5fc) = DAT_003348c8;
      *(undefined4 *)(param_1 + 0x604) = uVar2;
      uVar2 = DAT_003348cc;
      if (uVar10 == 0) {
        *(undefined4 *)(param_1 + 0x5f8) = DAT_003348cc;
        *(undefined4 *)(param_1 + 0x600) = uVar2;
      }
      break;
    case 3:
      fVar14 = (float)VectorSignedToFloat((int)*(short *)(*piVar4 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(short *)(param_1 + 0x5d8) = (short)(int)(fVar12 / fVar14 + fVar5);
      *(undefined4 *)(param_1 + 0x5f8) = uVar7;
      *(undefined4 *)(param_1 + 0x600) = uVar7;
      uVar2 = DAT_003348d0;
      if (uVar10 == 0) {
        *(undefined4 *)(param_1 + 0x5f8) = DAT_003348d0;
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
  if (*(float *)(param_1 + 0x63c) != *(float *)(param_1 + 0x5e4)) {
    FUN_00373500(*(float *)(param_1 + 0x5e4),fVar5,DAT_003348d8,param_1 + 0x63c);
  }
  uVar2 = DAT_003348dc;
  if (*(float *)(param_1 + 0x624) != *(float *)(param_1 + 0x5ec)) {
    FUN_00373500(*(float *)(param_1 + 0x5ec),DAT_003348dc,uVar6,param_1 + 0x624);
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
