// OoT3D decomp @ 00316d74  name=FUN_00316d74  size=96

/* WARNING: Removing unreachable block (ram,0x002d01d8) */

void FUN_00316d74(int param_1,uint param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;

  if (param_2 == 0x1f) {
    param_2 = 0;
  }
  uVar1 = (undefined1)param_2;
  if (*(char *)(param_1 + 0x31b0) == '\0') {
    *(undefined1 *)(DAT_00316dbc + 1) = *(undefined1 *)(param_1 + 0x31b2);
    if (*(byte *)(param_1 + 0x31b1) != param_2) {
      *(undefined1 *)(param_1 + 0x31b1) = uVar1;
      *(undefined1 *)(param_1 + 0x31b2) = uVar1;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x3234) = 0;
    *(undefined1 *)(param_1 + 0x3237) = uVar1;
  }
  iVar2 = DAT_002d0254;
  iVar3 = DAT_002d0250;
  fVar5 = (float)VectorUnsignedToFloat(0,(byte)(in_fpscr >> 0x15) & 3);
  iVar4 = 0;
  fVar5 = fVar5 * DAT_002d024c;
  *(float *)(DAT_002d0250 + 8) = fVar5;
  fVar6 = *(float *)(iVar3 + 4);
  do {
    iVar3 = *(int *)(iVar2 + iVar4 * 4);
    if (iVar3 != 0) {
      FUN_002d4a10(fVar6 * fVar5,iVar3,5);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x10);
  return;
}
