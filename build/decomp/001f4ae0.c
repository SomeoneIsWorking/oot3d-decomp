// OoT3D decomp @ 001f4ae0  name=FUN_001f4ae0  size=512

void FUN_001f4ae0(int param_1,int param_2)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  short sVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;

  iVar3 = *(int *)(param_1 + 0x128);
  if (((iVar3 != 0) && (*(int *)(iVar3 + 0x13c) == 0)) && (iVar3 != param_1)) {
    *(undefined4 *)(param_1 + 0x128) = 0;
  }
  fVar6 = DAT_001f4cec;
  fVar2 = DAT_001f4ce4;
  piVar1 = DAT_001f4ce0;
  if (0 < *(short *)(param_1 + 0x3dc)) {
    *(short *)(param_1 + 0x3dc) = *(short *)(param_1 + 0x3dc) + -1;
  }
  fVar7 = DAT_001f4cf0;
  iVar3 = *piVar1;
  fVar8 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x3e4),(byte)(in_fpscr >> 0x15) & 3);
  fVar5 = (float)VectorSignedToFloat((int)*(short *)(iVar3 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
  *(short *)(param_1 + 0x3e4) = (short)(int)(fVar8 + fVar6 + fVar5 * fVar2 * DAT_001f4ce8);
  fVar5 = DAT_001f4cf4;
  fVar9 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x3e6),(byte)(in_fpscr >> 0x15) & 3);
  fVar8 = (float)VectorSignedToFloat((int)*(short *)(iVar3 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
  *(short *)(param_1 + 0x3e6) = (short)(int)(fVar9 + fVar6 + fVar8 * fVar2 * fVar7);
  fVar8 = (float)VectorSignedToFloat((int)*(short *)(iVar3 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
  fVar7 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 1000),(byte)(in_fpscr >> 0x15) & 3);
  *(short *)(param_1 + 1000) = (short)(int)(fVar7 + fVar6 + fVar8 * fVar2 * fVar5);
  if ((*(ushort *)(param_1 + 0x1c) & 1) != 0) {
    if (*(char *)(*(int *)(DAT_001f4cf8 + param_2) + 0x2227) == '\0') {
      if (*(short *)(param_1 + 0x3e2) < 1) goto LAB_001f4c1c;
      sVar4 = *(short *)(param_1 + 0x3e2) + -1;
    }
    else {
      fVar7 = (float)VectorSignedToFloat((int)*(short *)(iVar3 + 0x110),(byte)(in_fpscr >> 0x15) & 3
                                        );
      sVar4 = (short)(int)(fVar6 + (DAT_001f4d04 / fVar7) * DAT_001f4d08);
    }
    *(short *)(param_1 + 0x3e2) = sVar4;
  }
LAB_001f4c1c:
  (**(code **)(param_1 + 0x3d8))(param_1,param_2);
  if (*(int *)(param_1 + 0x13c) == 0) {
    return;
  }
  FUN_00376864(param_1);
  fVar6 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
  FUN_003705a0(*(undefined4 *)(param_1 + 0x3ec),fVar6 * fVar2 * DAT_001f4cfc,param_1 + 0x2c);
  if (*(int *)(param_1 + 0x94) < DAT_001f4d00) {
    FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x1a4);
  }
  FUN_0037322c(*(float *)(param_1 + 0xc4) * *(float *)(param_1 + 0x58),param_1);
  return;
}
