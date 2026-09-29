// OoT3D decomp @ 00448fb4  name=FUN_00448fb4  size=140

undefined4 FUN_00448fb4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_220 [524];

  iVar1 = FUN_0031b9c0(*(undefined4 *)(param_1 + 0x8034),0);
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x8034);
    iVar1 = FUN_00303ea8(uVar2);
    FUN_0031b99c(uVar2);
    *(int *)(param_1 + 0x110) = iVar1 + 0x10;
    FUN_00324f44(auStack_220,*(int *)(DAT_00449040 + param_1) + 0x44,DAT_00449044);
    uVar2 = FUN_00301300(auStack_220,0,0);
    *(undefined4 *)(param_1 + 0x8034) = uVar2;
    return 3;
  }
  return 1;
}
