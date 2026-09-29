// OoT3D decomp @ 002d9f68  name=FUN_002d9f68  size=340

void FUN_002d9f68(int param_1)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  float fVar7;

  iVar1 = DAT_002da0bc;
  iVar4 = *(int *)(param_1 + 0x20ac);
  *(undefined1 *)(DAT_002da0bc + 9) = 0;
  fVar2 = DAT_002da0c0;
  fVar5 = (float)VectorSignedToFloat((int)(short)(int)*(float *)(iVar4 + 0x30),
                                     (byte)(in_fpscr >> 0x15) & 3);
  fVar6 = (float)VectorSignedToFloat((int)(short)(int)*(float *)(iVar4 + 0x2c),
                                     (byte)(in_fpscr >> 0x15) & 3);
  fVar7 = (float)VectorSignedToFloat((int)(short)(int)*(float *)(iVar4 + 0x28),
                                     (byte)(in_fpscr >> 0x15) & 3);
  FUN_003591e4(fVar7 - DAT_002da0c0,fVar6 + DAT_002da0c0,fVar5 - DAT_002da0c0,DAT_002da0c4,0,0,0,
               0xff,0);
  uVar3 = FUN_0034faa8(param_1,param_1 + 0xa70,DAT_002da0c4);
  *(undefined4 *)(iVar1 + 0x40) = uVar3;
  fVar5 = (float)VectorSignedToFloat((int)(short)(int)*(float *)(iVar4 + 0x30),
                                     (byte)(in_fpscr >> 0x15) & 3);
  fVar6 = (float)VectorSignedToFloat((int)(short)(int)*(float *)(iVar4 + 0x2c),
                                     (byte)(in_fpscr >> 0x15) & 3);
  fVar7 = (float)VectorSignedToFloat((int)(short)(int)*(float *)(iVar4 + 0x28),
                                     (byte)(in_fpscr >> 0x15) & 3);
  FUN_003591e4(fVar7 + fVar2,fVar6 + fVar2,fVar5 + fVar2,DAT_002da0c8,0,0,0,0xff,0);
  uVar3 = FUN_0034faa8(param_1,param_1 + 0xa70,DAT_002da0c8);
  *(undefined4 *)(iVar1 + 0x44) = uVar3;
  *(undefined1 *)(param_1 + 0x31b8) = *(undefined1 *)(param_1 + 0x31a7);
  *(undefined1 *)(param_1 + 0x31a7) = 1;
  return;
}
