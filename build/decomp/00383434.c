// OoT3D decomp @ 00383434  name=FUN_00383434  size=776

void FUN_00383434(int param_1,int param_2)

{
  ushort uVar1;
  bool bVar2;
  undefined2 *puVar3;
  float fVar4;
  char cVar5;
  short *psVar6;
  int iVar7;
  ushort uVar8;
  uint in_fpscr;
  undefined4 uVar9;
  float fVar10;
  float fVar11;

  iVar7 = DAT_00383740;
  puVar3 = DAT_0038373c;
  bVar2 = false;
  *(undefined4 *)(DAT_0038373c + 2) = 0;
  *puVar3 = 0;
  fVar4 = DAT_00383744;
  *(ushort *)(iVar7 + param_1) = (ushort)(((uint)*(ushort *)(param_1 + 0x1c) << 0x12) >> 0x1a);
  uVar1 = *(ushort *)(param_1 + 0x1c);
  uVar8 = uVar1 & 0xff;
  *(ushort *)(param_1 + 0x1c) = uVar8;
  if (uVar8 != 3) {
    if (uVar8 < 4) {
      if (2 < (uVar1 & 0xff)) {
        return;
      }
    }
    else if (uVar8 != 4 && uVar8 != 5) {
      if (uVar8 != 0xff) {
        return;
      }
      iVar7 = FUN_0036e864(param_2);
      if (iVar7 == 0) {
        FUN_003510b0(param_1,DAT_00383748);
        FUN_0037572c(DAT_0038374c,param_1);
        *(undefined1 *)(param_1 + 0xb6) = 0xff;
        FUN_00350eb8(param_2,param_1 + 0x1b8);
        FUN_00350d48(param_2,param_1 + 0x1b8,param_1,DAT_00383750,param_1 + 0x1d8);
        *(undefined4 *)(*(int *)(param_1 + 0x1d4) + 0x38) = *(undefined4 *)(param_1 + 0x28);
        *(float *)(*(int *)(param_1 + 0x1d4) + 0x3c) = *(float *)(param_1 + 0x2c) + fVar4;
        *(undefined4 *)(*(int *)(param_1 + 0x1d4) + 0x40) = *(undefined4 *)(param_1 + 0x30);
        *(undefined4 *)(*(int *)(param_1 + 0x1d4) + 0x44) = DAT_00383754;
        FUN_00353dd0(param_2,param_1 + 0x228);
        FUN_00353d24(param_2,param_1 + 0x228,param_1,DAT_00383758);
        *(float *)(param_1 + 0x274) = *(float *)(param_1 + 0x274) + *(float *)(param_1 + 0x28);
        *(float *)(param_1 + 0x278) = *(float *)(param_1 + 0x278) + *(float *)(param_1 + 0x2c);
        *(float *)(param_1 + 0x27c) = *(float *)(param_1 + 0x27c) + *(float *)(param_1 + 0x30);
        uVar9 = FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
        *(undefined4 *)(param_1 + 0x1b0) = uVar9;
        uVar9 = FUN_00338f60((int)*(short *)(param_1 + 0xbe));
        *(undefined4 *)(param_1 + 0x1b4) = uVar9;
        uVar9 = FUN_0036a924(param_1,param_2,0xc2,1);
        *(undefined4 *)(param_1 + 0x288) = uVar9;
        *(undefined4 *)(param_1 + 0x140) = DAT_0038375c;
        *(undefined4 *)(param_1 + 0x1a4) = DAT_00383760;
        bVar2 = true;
      }
      goto LAB_003835dc;
    }
  }
  FUN_003510b0(param_1,DAT_00383764);
  fVar11 = DAT_0038376c;
  iVar7 = DAT_00383768;
  psVar6 = (short *)(DAT_00383768 + *(short *)(param_1 + 0x1c) * 0x14);
  uVar9 = VectorSignedToFloat((int)*psVar6,(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(param_1 + 0x6c) = uVar9;
  uVar9 = VectorSignedToFloat((int)psVar6[1],(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(param_1 + 100) = uVar9;
  fVar10 = (float)VectorSignedToFloat((int)psVar6[2],(byte)(in_fpscr >> 0x15) & 3);
  FUN_0037572c(fVar10 * fVar11,param_1);
  *(undefined2 *)(param_1 + 0x280) = *(undefined2 *)(iVar7 + *(short *)(param_1 + 0x1c) * 0x14 + 6);
  *(undefined2 *)(param_1 + 0x282) = *(undefined2 *)(iVar7 + *(short *)(param_1 + 0x1c) * 0x14 + 8);
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(iVar7 + *(short *)(param_1 + 0x1c) * 0x14 + 10);
  fVar11 = (float)FUN_002cfca0();
  fVar10 = (float)FUN_00338f60((int)*(short *)(param_1 + 0x36));
  *(float *)(param_1 + 0x28) = *(float *)(param_1 + 8) + fVar11 * fVar4;
  iVar7 = iVar7 + *(short *)(param_1 + 0x1c) * 0x14;
  fVar11 = (float)VectorSignedToFloat((int)*(short *)(iVar7 + 0xc),(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(param_1 + 0x2c) = fVar11 + *(float *)(param_1 + 0xc);
  *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x10) + fVar10 * fVar4;
  *(undefined2 *)(param_1 + 0xbc) = *(undefined2 *)(iVar7 + 0xe);
  *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(iVar7 + 0x10);
  uVar9 = DAT_00383770;
  *(undefined2 *)(param_1 + 0xc0) = *(undefined2 *)(iVar7 + 0x12);
  cVar5 = FUN_00363c10(param_2 + 0x3a58,uVar9);
  *(char *)(param_1 + 0x284) = cVar5;
  if (-1 < cVar5) {
    *(undefined4 *)(param_1 + 0x1a4) = DAT_00383774;
    *(undefined4 *)(param_1 + 0x140) = 0;
    bVar2 = true;
  }
LAB_003835dc:
  if (bVar2) {
    return;
  }
  FUN_00374428(param_1);
  return;
}
