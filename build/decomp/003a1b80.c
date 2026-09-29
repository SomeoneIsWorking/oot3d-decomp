// OoT3D decomp @ 003a1b80  name=FUN_003a1b80  size=448

void FUN_003a1b80(int param_1,undefined4 param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  float fVar5;
  int iVar6;
  undefined4 uVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  int iVar10;

  uVar7 = DAT_003a1d40;
  *(uint *)(param_1 + 0xe54) = *(uint *)(param_1 + 0xe54) | 4;
  *(uint *)(param_1 + 0xe40) = *(uint *)(param_1 + 0xe40) | 2;
  *(undefined4 *)(param_1 + 0x6c) = uVar7;
  *(undefined1 *)(param_1 + 0xec4) = 0;
  fVar5 = DAT_003a1d50;
  uVar4 = DAT_003a1d4c;
  uVar7 = DAT_003a1d48;
  iVar3 = DAT_003a1d44;
  iVar10 = *(int *)(param_1 + 0x200);
  if (DAT_003a1d44 < iVar10) {
    *(undefined4 *)(param_1 + 0x70) = DAT_003a1d48;
    fVar8 = DAT_003a1d58;
    if (*(float *)(param_1 + 100) == fVar5) {
      *(undefined4 *)(param_1 + 100) = DAT_003a1d54;
    }
    fVar9 = *(float *)(param_1 + 0x2c);
    fVar8 = *(float *)(param_1 + 0x84) + fVar8;
    uVar1 = in_fpscr & 0xfffffff | (uint)(fVar8 < fVar9) << 0x1f | (uint)(fVar8 == fVar9) << 0x1e;
    in_fpscr = uVar1 | (uint)(NAN(fVar8) || NAN(fVar9)) << 0x1c;
    bVar2 = (byte)(uVar1 >> 0x18);
    if ((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) {
      FUN_003731e8(param_1 + 0x1c4);
    }
    else {
      FUN_003731e8(uVar4,param_1 + 0x1c4);
    }
  }
  else {
    *(undefined1 *)(param_1 + 0xec4) = 1;
  }
  iVar6 = FUN_003731e0(param_1 + 0x1c4);
  if (iVar6 == 0) {
    if (iVar10 <= iVar3) {
      return;
    }
    fVar8 = *(float *)(param_1 + 0x2c);
    fVar9 = (*(float *)(param_1 + 0x84) - *(float *)(param_1 + 100)) + DAT_003a1d5c;
    uVar1 = in_fpscr & 0xfffffff | (uint)(fVar9 < fVar8) << 0x1f | (uint)(fVar9 == fVar8) << 0x1e;
    in_fpscr = uVar1 | (uint)(NAN(fVar9) || NAN(fVar8)) << 0x1c;
    bVar2 = (byte)(uVar1 >> 0x18);
    if ((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) {
      return;
    }
  }
  FUN_0037547c(DAT_003a1d68,param_1 + 0x28,4,DAT_003a1d64,DAT_003a1d64,DAT_003a1d60);
  *(uint *)(param_1 + 0xe54) = *(uint *)(param_1 + 0xe54) & 0xfffffffb;
  *(uint *)(param_1 + 0xe40) = *(uint *)(param_1 + 0xe40) & 0xfffffffd;
  *(undefined4 *)(param_1 + 0x70) = uVar7;
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x84);
  FUN_0037308c(DAT_003a1d6c,param_2,param_1 + 0x28);
  *(undefined1 *)(param_1 + 0x1a4) = 10;
  *(undefined1 *)(param_1 + 0xe74) = 10;
  iVar3 = DAT_003a1d70;
  uVar7 = FUN_0036ae14(param_1 + 0x1c4,
                       *(undefined4 *)
                        (*(int *)(DAT_003a1d70 + (uint)*(byte *)(param_1 + 0x1b0) * 4) + 0x28));
  uVar7 = VectorSignedToFloat(uVar7,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(uVar4,fVar5,uVar7,fVar5,param_1 + 0x1c4,
               *(undefined4 *)
                (*(int *)(iVar3 + (uint)*(byte *)(param_1 + 0x1b0) * 4) +
                (uint)*(byte *)(param_1 + 0xe74) * 4),2);
  *(undefined4 *)(param_1 + 0xea8) = 0;
  return;
}
