// OoT3D decomp @ 001db0d0  name=FUN_001db0d0  size=308

void FUN_001db0d0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;

  uVar1 = DAT_001db204;
  if ((*(ushort *)(param_1 + 0x8b0) & 1) == 0) {
    FUN_00375a18(param_1 + 0x8a4,0,6,DAT_001db204,100);
    FUN_00375a18(param_1 + 0x8a6,0,6,uVar1,100);
    FUN_00375a18(param_1 + 0x8aa,0,6,uVar1,100);
    uVar2 = 100;
    FUN_00375a18(param_1 + 0x8ac,0,6,uVar1);
  }
  else {
    uVar2 = 0x4300;
    FUN_0036bcc8(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),
                 *(undefined4 *)(param_1 + 0x44),param_2,param_1,param_1 + 0x8a4,param_1 + 0x8aa);
  }
  (**(code **)(param_1 + 0x840))(param_1,param_2);
  FUN_0037632c(param_1);
  FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x844);
  FUN_00376864(param_1);
  FUN_00376340(DAT_001db208,DAT_001db208,DAT_001db208,param_2,param_1,4,uVar2);
  return;
}
