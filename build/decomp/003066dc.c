// OoT3D decomp @ 003066dc  name=FUN_003066dc  size=256

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_003066dc(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int local_120 [6];
  undefined1 auStack_108 [256];

  FUN_00306938(auStack_108,0x80,DAT_003067dc,param_2);
  local_120[1] = 0;
  local_120[0] = *DAT_003067e0;
  *(int *)((int)local_120 + *(int *)(local_120[0] + -0x30)) = DAT_003067e0[3];
  local_120[4] = 0;
  local_120[5] = 0;
  local_120[2] = 0;
  local_120[3] = 0;
  uVar1 = FUN_0030d580(local_120 + 1,auStack_108,1);
  if ((((uVar1 & 0x3fc00) == 0x4400) && (99 < (uVar1 & 0x3ff))) && ((uVar1 & 0x3ff) < 0xb4)) {
    if ((local_120[1] & 0xfffffffeU) != 0) {
      FUN_0030d614(local_120[1] & 0xfffffffe);
    }
    return 0;
  }
  if ((local_120[1] & 0xfffffffeU) != 0) {
    FUN_0030d614(local_120[1] & 0xfffffffe);
    local_120[1] = 0;
  }
  if ((local_120[1] & 0xfffffffeU) != 0) {
    FUN_0030d614(local_120[1] & 0xfffffffe);
  }
  return 1;
}
