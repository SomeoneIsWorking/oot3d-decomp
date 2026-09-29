// OoT3D decomp @ 001e1734  name=FUN_001e1734  size=228

void FUN_001e1734(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint in_fpscr;
  undefined4 uVar4;

  uVar3 = *(ushort *)(param_1 + 0x1c) & 3;
  puVar2 = (undefined4 *)(DAT_001e1818 + uVar3 * 0x10);
  FUN_00372f38(param_1,param_2,param_1 + 0x1fc,*puVar2);
  FUN_003510b0(param_1,DAT_001e181c);
  FUN_0037572c(puVar2[1],param_1);
  *(undefined4 *)(param_1 + 0xc4) = puVar2[2];
  if (-1 < *(short *)(puVar2 + 3)) {
    FUN_00353dd0(param_2,param_1 + 0x1a4);
    FUN_00353d24(param_2,param_1 + 0x1a4,param_1,DAT_001e1820);
    FUN_0037632c(param_1,param_1 + 0x1a4);
    uVar1 = DAT_001e1824;
    uVar4 = VectorSignedToFloat((int)*(short *)(puVar2 + 3),(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_1 + 0x1e4) = uVar4;
    uVar4 = VectorSignedToFloat((int)*(short *)((int)puVar2 + 0xe),(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_1 + 0x1e8) = uVar4;
    FUN_00350d20(param_1 + 0xa0,0,uVar1);
  }
  if ((uVar3 == 2) && ((*(ushort *)(DAT_001e1828 + 0xf4) & 1) != 0)) {
    FUN_00374428(param_1);
    return;
  }
  return;
}
