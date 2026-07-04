// OoT3D decomp @ 00273070  name=FUN_00273070  size=152

undefined4 FUN_00273070(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_3 + 4) + param_1;
  *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x18) + param_1;
  *(int *)(iVar1 + 0x1c) = *(int *)(iVar1 + 0x1c) + param_1;
  *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + param_1;
  *(int *)(iVar1 + 0x24) = *(int *)(iVar1 + 0x24) + param_1;
  *(int *)(iVar1 + 0x28) = *(int *)(iVar1 + 0x28) + param_1;
  uVar2 = 0;
  if (*(short *)(iVar1 + 0x12) != 0) {
    do {
      iVar4 = *(int *)(iVar1 + 0x24) + uVar2 * 8;
      iVar3 = *(int *)(iVar4 + 4);
      uVar2 = uVar2 + 1 & 0xffff;
      if (iVar3 != 0) {
        *(int *)(iVar4 + 4) = iVar3 + param_1;
      }
    } while (uVar2 < *(ushort *)(iVar1 + 0x12));
  }
  FUN_001311d0(param_2 + 0xa98);
  return 1;
}

