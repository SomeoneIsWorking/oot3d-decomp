// OoT3D decomp @ 002b949c  name=FUN_002b949c  size=220

void FUN_002b949c(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined auStack_48 [12];
  undefined auStack_3c [12];
  undefined auStack_30 [12];
  undefined auStack_24 [12];
  
  if (((*(uint *)(param_2 + 0x1710) & 0x400000) != 0) &&
     ((*(uint *)(DAT_002b9578 + param_2) & 0x20000) == 0)) {
    *(undefined *)(param_2 + 0x157c) = *(undefined *)(DAT_002b957c + *(char *)(param_2 + 0x1a6));
    FUN_003735ac(auStack_48,param_4,param_5);
    FUN_003735ac(auStack_3c,param_4,param_5 + 0xc);
    FUN_003735ac(auStack_30,param_4,param_5 + 0x18);
    FUN_003735ac(auStack_24,param_4,param_5 + 0x24);
    FUN_0035479c(param_3,auStack_48,auStack_3c,auStack_30,auStack_24);
    FUN_00376168(param_1,param_1 + 0x5c78,param_3);
    FUN_003761f0(param_1,param_1 + 0x5c78,param_3);
  }
  return;
}

