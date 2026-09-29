// OoT3D decomp @ 001f98b4  name=FUN_001f98b4  size=480

void FUN_001f98b4(int param_1)

{
  undefined4 uVar1;
  uint in_fpscr;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auStack_44 [48];

  FUN_003713fc(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
               *(undefined4 *)(param_1 + 0x30),auStack_44,0);
  fVar3 = DAT_001f9a98;
  fVar4 = DAT_001f9a94;
  fVar2 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xbe) +
                                     (int)*(short *)(param_1 + 0x1ba),(byte)(in_fpscr >> 0x15) & 3);
  FUN_003735e8(fVar2 * DAT_001f9a94 * DAT_001f9a98,auStack_44,1);
  fVar2 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xbc) +
                                     (int)*(short *)(param_1 + 0x1b8),(byte)(in_fpscr >> 0x15) & 3);
  FUN_00369014(fVar2 * fVar4 * fVar3,auStack_44,1);
  fVar2 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xc0) +
                                     (int)*(short *)(param_1 + 0x1bc),(byte)(in_fpscr >> 0x15) & 3);
  FUN_00371234(fVar2 * fVar4 * fVar3,auStack_44,1);
  FUN_00371348(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),
               *(undefined4 *)(param_1 + 0x5c),auStack_44,1);
  uVar1 = DAT_001f9aa0;
  fVar4 = DAT_001f9a9c;
  if (*(char *)(param_1 + 0x1a8) == '\0') {
    fVar4 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x1c4),(byte)(in_fpscr >> 0x15) & 3
                                      );
    FUN_003735e8(fVar4 * DAT_001f9a9c - DAT_001f9aa4,auStack_44,1);
    fVar4 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x1c4),(byte)(in_fpscr >> 0x15) & 3
                                      );
    FUN_003713fc(uVar1,uVar1,fVar4 * DAT_001f9aa8 * DAT_001f9aac,auStack_44,1);
    FUN_0035e240(param_1 + 0x230,auStack_44,DAT_001f9ab4,DAT_001f9ab0,param_1,0);
    return;
  }
  FUN_003713fc(DAT_001f9aa0,DAT_001f9aa0,DAT_001f9ab8,auStack_44,1);
  fVar3 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x1c4),(byte)(in_fpscr >> 0x15) & 3);
  FUN_003735e8(fVar3 * fVar4,auStack_44,1);
  FUN_003713fc(uVar1,uVar1,DAT_001f9abc,auStack_44,1);
  FUN_003735e8(DAT_001f9ac0,auStack_44,1);
  FUN_0035e240(param_1 + 0x230,auStack_44,DAT_001f9ac8,DAT_001f9ac4,param_1,0);
  return;
}
