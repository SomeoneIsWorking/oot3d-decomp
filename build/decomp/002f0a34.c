// OoT3D decomp @ 002f0a34  name=FUN_002f0a34  size=220

void FUN_002f0a34(int param_1)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float local_1c;
  float local_18;

  iVar1 = DAT_002f0b18;
  iVar4 = DAT_002f0b10;
  iVar2 = (int)*(short *)(DAT_002f0b10 + 0xae);
  if (iVar2 < 0x16) {
    iVar5 = DAT_002f0b18 + -0x58;
    FUN_002fc534(*(undefined4 *)(param_1 + 8),*(undefined4 *)(iVar5 + iVar2 * 4),
                 *(undefined4 *)(DAT_002f0b18 + iVar2 * 4),8,0);
    if (*(char *)(DAT_002f0b1c + 0xe) == '\x01') {
      pfVar3 = *(float **)(iVar5 + *(short *)(iVar4 + 0xae) * 4);
      fVar6 = *pfVar3;
      local_1c = (DAT_002f0b24 - fVar6) * DAT_002f0b28 -
                 ((pfVar3[4] + *(float *)(*(int *)(iVar1 + *(short *)(iVar4 + 0xae) * 4) + 0x10)) -
                 fVar6);
    }
    else {
      local_1c = DAT_002f0b20;
    }
    local_18 = DAT_002f0b20;
    iVar4 = 0;
    do {
      FUN_002f9430(*(undefined4 *)(param_1 + 8),&local_1c,1,iVar4);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 8);
    return;
  }
  FUN_002fc534(*(undefined4 *)(param_1 + 8),DAT_002f0b14 + -0x40,DAT_002f0b14,8,0);
  return;
}
