// OoT3D decomp @ 00109da0  name=FUN_00109da0  size=148

void FUN_00109da0(int param_1,undefined4 param_2)

{
  int iVar1;

  if (*(ushort *)(param_1 + 0x1d0) == 0) {
    FUN_003731e0(param_1 + 0x5c0);
    FUN_00370084(param_1 + 0xbe,(int)*(short *)(param_1 + 0x36),3,0x2000);
    iVar1 = FUN_003736fc(*(undefined4 *)(param_1 + 0x1fc),DAT_00109e38,param_1 + 0x5c0);
    if (iVar1 != 0) {
      FUN_0036e3a8(param_1,param_2);
      return;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x794) = 9;
    *(short *)(param_1 + 0xbe) = *(short *)(param_1 + 0xbe) + -0x3000;
    if ((*(ushort *)(param_1 + 0x1d0) & 3) == 0) {
      FUN_00375bcc(param_1,DAT_00109e34);
      return;
    }
  }
  return;
}
