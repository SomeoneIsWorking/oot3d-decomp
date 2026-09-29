// OoT3D decomp @ 002843b4  name=FUN_002843b4  size=312

void FUN_002843b4(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  int iVar4;

  uVar1 = DAT_002844ec;
  *(undefined4 *)(param_1 + 0x6c) = DAT_002844ec;
  if ((int)*(float *)(param_1 + 0x21c) < 4) {
    FUN_00375a18(param_1 + 0xbe,(int)*(short *)(param_1 + 0x92),1,DAT_002844f0,0);
  }
  if ((int)*(float *)(param_1 + 0x21c) == 7) {
    FUN_00375bcc(param_1,DAT_002844f4);
  }
  if ((DAT_002844f8 < *(int *)(param_1 + 0x21c)) &&
     (*(int *)(param_1 + 0x21c) < (int)(&DAT_00500000 + DAT_002844f8))) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  *(undefined1 *)(param_1 + 0x1c88) = uVar3;
  iVar4 = FUN_00370734(param_1 + 0x1e0);
  if (iVar4 != 0) {
    if ((*(uint *)(DAT_002844fc + param_2) & 1) == 0) {
      FUN_00373d40(param_1 + 0x1e0,0xf);
      *(byte *)(param_1 + 0x1cf8) = *(byte *)(param_1 + 0x1cf8) & 0xfb;
      *(undefined1 *)(param_1 + 0x1c4c) = 0x11;
      *(undefined4 *)(param_1 + 0x6c) = uVar1;
      *(undefined1 *)(param_1 + 0x1d05) = 0x10;
      *(undefined4 *)(param_1 + 0x1c50) = DAT_00284504;
      if (*(char *)(param_1 + 0x1c62) != '\0') {
        *(undefined1 *)(param_1 + 0x1c62) = 3;
      }
      return;
    }
    FUN_00373d40(param_1 + 0x1e0,0xe);
    *(undefined1 *)(param_1 + 0x1c4c) = 0x12;
    uVar2 = DAT_00284500;
    *(undefined4 *)(param_1 + 0x6c) = uVar1;
    *(undefined4 *)(param_1 + 0x1c50) = uVar2;
  }
  return;
}
