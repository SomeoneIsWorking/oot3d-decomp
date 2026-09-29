// OoT3D decomp @ 001e81fc  name=FUN_001e81fc  size=512

void FUN_001e81fc(short *param_1,int param_2)

{
  int iVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  short *psVar7;
  bool bVar8;
  bool bVar9;
  uint in_fpscr;
  float fVar10;

  *(undefined1 *)(param_1 + 0x3d9) = 1;
  if (0x14 < param_1[0x3be]) {
    FUN_00375bcc(param_1,DAT_001e83fc);
  }
  uVar4 = DAT_001e8408;
  uVar3 = DAT_001e8400;
  FUN_0036e168(DAT_001e840c,DAT_001e8408,DAT_001e8404,DAT_001e8400,param_1 + 0x3ec);
  FUN_00370734(param_1 + 0xd2);
  iVar5 = DAT_001e8410;
  if (param_1[0x3d5] == 0) {
    *(undefined4 *)(param_1 + 0x3da) = uVar3;
    *(undefined4 *)(param_1 + 0x36) = uVar3;
    uVar6 = FUN_0036ae14(param_1 + 0xd2,*(undefined4 *)(iVar5 + 0x14));
    uVar6 = VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00353020(uVar4,uVar3,uVar6,uVar3,param_1 + 0xd2,iVar5 + 0x14,2);
    *(undefined4 *)(param_1 + 0x3b0) = DAT_001e8414;
    param_1[0x3d5] = 0x4b;
    param_1[0x3bf] = 0;
  }
  else {
    sVar2 = param_1[0x3be];
    param_1[0x3be] = sVar2 + 1;
    if (((int)(short)(sVar2 + 1) - 0x15U < 0x3d) &&
       (psVar7 = *(short **)(DAT_001e8418 + param_2), psVar7 != (short *)0x0)) {
      do {
        if (psVar7 != param_1) {
          fVar10 = ABS(*(float *)(psVar7 + 0x14) - *(float *)(param_1 + 0x4f6));
          iVar1 = (int)fVar10 - DAT_001e841c;
          if ((int)fVar10 < DAT_001e841c) {
            fVar10 = ABS(*(float *)(psVar7 + 0x16) - *(float *)(param_1 + 0x4f8));
            iVar1 = (int)fVar10 - DAT_001e841c;
          }
          bVar9 = SBORROW4((int)fVar10,DAT_001e841c);
          bVar8 = iVar1 < 0;
          if (bVar8 != bVar9) {
            bVar9 = SBORROW4((int)ABS(*(float *)(psVar7 + 0x18) - *(float *)(param_1 + 0x4fa)),
                             DAT_001e841c);
            bVar8 = (int)ABS(*(float *)(psVar7 + 0x18) - *(float *)(param_1 + 0x4fa)) - DAT_001e841c
                    < 0;
          }
          if ((bVar8 != bVar9) && ((*psVar7 != 0x10 || ((char)psVar7[0x142] == '\0')))) {
            FUN_00374428();
            FUN_00375bcc(param_1,DAT_001e8420);
            uVar6 = FUN_0036ae14(param_1 + 0xd2,*(undefined4 *)(iVar5 + 0x1c));
            uVar6 = VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
            FUN_00353020(uVar4,uVar3,uVar6,DAT_001e8424,param_1 + 0xd2,DAT_001e8428,2);
            uVar3 = DAT_001e8430;
            *(undefined4 *)(param_1 + 0x3b0) = DAT_001e842c;
            *(undefined4 *)(param_1 + 0x3e6) = uVar3;
            *(undefined4 *)(param_1 + 1000) = DAT_001e8434;
            param_1[0x3c0] = 10;
            param_1[0x3c8] = 2;
            param_1[0x3d5] = 0x35;
            return;
          }
        }
        psVar7 = *(short **)(psVar7 + 0x98);
        if (psVar7 == (short *)0x0) {
          return;
        }
      } while( true );
    }
  }
  return;
}
