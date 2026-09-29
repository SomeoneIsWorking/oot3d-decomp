// OoT3D decomp @ 001d98a0  name=FUN_001d98a0  size=356

void FUN_001d98a0(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;

  FUN_0037632c(param_1,param_1 + 0x1a4);
  FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x1a4);
  FUN_00376864(param_1);
  uVar1 = DAT_001d9a04;
  FUN_00376340(DAT_001d9a04,DAT_001d9a04,DAT_001d9a04,param_2,param_1,4);
  iVar2 = FUN_00370734(param_1 + 0x1fc);
  if (iVar2 != 0) {
    FUN_003428d0(uVar1,param_1 + 0x1fc);
  }
  (**(code **)(param_1 + 0x708))(param_1,param_2);
  uVar1 = DAT_001d9a08;
  if ((*(ushort *)(param_1 + 0x704) & 1) != 0) {
    FUN_0036bcc8(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),
                 *(undefined4 *)(param_1 + 0x44),param_2,param_1,param_1 + 0x6f8,param_1 + 0x6fe,
                 0x4300);
    *(ushort *)(param_1 + 0x704) = *(ushort *)(param_1 + 0x704) & 0xfffe;
    return;
  }
  FUN_00375a18(param_1 + 0x6f8,0x3200,6,DAT_001d9a08,100);
  FUN_00375a18(param_1 + 0x6fa,0,6,uVar1,100);
  FUN_00375a18(param_1 + 0x6fe,0,6,uVar1,100);
  FUN_00375a18(param_1 + 0x700,0,6,uVar1,100);
  return;
}
