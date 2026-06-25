// OoT3D decomp @ 004bd7e8  name=FUN_004bd7e8  size=260

void FUN_004bd7e8(int param_1,undefined4 param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  short local_20 [2];
  float local_1c;
  
  iVar2 = FUN_0036b4ec(param_1 + 0x254);
  fVar1 = DAT_004bd8f4;
  fVar4 = (float)VectorSignedToFloat((int)*(short *)(*DAT_004bd8ec + 0x6a),
                                     (byte)(in_fpscr >> 0x15) & 3);
  FUN_003705a0(DAT_004bd8f4,fVar4 * DAT_004bd8f0,param_1 + 0x221c);
  iVar3 = FUN_002c3d18(param_2,param_1,DAT_004bd8f8,1);
  if ((iVar3 == 0) &&
     (FUN_0036b3f4(fVar1,param_1,&local_1c,local_20,param_2), *(float *)(param_1 + 0x221c) == fVar1)
     ) {
    *(undefined2 *)(DAT_004bd8fc + param_1) = *(undefined2 *)(param_1 + 0xbe);
    iVar3 = FUN_002c3b94(local_1c,param_1,(int)local_20[0]);
    if (iVar3 < 1) {
      if (local_1c != fVar1 || iVar2 != 0) {
        FUN_0036b2d4(DAT_004bd900,param_1,param_2);
        return;
      }
    }
    else {
      FUN_002c3c7c(param_1,param_2);
    }
  }
  return;
}

