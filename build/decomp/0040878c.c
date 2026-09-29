// OoT3D decomp @ 0040878c  name=FUN_0040878c  size=156

void FUN_0040878c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_14 [4];
  undefined1 auStack_10 [4];

  FUN_0030af40(auStack_10,param_1 + 4);
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_0030aedc(auStack_10);
    return;
  }
  FUN_0030af40(auStack_14,param_1 + 4);
  FUN_002d2d74(param_1 + 0x10);
  FUN_0030aedc(auStack_14);
  uVar1 = FUN_0030c550();
  uVar2 = FUN_0030c0dc(uVar1,1);
  FUN_0030c074(uVar1,uVar2);
  FUN_00308a78(param_1 + 0x10);
  FUN_0030aedc(auStack_10);
  return;
}
