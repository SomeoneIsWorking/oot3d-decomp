// OoT3D decomp @ 001e042c  name=FUN_001e042c  size=568

void FUN_001e042c(int param_1,int param_2)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 uVar4;

  uVar3 = *(undefined4 *)(DAT_001e068c + param_2);
  uVar4 = *(undefined4 *)(param_2 + *(short *)(param_2 + 0xa64) * 4 + 0xa54);
  if ((*(uint *)(DAT_001e0690 + 4) & 1) == 0) {
    FUN_003679b4(DAT_001e0690 + 4);
  }
  if (-1 < *(int *)(param_1 + 0xf1c)) {
    if (*(int *)(param_1 + 0xf18) < *(int *)(*(int *)(param_1 + 0xf24) + 0xc)) {
      FUN_0033cb90(param_1 + 0xf24,*(int *)(param_1 + 0xf18),DAT_001e0698);
      *(int *)(param_1 + 0xf18) = *(int *)(param_1 + 0xf18) + 1;
      FUN_0033cb1c(uVar4,DAT_001e0698,uVar3,0);
    }
    else {
      FUN_003436d4(*(undefined4 *)(param_2 + *(short *)(param_2 + 0xa64) * 4 + 0xa54));
      *(undefined4 *)(param_1 + 0xf1c) = 0xffffffff;
    }
  }
  if (*(int *)(param_1 + 0x3f4) != DAT_001e069c) {
    FUN_00370734(param_1 + 0x1a4);
  }
  if (*(short *)(param_1 + 0x480) < 1) {
    sVar2 = 0;
  }
  else {
    sVar2 = *(short *)(param_1 + 0x480) + -1;
  }
  *(short *)(param_1 + 0x480) = sVar2;
  if (sVar2 < 3) {
    *(char *)(param_1 + 0x47b) = (char)sVar2;
    *(char *)(param_1 + 0x47a) = (char)sVar2;
  }
  switch(*(undefined1 *)(param_1 + 0x47d)) {
  case 0:
    if (*(short *)(param_1 + 0x480) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_003702c8(0x1e);
    }
    break;
  case 1:
    if (*(short *)(param_1 + 0x480) == 0) {
      *(undefined1 *)(param_1 + 0x47b) = 2;
      *(undefined1 *)(param_1 + 0x47a) = 2;
    }
    break;
  case 2:
    if (*(short *)(param_1 + 0x480) == 0) {
      *(undefined1 *)(param_1 + 0x47a) = 5;
      *(undefined1 *)(param_1 + 0x47b) = 6;
    }
    break;
  case 3:
    if (*(short *)(param_1 + 0x480) == 0) {
      *(undefined1 *)(param_1 + 0x47a) = 6;
      *(undefined1 *)(param_1 + 0x47b) = 5;
    }
    break;
  case 4:
    if (*(short *)(param_1 + 0x480) == 0) {
      *(undefined1 *)(param_1 + 0x47b) = 3;
      *(undefined1 *)(param_1 + 0x47a) = 3;
    }
    break;
  case 5:
    if (*(short *)(param_1 + 0x480) == 0) {
      *(undefined1 *)(param_1 + 0x47b) = 4;
      *(undefined1 *)(param_1 + 0x47a) = 4;
    }
    break;
  case 6:
    if (2 < *(short *)(param_1 + 0x480)) {
      *(undefined2 *)(param_1 + 0x480) = 0;
    }
  }
  cVar1 = *(char *)(param_1 + 0x47e);
  if (cVar1 == '\x01') {
    *(undefined1 *)(param_1 + 0x47c) = 1;
  }
  else if (cVar1 == '\x02') {
    *(undefined1 *)(param_1 + 0x47c) = 2;
  }
  else if (cVar1 == '\x03') {
    *(undefined1 *)(param_1 + 0x47c) = 3;
  }
  else {
    *(undefined1 *)(param_1 + 0x47c) = 0;
  }
  FUN_00376340(DAT_001e06a0,DAT_001e06a0,DAT_001e06a0,param_2,param_1,4);
  (**(code **)(param_1 + 0x3f4))(param_1,param_2);
  FUN_0037632c(param_1,param_1 + 0x3f8);
  FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x3f8);
  return;
}
