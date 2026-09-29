// OoT3D decomp @ 0034de2c  name=FUN_0034de2c  size=256

void FUN_0034de2c(undefined4 param_1,int param_2,int param_3,undefined2 param_4,undefined4 param_5)

{
  int iVar1;
  int local_2c;
  undefined2 local_28;
  undefined2 local_26;
  undefined1 auStack_24 [12];

  local_2c = param_3 * 3;
  local_28 = param_4;
  if (-1 < param_2) {
    local_26 = 1;
    iVar1 = (int)((ulonglong)((longlong)DAT_0034df2c * (longlong)param_2) >> 0x20);
    iVar1 = (iVar1 - (iVar1 >> 0x1f)) * -3;
    local_2c = local_2c + param_2 + iVar1;
    FUN_0036df4c(auStack_24,param_5,iVar1,(int)((longlong)DAT_0034df2c * (longlong)param_2));
    FUN_00342c10(param_1,0x15,0x80,&local_2c);
    return;
  }
  local_26 = 1;
  FUN_0036df4c(auStack_24,param_5);
  FUN_00342c10(param_1,0x15,0x80,&local_2c);
  local_2c = -1;
  local_26 = 1;
  local_28 = param_4;
  FUN_0036df4c(auStack_24,param_5);
  FUN_00342c10(param_1,0x15,0x80,&local_2c);
  local_2c = -1;
  local_26 = 1;
  local_28 = param_4;
  FUN_0036df4c(auStack_24,param_5);
  FUN_00342c10(param_1,0x15,0x80,&local_2c);
  return;
}
