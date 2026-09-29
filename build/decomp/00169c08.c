// OoT3D decomp @ 00169c08  name=FUN_00169c08  size=248

void FUN_00169c08(int param_1,int param_2)

{
  undefined4 uVar1;

  *(undefined1 *)(param_1 + 0x864) = 1;
  FUN_00372d4c(DAT_00169d08,DAT_00169d00,param_1 + 0xbc,DAT_00169d04);
  FUN_00372f38(param_1,param_2,param_1 + 0x860,0,0);
  FUN_00353c9c(param_1,param_2,param_1 + 0x1a4,0,1,param_1 + 0x228,param_1 + 0x500,0xe);
  FUN_00353dd0(param_2);
  FUN_00353d24(param_2,param_1 + 0x7dc,param_1,DAT_00169d0c);
  FUN_00350318(param_1 + 0xa0,0,DAT_00169d10);
  uVar1 = DAT_00169d14;
  if (*(short *)(param_2 + 0x104) == 0x20) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffffef;
    *(undefined4 *)(param_1 + 0x100) = uVar1;
  }
  uVar1 = DAT_00169d18;
  *(undefined1 *)(param_1 + 0x1f) = 6;
  FUN_0037572c(uVar1,param_1);
  *(byte *)(param_1 + 0x85c) = (byte)*(undefined4 *)(param_2 + 0xf8) & 1;
  *(undefined4 *)(param_1 + 0x7d8) = DAT_00169d1c;
  return;
}
