// OoT3D decomp @ 001a322c  name=FUN_001a322c  size=240

void FUN_001a322c(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  uint uVar1;
  undefined4 uVar2;

  uVar2 = ObjectBankArchive_00358ef8(param_3,param_4);
  FUN_00358ea8(param_3,param_2,param_1 + 0x1b4,uVar2,*(undefined4 *)(param_1 + 0x178),param_5,0,0,0)
  ;
  uVar1 = ((uint)*(ushort *)(param_1 + 0x1c) << 0x10) >> 0x18;
  if (uVar1 == 0) {
    FUN_003660fc(*(undefined4 *)(DAT_001a331c + 8),param_1 + 0x1b4,param_5);
    if (*(short *)(param_2 + 0x104) == 0x51 && (*(uint *)(DAT_001a3320 + 8) & 0xf) == 2) {
      *(undefined1 *)(param_1 + 0x235) = 1;
    }
    return;
  }
  if ((((uVar1 != 3 && uVar1 != 4) && uVar1 != 7) && uVar1 != 8) && uVar1 != 9) {
    FUN_003660fc(DAT_001a3324,param_1 + 0x1b4,param_5);
    return;
  }
  FUN_0037422c(DAT_001a3328,param_1 + 0x1b4,param_5);
  return;
}
