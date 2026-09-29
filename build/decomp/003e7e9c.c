// OoT3D decomp @ 003e7e9c  name=FUN_003e7e9c  size=112

void FUN_003e7e9c(int param_1,undefined4 param_2)

{
  int iVar1;

  iVar1 = FUN_0036ec2c(param_2,(int)*(char *)(param_1 + 3));
  if (iVar1 != 0) {
    FUN_0036ec14(param_2,(int)*(char *)(param_1 + 3));
    FUN_00375c44(param_2,param_1 + 0x28,0x1e,DAT_003e7f0c);
    *(undefined4 *)(param_1 + 0x1bc) = DAT_003e7f10;
    if (*(short *)(param_1 + 0xbc) == 0) {
      FUN_0036cf80(param_2,param_1,0);
      return;
    }
  }
  return;
}
