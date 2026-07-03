// OoT3D decomp @ 002bb1cc  name=FUN_002bb1cc  size=364

void FUN_002bb1cc(int param_1)

{
  uint uVar1;
  float fVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_1468 [5200];
  
  FUN_003204a4(*(undefined4 *)(param_1 + 0x3c),param_1,*(undefined4 *)(param_1 + 0x30),
               *(undefined1 *)(param_1 + 0x74),*(undefined4 *)(param_1 + 0x78));
  fVar2 = DAT_002bb338;
  if ((*(byte *)(param_1 + 0x70) & 1) != 0) {
    FUN_00350820(auStack_1468,DAT_002bb33c,0x34,100);
    fVar3 = *(float *)(param_1 + 0x3c);
    fVar4 = fVar3 + DAT_002bb340;
    fVar5 = (float)VectorSignedToFloat((int)*(float *)(param_1 + 0x4c),(byte)(in_fpscr >> 0x15) & 3)
    ;
    uVar1 = in_fpscr & 0xfffffff | (uint)(fVar4 < fVar5) << 0x1f;
    in_fpscr = uVar1 | (uint)(NAN(fVar4) || NAN(fVar5)) << 0x1c;
    if ((byte)(uVar1 >> 0x1f) == ((byte)(in_fpscr >> 0x1c) & 1)) {
      fVar4 = fVar2;
    }
    FUN_003204a4(fVar4,param_1,*(undefined4 *)(param_1 + 0x30),*(undefined1 *)(param_1 + 0x74),
                 auStack_1468);
    if (*(char *)(param_1 + 0x76) == '\0') {
      FUN_0030f6b0(fVar3 - fVar3,*(undefined1 *)(param_1 + 0x74),*(undefined1 *)(param_1 + 0x75),
                   *(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x78),auStack_1468);
    }
    else {
      FUN_0030f900();
    }
  }
  uVar1 = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 0x34) == fVar2) << 0x1e;
  if (!SUB41(uVar1 >> 0x1e,0)) {
    fVar4 = (float)VectorSignedToFloat((int)*(short *)(*DAT_002bb344 + 0x110),
                                       (byte)(uVar1 >> 0x15) & 3);
    fVar4 = *(float *)(param_1 + 0x34) - *(float *)(param_1 + 0x38) * fVar4 * DAT_002bb348;
    *(float *)(param_1 + 0x34) = fVar4;
    if (fVar2 < fVar4) {
      if (*(char *)(param_1 + 0x76) != '\0') {
        FUN_0030f900();
        return;
      }
      FUN_0030f6b0(*(undefined1 *)(param_1 + 0x74),*(undefined1 *)(param_1 + 0x75),
                   *(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x78),
                   *(undefined4 *)(param_1 + 0x7c));
      return;
    }
    *(float *)(param_1 + 0x34) = fVar2;
  }
  return;
}

