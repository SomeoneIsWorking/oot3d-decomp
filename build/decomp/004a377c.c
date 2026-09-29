// OoT3D decomp @ 004a377c  name=FUN_004a377c  size=216

void FUN_004a377c(undefined4 param_1,undefined4 *param_2,uint param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  uint uVar1;
  undefined4 local_3c [5];
  undefined4 local_28;
  undefined4 *local_24;
  uint uStack_20;
  undefined1 local_1c;

  if ((int)param_3 < 0xb) {
    FUN_00350820(local_3c,DAT_004a3854,4,10);
    if ((int)param_3 < 1) {
      uVar1 = 0;
    }
    else {
      uVar1 = param_3 & 1;
    }
    if (uVar1 == 1) {
      local_3c[0] = *(undefined4 *)*param_2;
    }
    for (; (int)uVar1 < (int)param_3; uVar1 = uVar1 + 2) {
      local_3c[uVar1] = *(undefined4 *)param_2[uVar1];
      local_3c[uVar1 + 1] = *(undefined4 *)param_2[uVar1 + 1];
    }
    FUN_0030dbd4(param_1,local_3c,param_3,param_4,param_5,param_6);
    return;
  }
  local_1c = (undefined1)param_4;
  local_28 = param_1;
  local_24 = param_2;
  uStack_20 = param_3;
  FUN_004a5aa4(&local_28,param_3,DAT_004a3858);
  return;
}
