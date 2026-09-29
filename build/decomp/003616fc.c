// OoT3D decomp @ 003616fc  name=FUN_003616fc  size=1780

void FUN_003616fc(int param_1,undefined2 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;

  *(undefined2 *)(param_1 + 0x9a8) = param_2;
  fVar7 = DAT_00361e70;
  fVar6 = DAT_00361e54;
  uVar5 = DAT_00361ae0;
  fVar10 = DAT_00361ad8;
  uVar4 = DAT_00361ad4;
  fVar9 = DAT_00361acc;
  uVar3 = DAT_00361ac4;
  uVar2 = DAT_00361ac0;
  fVar11 = DAT_00361abc;
  fVar12 = DAT_00361ab8;
  piVar1 = DAT_00361ab0;
  switch(param_2) {
  case 0:
    iVar8 = *DAT_00361ab0;
    fVar9 = (float)VectorSignedToFloat((int)*(short *)(iVar8 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
    *(short *)(param_1 + 0x9ae) = (short)(int)(DAT_00361ab4 / fVar9 + DAT_00361ab8);
    uVar2 = DAT_00361ac0;
    fVar9 = (float)VectorSignedToFloat((int)*(short *)(iVar8 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
    *(short *)(param_1 + 0x9b0) = (short)(int)(fVar11 / fVar9 + fVar12);
    *(undefined4 *)(param_1 + 0x9b4) = uVar2;
    *(undefined4 *)(param_1 + 0x9b8) = DAT_00361ac4;
    fVar11 = DAT_00361acc;
    *(undefined4 *)(param_1 + 0x9c8) = DAT_00361ac8;
    *(float *)(param_1 + 0x1e4) = fVar11;
    fVar11 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    *(short *)(param_1 + 0x9c0) = (short)(int)(DAT_00361ad0 / fVar11 + fVar12);
    return;
  case 1:
    iVar8 = *DAT_00361ab0;
    fVar11 = (float)VectorSignedToFloat((int)*(short *)(iVar8 + 0x110),(byte)(in_fpscr >> 0x15) & 3)
    ;
    *(short *)(param_1 + 0x9ae) = (short)(int)(DAT_00361ad8 / fVar11 + DAT_00361ab8);
    uVar2 = DAT_00361ac0;
    fVar11 = (float)VectorSignedToFloat((int)*(short *)(iVar8 + 0x110),(byte)(in_fpscr >> 0x15) & 3)
    ;
    *(short *)(param_1 + 0x9b0) = (short)(int)(fVar6 / fVar11 + fVar12);
    *(undefined4 *)(param_1 + 0x9b4) = uVar2;
    *(undefined4 *)(param_1 + 0x9b8) = DAT_00361e58;
    fVar9 = DAT_00361e5c;
    *(undefined4 *)(param_1 + 0x9c8) = DAT_00361ac8;
    break;
  case 2:
    iVar8 = *DAT_00361ab0;
    fVar11 = (float)VectorSignedToFloat((int)*(short *)(iVar8 + 0x110),(byte)(in_fpscr >> 0x15) & 3)
    ;
    *(short *)(param_1 + 0x9ae) = (short)(int)(DAT_00361ab4 / fVar11 + DAT_00361ab8);
    uVar2 = DAT_00361ae0;
    fVar11 = (float)VectorSignedToFloat((int)*(short *)(iVar8 + 0x110),(byte)(in_fpscr >> 0x15) & 3)
    ;
    *(short *)(param_1 + 0x9b0) = (short)(int)(fVar10 / fVar11 + fVar12);
    *(undefined4 *)(param_1 + 0x9b4) = uVar2;
    *(undefined4 *)(param_1 + 0x9b8) = DAT_00361ac4;
    fVar9 = DAT_00361acc;
    *(undefined4 *)(param_1 + 0x9c8) = DAT_00361e60;
    break;
  case 3:
    fVar12 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00361ab0 + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    *(short *)(param_1 + 0x9b0) = (short)(int)(DAT_00361ab8 + fVar12 * DAT_00361abc * DAT_00361e64);
    *(float *)(param_1 + 0x9b8) = fVar9;
    *(float *)(param_1 + 0x9b4) = fVar9;
    *(undefined4 *)(param_1 + 0x9c8) = DAT_00361e68;
    break;
  case 4:
    fVar12 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00361ab0 + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    *(short *)(param_1 + 0x9b0) = (short)(int)(DAT_00361e54 / fVar12 + DAT_00361ab8);
    *(undefined4 *)(param_1 + 0x9b4) = uVar3;
    *(undefined4 *)(param_1 + 0x9b8) = DAT_00361ae0;
    fVar9 = DAT_00361e5c;
    *(undefined4 *)(param_1 + 0x9c8) = DAT_00361e68;
    break;
  case 5:
    fVar11 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00361ab0 + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    *(short *)(param_1 + 0x9b0) = (short)(int)(DAT_00361abc / fVar11 + DAT_00361ab8);
    *(undefined4 *)(param_1 + 0x9b4) = uVar5;
    *(undefined4 *)(param_1 + 0x9b8) = uVar5;
    *(undefined4 *)(param_1 + 0x9c8) = DAT_00361e68;
    fVar9 = fVar12;
    break;
  case 6:
    iVar8 = *DAT_00361ab0;
    fVar11 = (float)VectorSignedToFloat((int)*(short *)(iVar8 + 0x110),(byte)(in_fpscr >> 0x15) & 3)
    ;
    *(short *)(param_1 + 0x9ae) = (short)(int)(DAT_00361ad8 / fVar11 + DAT_00361ab8);
    uVar2 = DAT_00361e6c;
    fVar11 = (float)VectorSignedToFloat((int)*(short *)(iVar8 + 0x110),(byte)(in_fpscr >> 0x15) & 3)
    ;
    *(short *)(param_1 + 0x9b0) = (short)(int)(fVar6 / fVar11 + fVar12);
    *(undefined4 *)(param_1 + 0x9b4) = uVar2;
    *(undefined4 *)(param_1 + 0x9b8) = DAT_00361ac4;
    fVar9 = DAT_00361e5c;
    *(undefined4 *)(param_1 + 0x9c8) = DAT_00361ac8;
    break;
  case 7:
    *(undefined4 *)(param_1 + 0x9b4) = DAT_00361ad4;
    *(undefined4 *)(param_1 + 0x9b8) = uVar4;
    fVar12 = DAT_00361acc;
    *(undefined4 *)(param_1 + 0x9c8) = DAT_00361ac8;
    *(float *)(param_1 + 0x1e4) = fVar12;
    fVar11 = DAT_00361adc;
    fVar12 = DAT_00361ab8;
    iVar8 = *DAT_00361ab0;
    fVar9 = (float)VectorSignedToFloat((int)*(short *)(iVar8 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
    *(short *)(param_1 + 0x9ae) = (short)(int)(DAT_00361ae4 / fVar9 + DAT_00361ab8);
    fVar9 = (float)VectorSignedToFloat((int)*(short *)(iVar8 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
    *(short *)(param_1 + 0x9c0) = (short)(int)(fVar11 / fVar9 + fVar12);
    return;
  case 8:
    iVar8 = *DAT_00361ab0;
    fVar9 = (float)VectorSignedToFloat((int)*(short *)(iVar8 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
    *(short *)(param_1 + 0x9ae) = (short)(int)(DAT_00361ad8 / fVar9 + DAT_00361ab8);
    uVar2 = DAT_00361ad4;
    fVar9 = (float)VectorSignedToFloat((int)*(short *)(iVar8 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
    *(short *)(param_1 + 0x9b0) = (short)(int)(fVar11 / fVar9 + fVar12);
    *(undefined4 *)(param_1 + 0x9b4) = uVar2;
    *(undefined4 *)(param_1 + 0x9b8) = uVar2;
    fVar9 = DAT_00361acc;
    *(undefined4 *)(param_1 + 0x9c8) = DAT_00361ac8;
    break;
  case 9:
    iVar8 = *DAT_00361ab0;
    fVar9 = (float)VectorSignedToFloat((int)*(short *)(iVar8 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
    *(short *)(param_1 + 0x9ae) = (short)(int)(DAT_00361ad8 / fVar9 + DAT_00361ab8);
    fVar9 = DAT_00361adc;
    fVar10 = (float)VectorSignedToFloat((int)*(short *)(iVar8 + 0x110),(byte)(in_fpscr >> 0x15) & 3)
    ;
    *(short *)(param_1 + 0x9b0) = (short)(int)(fVar11 / fVar10 + fVar12);
    *(float *)(param_1 + 0x9b4) = fVar9;
    *(undefined4 *)(param_1 + 0x9b8) = DAT_00361ae0;
    fVar9 = DAT_00361acc;
    *(undefined4 *)(param_1 + 0x9c8) = DAT_00361ac8;
    break;
  case 10:
    fVar12 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00361ab0 + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    *(short *)(param_1 + 0x9ae) = (short)(int)(DAT_00361ab4 / fVar12 + DAT_00361ab8);
    *(undefined2 *)(param_1 + 0x9b0) = 0;
    *(undefined4 *)(param_1 + 0x9b4) = uVar2;
    *(undefined4 *)(param_1 + 0x9b8) = DAT_00361ad4;
    fVar9 = DAT_00361acc;
    *(undefined4 *)(param_1 + 0x9c8) = DAT_00361ac8;
    break;
  case 0xb:
    iVar8 = *DAT_00361ab0;
    fVar11 = (float)VectorSignedToFloat((int)*(short *)(iVar8 + 0x110),(byte)(in_fpscr >> 0x15) & 3)
    ;
    *(short *)(param_1 + 0x9ae) = (short)(int)(DAT_00361ab4 / fVar11 + DAT_00361ab8);
    uVar2 = DAT_00361ac0;
    fVar11 = (float)VectorSignedToFloat((int)*(short *)(iVar8 + 0x110),(byte)(in_fpscr >> 0x15) & 3)
    ;
    *(short *)(param_1 + 0x9b0) = (short)(int)(fVar7 / fVar11 + fVar12);
    *(undefined4 *)(param_1 + 0x9b4) = uVar2;
    fVar11 = DAT_00361acc;
    *(float *)(param_1 + 0x9b8) = DAT_00361acc;
    *(undefined4 *)(param_1 + 0x9c8) = DAT_00361ac8;
    *(float *)(param_1 + 0x1e4) = fVar11;
    fVar11 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    *(short *)(param_1 + 0x9c0) = (short)(int)(DAT_00361e74 / fVar11 + fVar12);
    return;
  case 0xc:
    iVar8 = *DAT_00361ab0;
    fVar9 = (float)VectorSignedToFloat((int)*(short *)(iVar8 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
    *(short *)(param_1 + 0x9ae) = (short)(int)(DAT_00361ab4 / fVar9 + DAT_00361ab8);
    fVar9 = DAT_00361acc;
    uVar2 = DAT_00361ac0;
    fVar10 = (float)VectorSignedToFloat((int)*(short *)(iVar8 + 0x110),(byte)(in_fpscr >> 0x15) & 3)
    ;
    *(short *)(param_1 + 0x9b0) = (short)(int)(fVar11 / fVar10 + fVar12);
    *(float *)(param_1 + 0x9b4) = fVar9;
    *(undefined4 *)(param_1 + 0x9b8) = uVar2;
    *(undefined4 *)(param_1 + 0x9c8) = DAT_00361ac8;
    *(float *)(param_1 + 0x1e4) = fVar9;
    fVar11 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    *(short *)(param_1 + 0x9c0) = (short)(int)(DAT_00361ad0 / fVar11 + fVar12);
    return;
  default:
    return;
  }
  *(float *)(param_1 + 0x1e4) = fVar9;
  return;
}
