// OoT3D decomp @ 00442490  name=FUN_00442490  size=380

void FUN_00442490(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint in_fpscr;
  uint local_48 [4];
  uint uStack_38;
  uint local_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;

  iVar1 = DAT_00442618;
  local_18 = DAT_0044260c;
  local_14 = VectorSignedToFloat(*(short *)(*DAT_00442610 + 0xf50) * 0x2e + -0x78,
                                 (byte)(in_fpscr >> 0x15) & 3);
  local_20 = *(undefined4 *)(DAT_00442614 + 8);
  local_1c = *(undefined4 *)(DAT_00442614 + 0xc);
  FUN_002fc534(*(undefined4 *)(DAT_00442618 + 0x14),&local_18,&local_20,1,0x24);
  local_48[0] = *DAT_0044261c;
  local_48[1] = DAT_0044261c[1];
  local_48[2] = DAT_0044261c[2];
  local_48[3] = DAT_0044261c[3];
  uStack_38 = DAT_0044261c[4];
  local_34 = DAT_0044261c[5];
  uStack_30 = DAT_0044261c[6];
  uStack_2c = DAT_0044261c[7];
  uStack_28 = DAT_0044261c[8];
  uStack_24 = DAT_0044261c[9];
  uVar4 = (uint)*(ushort *)(DAT_00442620 + 0x92);
  iVar2 = iVar1 + 0x60 + uVar4 * 8;
  uVar3 = local_48[uVar4];
  if (*(byte *)(iVar2 + 3) == uVar3) {
    iVar2 = 3;
  }
  else if (*(byte *)(iVar2 + 4) == uVar3) {
    iVar2 = 4;
  }
  else if (*(byte *)(iVar2 + 5) == uVar3) {
    iVar2 = 5;
  }
  else if (*(byte *)(iVar2 + 6) == uVar3) {
    iVar2 = 6;
  }
  else if (*(byte *)(iVar2 + 7) == uVar3) {
    iVar2 = 7;
  }
  else {
    iVar2 = 8;
  }
  if (((uint)*(byte *)(uVar4 + DAT_00442624 + 0xc0) & *(uint *)(DAT_00442628 + 4)) == 0 ||
      uVar3 == 0) {
    local_1c = DAT_00442630;
    local_20 = DAT_00442630;
    FUN_002fc534(*(undefined4 *)(iVar1 + 0x14),&local_18,&local_20,1,0x25);
    return;
  }
  local_18 = DAT_0044262c;
  local_14 = VectorSignedToFloat(iVar2 * 0x2e + -0x78,(byte)(in_fpscr >> 0x15) & 3);
  FUN_002fc534(*(undefined4 *)(iVar1 + 0x14),&local_18,&local_20,1,0x25);
  return;
}
