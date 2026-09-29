// OoT3D decomp @ 003a7e14  name=FUN_003a7e14  size=856

void FUN_003a7e14(int param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  uint in_fpscr;
  uint uVar11;
  float fVar12;
  uint uVar13;
  float fVar14;
  short local_34 [2];
  int local_30;

  FUN_00326a6c(param_1 + 0xec8,&local_30,local_34);
  if (*(int *)(param_1 + 0x1a8) < 1) {
    FUN_003182cc(DAT_003a8180,DAT_003a817c,DAT_003a8178,DAT_003a8174,param_1,param_2,DAT_003a8170);
  }
  else {
    *(undefined4 *)(param_1 + 0x6c) = DAT_003a816c;
    *(int *)(param_1 + 0x1a8) = *(int *)(param_1 + 0x1a8) + -1;
  }
  iVar2 = DAT_003a8184;
  iVar9 = DAT_003a8184 + 0x2c;
  if (*(char *)(param_1 + 0xe74) != '\n' && *(char *)(param_1 + 0xe74) != '\v') {
    fVar14 = *(float *)(param_1 + 0x6c) * DAT_003a8188;
    if (*(float *)(DAT_003a8184 + 0x14) < fVar14) {
      fVar14 = *(float *)(DAT_003a8184 + 0x14);
    }
    in_fpscr = in_fpscr & 0xfffffff | (uint)(*(float *)(DAT_003a8184 + 8) <= fVar14) << 0x1d;
    if (!SUB41(in_fpscr >> 0x1d,0)) {
      fVar14 = *(float *)(DAT_003a8184 + 8);
    }
    FUN_003731e8(fVar14,param_1 + 0x1c4);
    if ((*(uint *)(param_1 + 0xe54) & 1) == 0) {
      fVar12 = *(float *)(iVar2 + 4);
      uVar11 = in_fpscr & 0xfffffff | (uint)(fVar14 < fVar12) << 0x1f |
               (uint)(fVar14 == fVar12) << 0x1e;
      in_fpscr = uVar11 | (uint)(NAN(fVar14) || NAN(fVar12)) << 0x1c;
      bVar1 = (byte)(uVar11 >> 0x18);
      if ((bool)(bVar1 >> 6 & 1) || bVar1 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) {
        if (*(char *)(param_1 + 0xe74) != '\b') {
          *(undefined1 *)(param_1 + 0xe74) = 7;
          FUN_00317dbc(param_1 + 0x1c4,
                       *(undefined4 *)
                        (*(int *)(iVar9 + (uint)*(byte *)(param_1 + 0x1b0) * 4) + 0x1c));
        }
        goto LAB_003a7f34;
      }
    }
    *(undefined1 *)(param_1 + 0xe74) = 9;
    FUN_00317dbc(param_1 + 0x1c4,
                 *(undefined4 *)(*(int *)(iVar9 + (uint)*(byte *)(param_1 + 0x1b0) * 4) + 0x24));
  }
LAB_003a7f34:
  fVar14 = *(float *)(param_1 + 0x200);
  iVar6 = FUN_003731e0(param_1 + 0x1c4);
  uVar11 = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 0x200) == fVar14) << 0x1e |
           (uint)(fVar14 <= *(float *)(param_1 + 0x200)) << 0x1d;
  bVar1 = (byte)(uVar11 >> 0x18);
  bVar10 = (bool)(bVar1 >> 6);
  if ((bool)(bVar1 >> 5 & 1)) {
    bVar10 = iVar6 == 0;
  }
  if (bVar10) {
    return;
  }
  if (*(char *)(DAT_003a818c + param_1) == '\0') {
    FUN_0037547c(DAT_003a8198,param_1 + 0x28,4,DAT_003a8194,DAT_003a8194,DAT_003a8190);
  }
  iVar6 = FUN_00326b20(param_1,param_2);
  uVar4 = DAT_003a81a0;
  uVar3 = DAT_003a819c;
  if (iVar6 == 1) {
    if ((DAT_003a81a4 <= local_30) && (uVar13 = FUN_00338f60((int)local_34[0]), 0xbeffffff < uVar13)
       ) {
      FUN_00341ea4(param_1,param_2);
      return;
    }
    if (*(int *)(param_1 + 0x6c) < DAT_003a81a8) {
      *(undefined1 *)(param_1 + 0x1a4) = 9;
      uVar4 = DAT_003a81ac;
      if (*(char *)(param_1 + 0xe74) == '\a') {
        uVar5 = 6;
      }
      else {
        uVar5 = 5;
      }
      *(undefined1 *)(param_1 + 0xe74) = uVar5;
      uVar7 = FUN_0036ae14(param_1 + 0x1c4,
                           *(undefined4 *)
                            (*(int *)(iVar9 + (uint)*(byte *)(param_1 + 0x1b0) * 4) +
                            (uint)*(byte *)(param_1 + 0xe74) * 4));
      uVar7 = VectorSignedToFloat(uVar7,(byte)(uVar11 >> 0x15) & 3);
      FUN_00375c08(DAT_003a81b0,uVar3,uVar7,uVar4,param_1 + 0x1c4,
                   *(undefined4 *)
                    (*(int *)(iVar9 + (uint)*(byte *)(param_1 + 0x1b0) * 4) +
                    (uint)*(byte *)(param_1 + 0xe74) * 4),2);
      return;
    }
    *(undefined4 *)(param_1 + 0x1a8) = 0;
    *(undefined4 *)(param_1 + 0x1ac) = 0;
    *(undefined1 *)(param_1 + 0x1a4) = 10;
    *(undefined1 *)(param_1 + 0xe74) = 7;
    *(undefined4 *)(param_1 + 0xe98) = 0;
    uVar8 = (uint)*(byte *)(param_1 + 0x1b0);
    uVar13 = *(uint *)(param_1 + 500);
    bVar10 = uVar13 == *(uint *)(*(int *)(iVar9 + uVar8 * 4) + 0x1c);
    if (bVar10) {
      uVar13 = (uint)*(byte *)(param_1 + 0x234);
    }
    if (bVar10 && uVar13 == 0) {
      return;
    }
    if ((*(uint *)(param_1 + 0xe54) & 1) == 0) {
      fVar14 = *(float *)(param_1 + 0x204);
      fVar12 = *(float *)(iVar2 + 4);
      uVar13 = uVar11 & 0xfffffff | (uint)(fVar14 < fVar12) << 0x1f |
               (uint)(fVar14 == fVar12) << 0x1e;
      uVar11 = uVar13 | (uint)(NAN(fVar14) || NAN(fVar12)) << 0x1c;
      bVar1 = (byte)(uVar13 >> 0x18);
      if ((bool)(bVar1 >> 6 & 1) || bVar1 >> 7 != ((byte)(uVar11 >> 0x1c) & 1)) goto LAB_003a80c0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x1a8) = 0;
    *(undefined4 *)(param_1 + 0x1ac) = 0;
    *(undefined1 *)(param_1 + 0x1a4) = 10;
    *(undefined1 *)(param_1 + 0xe74) = 7;
    *(undefined4 *)(param_1 + 0xe98) = 0;
    uVar8 = (uint)*(byte *)(param_1 + 0x1b0);
    uVar13 = *(uint *)(param_1 + 500);
    bVar10 = uVar13 == *(uint *)(*(int *)(iVar9 + uVar8 * 4) + 0x1c);
    if (bVar10) {
      uVar13 = (uint)*(byte *)(param_1 + 0x234);
    }
    if (bVar10 && uVar13 == 0) {
      return;
    }
    if ((*(uint *)(param_1 + 0xe54) & 1) == 0) {
      fVar14 = *(float *)(param_1 + 0x204);
      fVar12 = *(float *)(iVar2 + 4);
      uVar13 = uVar11 & 0xfffffff | (uint)(fVar14 < fVar12) << 0x1f |
               (uint)(fVar14 == fVar12) << 0x1e;
      uVar11 = uVar13 | (uint)(NAN(fVar14) || NAN(fVar12)) << 0x1c;
      bVar1 = (byte)(uVar13 >> 0x18);
      if ((bool)(bVar1 >> 6 & 1) || bVar1 >> 7 != ((byte)(uVar11 >> 0x1c) & 1)) goto LAB_003a80c0;
    }
  }
  *(undefined1 *)(param_1 + 0xe74) = 9;
LAB_003a80c0:
  uVar7 = FUN_0036ae14(param_1 + 0x1c4,
                       *(undefined4 *)
                        (*(int *)(iVar9 + uVar8 * 4) + (uint)*(byte *)(param_1 + 0xe74) * 4));
  uVar7 = VectorSignedToFloat(uVar7,(byte)(uVar11 >> 0x15) & 3);
  FUN_00375c08(uVar4,uVar3,uVar7,uVar3,param_1 + 0x1c4,
               *(undefined4 *)
                (*(int *)(iVar9 + (uint)*(byte *)(param_1 + 0x1b0) * 4) +
                (uint)*(byte *)(param_1 + 0xe74) * 4),0);
  return;
}
