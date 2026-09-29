// OoT3D decomp @ 0040c608  name=FUN_0040c608  size=112

void FUN_0040c608(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;

  FUN_00312248(2,param_1 + 1);
  uVar1 = 0;
  do {
    FUN_003120d4(param_1[uVar1 + 1]);
    FUN_00311f50(param_2,param_3);
    FUN_00311f10(0x200,0x300);
    FUN_003048d4();
    uVar1 = uVar1 + 1;
  } while (uVar1 < 2);
  *param_1 = 0;
  FUN_003120d4(param_1[1]);
  return;
}
