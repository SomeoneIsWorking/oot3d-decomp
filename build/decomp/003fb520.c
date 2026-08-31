// OoT3D decomp @ 003fb520  name=FUN_003fb520  size=240

int * FUN_003fb520(int *param_1)

{
  undefined4 unaff_r4;
  int iVar1;

  iVar1 = iRam003fb54c;
  *param_1 = iRam003fb54c;
  param_1[0x16] = iVar1 + 0x24;
  func_0x00313bdc(param_1 + 0x27);
  iVar1 = iRam00402cf8;
  *param_1 = iRam00402cf8;
  param_1[0x16] = iVar1 + 0x24;
  func_0x00402bac(param_1);
  *param_1 = iRam004027b8;
  if (*(char *)((int)param_1 + 0x55) == '\0') {
    iVar1 = 0;
    do {
      func_0x0030cb90(param_1 + iVar1 * 4 + 2,0);
      func_0x0030cb3c(param_1 + iVar1 * 4 + 2,param_1);
      func_0x0030cad8(param_1 + iVar1 * 4 + 2);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 4);
    *(undefined1 *)((int)param_1 + 0x55) = 1;
    iVar1 = iRam004027bc;
    *(undefined1 *)(param_1 + 0x15) = 0;
    param_1[1] = 0;
    param_1[0x13] = iVar1;
    param_1[0x12] = iVar1;
    param_1[0x14] = iRam004027c0;
  }
  func_0x00377d38(param_1 + 2,uRam004027c4,0x10,4,unaff_r4);
  return param_1;
}
