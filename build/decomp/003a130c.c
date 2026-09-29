// OoT3D decomp @ 003a130c  name=FUN_003a130c  size=388

void FUN_003a130c(int param_1)

{
  byte bVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint in_fpscr;
  uint uVar6;
  float fVar7;

  fVar2 = DAT_003a150c;
  fVar7 = *(float *)(param_1 + 0x6c);
  uVar5 = in_fpscr & 0xfffffff | (uint)(fVar7 < DAT_003a150c) << 0x1f |
          (uint)(fVar7 == DAT_003a150c) << 0x1e;
  uVar6 = uVar5 | (uint)(NAN(fVar7) || NAN(DAT_003a150c)) << 0x1c;
  bVar1 = (byte)(uVar5 >> 0x18);
  if (!(bool)(bVar1 >> 6 & 1) && bVar1 >> 7 == ((byte)(uVar6 >> 0x1c) & 1)) {
    fVar7 = fVar7 * *(float *)(DAT_003a1510 + 0x18);
    *(float *)(param_1 + 0x6c) = fVar7;
    uVar5 = in_fpscr & 0xfffffff | (uint)(fVar7 < fVar2) << 0x1f | (uint)(fVar7 == fVar2) << 0x1e;
    uVar6 = uVar5 | (uint)(NAN(fVar7) || NAN(fVar2)) << 0x1c;
    bVar1 = (byte)(uVar5 >> 0x18);
    if ((bool)(bVar1 >> 6 & 1) || bVar1 >> 7 != ((byte)(uVar6 >> 0x1c) & 1)) {
      fVar7 = fVar2;
    }
    *(float *)(param_1 + 0x6c) = fVar7;
  }
  if (((*(uint *)(param_1 + 0xe54) & 0x400) != 0) && (DAT_003a1514 < *(int *)(param_1 + 0x200))) {
    *(float *)(param_1 + 0x6c) = fVar2;
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  if (DAT_003a1514 < *(int *)(param_1 + 0x200)) {
    *(float *)(param_1 + 0x6c) = fVar2;
  }
  else if ((DAT_003a1524 < *(int *)(param_1 + 0x6c)) && ((*(uint *)(param_1 + 0xe54) & 0x10) != 0))
  {
    *(undefined4 *)(param_1 + 0x6c) = DAT_003a1528;
  }
  iVar3 = FUN_003731e0(param_1 + 0x1c4);
  if (iVar3 != 0) {
    if ((*(uint *)(param_1 + 0xe54) & 0x10) == 0) {
      FUN_003478b0(fVar2,param_1 + 0x1c4);
      *(float *)(param_1 + 0xe78) = fVar2;
      FUN_00357d6c(param_1);
      uVar5 = *(uint *)(param_1 + 0xe54) & 0xffffefff;
    }
    else {
      *(undefined4 *)(param_1 + 0x1a8) = 100;
      *(undefined4 *)(param_1 + 0x1ac) = 100;
      *(undefined1 *)(param_1 + 0x1a4) = 0xd;
      *(undefined1 *)(param_1 + 0xe74) = 4;
      *(undefined4 *)(param_1 + 0xe7c) = 0;
      iVar3 = DAT_003a152c;
      uVar4 = FUN_0036ae14(param_1 + 0x1c4,
                           *(undefined4 *)
                            (*(int *)(DAT_003a152c + (uint)*(byte *)(param_1 + 0x1b0) * 4) + 0x10));
      uVar4 = VectorSignedToFloat(uVar4,(byte)(uVar6 >> 0x15) & 3);
      FUN_00375c08(DAT_003a1534,fVar2,uVar4,DAT_003a1530,param_1 + 0x1c4,
                   *(undefined4 *)
                    (*(int *)(iVar3 + (uint)*(byte *)(param_1 + 0x1b0) * 4) +
                    (uint)*(byte *)(param_1 + 0xe74) * 4),0);
      uVar5 = *(uint *)(param_1 + 0xe54) & 0xffffffef;
    }
    *(uint *)(param_1 + 0xe54) = uVar5;
  }
  return;
}
