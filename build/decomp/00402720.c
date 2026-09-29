// OoT3D decomp @ 00402720  name=FUN_00402720  size=152

undefined4 * FUN_00402720(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;

  *param_1 = DAT_004027b8;
  if (*(char *)((int)param_1 + 0x55) == '\0') {
    iVar2 = 0;
    do {
      FUN_0030cb90(param_1 + iVar2 * 4 + 2,0);
      FUN_0030cb3c(param_1 + iVar2 * 4 + 2,param_1);
      FUN_0030cad8(param_1 + iVar2 * 4 + 2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 4);
    *(undefined1 *)((int)param_1 + 0x55) = 1;
    uVar1 = DAT_004027bc;
    *(undefined1 *)(param_1 + 0x15) = 0;
    param_1[1] = 0;
    param_1[0x13] = uVar1;
    param_1[0x12] = uVar1;
    param_1[0x14] = DAT_004027c0;
  }
  FUN_00377d38(param_1 + 2,DAT_004027c4,0x10,4);
  return param_1;
}
