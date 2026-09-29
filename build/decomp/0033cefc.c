// OoT3D decomp @ 0033cefc  name=FUN_0033cefc  size=256

void FUN_0033cefc(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int local_2c;
  undefined2 local_28;
  undefined2 local_26;
  undefined1 auStack_24 [12];

  local_2c = param_3 * 3;
  if (-1 < param_2) {
    local_28 = 300;
    local_26 = 1;
    iVar1 = (int)((ulonglong)((longlong)DAT_0033cffc * (longlong)param_2) >> 0x20);
    iVar1 = (iVar1 - (iVar1 >> 0x1f)) * -3;
    local_2c = local_2c + param_2 + iVar1;
    FUN_0036df4c(auStack_24,param_4,iVar1,(int)((longlong)DAT_0033cffc * (longlong)param_2));
    FUN_00342c10(param_1,0x15,0x80,&local_2c);
    return;
  }
  local_28 = 300;
  local_26 = 1;
  FUN_0036df4c(auStack_24,param_4);
  FUN_00342c10(param_1,0x15,0x80,&local_2c);
  local_28 = 300;
  local_2c = -1;
  local_26 = 1;
  FUN_0036df4c(auStack_24,param_4);
  FUN_00342c10(param_1,0x15,0x80,&local_2c);
  local_28 = 300;
  local_2c = -1;
  local_26 = 1;
  FUN_0036df4c(auStack_24,param_4);
  FUN_00342c10(param_1,0x15,0x80,&local_2c);
  return;
}
