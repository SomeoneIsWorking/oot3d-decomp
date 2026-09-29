// OoT3D decomp @ 0016c0c8  name=FUN_0016c0c8  size=528

void FUN_0016c0c8(int param_1,int param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint in_fpscr;
  float fVar5;

  FUN_00372f38(param_1,param_2,param_1 + 0x648,0,0);
  FUN_00353c9c(param_1,param_2,param_1 + 0x1a4,0,0,param_1 + 0x228,param_1 + 0x360,6);
  uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x1cc) + 0x10);
  uVar3 = FUN_00372f0c(*(undefined4 *)(param_1 + 0x1a8),0);
  *(undefined4 *)(param_1 + 0x64c) = uVar4;
  FUN_00372d94((undefined4 *)(param_1 + 0x64c),uVar3);
  *(undefined1 *)(param_1 + 0x4ec) = 0;
  *(undefined1 *)(param_1 + 0x19b) = 2;
  if ((*(short *)(param_2 + 0x104) == 7) && (*(char *)(DAT_0016c2d8 + param_2) == '\t')) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x20;
  }
  uVar3 = DAT_0016c2dc;
  FUN_00372d4c(DAT_0016c2dc,DAT_0016c2dc,param_1 + 0xbc,0);
  FUN_00353dd0(param_2,param_1 + 0x4f0);
  FUN_00353d24(param_2,param_1 + 0x4f0,param_1,DAT_0016c2e0);
  FUN_00350a98(param_2);
  FUN_00350914(param_2,param_1 + 0x548,param_1,DAT_0016c2e4);
  FUN_00350a98(param_2);
  FUN_00350914(param_2,param_1 + 0x5c8,param_1,DAT_0016c2e8);
  fVar5 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x1c) >> 8,
                                     (byte)(in_fpscr >> 0x15) & 3);
  *(float *)(param_1 + 0x49c) = fVar5 * DAT_0016c2ec;
  uVar1 = *(ushort *)(param_1 + 0x1c);
  *(ushort *)(param_1 + 0x1c) = uVar1 & 0xff;
  *(undefined1 *)(param_1 + 0x123) = 0x39;
  uVar2 = DAT_0016c2f4;
  uVar4 = DAT_0016c2f0;
  if ((uVar1 & 0xff) == 0) {
    *(undefined1 *)(param_1 + 0xb7) = 2;
    FUN_0037572c(uVar4,param_1);
  }
  else {
    *(undefined1 *)(param_1 + 0xb7) = 1;
    FUN_0037572c(uVar2,param_1);
  }
  uVar4 = FUN_0036ae14(param_1 + 0x1a4,0);
  uVar4 = VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(DAT_0016c2f8,uVar4,uVar4,uVar3,param_1 + 0x1a4,0,2);
  *(undefined2 *)(param_1 + 0x4e4) = 0;
  *(undefined2 *)(param_1 + 0x4e2) = 0;
  *(undefined4 *)(param_1 + 0x4a4) = 0xf;
  *(undefined4 *)(param_1 + 0x498) = DAT_0016c2fc;
  *(undefined4 *)(param_1 + 0x4a0) = 0;
  return;
}
