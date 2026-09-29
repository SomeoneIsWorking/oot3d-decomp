// OoT3D decomp @ 001c5a38  name=FUN_001c5a38  size=264

void FUN_001c5a38(int param_1)

{
  short sVar1;
  char cVar2;
  undefined1 uVar3;
  char *pcVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint in_fpscr;
  float fVar8;
  undefined4 uVar9;

  if (*(short *)(param_1 + 0x234) != 0) {
    sVar1 = *(short *)(param_1 + 0x234) + -1;
    *(short *)(param_1 + 0x234) = sVar1;
    if (0x4f < sVar1) {
      if (sVar1 == 0x50) {
        *(undefined4 *)(DAT_001c5b40 + 8) = 1;
      }
      FUN_003400ac(param_1);
      pcVar4 = DAT_001c5b44;
      sVar1 = *(short *)(param_1 + 0x234);
      cVar2 = ((char)sVar1 + -0x50) * '\x03';
      DAT_001c5b44[2] = cVar2;
      pcVar4[1] = cVar2;
      *pcVar4 = cVar2;
      if (sVar1 != 0x50) {
        return;
      }
      FUN_00340218(DAT_001c5b48,3);
      return;
    }
  }
  puVar5 = DAT_001c5b50;
  fVar8 = (float)VectorSignedToFloat(0x50 - *(short *)(param_1 + 0x234),(byte)(in_fpscr >> 0x15) & 3
                                    );
  uVar9 = VectorFloatToUnsigned(fVar8 * DAT_001c5b4c,3);
  uVar3 = (undefined1)uVar9;
  DAT_001c5b50[2] = uVar3;
  puVar5[1] = uVar3;
  *puVar5 = uVar3;
  FUN_003400ac(param_1);
  uVar6 = DAT_001c5b5c;
  uVar9 = DAT_001c5b58;
  if (*(short *)(param_1 + 0x234) == 0) {
    *(undefined4 *)(param_1 + 0x6c) = DAT_001c5b54;
    FUN_0036df4c(uVar6,uVar9);
    FUN_0036df4c(DAT_001c5b64,DAT_001c5b60);
    puVar7 = DAT_001c5b6c;
    DAT_001c5b6c[1] = DAT_001c5b68;
    uVar9 = DAT_001c5b70;
    *puVar7 = DAT_001c5b70;
    puVar7[2] = uVar9;
    FUN_0036df4c(puVar7 + 3);
    *(undefined4 *)(param_1 + 0x22c) = DAT_001c5b74;
  }
  return;
}
