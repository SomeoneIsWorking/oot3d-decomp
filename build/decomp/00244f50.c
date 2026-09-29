// OoT3D decomp @ 00244f50  name=FUN_00244f50  size=212

void FUN_00244f50(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;

  FUN_00372f38(param_1,param_2,param_1 + 0x1280,0xc,0);
  FUN_00353c9c(param_1,param_2,param_1 + 0x1a4,0xc,0x16,param_1 + 0x228,param_1 + 0xa48,9);
  uVar1 = DAT_00245024;
  iVar3 = (int)*(short *)(param_1 + 0x1c);
  if (iVar3 != 0x16 && iVar3 != 0x17) {
    iVar3 = 0x18;
  }
  FUN_0033391c(DAT_00245024,param_1,iVar3,0);
  uVar2 = DAT_00245028;
  *(byte *)(param_1 + 0x1f6) = *(byte *)(param_1 + 0x1f6) | 3;
  FUN_003fd1b8(uVar2,param_2,param_1,param_1 + 0x1a4);
  FUN_00372d4c(uVar1,DAT_0024502c,param_1 + 0xbc,DAT_00245030);
  *(undefined4 *)(param_1 + 0x126c) = 0x15;
  *(undefined4 *)(param_1 + 0x1270) = 0x10;
  return;
}
