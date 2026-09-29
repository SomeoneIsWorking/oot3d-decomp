// OoT3D decomp @ 00161308  name=FUN_00161308  size=248

undefined4 FUN_00161308(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  float fVar1;
  float fVar2;
  uint in_fpscr;
  float fVar3;

  fVar2 = DAT_00161404;
  fVar1 = DAT_00161400;
  if (param_2 == 0xd) {
    fVar3 = (float)VectorSignedToFloat((int)*(short *)(param_4 + 0x46e),(byte)(in_fpscr >> 0x15) & 3
                                      );
    FUN_00369014(fVar3 * DAT_00161400 * DAT_00161404,param_3,1);
    fVar3 = (float)VectorSignedToFloat((int)*(short *)(param_4 + 0x470),(byte)(in_fpscr >> 0x15) & 3
                                      );
    FUN_003735e8(fVar3 * fVar1 * fVar2,param_3,1);
    fVar3 = (float)VectorSignedToFloat((int)*(short *)(param_4 + 0x46c),(byte)(in_fpscr >> 0x15) & 3
                                      );
    FUN_00371234(fVar3 * fVar1 * fVar2,param_3,1);
  }
  else if (param_2 == 0xe) {
    fVar3 = (float)VectorSignedToFloat((int)*(short *)(param_4 + 0x468),(byte)(in_fpscr >> 0x15) & 3
                                      );
    FUN_00369014(fVar3 * DAT_00161400 * DAT_00161404,param_3,1);
    fVar3 = (float)VectorSignedToFloat((int)*(short *)(param_4 + 0x46a),(byte)(in_fpscr >> 0x15) & 3
                                      );
    FUN_003735e8(fVar3 * fVar1 * fVar2,param_3,1);
    fVar3 = (float)VectorSignedToFloat((int)*(short *)(param_4 + 0x466),(byte)(in_fpscr >> 0x15) & 3
                                      );
    FUN_00371234(fVar3 * fVar1 * fVar2,param_3,1);
  }
  return 0;
}
