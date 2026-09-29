// OoT3D decomp @ 00272930  name=FUN_00272930  size=1116

undefined4 FUN_00272930(int param_1,int param_2,float *param_3,int param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;

  fVar2 = DAT_00272cb4;
  fVar1 = DAT_00272cb0;
  fVar5 = DAT_00272c78;
  fVar4 = DAT_00272c6c;
  fVar6 = DAT_00272c68;
  fVar7 = DAT_00272c4c;
  fVar8 = *(float *)(param_4 + 0x1e0);
  fVar10 = fVar7;
  if (param_2 == 4) {
    iVar3 = *(int *)(param_4 + 0x664);
    if (iVar3 == DAT_00272c50) {
      fVar4 = (float)FUN_003727f0(fVar8 * DAT_00272c54);
      fVar6 = DAT_00272c8c;
LAB_00272bd0:
      fVar9 = fVar7 - fVar4 * fVar6;
      goto LAB_00272db0;
    }
    if (iVar3 != DAT_00272c58) {
      if (iVar3 == DAT_00272c7c) {
        fVar6 = (float)VectorSignedToFloat((int)*(short *)(param_4 + 0x66a),
                                           (byte)(in_fpscr >> 0x15) & 3);
        if (*(short *)(param_4 + 0x66a) < 1) {
          fVar6 = fVar6 * DAT_00272c80 * DAT_00272c84 - DAT_00272c88;
        }
        else {
          fVar6 = DAT_00272c88 + fVar6 * DAT_00272c80 * DAT_00272c84;
        }
        fVar6 = (float)VectorSignedToFloat((int)fVar6,(byte)(in_fpscr >> 0x15) & 3);
        fVar6 = (float)FUN_003727f0(fVar6 * DAT_00272c64);
        fVar10 = fVar7 - fVar6 * DAT_00272ca4;
        fVar9 = fVar7 + fVar6 * DAT_00272ca4;
      }
      else {
        fVar7 = (float)FUN_00372674(fVar8 * DAT_00272c90);
        fVar9 = DAT_00272cac + fVar7 * DAT_00272ca8;
      }
      goto LAB_00272db0;
    }
    if (0x41000000 < (int)fVar8) {
      if (DAT_00272c5c < (int)fVar8) {
        fVar6 = (float)FUN_00372674((fVar8 - DAT_00272c70) * DAT_00272c74);
        fVar10 = fVar7 - fVar6 * fVar5;
        fVar9 = fVar7 + fVar6 * DAT_00272ca0;
      }
      else {
        fVar5 = (float)FUN_00372674((fVar8 - DAT_00272c60) * DAT_00272c64);
        fVar10 = DAT_00272c9c + fVar5 * fVar4;
        fVar9 = fVar7 - fVar5 * fVar6;
      }
      goto LAB_00272db0;
    }
    fVar4 = (float)FUN_00372674(fVar8 * DAT_00272c90);
    fVar6 = DAT_00272c94;
    fVar7 = DAT_00272c98;
  }
  else {
    fVar9 = fVar7;
    if (param_2 != 3) {
      if (param_2 == 2) {
        fVar9 = DAT_00272c4c;
        fVar10 = DAT_00272c4c;
        if (*(int *)(param_4 + 0x664) == DAT_00272c58) {
          if ((int)fVar8 < 0x41000001) {
            fVar7 = (float)FUN_00372674(fVar8 * DAT_00272c90);
            fVar9 = DAT_00272cd4 + fVar7 * fVar6;
            fVar10 = fVar2 - fVar7 * fVar1;
          }
          else if (DAT_00272c5c < (int)fVar8) {
            fVar6 = (float)FUN_00372674((fVar8 - DAT_00272c70) * DAT_00272c74);
            fVar9 = fVar7 + fVar6 * DAT_00272e28;
            fVar10 = fVar7 - fVar6 * fVar5;
          }
          else {
            fVar7 = (float)FUN_00372674((fVar8 - DAT_00272c60) * DAT_00272c64);
            fVar10 = DAT_00272cdc + fVar7 * DAT_00272cd8;
            fVar9 = DAT_00272ce4 - fVar7 * DAT_00272ce0;
          }
        }
        FUN_00371fac(param_3,param_1 + 0x2fc);
        fVar7 = (float)VectorSignedToFloat((int)*(short *)(param_4 + 0x16),
                                           (byte)(in_fpscr >> 0x15) & 3);
        fVar7 = fVar7 * DAT_00272e2c;
        if (fVar7 != DAT_00272e30) {
          fVar6 = (float)FUN_003727f0(fVar7);
          fVar7 = (float)FUN_00372674(fVar7);
          fVar4 = *param_3;
          *param_3 = fVar4 * fVar7 - param_3[2] * fVar6;
          param_3[2] = fVar4 * fVar6 + param_3[2] * fVar7;
          fVar4 = param_3[4];
          param_3[4] = fVar4 * fVar7 - param_3[6] * fVar6;
          param_3[6] = fVar4 * fVar6 + param_3[6] * fVar7;
          fVar4 = param_3[8];
          param_3[8] = fVar4 * fVar7 - param_3[10] * fVar6;
          param_3[10] = fVar4 * fVar6 + param_3[10] * fVar7;
        }
      }
      goto LAB_00272db0;
    }
    iVar3 = *(int *)(param_4 + 0x664);
    if (iVar3 == DAT_00272c50) {
      fVar6 = (float)FUN_003727f0(fVar8 * DAT_00272c54);
      fVar9 = fVar7 + fVar6 * fVar4;
      goto LAB_00272db0;
    }
    if (iVar3 != DAT_00272c58) {
      if (iVar3 == DAT_00272c7c) {
        fVar6 = (float)VectorSignedToFloat((int)*(short *)(param_4 + 0x66a),
                                           (byte)(in_fpscr >> 0x15) & 3);
        if (*(short *)(param_4 + 0x66a) < 1) {
          fVar6 = fVar6 * DAT_00272c80 * DAT_00272c84 - DAT_00272c88;
        }
        else {
          fVar6 = DAT_00272c88 + fVar6 * DAT_00272c80 * DAT_00272c84;
        }
        fVar6 = (float)VectorSignedToFloat((int)fVar6,(byte)(in_fpscr >> 0x15) & 3);
        fVar6 = (float)FUN_003727f0(fVar6 * DAT_00272c64);
        fVar10 = fVar7 + fVar6 * DAT_00272ca4;
        fVar9 = fVar7 - fVar6 * DAT_00272ca4;
        goto LAB_00272db0;
      }
      fVar4 = (float)FUN_00372674(fVar8 * DAT_00272c90);
      fVar6 = DAT_00272ccc;
      fVar7 = DAT_00272cd0;
      goto LAB_00272bd0;
    }
    if ((int)fVar8 < 0x41000001) {
      fVar7 = (float)FUN_00372674(fVar8 * DAT_00272c90);
      fVar10 = fVar2 - fVar7 * fVar1;
      goto LAB_00272db0;
    }
    if ((int)fVar8 <= DAT_00272c5c) {
      fVar7 = (float)FUN_00372674((fVar8 - DAT_00272c60) * DAT_00272c64);
      fVar10 = DAT_00272cbc + fVar7 * DAT_00272cb8;
      fVar9 = DAT_00272cc4 - fVar7 * DAT_00272cc0;
      goto LAB_00272db0;
    }
    fVar4 = (float)FUN_00372674((fVar8 - DAT_00272c70) * DAT_00272c74);
    fVar10 = fVar7 - fVar4 * fVar6;
    fVar6 = DAT_00272cc8;
  }
  fVar9 = fVar7 + fVar4 * fVar6;
LAB_00272db0:
  *param_3 = *param_3 * fVar10;
  param_3[4] = param_3[4] * fVar10;
  param_3[8] = param_3[8] * fVar10;
  param_3[1] = param_3[1] * fVar9;
  param_3[5] = param_3[5] * fVar9;
  param_3[9] = param_3[9] * fVar9;
  param_3[2] = param_3[2] * fVar10;
  param_3[6] = param_3[6] * fVar10;
  param_3[10] = param_3[10] * fVar10;
  return 0;
}
