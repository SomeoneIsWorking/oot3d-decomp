// OoT3D decomp @ 001c7e00  name=FUN_001c7e00  size=124

void FUN_001c7e00(int param_1,undefined4 param_2)

{
  FUN_003731e0(param_1 + 0x1a4);
  if (*(int *)(param_1 + 0x98) < DAT_001c7e7c) {
    FUN_00367c7c(param_2,DAT_001c7e80,param_1);
    FUN_0037547c(DAT_001c7e8c,0,4,DAT_001c7e88,DAT_001c7e88,DAT_001c7e84);
    FUN_0036e980(param_2,param_1,1);
    *(undefined4 *)(param_1 + 0x8a8) = DAT_001c7e90;
  }
  return;
}
