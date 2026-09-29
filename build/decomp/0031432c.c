// OoT3D decomp @ 0031432c  name=FUN_0031432c  size=116

void FUN_0031432c(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined1 auStack_48 [48];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;

  if (param_2 == 0) {
    FUN_00372224(auStack_48,param_3);
    local_10 = DAT_003143a0;
    local_14 = DAT_003143a0;
    local_18 = DAT_003143a0;
    local_c = DAT_003143a4;
    FUN_00307c94(*param_1,10,4,auStack_48);
    return;
  }
  FUN_00307c94(*param_1,param_2 * 3 + 0xb,3,param_3);
  return;
}
