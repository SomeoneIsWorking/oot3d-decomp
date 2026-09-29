// OoT3D decomp @ 0011088c  name=FUN_0011088c  size=68

void FUN_0011088c(int param_1,int param_2)

{
  int iVar1;

  iVar1 = FUN_00373074(param_2 + 0x3a58,(int)*(char *)(param_1 + 0x1dc));
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x1bc) = DAT_001108d0;
    *(undefined4 *)(param_1 + 0x1c0) = 0;
    *(undefined4 *)(param_1 + 0x140) = DAT_001108d4;
  }
  return;
}
