// OoT3D decomp @ 00336434  name=FUN_00336434  size=372

undefined4
FUN_00336434(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6)

{
  float fVar1;
  short sVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;

  fVar4 = DAT_003365ac;
  fVar1 = DAT_003365a8;
  if (*(short *)((int)param_1 + 0x18a) == 0x2b || *(short *)((int)param_1 + 0x18a) == 0x1d) {
    return 0;
  }
  *param_1 = param_2;
  fVar5 = (float)VectorSignedToFloat(param_4,(byte)(in_fpscr >> 0x15) & 3);
  if (param_4 < 1) {
    fVar5 = fVar5 * fVar1 * fVar4 - fVar4;
  }
  else {
    fVar5 = fVar4 + fVar5 * fVar1 * fVar4;
  }
  *(short *)((int)param_1 + 6) = (short)(int)fVar5;
  fVar5 = (float)VectorSignedToFloat(param_5,(byte)(in_fpscr >> 0x15) & 3);
  if (param_5 < 1) {
    fVar5 = fVar5 * fVar1 * fVar4 - fVar4;
  }
  else {
    fVar5 = fVar4 + fVar5 * fVar1 * fVar4;
  }
  *(short *)(param_1 + 2) = (short)(int)fVar5;
  fVar5 = (float)VectorSignedToFloat(param_6,(byte)(in_fpscr >> 0x15) & 3);
  if (param_6 < 1) {
    fVar4 = fVar5 * fVar1 * fVar4 - fVar4;
  }
  else {
    fVar4 = fVar4 + fVar5 * fVar1 * fVar4;
  }
  *(short *)((int)param_1 + 10) = (short)(int)fVar4;
  *(short *)(param_1 + 1) = (short)param_3;
  if (param_3 != -99) {
    if (param_3 == -1) {
      FUN_00338864(param_1,0x1d,0);
    }
    else {
      sVar2 = FUN_002d064c(param_1[0x35] + 0xa98,param_3,0x32);
      *(ushort *)((int)param_1 + 0x192) = *(ushort *)((int)param_1 + 0x192) | 0x40;
      iVar3 = FUN_00338864(param_1,(int)sVar2,0);
      if (-1 < iVar3) {
        *(ushort *)((int)param_1 + 0x192) = *(ushort *)((int)param_1 + 0x192) | 4;
        *(short *)(param_1 + 100) = (short)param_3;
      }
    }
    FUN_002c0a9c(param_1,(int)*(short *)(param_1 + 99));
    return 0xffffffff;
  }
  FUN_002c0a9c(param_1,(int)*(short *)(param_1 + 99));
  return 0xffffff9d;
}
