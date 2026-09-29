// OoT3D decomp @ 0011cbf0  name=FUN_0011cbf0  size=312

void FUN_0011cbf0(int param_1)

{
  byte bVar1;
  float fVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  uint in_fpscr;
  float fVar5;

  FUN_00370734(param_1 + 0x1a4);
  fVar2 = DAT_0011cd2c;
  *(float *)(param_1 + 0x6c) = *(float *)(param_1 + 0x6c) * DAT_0011cd28;
  if ((*(ushort *)(param_1 + 0x90) & 9) != 0) {
    FUN_00374a58(DAT_0011cd30,param_1 + 0x1a4,3);
    *(float *)(param_1 + 0x70) = fVar2;
    *(byte *)(param_1 + 0x800) = *(byte *)(param_1 + 0x800) & 0xfe;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x10;
    *(undefined2 *)(param_1 + 0x7e0) = 0xffff;
    *(undefined4 *)(param_1 + 0x834) = *(undefined4 *)(DAT_0011cd34 + 0x24);
    *(undefined4 *)(param_1 + 0x7dc) = DAT_0011cd38;
  }
  bVar1 = *(byte *)(param_1 + 0x800);
  if (((bVar1 & 2) != 0) && (*(byte *)(param_1 + 0x800) = bVar1 & 0xfc, (bVar1 & 4) != 0)) {
    uVar4 = FUN_0036ae14(param_1 + 0x1a4,6);
    uVar4 = VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(DAT_0011cd3c,fVar2,uVar4,fVar2,param_1 + 0x1a4,6,3);
    fVar5 = *(float *)(param_1 + 0x1f0);
    if (fVar2 < fVar5) {
      uVar3 = (undefined2)(int)(DAT_0011cd40 + fVar5 * DAT_0011cd44);
    }
    else {
      uVar3 = (undefined2)(int)(fVar5 * DAT_0011cd44 - DAT_0011cd40);
    }
    *(undefined2 *)(param_1 + 0x7e0) = uVar3;
    *(float *)(param_1 + 0x6c) = fVar2;
    *(undefined2 *)(param_1 + 0xbc) = 0;
    *(undefined2 *)(param_1 + 0xc0) = 0;
    *(undefined4 *)(param_1 + 0x7dc) = DAT_0011cd48;
    return;
  }
  FUN_00373264(param_1,DAT_0011cd4c);
  return;
}
