// OoT3D decomp @ 002e6c3c  name=FUN_002e6c3c  size=152

void FUN_002e6c3c(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  bool bVar3;
  
  puVar1 = (undefined4 *)FUN_002fc3e4(*(undefined4 *)(param_3 + 0x10c));
  *puVar1 = param_1;
  puVar1[1] = param_1;
  puVar1[2] = param_1;
  puVar1[3] = param_2;
  puVar1[4] = param_1;
  puVar1[5] = param_1;
  puVar1[6] = param_1;
  puVar1[7] = param_2;
  puVar1[8] = param_1;
  puVar1[9] = param_1;
  puVar1[10] = param_1;
  puVar1[0xb] = param_2;
  puVar1[0xc] = param_1;
  puVar1[0xd] = param_1;
  puVar1[0xe] = param_1;
  puVar1[0xf] = param_2;
  uVar2 = (uint)*(byte *)(param_3 + param_4 + 0x434);
  bVar3 = uVar2 != 0;
  if (bVar3) {
    uVar2 = *(uint *)(param_3 + param_4 * 4 + 0xc);
  }
  if (!bVar3 || uVar2 == 0) {
    return;
  }
  FUN_002e6dcc(param_1,param_2);
  return;
}

