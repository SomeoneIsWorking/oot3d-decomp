// OoT3D decomp @ 001f3a5c  name=FUN_001f3a5c  size=312

void FUN_001f3a5c(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;

  FUN_003510b0(param_1,DAT_001f3b94);
  uVar1 = FUN_00340e14(param_1,param_2,0,param_1 + 0x1c4,0,param_1 + 0x1c8,1,0);
  uVar2 = FUN_00372f0c(uVar1,0);
  FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x1c4) + 0xc),uVar2);
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x1c4) + 0xc) + 0x10) = 1;
  uVar1 = FUN_00372f0c(uVar1,1);
  FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x1c8) + 0xc),uVar1);
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x1c8) + 0xc) + 0x10) = 1;
  FUN_003532e8(param_1,0);
  iVar3 = FUN_0036cf6c(param_2,(int)*(char *)(param_1 + 3));
  if (iVar3 != 0) {
    *(undefined2 *)(param_1 + 0x1bc) = 0xff;
    *(undefined4 *)(param_1 + 0x1c0) = DAT_001f3b98;
    iVar3 = DAT_001f3b9c;
    *(undefined2 *)(param_1 + 0x1be) = 0;
    *(undefined1 *)(iVar3 + param_2) = 0;
    return;
  }
  uVar1 = FUN_00353fd4(param_1,param_2,0);
  uVar1 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar1);
  *(undefined4 *)(param_1 + 0x1a4) = uVar1;
  *(undefined4 *)(param_1 + 0x1c0) = DAT_001f3ba0;
  *(undefined2 *)(param_1 + 0x1be) = 0;
  return;
}
