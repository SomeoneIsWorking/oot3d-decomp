// OoT3D decomp @ 00356058  name=FUN_00356058  size=124

void FUN_00356058(int param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int local_18;
  
  puVar1 = (undefined4 *)(DAT_003560d4 + 0x20 + param_1 * 8);
  puVar2 = (undefined4 *)(DAT_003560d4 + param_1 * 8);
  if (param_4 != 0) {
    if (param_3 == 0) {
      puVar1[1] = param_4;
      *puVar1 = param_2;
    }
    else {
      puVar2[1] = param_4;
      *puVar2 = param_2;
    }
    return;
  }
  local_18 = param_4;
  FUN_0030ee14(&local_18,DAT_003560d4 + -0x250 + param_1 * 4);
  if (local_18 != 0) {
    FUN_002d3ce0(local_18,param_2);
  }
  if (param_3 == 0) {
    puVar1[1] = 0;
  }
  else {
    puVar2[1] = 0;
  }
  FUN_0030ede0(&local_18);
  return;
}

