// OoT3D decomp @ 004518ec  name=FUN_004518ec  size=164

void FUN_004518ec(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  int local_18;

  uVar2 = *(undefined4 *)(param_1 + 0xd8);
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  FUN_0045a044(param_1 + 0xe4,uVar2);
  FUN_00301954(&local_18,auStack_1c,auStack_20);
  if (local_18 - 0x10U < param_2) {
    param_2 = local_18 - 0x10;
  }
  iVar1 = FUN_00301628(param_1 + 0xe4,param_2);
  if (iVar1 == 0) {
    iVar1 = 0;
    *(undefined4 *)(param_1 + 0xd8) = 0;
    *(undefined4 *)(param_1 + 0xd4) = 0;
    *(undefined4 *)(param_1 + 0xdc) = 0;
  }
  else {
    *(int *)(param_1 + 0xd8) = iVar1;
    *(uint *)(param_1 + 0xd4) = param_2;
    *(int *)(param_1 + 0xdc) = iVar1;
    iVar1 = iVar1 + param_2;
  }
  *(int *)(param_1 + 0xe0) = iVar1;
  return;
}
