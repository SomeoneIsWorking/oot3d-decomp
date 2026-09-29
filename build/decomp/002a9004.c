// OoT3D decomp @ 002a9004  name=FUN_002a9004  size=612

undefined4 FUN_002a9004(undefined4 param_1,int param_2,float *param_3,int param_4)

{
  float fVar1;
  uint in_fpscr;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;

  fVar1 = DAT_002a926c;
  fVar2 = DAT_002a9268;
  if (param_2 == 0x1d) {
    uVar3 = *(undefined4 *)(param_4 + 0x290);
    FUN_00371348(uVar3,uVar3,uVar3,param_3,1);
  }
  else if (param_2 < 0x1e) {
    if (param_2 == 9) {
      fVar4 = (float)VectorSignedToFloat((int)*(short *)(param_4 + 0x23a),
                                         (byte)(in_fpscr >> 0x15) & 3);
      FUN_00369014(fVar4 * DAT_002a9268,param_3,1);
      fVar4 = (float)VectorSignedToFloat((int)*(short *)(param_4 + 0x23c),
                                         (byte)(in_fpscr >> 0x15) & 3);
      fVar4 = fVar4 * fVar2;
      if (fVar4 != DAT_002a9270) {
        fVar2 = (float)FUN_003727f0(fVar4);
        fVar4 = (float)FUN_00372674(fVar4);
        fVar5 = *param_3;
        *param_3 = fVar5 * fVar4 - param_3[2] * fVar2;
        param_3[2] = fVar5 * fVar2 + param_3[2] * fVar4;
        fVar5 = param_3[4];
        param_3[4] = fVar5 * fVar4 - param_3[6] * fVar2;
        param_3[6] = fVar5 * fVar2 + param_3[6] * fVar4;
        fVar5 = param_3[8];
        param_3[8] = fVar5 * fVar4 - param_3[10] * fVar2;
        param_3[10] = fVar5 * fVar2 + param_3[10] * fVar4;
      }
      FUN_00371348(*(undefined4 *)(param_4 + 0x294),*(undefined4 *)(param_4 + 0x2c0),fVar1,param_3,1
                  );
    }
    else if (param_2 == 0x16) {
      fVar2 = (float)VectorSignedToFloat((int)*(short *)(param_4 + 0x236),
                                         (byte)(in_fpscr >> 0x15) & 3);
      FUN_00369014(fVar2 * DAT_002a9268,param_3,1);
    }
    else if (param_2 == 0x17) {
      fVar2 = (float)VectorSignedToFloat((int)*(short *)(param_4 + 0x234),
                                         (byte)(in_fpscr >> 0x15) & 3);
      FUN_00369014(fVar2 * DAT_002a9268,param_3,1);
    }
  }
  else if (param_2 == 0x1e) {
    fVar2 = DAT_002a926c / *(float *)(param_4 + 0x290);
    FUN_00371348(fVar2,fVar2,fVar2,param_3,1);
    uVar3 = *(undefined4 *)(param_4 + 0x28c);
    FUN_00371348(uVar3,uVar3,uVar3,param_3,1);
  }
  else if (param_2 == 0x1f) {
    fVar2 = DAT_002a926c / *(float *)(param_4 + 0x28c);
    FUN_00371348(fVar2,fVar2,fVar2,param_3,1);
    uVar3 = *(undefined4 *)(param_4 + 0x288);
    FUN_00371348(uVar3,uVar3,uVar3,param_3,1);
  }
  else if (param_2 == 0x20) {
    fVar2 = DAT_002a926c / *(float *)(param_4 + 0x288);
    FUN_00371348(fVar2,fVar2,fVar2,param_3,1);
    uVar3 = *(undefined4 *)(param_4 + 0x284);
    FUN_00371348(uVar3,uVar3,uVar3,param_3,1);
  }
  return 0;
}
