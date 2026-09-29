// OoT3D decomp @ 003a83b4  name=FUN_003a83b4  size=764

void FUN_003a83b4(int param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  bool bVar9;
  uint in_fpscr;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 local_64 [5];
  undefined4 local_50 [5];
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [4];

  local_50[0] = *DAT_003a86b0;
  local_50[1] = DAT_003a86b0[1];
  local_50[2] = DAT_003a86b0[2];
  local_50[3] = DAT_003a86b0[3];
  local_50[4] = DAT_003a86b0[4];
  local_64[0] = DAT_003a86b0[5];
  local_64[1] = DAT_003a86b0[6];
  local_64[2] = DAT_003a86b0[7];
  local_64[3] = DAT_003a86b0[8];
  local_64[4] = DAT_003a86b0[9];
  FUN_003182cc(DAT_003a86c8,DAT_003a86c4,DAT_003a86c0,DAT_003a86bc,DAT_003a86b8,param_1,param_2,
               DAT_003a86b4);
  FUN_00326a6c(param_1 + 0xec8,auStack_38,auStack_3c);
  iVar2 = DAT_003a86d8;
  fVar13 = DAT_003a86d4;
  uVar14 = DAT_003a86d0;
  if (*(int *)(param_1 + 0x6c) < DAT_003a86cc) {
    iVar8 = -1;
    iVar6 = 0;
    fVar11 = DAT_003a86dc;
    do {
      fVar10 = (float)FUN_0036b4d0(local_50[iVar6],param_1 + 0x1c4);
      fVar10 = ABS(fVar10);
      uVar5 = in_fpscr & 0xfffffff | (uint)(fVar11 < fVar10) << 0x1f |
              (uint)(fVar11 == fVar10) << 0x1e;
      in_fpscr = uVar5 | (uint)(NAN(fVar11) || NAN(fVar10)) << 0x1c;
      bVar1 = (byte)(uVar5 >> 0x18);
      if (!(bool)(bVar1 >> 6 & 1) && bVar1 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
        iVar8 = iVar6;
        fVar11 = fVar10;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 5);
    if (iVar8 == -1) {
      FUN_00318778(param_1);
    }
    else {
      uVar12 = local_64[iVar8];
      *(undefined4 *)(param_1 + 0x1a8) = 0;
      *(undefined4 *)(param_1 + 0x1ac) = 0;
      *(undefined1 *)(param_1 + 0x1a4) = 8;
      *(undefined4 *)(param_1 + 0xe7c) = 0;
      *(undefined1 *)(param_1 + 0xe74) = 4;
      *(undefined2 *)(param_1 + 0x100a) = 0;
      uVar4 = FUN_0036ae14(param_1 + 0x1c4,
                           *(undefined4 *)
                            (*(int *)(iVar2 + (uint)*(byte *)(param_1 + 0x1b0) * 4) + 0x10));
      uVar4 = VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00375c08(fVar13,uVar12,uVar4,uVar14,param_1 + 0x1c4,
                   *(undefined4 *)
                    (*(int *)(iVar2 + (uint)*(byte *)(param_1 + 0x1b0) * 4) +
                    (uint)*(byte *)(param_1 + 0xe74) * 4),2);
    }
  }
  fVar11 = *(float *)(param_1 + 0x6c) * DAT_003a86e0;
  if (*(char *)(param_1 + 0xe74) == '\x06') {
    in_fpscr = in_fpscr & 0xfffffff | (uint)(*(float *)(DAT_003a86e4 + 8) <= fVar11) << 0x1d;
    if ((!SUB41(in_fpscr >> 0x1d,0)) && ((int)*(float *)(param_1 + 0x200) < DAT_003a86e8)) {
      fVar10 = *(float *)(param_1 + 0x200) * DAT_003a86ec;
      fVar11 = (fVar13 - fVar10) * *(float *)(DAT_003a86e4 + 8) + fVar11 * fVar10;
    }
  }
  FUN_003731e8(fVar11,param_1 + 0x1c4);
  fVar13 = *(float *)(param_1 + 0x200);
  iVar8 = FUN_003731e0(param_1 + 0x1c4);
  uVar5 = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 0x200) == fVar13) << 0x1e |
          (uint)(fVar13 <= *(float *)(param_1 + 0x200)) << 0x1d;
  bVar1 = (byte)(uVar5 >> 0x18);
  bVar9 = (bool)(bVar1 >> 6);
  if ((bool)(bVar1 >> 5 & 1)) {
    bVar9 = iVar8 == 0;
  }
  if (!bVar9) {
    if (*(char *)(param_1 + 0x1094) == '\0') {
      FUN_0037547c(DAT_003a86f8,param_1 + 0x28,4,DAT_003a86f4,DAT_003a86f4,DAT_003a86f0);
    }
    if (*(int *)(param_1 + 0x6c) < DAT_003a86fc) {
      if (DAT_003a86cc <= *(int *)(param_1 + 0x6c)) {
        *(undefined1 *)(param_1 + 0x1a4) = 9;
        *(undefined1 *)(param_1 + 0xe74) = 5;
        uVar5 = *(uint *)(param_1 + 500);
        bVar9 = uVar5 == *(uint *)(*(int *)(iVar2 + (uint)*(byte *)(param_1 + 0x1b0) * 4) + 0x14);
        if (bVar9) {
          uVar5 = (uint)*(byte *)(param_1 + 0x234);
        }
        if (!bVar9 || uVar5 != 0) {
          FUN_0036e734(param_1 + 0x1c4);
        }
        return;
      }
      FUN_00318778(param_1);
      return;
    }
    *(undefined4 *)(param_1 + 0x1a8) = 0;
    *(undefined4 *)(param_1 + 0x1ac) = 0;
    *(undefined1 *)(param_1 + 0x1a4) = 10;
    uVar4 = DAT_003a8700;
    bVar9 = *(char *)(param_1 + 0xe74) != '\x05';
    if (bVar9) {
      uVar3 = 7;
    }
    else {
      uVar3 = 8;
    }
    *(undefined1 *)(param_1 + 0xe74) = uVar3;
    *(undefined4 *)(param_1 + 0xe98) = 0;
    if (!bVar9) {
      uVar14 = uVar4;
    }
    uVar7 = *(undefined4 *)
             (*(int *)(iVar2 + (uint)*(byte *)(param_1 + 0x1b0) * 4) +
             (uint)*(byte *)(param_1 + 0xe74) * 4);
    uVar12 = FUN_0036ae14(param_1 + 0x1c4,uVar7);
    uVar12 = VectorSignedToFloat(uVar12,(byte)(uVar5 >> 0x15) & 3);
    FUN_00375c08(DAT_003a8704,uVar4,uVar12,uVar14,param_1 + 0x1c4,uVar7,2);
  }
  return;
}
