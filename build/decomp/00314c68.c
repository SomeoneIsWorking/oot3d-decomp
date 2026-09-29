// OoT3D decomp @ 00314c68  name=FUN_00314c68  size=132

undefined4
FUN_00314c68(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;

  iVar1 = FUN_0035ea34(param_1 + 0xa98,param_3,param_4);
  if (iVar1 == 8) {
    *(undefined2 *)(DAT_00314cec + param_1) = 1;
    FUN_004c95c4(param_1,0,param_5);
    FUN_0037547c(DAT_00314cf8,param_2 + 0x28,4,DAT_00314cf4,DAT_00314cf4,DAT_00314cf0);
    return 1;
  }
  return 0;
}
