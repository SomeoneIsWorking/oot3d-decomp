// OoT3D decomp @ 002ae7c4  name=FUN_002ae7c4  size=428

void FUN_002ae7c4(int param_1,int param_2)

{
  uint uVar1;
  ushort uVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  undefined4 local_40;
  float local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;

  iVar5 = param_1 + 0x1dc;
  if ((*(int *)(param_1 + 0x1d0) == 0) || (*(char *)(*(int *)(param_1 + 0x1d0) + 0xa10) != '\x04'))
  {
    iVar4 = FUN_00373bc0(param_2,iVar5);
    fVar3 = DAT_002ae974;
    if (iVar4 == 0) {
      if (*(int *)(param_1 + 0x2e4) == 0) goto LAB_002ae944;
      local_34 = *(undefined4 *)(param_1 + 0x2e8);
      local_2c = *(undefined4 *)(param_1 + 0x2f0);
      iVar4 = 0;
      local_30 = DAT_002ae970;
      uVar2 = *(ushort *)(param_1 + 0x1c);
      uVar1 = ((uint)uVar2 << 0x15) >> 0x1d;
      if (uVar1 != 0) {
        do {
          FUN_0036df58(param_2,param_1 + 0x28,((uint)uVar2 << 0x10) >> 0x1b);
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)uVar1);
      }
    }
    else {
      iVar4 = 0;
      local_34 = DAT_002ae970;
      local_30 = DAT_002ae970;
      local_2c = DAT_002ae970;
      uVar2 = *(ushort *)(param_1 + 0x1c);
      uVar1 = ((uint)uVar2 << 0x15) >> 0x1d;
      if (uVar1 != 0) {
        do {
          FUN_0036df58(param_2,param_1 + 0x28,((uint)uVar2 << 0x10) >> 0x1b);
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)uVar1);
      }
    }
    local_40 = *(undefined4 *)(param_1 + 0x28);
    local_3c = *(float *)(param_1 + 0x2c);
    local_38 = *(undefined4 *)(param_1 + 0x30);
    FUN_003216b0(param_1,param_2,&local_40,&local_34);
    local_40 = *(undefined4 *)(param_1 + 0x28);
    local_3c = *(float *)(param_1 + 0x2c) + fVar3;
    local_38 = *(undefined4 *)(param_1 + 0x30);
    FUN_003216b0(param_1,param_2,&local_40,&local_34);
    FUN_00374428(param_1);
  }
  else {
    FUN_00374428(param_1);
  }
LAB_002ae944:
  FUN_0037632c(param_1,iVar5);
  FUN_00376168(param_2,param_2 + 0x5c78,iVar5);
  return;
}
