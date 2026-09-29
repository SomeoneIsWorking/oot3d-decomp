// OoT3D decomp @ 003d970c  name=FUN_003d970c  size=484

void FUN_003d970c(int param_1,undefined4 param_2)

{
  short sVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;

  *(short *)(param_1 + 0x9e6) = *(short *)(param_1 + 0x9e6) + 1;
  uVar3 = *(byte *)(param_1 + 0x9e4) + 1;
  if (8 < uVar3) {
    uVar3 = 8;
  }
  *(char *)(param_1 + 0x9e4) = (char)uVar3;
  if (0 < (int)((uVar3 & 0xff) - 1)) {
    iVar4 = 0;
    iVar6 = (uVar3 & 0xff) - 1;
    do {
      iVar6 = iVar6 + -1;
      iVar5 = (uint)*(byte *)(param_1 + 0x9e4) + iVar4;
      iVar4 = iVar4 + -1;
      iVar5 = param_1 + iVar5 * 0xc;
      *(undefined4 *)(iVar5 + 0x9e4) = *(undefined4 *)(iVar5 + 0x9d8);
      *(undefined4 *)(iVar5 + 0x9e8) = *(undefined4 *)(iVar5 + 0x9dc);
      *(undefined4 *)(iVar5 + 0x9ec) = *(undefined4 *)(iVar5 + 0x9e0);
    } while (iVar6 != 0);
  }
  fVar2 = DAT_003d98f8;
  fVar10 = DAT_003d98f4;
  fVar9 = DAT_003d98f0;
  fVar7 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x9e6),(byte)(in_fpscr >> 0x15) & 3);
  if (*(short *)(param_1 + 0x9e6) < 1) {
    fVar7 = fVar7 * DAT_003d98f8 * DAT_003d98f0 - DAT_003d98f4;
  }
  else {
    fVar7 = DAT_003d98f4 + fVar7 * DAT_003d98f8 * DAT_003d98f0;
  }
  sVar1 = (short)DAT_003d98fc;
  fVar8 = (float)FUN_002cfca0((int)(short)(sVar1 + (short)(int)fVar7 * 0x3000 +
                                          *(short *)(param_1 + 0xbe)));
  fVar7 = DAT_003d9900;
  *(float *)(param_1 + 0x9f0) =
       *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x54) * fVar8 * DAT_003d9900;
  fVar8 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x9e6),(byte)(in_fpscr >> 0x15) & 3);
  fVar8 = fVar8 * fVar2;
  if (*(short *)(param_1 + 0x9e6) < 1) {
    fVar10 = fVar8 * fVar9 - fVar10;
  }
  else {
    fVar10 = fVar10 + fVar8 * fVar9;
  }
  fVar9 = (float)FUN_00338f60((int)(short)(sVar1 + (short)(int)fVar10 * 0x3000 +
                                          *(short *)(param_1 + 0xbe)));
  *(float *)(param_1 + 0x9f8) =
       *(float *)(param_1 + 0x30) + *(float *)(param_1 + 0x54) * fVar9 * fVar7;
  if (*(short *)(param_1 + 0x9e6) < 0xc) {
    *(float *)(param_1 + 0x9f4) = *(float *)(param_1 + 0xa00) - DAT_003d9904;
  }
  else {
    *(float *)(param_1 + 0x9f4) = *(float *)(param_1 + 0xa00) + fVar2;
    if (0x17 < *(short *)(param_1 + 0x9e6)) {
      iVar4 = FUN_003705a0(DAT_003d990c,DAT_003d9908,param_1 + 0x54);
      if (iVar4 != 0) {
        *(undefined2 *)(param_1 + 0x9e6) = 0;
        *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x9f4);
        FUN_00374444(param_2,param_1,param_1 + 0x28,0x80);
        *(undefined4 *)(param_1 + 0x9dc) = DAT_003d9910;
      }
      *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x54);
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x54);
      if (*(short *)(param_1 + 0x9e6) == 0x18) {
        FUN_00375bcc(param_1,DAT_003d9914);
        return;
      }
    }
  }
  return;
}
