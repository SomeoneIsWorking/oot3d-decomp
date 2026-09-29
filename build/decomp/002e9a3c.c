// OoT3D decomp @ 002e9a3c  name=FUN_002e9a3c  size=192

bool FUN_002e9a3c(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;

  if ((param_3 != 0) && ((*(byte *)(param_1 + 0xf38) < 2 || (0xe < *(byte *)(param_1 + 0xf38))))) {
    iVar1 = FUN_002cd2b4(param_1,param_2);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 4000) = 0;
      *(undefined1 *)(param_1 + 0xf38) = 1;
      *(undefined4 *)(param_1 + 0xfa4) = 2;
      FUN_00340bdc(*(undefined4 *)(param_1 + 8),0);
    }
    return iVar1 != 0;
  }
  FUN_00340bdc(*(undefined4 *)(param_1 + 8),0);
  iVar1 = FUN_002cd2b4(param_1,param_2);
  if (iVar1 == 0) {
    return false;
  }
  *(undefined1 *)(param_1 + 0xf38) = 0xd;
  *(undefined4 *)(param_1 + 0xfa4) = 3;
  return true;
}
