// OoT3D decomp @ 002fb9c4  name=FUN_002fb9c4  size=332

void FUN_002fb9c4(int *param_1)

{
  int iVar1;
  int iVar2;

  iVar1 = 0;
  do {
    if (param_1[iVar1 + 0x149] != 0) {
      FUN_00305224();
      (*(code *)**(undefined4 **)param_1[iVar1 + 0x149])();
      (**(code **)(*param_1 + 0x10))(param_1,param_1[iVar1 + 0x149]);
      param_1[iVar1 + 0x149] = 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x100);
  iVar1 = 0;
  do {
    if (param_1[iVar1 + 0x49] != 0) {
      FUN_002df800();
      (*(code *)**(undefined4 **)param_1[iVar1 + 0x49])();
      (**(code **)(*param_1 + 0x10))(param_1,param_1[iVar1 + 0x49]);
      param_1[iVar1 + 0x49] = 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x100);
  FUN_002fbb10(param_1 + 0x249);
  iVar1 = 0;
  do {
    FUN_003445a8(param_1 + iVar1 * 0x15 + 8);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  iVar1 = 0;
  do {
    if (param_1[iVar1 + 0x1df] != 0) {
      *(undefined1 *)(param_1[iVar1 + 0x1df] + 0x6c) = 0;
      FUN_003051cc(param_1[iVar1 + 0x1df] + 8);
    }
    iVar2 = iVar1 + 1;
    param_1[iVar1 * 2 + 0x255] = 0xff;
    *(undefined1 *)(param_1 + iVar1 * 2 + 0x256) = 0;
    iVar1 = iVar2;
  } while (iVar2 < 8);
  param_1[0x24e] = 0;
  param_1[0x24f] = 0;
  param_1[0x250] = 0;
  param_1[0x251] = 0;
  param_1[0x252] = 0;
  param_1[0x253] = 0;
  param_1[0x254] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}
