// OoT3D decomp @ 0030180c  name=FUN_0030180c  size=164

void FUN_0030180c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 uVar1;

  uVar1 = DAT_003018b0;
  param_1[0xc] = param_2;
  param_1[0xd] = param_3;
  param_1[9] = uVar1;
  *(char *)(param_1 + 0xb) = (char)param_4;
  param_1[0xe] = 0;
  if (*(char *)((int)param_1 + 0x2d) == '\0') {
    param_1[10] = param_5;
    if (param_4 == 0 || param_5 == 0) {
      FUN_002f9ca0(DAT_003018b4,param_1);
      FUN_00312248(2,param_1 + 1);
      FUN_003120d4(param_1[1]);
      FUN_00311f50(param_1[0xc],param_1[0xd]);
      FUN_003120d4(param_1[2]);
      FUN_00311f50(param_1[0xc],param_1[0xd]);
      FUN_003120d4(*param_1);
    }
    *(undefined1 *)((int)param_1 + 0x2d) = 1;
  }
  return;
}
