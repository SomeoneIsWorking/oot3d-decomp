// OoT3D decomp @ 002b7714  name=FUN_002b7714  size=92

void FUN_002b7714(int param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;

  uVar2 = 0;
  if (param_4 != 0) {
    do {
      iVar1 = *(int *)(param_3 + uVar2 * 4);
      if (iVar1 == param_2) {
        if (iVar1 != -1) {
          FUN_0037266c();
        }
      }
      else if (iVar1 != -1) {
        FUN_0036932c(*(undefined4 *)(param_1 + 0x27c));
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_4);
  }
  return;
}
