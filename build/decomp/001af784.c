// OoT3D decomp @ 001af784  name=FUN_001af784  size=252

void FUN_001af784(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;

  iVar2 = FUN_00370734(param_1 + 0x1a4);
  if (iVar2 != 0) {
    FUN_003428d0(DAT_001af880,param_1 + 0x1a4);
  }
  (**(code **)(param_1 + 0x444))(param_1,param_2);
  uVar1 = DAT_001af884;
  if ((*(ushort *)(param_1 + 0x440) & 1) != 0) {
    FUN_0036bcc8(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),
                 *(undefined4 *)(param_1 + 0x44),param_2,param_1,param_1 + 0x430,param_1 + 0x436,
                 0x4300);
    return;
  }
  FUN_00375a18(param_1 + 0x430,0,6,DAT_001af884,100);
  FUN_00375a18(param_1 + 0x432,0,6,uVar1,100);
  FUN_00375a18(param_1 + 0x436,0,6,uVar1,100);
  FUN_00375a18(param_1 + 0x438,0,6,uVar1,100);
  return;
}
