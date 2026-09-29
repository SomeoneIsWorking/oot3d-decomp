// OoT3D decomp @ 00162c84  name=FUN_00162c84  size=388

void FUN_00162c84(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint *puVar2;
  undefined4 uVar3;
  uint uVar4;

  FUN_0037572c(DAT_00162e08);
  *(undefined4 *)(param_1 + 0x70) = DAT_00162e0c;
  *(undefined1 *)(param_1 + 0x123) = 0x23;
  uVar3 = FUN_00372f38(param_1,param_2,0);
  TorchAnimationModel_00350508(param_1 + 0x434,param_2,0,0xb);
  FUN_00353c9c(param_1,param_2,param_1 + 0x1a4,0,0,param_1 + 0x228,param_1 + 0x32c,5);
  *(undefined4 *)(param_1 + 0x430) = *(undefined4 *)(*(int *)(param_1 + 0x1cc) + 0xc);
  uVar3 = FUN_00372f0c(uVar3,0);
  FUN_00372d94(*(undefined4 *)(param_1 + 0x430),uVar3);
  uVar1 = DAT_00162e18;
  uVar3 = DAT_00162e10;
  *(undefined1 *)(*(int *)(param_1 + 0x430) + 0x10) = 1;
  FUN_00372d4c(uVar1,uVar3,param_1 + 0xbc,DAT_00162e14);
  *(undefined4 *)(param_1 + 0xa0) = DAT_00162e1c;
  *(undefined1 *)(param_1 + 0xb7) = 6;
  *(undefined1 *)(param_1 + 0xb6) = 0xfe;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x30);
  FUN_00350348(param_1);
  *(undefined1 *)(param_1 + 0x450) = 0xff;
  *(undefined1 *)(param_1 + 0x453) = 0xff;
  *(undefined1 *)(param_1 + 0x452) = 0;
  uVar3 = DAT_00162e20;
  *(undefined1 *)(param_1 + 0x451) = 0;
  *(undefined4 *)(param_1 + 0x46c) = uVar3;
  *(undefined1 *)(param_1 + 0x445) = 3;
  FUN_00353dd0(param_2);
  FUN_00353d24(param_2,param_1 + 0x4b8,param_1,DAT_00162e24);
  FUN_00353d24(param_2,param_1 + 0x510,param_1,DAT_00162e28);
  puVar2 = DAT_00162e2c;
  *(undefined2 *)(param_1 + 0x45a) = *(undefined2 *)(param_1 + 0x36);
  uVar4 = *puVar2;
  *(short *)(param_1 + 0x1c) = (short)uVar4;
  *puVar2 = uVar4 + 1 & 3;
  return;
}
