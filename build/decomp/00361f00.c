// OoT3D decomp @ 00361f00  name=FUN_00361f00  size=352

void FUN_00361f00(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint in_fpscr;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;

  iVar1 = *(int *)(&DAT_000022dc + param_2 + param_3 * 4);
  fVar4 = (float)VectorSignedToFloat(*(undefined4 *)(iVar1 + 0xc),(byte)(in_fpscr >> 0x15) & 3);
  fVar5 = (float)VectorSignedToFloat(*(undefined4 *)(iVar1 + 0x10),(byte)(in_fpscr >> 0x15) & 3);
  fVar6 = (float)VectorSignedToFloat(*(undefined4 *)(iVar1 + 0x14),(byte)(in_fpscr >> 0x15) & 3);
  fVar7 = (float)VectorSignedToFloat(*(undefined4 *)(iVar1 + 0x18),(byte)(in_fpscr >> 0x15) & 3);
  fVar8 = (float)VectorSignedToFloat(*(undefined4 *)(iVar1 + 0x1c),(byte)(in_fpscr >> 0x15) & 3);
  fVar9 = (float)VectorSignedToFloat(*(undefined4 *)(iVar1 + 0x20),(byte)(in_fpscr >> 0x15) & 3);
  fVar2 = (float)FUN_00361490(*(undefined2 *)(iVar1 + 4),*(undefined2 *)(iVar1 + 2),
                              *(undefined2 *)(param_2 + 0x22b8));
  if (0x3f800000 < (int)fVar2) {
    fVar2 = DAT_00362060;
  }
  *(float *)(param_1 + 0x28) = fVar4 + (fVar7 - fVar4) * fVar2;
  *(float *)(param_1 + 0x2c) = fVar5 + (fVar8 - fVar5) * fVar2;
  *(float *)(param_1 + 0x30) = fVar6 + (fVar9 - fVar6) * fVar2;
  if (param_4 != 0) {
    fVar3 = (float)FUN_003696ec();
    fVar2 = DAT_00362064;
    *(short *)(param_1 + 0xbe) = (short)(int)(fVar3 * DAT_00362064);
    fVar4 = (float)FUN_003696ec(-(fVar8 - fVar5),
                                SQRT((fVar7 - fVar4) * (fVar7 - fVar4) +
                                     (fVar9 - fVar6) * (fVar9 - fVar6)));
    *(short *)(param_1 + 0xbc) = (short)(int)(fVar4 * fVar2);
  }
  return;
}
