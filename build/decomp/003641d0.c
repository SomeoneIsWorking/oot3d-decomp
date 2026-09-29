// OoT3D decomp @ 003641d0  name=FUN_003641d0  size=244

void FUN_003641d0(int param_1)

{
  bool bVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint in_fpscr;

  FUN_0037572c(DAT_003642c4);
  fVar2 = DAT_003642c8;
  uVar3 = *(uint *)(param_1 + 4);
  uVar4 = uVar3 | 0x10;
  *(uint *)(param_1 + 4) = uVar4;
  bVar1 = (uVar3 & 0x80) == 0;
  if (bVar1) {
    uVar4 = DAT_003642cc;
  }
  if (!bVar1) {
    uVar4 = DAT_003642d0;
  }
  *(float *)(param_1 + 0x50) = *(float *)(param_1 + 0x50) * fVar2;
  *(uint *)(param_1 + 0x140) = uVar4;
  iVar5 = *(int *)(param_1 + 0x124);
  *(short *)(param_1 + 0xbe) = *(short *)(iVar5 + 0xbe) + 0x5555;
  uVar6 = *(undefined4 *)(iVar5 + 0x2c);
  uVar7 = *(undefined4 *)(iVar5 + 0x30);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(iVar5 + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = uVar6;
  *(undefined4 *)(param_1 + 0x30) = uVar7;
  *(undefined2 *)(param_1 + 0x1c) = 0x10;
  uVar6 = FUN_0036ae14(param_1 + 0x1a4,2);
  uVar6 = VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(DAT_003642dc,DAT_003642d8,uVar6,DAT_003642d4,param_1 + 0x1a4,2);
  fVar2 = DAT_003642e4;
  iVar5 = DAT_003642e0;
  *(float *)(param_1 + 0x824) = *(float *)(DAT_003642e0 + 0x20) * DAT_003642e4;
  *(float *)(param_1 + 0x828) = *(float *)(iVar5 + 0x24) * fVar2;
  uVar6 = DAT_003642e8;
  *(byte *)(param_1 + 0x812) = *(byte *)(param_1 + 0x812) & 0xfb;
  *(undefined4 *)(param_1 + 0x6c) = uVar6;
  *(undefined4 *)(param_1 + 100) = DAT_003642ec;
  *(byte *)(param_1 + 0xb7) = *(byte *)(iVar5 + -8) >> 1;
  *(undefined4 *)(param_1 + 0x7d8) = DAT_003642f0;
  return;
}
