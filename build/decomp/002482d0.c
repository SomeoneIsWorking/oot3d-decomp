// OoT3D decomp @ 002482d0  name=FUN_002482d0  size=276

void FUN_002482d0(int param_1)

{
  short sVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  float fVar8;

  iVar5 = FUN_003731e0(param_1 + 0x1a4);
  if (iVar5 == 0) {
LAB_0024830c:
    if (*(short *)(param_1 + 0x446) < 0x14) goto LAB_00248334;
  }
  else {
    if (0 < *(short *)(param_1 + 0x446)) {
      *(short *)(param_1 + 0x446) = *(short *)(param_1 + 0x446) + -1;
      goto LAB_0024830c;
    }
    *(undefined2 *)(param_1 + 0x446) = 0x96;
  }
  sVar1 = *(short *)(param_1 + 0x448) + -0xa7;
  *(short *)(param_1 + 0x448) = sVar1;
  if (sVar1 < 0) {
    *(undefined2 *)(param_1 + 0x448) = 0;
  }
LAB_00248334:
  fVar3 = DAT_002483ec;
  fVar2 = DAT_002483e8;
  fVar8 = DAT_002483e4;
  fVar6 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x448),(byte)(in_fpscr >> 0x15) & 3);
  fVar7 = (float)FUN_003406a8(fVar6 * DAT_002483e4 * DAT_002483e8 * DAT_002483ec);
  fVar4 = DAT_002483f4;
  fVar6 = DAT_002483f0;
  *(float *)(param_1 + 0x54) = DAT_002483f4 - fVar7 * DAT_002483f0;
  fVar7 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x448),(byte)(in_fpscr >> 0x15) & 3);
  fVar7 = (float)FUN_003406a8(fVar7 * fVar8 * fVar2 * fVar3);
  *(float *)(param_1 + 0x58) = fVar4 + fVar7 * DAT_002483f8;
  fVar7 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x448),(byte)(in_fpscr >> 0x15) & 3);
  fVar8 = (float)FUN_003406a8(fVar7 * fVar8 * fVar2 * fVar3);
  *(float *)(param_1 + 0x5c) = fVar4 - fVar8 * fVar6;
  if (*(short *)(param_1 + 0x448) == 0) {
    FUN_00350348(param_1);
    *(undefined2 *)(param_1 + 0x448) = 300;
  }
  return;
}
