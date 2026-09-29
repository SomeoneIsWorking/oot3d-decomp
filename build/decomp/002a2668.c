// OoT3D decomp @ 002a2668  name=FUN_002a2668  size=196

void FUN_002a2668(undefined4 param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  float fVar6;

  FUN_00372aa8(param_3 + 0x4a,0,(int)*(short *)(param_3 + 0x54));
  fVar4 = DAT_002a2734;
  fVar2 = DAT_002a2730;
  piVar1 = DAT_002a272c;
  iVar3 = (int)*(short *)(param_3 + 0x58);
  fVar5 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
  fVar6 = (float)VectorSignedToFloat((int)*(short *)(*DAT_002a272c + 0x110),
                                     (byte)(in_fpscr >> 0x15) & 3);
  if (iVar3 < 1) {
    fVar5 = fVar5 * fVar6 * DAT_002a2730 - DAT_002a2734;
  }
  else {
    fVar5 = DAT_002a2734 + fVar5 * fVar6 * DAT_002a2730;
  }
  *(short *)(param_3 + 0x56) = (short)(int)fVar5 + *(short *)(param_3 + 0x56);
  if (0 < iVar3) {
    fVar5 = (float)VectorSignedToFloat((int)*(short *)(param_3 + 0x5a),(byte)(in_fpscr >> 0x15) & 3)
    ;
    fVar6 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x110),(byte)(in_fpscr >> 0x15) & 3
                                      );
    if (*(short *)(param_3 + 0x5a) < 1) {
      fVar4 = fVar5 * fVar6 * fVar2 - fVar4;
    }
    else {
      fVar4 = fVar4 + fVar5 * fVar6 * fVar2;
    }
    *(short *)(param_3 + 0x58) = *(short *)(param_3 + 0x58) - (short)(int)fVar4;
  }
  if (*(short *)(param_3 + 0x58) < 0) {
    *(undefined2 *)(param_3 + 0x58) = 0;
  }
  return;
}
