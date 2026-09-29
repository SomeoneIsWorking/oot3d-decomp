// OoT3D decomp @ 00181598  name=FUN_00181598  size=200

void FUN_00181598(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint in_fpscr;
  undefined4 uVar4;

  *(undefined1 *)(param_1 + 0xe0c) = 5;
  uVar2 = DAT_00181668;
  uVar1 = DAT_00181664;
  uVar4 = DAT_00181660;
  if (*(char *)(param_1 + 0xe0f) == '\0') {
    uVar3 = FUN_0036ae14(param_1 + 0x1a4,0xe);
    uVar3 = VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(uVar2,uVar1,uVar3,uVar4,param_1 + 0x1a4,0xe,0);
    uVar4 = DAT_0018166c;
  }
  else {
    uVar3 = FUN_0036ae14(param_1 + 0x1a4,9);
    uVar3 = VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(uVar2,uVar1,uVar3,uVar4,param_1 + 0x1a4,9,0);
    FUN_00375bcc(param_1,DAT_00181670);
    uVar4 = DAT_00181674;
  }
  *(undefined4 *)(param_1 + 0x6c) = uVar4;
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
  *(undefined1 *)(param_1 + 0xe15) = 0;
  *(undefined4 *)(param_1 + 0xe1c) = DAT_00181678;
  return;
}
