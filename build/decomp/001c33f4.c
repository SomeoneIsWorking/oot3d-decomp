// OoT3D decomp @ 001c33f4  name=FUN_001c33f4  size=340

void FUN_001c33f4(int param_1)

{
  char cVar1;
  float fVar2;
  uint uVar3;
  bool bVar4;
  float fVar5;
  short local_18 [2];

  if (*(int *)(param_1 + 0x1d4) == 1) {
    if (*(short *)(param_1 + 0xdf0) == 0) goto LAB_001c3454;
    FUN_003717ac(param_1 + 0x1a4,DAT_001c3548,8);
  }
  uVar3 = *(uint *)(param_1 + 0x1d4);
  bVar4 = uVar3 == 0;
  if (bVar4) {
    uVar3 = (uint)*(ushort *)(param_1 + 0xdf0);
  }
  if (bVar4 && uVar3 == 0) {
    FUN_003717ac(param_1 + 0x1a4,DAT_001c3548,7);
  }
LAB_001c3454:
  *(undefined4 *)(param_1 + 0x6c) = DAT_001c354c;
  fVar5 = (float)FUN_0035c628(param_1,*(undefined4 *)(param_1 + 0xe18),
                              (int)*(char *)(param_1 + 0xe1c),local_18);
  FUN_00375a18(param_1 + 0x36,(int)local_18[0],10,1000,1);
  fVar2 = DAT_001c3550;
  *(undefined2 *)(param_1 + 0xbc) = *(undefined2 *)(param_1 + 0x34);
  *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x36);
  *(undefined2 *)(param_1 + 0xc0) = *(undefined2 *)(param_1 + 0x38);
  if ((fVar2 < fVar5) && ((int)fVar5 < DAT_001c3554)) {
    if (*(char *)(param_1 + 0xd8d) != '\0') {
      cVar1 = *(char *)(param_1 + 0xe1c) + -1;
      *(char *)(param_1 + 0xe1c) = cVar1;
      if (cVar1 < '\0') {
        *(undefined1 *)(param_1 + 0xd8d) = 0;
        *(undefined1 *)(param_1 + 0xe1c) = 1;
      }
      return;
    }
    cVar1 = *(char *)(param_1 + 0xe1c) + '\x01';
    *(char *)(param_1 + 0xe1c) = cVar1;
    if ((int)(**(byte **)(param_1 + 0xe18) - 1) < (int)cVar1) {
      *(undefined1 *)(param_1 + 0xd8d) = 1;
      *(byte *)(param_1 + 0xe1c) = **(byte **)(param_1 + 0xe18) - 2;
    }
  }
  return;
}
