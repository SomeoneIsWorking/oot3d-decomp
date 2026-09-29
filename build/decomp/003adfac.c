// OoT3D decomp @ 003adfac  name=FUN_003adfac  size=208

void FUN_003adfac(int param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;

  iVar3 = *(int *)(DAT_003ae07c + param_2);
  FUN_0036bcc8(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),
               *(undefined4 *)(param_1 + 0x44),param_2,param_1,param_1 + 0x466,param_1 + 0x46c);
  if (*(short *)(param_1 + 0x456) == 0) {
    iVar2 = FUN_0036bc98(param_1,param_2);
    if (iVar2 == 0) {
      if (*(float *)(param_1 + 0x2c) <= *(float *)(iVar3 + 0x2c)) {
        FUN_00363cb8(param_1,param_2);
      }
      goto LAB_003ae058;
    }
    uVar1 = 1;
  }
  else {
    iVar3 = FUN_00369a48();
    if (iVar3 == 0) goto LAB_003ae058;
    uVar1 = 0;
  }
  *(undefined2 *)(param_1 + 0x456) = uVar1;
LAB_003ae058:
  FUN_0037632c(param_1,param_1 + 0x3f8);
  FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x3f8,0x4300);
  return;
}
