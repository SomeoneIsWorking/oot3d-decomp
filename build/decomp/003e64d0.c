// OoT3D decomp @ 003e64d0  name=FUN_003e64d0  size=116

void FUN_003e64d0(int param_1)

{
  undefined4 uVar1;

  FUN_00375bcc(param_1,DAT_003e6544);
  uVar1 = DAT_003e6550;
  FUN_00373500(DAT_003e6550,DAT_003e654c,DAT_003e6548,param_1 + 0x70);
  if (DAT_003e6554 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 100) = uVar1;
  }
  if ((*(short *)(param_1 + 0x1ac) == 0) && (*(short *)(param_1 + 0x1aa) != 0)) {
    *(undefined2 *)(param_1 + 0x1ac) = 300;
    *(undefined4 *)(param_1 + 0x1a4) = DAT_003e6558;
  }
  return;
}
