// OoT3D decomp @ 0013f714  name=FUN_0013f714  size=224

void FUN_0013f714(int param_1)

{
  uint uVar1;
  byte bVar2;
  float fVar3;
  undefined4 uVar4;
  uint in_fpscr;
  uint uVar5;
  float fVar6;

  FUN_00370734(param_1 + 0x1a4);
  fVar3 = DAT_0013f7f4;
  fVar6 = *(float *)(param_1 + 0x6c);
  uVar1 = in_fpscr & 0xfffffff | (uint)(fVar6 < DAT_0013f7f4) << 0x1f |
          (uint)(fVar6 == DAT_0013f7f4) << 0x1e;
  uVar5 = uVar1 | (uint)(NAN(fVar6) || NAN(DAT_0013f7f4)) << 0x1c;
  bVar2 = (byte)(uVar1 >> 0x18);
  if ((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(uVar5 >> 0x1c) & 1)) {
    FUN_00370378(param_1 + 0xbc,0x4000);
  }
  else {
    FUN_00370378(param_1 + 0xbc,0xffffc000);
  }
  *(short *)(param_1 + 0xc0) = *(short *)(param_1 + 0xc0) + 0x1000;
  if (*(short *)(param_1 + 0x7e0) != 0) {
    *(short *)(param_1 + 0x7e0) = *(short *)(param_1 + 0x7e0) + -1;
  }
  *(short *)(param_1 + 0x34) = -*(short *)(param_1 + 0xbc);
  if ((*(short *)(param_1 + 0x7e0) == 0) || ((*(ushort *)(param_1 + 0x90) & 0x10) != 0)) {
    *(float *)(param_1 + 0x6c) = fVar3;
    *(float *)(param_1 + 100) = fVar3;
    uVar4 = FUN_0036ae14(param_1 + 0x1a4,5);
    uVar4 = VectorSignedToFloat(uVar4,(byte)(uVar5 >> 0x15) & 3);
    FUN_00375c08(DAT_0013f7fc,fVar3,uVar4,DAT_0013f7f8,param_1 + 0x1a4,5,0);
    *(uint *)(param_1 + 0x11c) = *(uint *)(param_1 + 0x11c) | 0x200000;
    *(undefined4 *)(param_1 + 0x7dc) = DAT_0013f800;
  }
  return;
}
