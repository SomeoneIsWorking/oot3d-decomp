// OoT3D decomp @ 0016dc1c  name=FUN_0016dc1c  size=72

undefined4 FUN_0016dc1c(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;

  if (*(short *)(param_4 + 0x1c) == 0) {
    iVar1 = 0xf;
  }
  else {
    iVar1 = 9;
  }
  if (param_2 == iVar1) {
    FUN_0034e01c(param_3,param_4 + 0x28a);
  }
  if ((*(ushort *)(param_4 + 0x296) & 2) != 0) {
    *(ushort *)(param_4 + 0x296) = *(ushort *)(param_4 + 0x296) & 0xfffd;
  }
  return 0;
}
