// OoT3D decomp @ 00257f7c  name=FUN_00257f7c  size=164

void FUN_00257f7c(undefined4 param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int local_54;
  undefined auStack_50 [12];
  undefined4 local_44;
  undefined auStack_40 [12];
  undefined2 local_34;
  undefined2 local_32;
  ushort local_30;
  undefined2 local_2e;
  undefined4 local_2c;
  
  iVar1 = *(int *)(param_3 + 0x20ac);
  FUN_0036df4c(auStack_50,iVar1 + param_4 * 0xc + 0x2340);
  FUN_0036df4c(auStack_40,iVar1 + 0x60);
  local_32 = 0;
  local_34 = 0xf;
  local_2e = (undefined2)param_4;
  local_54 = iVar1;
  local_44 = param_1;
  local_30 = (ushort)(param_2 != 0x3f800000);
  local_2c = param_5;
  FUN_00342c10(param_3,0x1c,0x80,&local_54);
  return;
}

