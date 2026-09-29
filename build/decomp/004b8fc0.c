// OoT3D decomp @ 004b8fc0  name=FUN_004b8fc0  size=84

/* WARNING: Removing unreachable block (ram,0x002d01e0) */
/* WARNING: Removing unreachable block (ram,0x002d01e4) */

void FUN_004b8fc0(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;

  if (*(char *)(param_1 + 0x31b0) == '\0') {
    uVar1 = *(undefined1 *)(DAT_004b9014 + 1);
    *(undefined1 *)(param_1 + 0x31b1) = uVar1;
    *(undefined1 *)(param_1 + 0x31b2) = uVar1;
  }
  else {
    *(undefined1 *)(param_1 + 0x3234) = 0;
    uVar3 = DAT_004b9018;
    *(undefined1 *)(param_1 + 0x3237) = 0xff;
    *(undefined4 *)(param_1 + 0x3258) = uVar3;
    uVar1 = *(undefined1 *)(param_1 + 0x3236);
    *(undefined1 *)(param_1 + 0x3236) = *(undefined1 *)(param_1 + 0x3235);
    *(undefined1 *)(param_1 + 0x3235) = uVar1;
  }
  iVar2 = DAT_002d0254;
  iVar4 = DAT_002d0250;
  fVar6 = (float)VectorUnsignedToFloat(0x7f,(byte)(in_fpscr >> 0x15) & 3);
  iVar5 = 0;
  fVar6 = fVar6 * DAT_002d024c;
  *(float *)(DAT_002d0250 + 8) = fVar6;
  fVar7 = *(float *)(iVar4 + 4);
  do {
    iVar4 = *(int *)(iVar2 + iVar5 * 4);
    if (iVar4 != 0) {
      FUN_002d4a10(fVar7 * fVar6,iVar4,5);
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x10);
  return;
}
