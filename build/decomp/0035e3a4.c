// OoT3D decomp @ 0035e3a4  name=FUN_0035e3a4  size=104

void FUN_0035e3a4(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  uint in_fpscr;
  undefined4 uVar3;
  
  if ((*(char *)(param_1 + param_2) != '\0') &&
     (iVar2 = FUN_003695f8(), piVar1 = DAT_0035e410, iVar2 == 0)) {
    param_1 = param_1 + param_2 * 0x98;
    *(undefined4 *)(param_1 + 0x10) = DAT_0035e40c;
    uVar3 = VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x15) & 3);
    if (*piVar1 == 0) {
      *(undefined4 *)(param_1 + 0xc) = uVar3;
      FUN_003586ec();
      return;
    }
  }
  return;
}

