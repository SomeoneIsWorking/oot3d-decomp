// OoT3D decomp @ 002cfd24  name=FUN_002cfd24  size=72

void FUN_002cfd24(int param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int local_10;
  
  local_10 = param_4;
  FUN_0030ee14(&local_10,param_1);
  if (local_10 != 0) {
    FUN_0030c198(local_10,7);
  }
  uVar1 = DAT_002cfd6c;
  if (param_2 == 0) {
    uVar1 = DAT_002cfd70;
  }
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  FUN_0030ede0(&local_10);
  return;
}

