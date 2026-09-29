// OoT3D decomp @ 0044c648  name=FUN_0044c648  size=72

void FUN_0044c648(void)

{
  int iVar1;

  iVar1 = DAT_0044c690;
  if (*(int *)(DAT_0044c690 + 0x38) != 0) {
    FUN_002f2c28();
    FUN_003525d4();
    *(undefined4 *)(iVar1 + 0x38) = 0;
  }
  if (*(int *)(iVar1 + 0x3c) != 0) {
    FUN_002f2b60();
    FUN_003525d4();
    *(undefined4 *)(iVar1 + 0x3c) = 0;
  }
  return;
}
