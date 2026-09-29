// OoT3D decomp @ 00121654  name=FUN_00121654  size=572

void FUN_00121654(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  uint in_fpscr;

  FUN_003731e0(param_1 + 0x1d4);
  uVar1 = DAT_00121894;
  uVar9 = DAT_00121890;
  uVar4 = FUN_00370378(param_1 + 0xbc,DAT_00121894,DAT_00121890);
  uVar5 = FUN_00370378(param_1 + 0x262,uVar1,uVar9);
  uVar6 = FUN_00370378(param_1 + 0x264,uVar1,uVar9);
  uVar7 = FUN_00370378(param_1 + 0x266,uVar1,uVar9);
  uVar1 = DAT_0012189c;
  uVar9 = DAT_00121898;
  if ((uVar7 & uVar4 & 1 & uVar5 & uVar6) != 0) {
    if (*(char *)(param_1 + 0xb7) == '\0') {
      uVar8 = FUN_0036ae14(param_1 + 0x1d4,0);
      uVar8 = VectorSignedToFloat(uVar8,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00375c08(DAT_001218a0,uVar8,uVar1,uVar9,param_1 + 0x1d4,0,2);
      *(byte *)(param_1 + 0x3b9) = *(byte *)(param_1 + 0x3b9) & 0xfe;
      uVar9 = DAT_001218a4;
    }
    else {
      *(byte *)(param_1 + 0x3b9) = *(byte *)(param_1 + 0x3b9) | 1;
      if (*(short *)(param_1 + 0x25e) == 0) {
        if (*(float *)(param_1 + 0x3a0) * DAT_001218a8 <= *(float *)(param_1 + 0x98)) {
          FUN_003731e8(DAT_001218b0,param_1 + 0x1d4);
          *(undefined2 *)(param_1 + 0x25e) = 0xe;
          *(byte *)(param_1 + 0x3b9) = *(byte *)(param_1 + 0x3b9) | 1;
          uVar9 = DAT_001218b4;
        }
        else {
          *(undefined2 *)(param_1 + 0x25e) = 0xc;
          FUN_003731e8(uVar1,param_1 + 0x1d4);
          uVar9 = DAT_001218ac;
        }
      }
      else {
        iVar11 = 3;
        iVar10 = *(int *)(param_1 + 0x3c4) + 0x16;
        do {
          iVar11 = iVar11 + -1;
          *(byte *)(iVar10 + 0x50) = *(byte *)(iVar10 + 0x50) | 1;
          *(byte *)(iVar10 + 0xa0) = *(byte *)(iVar10 + 0xa0) | 1;
          iVar10 = iVar10 + 0xa0;
        } while (iVar11 != 0);
        if (*(short *)(param_1 + 0x25e) == 1) {
          uVar8 = FUN_0036ae14(param_1 + 0x1d4,0);
          uVar8 = VectorSignedToFloat(uVar8,(byte)(in_fpscr >> 0x15) & 3);
          FUN_00375c08(DAT_001218b8,uVar1,uVar8,uVar9,param_1 + 0x1d4,0);
          uVar3 = 0x3c;
        }
        else {
          uVar8 = FUN_0036ae14(param_1 + 0x1d4,0);
          uVar8 = VectorSignedToFloat(uVar8,(byte)(in_fpscr >> 0x15) & 3);
          FUN_00375c08(uVar1,uVar1,uVar8,uVar9,param_1 + 0x1d4,0);
          uVar3 = 0x5a;
        }
        *(undefined2 *)(param_1 + 0x25e) = uVar3;
        fVar2 = DAT_001218bc;
        *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 8);
        uVar9 = DAT_001218c0;
        *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0xc) + *(float *)(param_1 + 0x3a0) * fVar2
        ;
        *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x10);
      }
    }
    *(undefined4 *)(param_1 + 600) = uVar9;
  }
  FUN_00366044(param_1);
  return;
}
