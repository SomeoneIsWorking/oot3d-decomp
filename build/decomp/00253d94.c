// OoT3D decomp @ 00253d94  name=FUN_00253d94  size=520

void FUN_00253d94(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;

  iVar4 = *(int *)(DAT_00253f9c + param_2);
  FUN_00373264(param_1,DAT_00253fa0);
  fVar9 = DAT_00253fec;
  fVar7 = DAT_00253fe8;
  fVar8 = DAT_00253fb0;
  fVar6 = DAT_00253fac;
  piVar1 = DAT_00253fa4;
  iVar3 = (int)*(short *)(*DAT_00253fa4 + 0x110);
  iVar2 = (int)*(short *)(param_1 + 0x1a4);
  fVar5 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
  if (iVar2 < (int)(DAT_00253fa8 / fVar5 + DAT_00253fac)) {
    fVar6 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    fVar8 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
    if (iVar2 < 1) {
      fVar6 = fVar6 * fVar8 * DAT_00253fb0 - DAT_00253fac;
    }
    else {
      fVar6 = DAT_00253fac + fVar6 * fVar8 * DAT_00253fb0;
    }
    fVar6 = (float)VectorSignedToFloat((int)fVar6,(byte)(in_fpscr >> 0x15) & 3);
    FUN_0032e668(fVar6 * DAT_00253fb4,param_2);
    FUN_0036e168(*(float *)(param_1 + 0x1b4) * DAT_00253fb8,DAT_00253fc4,DAT_00253fc0,DAT_00253fbc,
                 param_1 + 0x54);
    FUN_0037572c(*(undefined4 *)(param_1 + 0x54),param_1);
  }
  else {
    fVar5 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
    if (iVar2 < (int)(DAT_00253fc8 / fVar5 + DAT_00253fac)) {
      FUN_0037572c(*(float *)(param_1 + 0x54) * DAT_00253fcc,param_1);
      FUN_0036e168(*(undefined4 *)(iVar4 + 0x2344),fVar6,DAT_00253fd4,DAT_00253fd0,param_1 + 0x1ac);
      iVar2 = (int)*(short *)(param_1 + 0x1a4);
      fVar7 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x110),
                                         (byte)(in_fpscr >> 0x15) & 3);
      if ((int)(DAT_00253fd8 / fVar7 + fVar6) <= iVar2) {
        fVar7 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
        fVar9 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x110),
                                           (byte)(in_fpscr >> 0x15) & 3);
        if (iVar2 < 1) {
          fVar6 = fVar7 * fVar9 * fVar8 - fVar6;
        }
        else {
          fVar6 = fVar6 + fVar7 * fVar9 * fVar8;
        }
        fVar6 = (float)VectorSignedToFloat(0x36 - (int)fVar6,(byte)(in_fpscr >> 0x15) & 3);
        FUN_0032e668(fVar6 * DAT_00253fdc,param_2);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x13c) = DAT_00253fe0;
      *(undefined4 *)(param_1 + 0x140) = DAT_00253fe4;
      fVar7 = *(float *)(param_1 + 0x1b4) * fVar7;
      *(float *)(param_1 + 0x5c) = fVar7;
      *(float *)(param_1 + 0x54) = fVar7;
      *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0x1b4) * fVar9;
      *(undefined2 *)(param_1 + 0x1a4) = 0;
      *(undefined1 *)(param_1 + 0x1a6) = 0;
    }
  }
  *(short *)(param_1 + 0x1a4) = *(short *)(param_1 + 0x1a4) + 1;
  return;
}
