// OoT3D decomp @ 0035e2d0  name=FUN_0035e2d0  size=96

void FUN_0035e2d0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;

  iVar1 = param_1 + 0x1330;
  FUN_0035e3a4(iVar1,0);
  FUN_0035e3a4(iVar1,1,0);
  FUN_0035e240(param_1 + 0x1a4,param_1 + 0x148,0,0,param_1,0);
  iVar2 = FUN_003695f8();
  uVar3 = 0;
  do {
    if (*(char *)(iVar1 + uVar3) != '\0') {
      if (iVar2 != 0) {
        *(undefined1 *)(iVar1 + uVar3 * 0x98 + 0x15) = 1;
      }
      iVar4 = iVar1 + uVar3 * 0x98;
      FUN_00373bec(iVar4 + 4);
      if (iVar2 != 0) {
        *(undefined1 *)(iVar4 + 0x15) = 0;
      }
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 3);
  return;
}
