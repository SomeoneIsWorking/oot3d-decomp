// OoT3D decomp @ 00407a9c  name=FUN_00407a9c  size=48

void FUN_00407a9c(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;

  iVar1 = FUN_00309e5c(param_1 + 8);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = FUN_004066d4();
  }
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0xc0) = param_2;
    *(undefined4 *)(iVar2 + 200) = *(undefined4 *)(param_1 + 4);
  }
  return;
}
