// OoT3D decomp @ 003341e4  name=FUN_003341e4  size=280

void FUN_003341e4(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  float local_18;
  
  iVar4 = *(int *)(param_1 + 0x16f8);
  local_2c = *(undefined4 *)(DAT_00334300 + *(int *)(DAT_003342fc + 4) * 0x134 + 0x54);
  local_28 = DAT_00334304;
  local_24 = DAT_00334304;
  uVar1 = FUN_003478bc(*(undefined4 *)(param_1 + 0x27c),9);
  FUN_003735ac(&local_20,uVar1,&local_2c);
  local_20 = *(float *)(iVar4 + 0x3c) - local_20;
  local_18 = *(float *)(iVar4 + 0x44) - local_18;
  uVar2 = FUN_003758b0(SQRT(local_20 * local_20 + local_18 * local_18),
                       local_1c - *(float *)(iVar4 + 0x40));
  uVar3 = FUN_003758b0(*(float *)(iVar4 + 0x44) - *(float *)(param_1 + 0x30),
                       *(float *)(iVar4 + 0x3c) - *(float *)(param_1 + 0x28));
  uVar1 = DAT_00334308;
  FUN_00375a18(param_1 + 0x4a,uVar3,4,DAT_00334308,0);
  FUN_00375a18(param_1 + 0x48,uVar2,4,uVar1,0);
  *(ushort *)(param_1 + 0x174a) = *(ushort *)(param_1 + 0x174a) | 2;
  FUN_002bf67c(param_1,param_2);
  return;
}

