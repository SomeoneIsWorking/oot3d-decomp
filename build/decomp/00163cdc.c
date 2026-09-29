// OoT3D decomp @ 00163cdc  name=FUN_00163cdc  size=320

void FUN_00163cdc(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;

  iVar1 = FUN_0035010c(0x28);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_003500c4();
  }
  *(undefined4 *)(param_1 + 0xb30) = uVar2;
  FUN_0034ff2c(uVar2,4,4,0x14,1,0);
  FUN_0034fea8(*(undefined4 *)(param_1 + 0xb30),0,param_2,0x10,DAT_00163e20,DAT_00163e20,
               DAT_00163e1c,DAT_00163e1c);
  FUN_00353c9c(param_1,param_2,param_1 + 0x1a4,1,0,param_1 + 0x228,param_1 + 0x430,10);
  FUN_003717ac(param_1 + 0x1a4,DAT_00163e24,0);
  FUN_00372d4c(DAT_00163e30,DAT_00163e28,param_1 + 0xbc,DAT_00163e2c);
  FUN_00350eb8(param_2);
  FUN_00350d48(param_2,param_1 + 0x63c,param_1,DAT_00163e34,param_1 + 0x65c);
  uVar2 = FUN_0035011c(0x10);
  FUN_00350318(param_1 + 0xa0,uVar2,DAT_00163e38);
  FUN_0037572c(DAT_00163e3c,param_1);
  iVar1 = DAT_00163e44;
  *(undefined4 *)(param_1 + 0x70) = DAT_00163e40;
  *(short *)(iVar1 + param_1) = -*(short *)(param_1 + 0x1c);
  *(undefined1 *)(param_1 + 0x123) = 0x5d;
  *(undefined4 *)(param_1 + 0x638) = DAT_00163e48;
  return;
}
