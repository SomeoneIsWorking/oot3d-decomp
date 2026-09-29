// OoT3D decomp @ 0038303c  name=FUN_0038303c  size=68

void FUN_0038303c(int param_1,undefined4 param_2)

{
  FUN_0037572c(DAT_00383080);
  FUN_00372f38(param_1,param_2,param_1 + 0x1a4,
               *(undefined4 *)(DAT_00383084 + (*(ushort *)(param_1 + 0x1c) & 0xff) * 4),0);
  return;
}
