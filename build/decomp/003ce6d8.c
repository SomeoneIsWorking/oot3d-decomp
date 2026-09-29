// OoT3D decomp @ 003ce6d8  name=FUN_003ce6d8  size=184

void FUN_003ce6d8(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;

  uVar1 = DAT_003ce794;
  if (*(int *)(param_1 + 0x88) < DAT_003ce790) {
    FUN_00375bcc(param_1,DAT_003ce798);
    FUN_00315ba8(param_1);
    FUN_003717ac(param_1 + 0x1a4,DAT_003ce79c,8);
    uVar2 = DAT_003ce7a0;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
    *(undefined4 *)(param_1 + 100) = uVar2;
    *(undefined4 *)(param_1 + 0x1060) = uVar1;
    *(undefined4 *)(param_1 + 0xc8c) = DAT_003ce7a4;
  }
  else if (*(int *)(param_1 + 0x88) < DAT_003ce7a8) {
    FUN_00373500(DAT_003ce7b4,DAT_003ce7b0,DAT_003ce7ac,param_1 + 100);
    FUN_00373500(uVar1,DAT_003ce7bc,DAT_003ce7b8,param_1 + 0x1060);
    return;
  }
  return;
}
