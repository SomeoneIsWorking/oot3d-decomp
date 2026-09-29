// OoT3D decomp @ 00429ba0  name=FUN_00429ba0  size=312

void FUN_00429ba0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;

  iVar1 = param_1 + *(int *)(param_1 + 1000) * 0x1c;
  iVar1 = FUN_002fde08(*(int *)(iVar1 + 0x175c) + 0x918,1,*(int *)(iVar1 + 0x1764) + 3,param_4,
                       param_4);
  if (iVar1 != 0) {
    iVar1 = FUN_002fde08(*(int *)(param_1 + 0x1874) + 0x918,1,*(int *)(param_1 + 0x187c) + 3);
    if (iVar1 != 0) {
      iVar1 = FUN_002fde08(*(int *)(param_1 + 0x1890) + 0x918,1,*(int *)(param_1 + 0x1898) + 3);
      if (iVar1 != 0) {
        iVar1 = 0;
        do {
          FUN_002fd360(param_1 + iVar1 * 0x1c + 0x1758);
          iVar1 = iVar1 + 1;
        } while (iVar1 < 9);
        FUN_002fd360(param_1 + 0x1854);
        FUN_002fd360(param_1 + 0x1870);
        FUN_002fd360(param_1 + 0x188c);
        *(undefined1 *)(*(int *)(param_1 + 0x12c0) + 0x6c) = 0;
        FUN_00307840(param_1 + 0x918,0,0xfa,0x10,1);
        FUN_00307840(param_1 + 0x918,1,0xfa,0x10,1);
        *(undefined1 *)(param_1 + 8) = 0xd;
      }
    }
  }
  return;
}
