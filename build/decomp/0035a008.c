// OoT3D decomp @ 0035a008  name=FUN_0035a008  size=68

void FUN_0035a008(int param_1,int param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  if (param_2 == -1) {
    param_2 = (int)*(short *)(DAT_0035a04c + param_1);
  }
  iVar1 = *(int *)(param_1 + param_2 * 4 + 0xa54);
  if (iVar1 != 0) {
    if (*(short *)(iVar1 + 0x1b0) == 0x1392) {
      uVar2 = 5;
    }
    else {
      uVar2 = 0;
    }
    *(undefined2 *)(iVar1 + 0x1a8) = uVar2;
  }
  return;
}

