// OoT3D decomp @ 003b36a8  name=FUN_003b36a8  size=308

void FUN_003b36a8(int param_1)

{
  byte bVar1;
  float fVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  uint in_fpscr;
  uint uVar6;
  float fVar7;

  fVar2 = DAT_003b37dc;
  if (*(char *)(param_1 + 0xc41) == '\0') {
    if (*(int *)(param_1 + 0x1e0) < DAT_003b37ec) goto LAB_003b36f0;
    *(undefined4 *)(param_1 + 0x70) = DAT_003b37f0;
    *(undefined4 *)(param_1 + 100) = DAT_003b37f4;
    uVar3 = DAT_003b37f8;
    if (*(char *)(param_1 + 0xc3f) != '\0') {
      *(undefined1 *)(param_1 + 0xc3f) = 0;
      FUN_00375bcc(param_1,uVar3);
    }
    uVar4 = 1;
  }
  else {
    if ((*(char *)(param_1 + 0xc41) != '\x01') || (*(int *)(param_1 + 0x1e0) < DAT_003b37e0))
    goto LAB_003b36f0;
    *(float *)(param_1 + 0x1e4) = DAT_003b37dc;
    uVar4 = 2;
  }
  *(undefined1 *)(param_1 + 0xc41) = uVar4;
LAB_003b36f0:
  uVar3 = DAT_003b37e4;
  fVar7 = *(float *)(param_1 + 0x2c) - *(float *)(param_1 + 0xc4c);
  if ((fVar2 <= *(float *)(param_1 + 100)) ||
     (uVar6 = in_fpscr & 0xfffffff | (uint)(fVar7 == fVar2) << 0x1e | (uint)(fVar2 <= fVar7) << 0x1d
     , bVar1 = (byte)(uVar6 >> 0x18), (bool)(bVar1 >> 5 & 1) && !(bool)(bVar1 >> 6))) {
    if (*(float *)(param_1 + 100) <= fVar2) {
      if ((int)fVar7 < DAT_003b37fc) {
        *(undefined4 *)(param_1 + 0x1e4) = DAT_003b37e4;
      }
      return;
    }
  }
  else {
    *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0xc4c);
    *(float *)(param_1 + 100) = fVar2;
    *(undefined1 *)(param_1 + 0xc35) = 0;
    *(float *)(param_1 + 0x70) = fVar2;
    uVar5 = FUN_0036ae14(param_1 + 0x1a4,1);
    uVar5 = VectorSignedToFloat(uVar5,(byte)(uVar6 >> 0x15) & 3);
    FUN_00375c08(uVar3,fVar2,uVar5,fVar2,param_1 + 0x1a4,1,0);
    *(undefined4 *)(param_1 + 0xc04) = DAT_003b37e8;
  }
  return;
}
