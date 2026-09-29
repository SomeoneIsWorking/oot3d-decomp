// OoT3D decomp @ 00262d34  name=FUN_00262d34  size=344

void FUN_00262d34(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  uint in_fpscr;
  int iVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_2c [12];
  float local_20;

  fVar1 = DAT_00262e98;
  fVar5 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x28e),(byte)(in_fpscr >> 0x15) & 3);
  fVar6 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00262e8c + 0x110),
                                     (byte)(in_fpscr >> 0x15) & 3);
  if (*(short *)(param_1 + 0x28e) < 1) {
    fVar5 = fVar5 * fVar6 * DAT_00262e90 - DAT_00262e94;
  }
  else {
    fVar5 = DAT_00262e94 + fVar5 * fVar6 * DAT_00262e90;
  }
  iVar4 = (int)fVar5;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (0xff < iVar4) {
    iVar4 = 0xff;
  }
  fVar5 = (float)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
  if (*DAT_00262ea0 == 0) {
    *(float *)(*(int *)(param_1 + 0x2c0) + 8) = fVar5 * DAT_00262e98 * DAT_00262e9c;
    FUN_003586ec();
  }
  FUN_00373bec(*(undefined4 *)(param_1 + 0x2c0));
  iVar4 = 0;
  if (0 < *(int *)(**(int **)(*(int *)(param_1 + 0x2b4) + 8) + 8)) {
    do {
      iVar3 = *(int *)(*(int *)(param_1 + 0x2a8) + 0x10);
      FUN_00333abc(iVar3,iVar4,auStack_2c);
      local_20 = (float)VectorUnsignedToFloat
                                  ((uint)*(byte *)(param_1 + 0x28a),(byte)(in_fpscr >> 0x15) & 3);
      local_20 = local_20 * fVar1;
      FUN_00333a38(iVar3,iVar4,auStack_2c);
      iVar2 = iVar4 + 1;
      *(undefined1 *)(*(int *)(iVar3 + 4) + iVar4 * 0x124) = 1;
      iVar4 = iVar2;
    } while (iVar2 < *(int *)(**(int **)(*(int *)(param_1 + 0x2b4) + 8) + 8));
  }
  *(undefined1 *)(*(int *)(param_1 + 0x2a8) + 0xac) = 1;
  FUN_003721e0(*(undefined4 *)(param_1 + 0x2a8),param_1 + 0x148);
  FUN_00372170(*(undefined4 *)(param_1 + 0x2a8),0);
  return;
}
