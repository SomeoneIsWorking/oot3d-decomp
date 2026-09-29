// OoT3D decomp @ 004873bc  name=FUN_004873bc  size=72

void FUN_004873bc(int param_1,int param_2)

{
  int iVar1;

  iVar1 = *(int *)(param_1 + 0x84);
  if (iVar1 != 0 && param_2 != 0) {
    FUN_0030424c(iVar1);
    *(undefined1 *)(iVar1 + 0x4a) = 0;
    *(undefined1 *)(iVar1 + 0x40) = 0;
    *(undefined4 *)(iVar1 + 0x44) = 0;
    *(undefined1 *)(iVar1 + 5) = 1;
    return;
  }
  return;
}
