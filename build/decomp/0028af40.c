// OoT3D decomp @ 0028af40  name=FUN_0028af40  size=244

void FUN_0028af40(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_3c [48];

  FUN_00372224(auStack_3c,param_1 + 0x148);
  if (*(char *)(param_1 + 0x1c0) == '\0') {
    if (*(int *)(param_1 + 0x230) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x230) + 0xac) = 1;
      FUN_003721e0(*(undefined4 *)(param_1 + 0x230),auStack_3c);
      FUN_00372170(*(undefined4 *)(param_1 + 0x230),0);
    }
  }
  else if (*(int *)(param_1 + 0x234) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x234) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x234),auStack_3c);
    FUN_00372170(*(undefined4 *)(param_1 + 0x234),0);
  }
  if (DAT_0028b034 < *(float *)(param_1 + 0x1c4)) {
    if (*(char *)(param_1 + 0x1c0) == '\0') {
      uVar1 = DAT_0028b038[1];
      uVar2 = DAT_0028b038[2];
      *(undefined4 *)(param_1 + 0x1c8) = *DAT_0028b038;
      *(undefined4 *)(param_1 + 0x1cc) = uVar1;
      *(undefined4 *)(param_1 + 0x1d0) = uVar2;
    }
    else {
      *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(param_1 + 8);
      *(undefined4 *)(param_1 + 0x1cc) = *(undefined4 *)(param_1 + 0xc);
      *(undefined4 *)(param_1 + 0x1d0) = *(undefined4 *)(param_1 + 0x10);
    }
    FUN_0037547c(DAT_0028b044,param_1 + 0x1c8,4,DAT_0028b040,DAT_0028b040,DAT_0028b03c);
    FUN_003d0830(param_2,param_1);
  }
  return;
}
