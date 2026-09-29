// OoT3D decomp @ 002b02b4  name=FUN_002b02b4  size=412

void FUN_002b02b4(int param_1,undefined4 param_2,float *param_3)

{
  short sVar1;
  float fVar2;
  int *piVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  float fVar10;

  uVar5 = DAT_002b051c;
  fVar4 = DAT_002b0514;
  piVar3 = DAT_002b0510;
  fVar2 = DAT_002b050c;
  iVar7 = ((int)*(short *)((int)param_3 + 0x56) - (int)*(short *)(param_3 + 0x18)) + -1;
  if ((iVar7 / 8) * 8 - iVar7 != 0) {
    if (*(short *)(param_3 + 0x13) == 1) {
      iVar7 = *(int *)(DAT_002b0520 + param_1);
      fVar8 = (float)FUN_00371e50(DAT_002b0524);
      uVar6 = DAT_002b0528;
      fVar9 = (float)FUN_003738a8(DAT_002b0528);
      iVar7 = iVar7 + (short)(int)fVar8 * 0xc;
      *param_3 = fVar9 + *(float *)(iVar7 + 0x2340);
      fVar8 = (float)FUN_003738a8(uVar5);
      param_3[1] = fVar8 + *(float *)(iVar7 + 0x2344);
      fVar8 = (float)FUN_003738a8(uVar6);
      param_3[2] = fVar8 + *(float *)(iVar7 + 0x2348);
    }
    else if (*(short *)(param_3 + 0x13) == 2) {
      fVar8 = param_3[0xf];
      fVar9 = (float)FUN_00371e50(DAT_002b052c);
      fVar10 = (float)FUN_003738a8(uVar5);
      iVar7 = (int)fVar8 + (short)(int)fVar9 * 0xc;
      *param_3 = fVar10 + *(float *)(iVar7 + 0x2c8);
      fVar8 = (float)FUN_003738a8(DAT_002b0530);
      param_3[1] = fVar8 + *(float *)(iVar7 + 0x2cc);
      fVar8 = (float)FUN_003738a8(uVar5);
      param_3[2] = fVar8 + *(float *)(iVar7 + 0x2d0);
    }
    fVar8 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0x110),(byte)(in_fpscr >> 0x15) & 3
                                      );
    if ((int)*(short *)(param_3 + 0x18) < (int)(DAT_002b0534 / fVar8 + fVar4)) {
      fVar8 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0x110),
                                         (byte)(in_fpscr >> 0x15) & 3);
      sVar1 = *(short *)(param_3 + 0x11) - (short)(int)(fVar4 + fVar8 * DAT_002b0538 * fVar2);
      *(short *)(param_3 + 0x11) = sVar1;
      if (sVar1 < 0) {
        *(undefined2 *)(param_3 + 0x11) = 0;
        *(undefined2 *)(param_3 + 0x18) = 0;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
