// OoT3D decomp @ 003deda0  name=FUN_003deda0  size=132

void FUN_003deda0(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;

  FUN_003731e0(param_1 + 0x1a8);
  sVar1 = (short)(int)*(float *)(param_1 + 0x1e4);
  if (sVar1 == 0xb || sVar1 == 0x11) {
    FUN_00375bcc(param_1,DAT_003dee24);
  }
  uVar3 = DAT_003dee2c;
  uVar2 = DAT_003dee28;
  *(short *)(param_1 + 0xbe) = *(short *)(param_1 + 0xbe) + 0x800;
  FUN_0036fc20(uVar3,uVar2,param_1 + 0xc4);
  uVar2 = DAT_003dee38;
  if (*(uint *)(param_1 + 0xc4) < DAT_003dee30) {
    *(undefined4 *)(param_1 + 0xc4) = DAT_003dee34;
    *(undefined4 *)(param_1 + 0x1a4) = uVar2;
  }
  return;
}
