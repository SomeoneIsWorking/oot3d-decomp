// OoT3D decomp @ 00317fb8  name=FUN_00317fb8  size=80

void FUN_00317fb8(int param_1)

{
  int iVar1;
  int iVar2;

  iVar1 = DAT_00318008;
  *(undefined4 *)(DAT_00318008 + 0x88) = 0;
  *(undefined4 *)(iVar1 + 0xb4) = 0;
  if (param_1 != 0) {
    iVar2 = FUN_003225c4(iVar1 + 0x60,param_1);
    if (iVar2 == 0) {
      iVar2 = FUN_003225c4(iVar1 + 0x8c,param_1);
      if (iVar2 != 0) {
        *(int *)(iVar1 + 0xb4) = param_1;
      }
      return;
    }
    *(int *)(iVar1 + 0x88) = param_1;
  }
  return;
}
