// OoT3D decomp @ 001c5d5c  name=FUN_001c5d5c  size=408

void FUN_001c5d5c(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;

  if (*(short *)(param_1 + 0x234) != 0) {
    *(short *)(param_1 + 0x234) = *(short *)(param_1 + 0x234) + -1;
  }
  FUN_003731e0(param_1 + 0x1a4);
  iVar5 = DAT_001c5ef4;
  fVar6 = (float)FUN_00338f60((int)*(short *)(*(int *)(DAT_001c5ef4 + 0x30) + 0xbe));
  fVar2 = DAT_001c5f00;
  uVar1 = DAT_001c5efc;
  fVar7 = DAT_001c5ef8;
  FUN_00373500(*(float *)(param_1 + 0x10) + fVar6 * DAT_001c5ef8,DAT_001c5f00,DAT_001c5efc,
               param_1 + 0x30);
  fVar6 = (float)FUN_002cfca0((int)*(short *)(*(int *)(iVar5 + 0x30) + 0xbe));
  FUN_00373500(*(float *)(param_1 + 8) + fVar6 * fVar7,fVar2,uVar1,param_1 + 0x28);
  iVar4 = FUN_00370378(param_1 + 0xbc,(int)*(short *)(param_1 + 0x23e),
                       (int)*(short *)(param_1 + 0x236));
  uVar1 = DAT_001c5f04;
  iVar5 = iVar5 + 0x54;
  if (iVar4 != 0) {
    if (*(short *)(param_1 + 0x23e) == 0) {
      FUN_00375bcc(param_1,DAT_001c5f08);
      *(undefined2 *)(param_1 + 0x23e) = 0xf800;
      FUN_00374a58(uVar1,param_1 + 0x1a4,
                   *(undefined4 *)(DAT_001c5f0c + *(short *)(param_1 + 0x1c) * 4));
    }
    else {
      *(undefined2 *)(param_1 + 0x23e) = 0;
      FUN_00374a58(uVar1,param_1 + 0x1a4,*(undefined4 *)(iVar5 + *(short *)(param_1 + 0x1c) * 4));
    }
    if (*(short *)(param_1 + 0x234) < 0x50) {
      sVar3 = *(short *)(param_1 + 0x236) + -0x40;
      *(short *)(param_1 + 0x236) = sVar3;
      if (sVar3 < 0x40) {
        sVar3 = 0x40;
      }
      *(short *)(param_1 + 0x236) = sVar3;
    }
  }
  fVar7 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x236),(byte)(in_fpscr >> 0x15) & 3);
  fVar6 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xbc),(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(param_1 + 0x2c) = (fVar2 + fVar7 * DAT_001c5f10) * DAT_001c5f14 * DAT_001c5f18 * fVar6;
  if (*(short *)(param_1 + 0x234) == 0) {
    FUN_00374a58(uVar1,param_1 + 0x1a4,*(undefined4 *)(iVar5 + *(short *)(param_1 + 0x1c) * 4));
    *(undefined4 *)(param_1 + 0x22c) = DAT_001c5f1c;
  }
  return;
}
