// OoT3D decomp @ 00169d60  name=FUN_00169d60  size=496

void FUN_00169d60(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint in_fpscr;

  uVar1 = DAT_00169f58;
  FUN_00372d4c(DAT_00169f58,DAT_00169f50,param_1 + 0xbc,DAT_00169f54);
  FUN_00372f38(param_1,param_2,param_1 + 0x102c,0,0);
  FUN_00353c9c(param_1,param_2,param_1 + 0x1a4,0,1,param_1 + 0x228,param_1 + 0x6a0,0x16);
  FUN_0035c358(param_1 + 0x1030,param_1 + 0x1a4,0,0xffffffff,0xffffffff);
  uVar2 = FUN_00363c10(param_2 + 0x3a58,1);
  iVar3 = FUN_0035010c(0x28);
  uVar4 = 0;
  if (iVar3 != 0) {
    uVar4 = FUN_003500c4();
  }
  *(undefined4 *)(param_1 + 0x11fc) = uVar4;
  FUN_0034ff2c(uVar4,4,4,0x14,1,0);
  FUN_0034fea8(*(undefined4 *)(param_1 + 0x11fc),uVar2,param_2,0x10,DAT_00169f60,DAT_00169f60,
               DAT_00169f5c,DAT_00169f5c);
  uVar4 = FUN_0036ae14(param_1 + 0x1a4,1);
  uVar4 = VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(DAT_00169f64,uVar1,uVar4,uVar1,param_1 + 0x1a4,1,0);
  FUN_00353dd0(param_2);
  FUN_00353d24(param_2,param_1 + 0xb1c,param_1,DAT_00169f68);
  FUN_00350318(param_1 + 0xa0,0,DAT_00169f6c);
  if (((*(ushort *)(DAT_00169f70 + 0xc) - 0xc001 < DAT_00169f74) &&
      (*(int *)(DAT_00169f70 + 4) != 0)) && (*(short *)(param_2 + 0x104) == 0x53)) {
    FUN_0037572c(DAT_00169f78,param_1);
    uVar4 = DAT_00169f7c;
    *(undefined1 *)(param_1 + 0x1f) = 6;
    *(undefined4 *)(param_1 + 0x70) = uVar4;
    *(undefined4 *)(param_1 + 0xba8) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xba4) = 0;
    *(undefined4 *)(param_1 + 0xb18) = DAT_00169f80;
    return;
  }
  FUN_00374428(param_1);
  return;
}
