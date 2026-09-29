// OoT3D decomp @ 003a1d74  name=FUN_003a1d74  size=476

void FUN_003a1d74(int param_1,undefined4 param_2)

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

  uVar7 = DAT_003a1f50;
  *(uint *)(param_1 + 0xe54) = *(uint *)(param_1 + 0xe54) | 4;
  *(uint *)(param_1 + 0xe40) = *(uint *)(param_1 + 0xe40) | 2;
  *(undefined1 *)(param_1 + 0xec4) = 0;
  *(undefined4 *)(param_1 + 0x6c) = uVar7;
  fVar5 = DAT_003a1f60;
  uVar4 = DAT_003a1f5c;
  uVar7 = DAT_003a1f58;
  iVar3 = DAT_003a1f54;
  iVar10 = *(int *)(param_1 + 0x200);
  if (DAT_003a1f54 < iVar10) {
    *(undefined4 *)(param_1 + 0x70) = DAT_003a1f58;
    fVar8 = DAT_003a1f68;
    if (*(float *)(param_1 + 100) == fVar5) {
      *(undefined4 *)(param_1 + 100) = DAT_003a1f64;
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
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0xed8);
  }
  iVar6 = FUN_003731e0(param_1 + 0x1c4);
  if (iVar6 == 0) {
    if (iVar10 <= iVar3) {
      return;
    }
    fVar9 = *(float *)(param_1 + 0x2c);
    fVar8 = (*(float *)(param_1 + 0x84) - *(float *)(param_1 + 100)) + DAT_003a1f6c;
    uVar1 = in_fpscr & 0xfffffff | (uint)(fVar8 < fVar9) << 0x1f | (uint)(fVar8 == fVar9) << 0x1e;
    in_fpscr = uVar1 | (uint)(NAN(fVar8) || NAN(fVar9)) << 0x1c;
    bVar2 = (byte)(uVar1 >> 0x18);
    if ((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) {
      return;
    }
  }
  FUN_0037547c(DAT_003a1f78,param_1 + 0x28,4,DAT_003a1f74,DAT_003a1f74,DAT_003a1f70);
  *(uint *)(param_1 + 0xe54) = *(uint *)(param_1 + 0xe54) & 0xfffffffb;
  *(uint *)(param_1 + 0xe40) = *(uint *)(param_1 + 0xe40) & 0xfffffffd;
  *(undefined4 *)(param_1 + 0x70) = uVar7;
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x84);
  FUN_0037308c(DAT_003a1f7c,param_2,param_1 + 0x28);
  *(undefined1 *)(param_1 + 0x1a4) = 10;
  *(undefined1 *)(param_1 + 0xe74) = 0xb;
  iVar3 = DAT_003a1f80;
  uVar7 = FUN_0036ae14(param_1 + 0x1c4,
                       *(undefined4 *)
                        (*(int *)(DAT_003a1f80 + (uint)*(byte *)(param_1 + 0x1b0) * 4) + 0x2c));
  uVar7 = VectorSignedToFloat(uVar7,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(uVar4,fVar5,uVar7,fVar5,param_1 + 0x1c4,
               *(undefined4 *)
                (*(int *)(iVar3 + (uint)*(byte *)(param_1 + 0x1b0) * 4) +
                (uint)*(byte *)(param_1 + 0xe74) * 4),2);
  *(undefined4 *)(param_1 + 0xea8) = 0;
  return;
}
