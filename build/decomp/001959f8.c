// OoT3D decomp @ 001959f8  name=FUN_001959f8  size=200

void FUN_001959f8(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;

  if (*(short *)(param_1 + 0xd88) == 2) {
    iVar3 = FUN_00369f3c(param_2);
    iVar1 = DAT_00195ac0;
    if (((iVar3 == 0) && (*(short *)(DAT_00195ac0 + -0x14b8) < 0x32)) ||
       (iVar3 = FUN_00369f3c(param_2), iVar3 == 1)) {
      uVar2 = DAT_00195ac4;
      *(ushort *)(iVar1 + 0x8a) = *(ushort *)(iVar1 + 0x8a) & 0xfff0;
      *(undefined4 *)(param_1 + 0x3fc) = uVar2;
    }
    else {
      FUN_003715d0(param_1,param_2,2,0x26);
      *(ushort *)(iVar1 + 0x8a) = *(ushort *)(iVar1 + 0x8a) & 0xfff0 | 0x8002;
      FUN_00371680(param_2,0);
    }
    *(undefined2 *)(param_1 + 0xd88) = 0;
    *(ushort *)(iVar1 + 0x8a) = *(ushort *)(iVar1 + 0x8a) & 0xff9f;
  }
  return;
}
