// OoT3D decomp @ 0016b3ec  name=FUN_0016b3ec  size=1032

void FUN_0016b3ec(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  undefined2 *puVar4;
  undefined4 uVar5;
  float *pfVar6;
  undefined4 uVar7;
  int iVar8;
  short sVar9;
  int iVar10;
  undefined4 uVar11;
  uint in_fpscr;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  int local_58 [4];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;

  uVar13 = DAT_0016b6e4;
  local_48 = DAT_0016b6e4;
  local_44 = DAT_0016b6e4;
  local_40 = DAT_0016b6e4;
  local_58[3] = param_2;
  FUN_003510b0(param_1,DAT_0016b6e8);
  fVar2 = DAT_0016b6f8;
  fVar14 = DAT_0016b6f4;
  iVar8 = 0;
  pfVar6 = (float *)(param_1 + 0xa54);
  sVar9 = 0xe;
  *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0xc) + DAT_0016b6ec;
  puVar4 = (undefined2 *)(param_1 + 0xb52);
  fVar12 = DAT_0016b6f0;
  do {
    iVar10 = param_1 + iVar8 * 0xc;
    *(undefined4 *)(iVar10 + 0xaf8) = local_48;
    *(undefined4 *)(iVar10 + 0xafc) = local_44;
    *(undefined4 *)(iVar10 + 0xb00) = local_40;
    *puVar4 = 0xc000;
    uVar7 = *(undefined4 *)(param_1 + 0x2c);
    uVar11 = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(iVar10 + 0xa50) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(iVar10 + 0xa54) = uVar7;
    *(undefined4 *)(iVar10 + 0xa58) = uVar11;
    iVar8 = (int)(short)((short)iVar8 + -1);
    sVar9 = sVar9 + -1;
    fVar1 = fVar12 * fVar14;
    fVar12 = fVar12 - fVar2;
    *pfVar6 = *(float *)(param_1 + 0x2c) - fVar1;
    pfVar6 = pfVar6 + -3;
    puVar4 = puVar4 + -3;
  } while (sVar9 != 0);
  *(undefined1 *)(param_1 + 0x1f) = 4;
  if (*(ushort *)(param_1 + 0x1c) == 999) {
    *(undefined1 *)(param_1 + 0xc48) = 1;
    FUN_00372f38(param_1,param_2,0);
  }
  else {
    *(ushort *)(param_1 + 0x9b0) = *(ushort *)(param_1 + 0x1c) >> 8;
    *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) & 0xff;
    uVar11 = FUN_00372f38(param_1,param_2,param_1 + 0xc3c,1,0);
    FUN_00353c9c(param_1,param_2,param_1 + 0x1a4,0,0,param_1 + 0x228,param_1 + 0x500,0xe);
    uVar5 = FUN_0036ae14(param_1 + 0x1a4,0);
    uVar7 = DAT_0016b6fc;
    uVar5 = VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(fVar2,DAT_0016b6fc,uVar5,fVar2,param_1 + 0x1a4,0,2);
    if (*(short *)(param_1 + 0x1c) < 3) {
      uVar5 = 3;
      *(undefined4 *)(param_1 + 0x7d8) = *(undefined4 *)(*(int *)(param_1 + 0x1cc) + 0xc);
    }
    else {
      uVar5 = 4;
      *(undefined4 *)(param_1 + 0x7d8) = *(undefined4 *)(*(int *)(param_1 + 0xc3c) + 0xc);
    }
    uVar5 = FUN_00372f0c(uVar11,uVar5);
    FUN_00372d94(*(undefined4 *)(param_1 + 0x7d8),uVar5);
    piVar3 = DAT_0016b700;
    *(float *)(*(int *)(param_1 + 0x7d8) + 0xc) = fVar2;
    if (*piVar3 == 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x7d8) + 8) = uVar7;
      FUN_003586ec();
    }
    iVar8 = DAT_0016b704;
    *(undefined1 *)(*(int *)(param_1 + 0x7d8) + 0x10) = 1;
    iVar10 = (int)*(short *)(param_1 + 0x1c);
    iVar8 = (int)((ulonglong)((longlong)iVar8 * (longlong)iVar10) >> 0x20);
    local_58[0] = *DAT_0016b708;
    local_58[1] = DAT_0016b708[1];
    local_58[2] = DAT_0016b708[2];
    if (iVar10 < 3) {
      FUN_0035c358(param_1 + 0x7dc,param_1 + 0x1a4,2,0xffffffff,0xffffffff);
    }
    else {
      FUN_0034e994(param_1 + 0x7dc,*(undefined4 *)(param_1 + 0xc3c),uVar11,5,0xffffffff,0xffffffff);
    }
    FUN_0035e3a4(param_1 + 0x7dc,0,local_58[(iVar8 - (iVar8 >> 0x1f)) * -3 + iVar10]);
    FUN_0035e330(param_1 + 0x7dc);
    if (*(short *)(param_1 + 0x1c) < 3) {
      iVar8 = FUN_0036e864(local_58[3],(int)*(short *)(param_1 + 0x9b0));
      if (iVar8 == 0) {
        FUN_00372d4c(uVar7,DAT_0016b81c,param_1 + 0xbc,DAT_0016b820);
        FUN_0037572c(uVar13,param_1);
        uVar13 = DAT_0016b824;
        *(undefined4 *)(param_1 + 0x9a8) = 4;
        *(undefined4 *)(param_1 + 0x6c) = uVar13;
        *(undefined2 *)(param_1 + 0xb78) = 1000;
        *(undefined4 *)(param_1 + 0x9ac) = DAT_0016b828;
        *(undefined1 *)(param_1 + 0xb7) = 4;
        *(undefined1 *)(param_1 + 0xb6) = 0xfe;
        FUN_00350eb8(param_2);
        FUN_00350d48(param_2,param_1 + 0xb7c,param_1,DAT_0016b82c,param_1 + 0xb9c);
      }
      else {
        FUN_00374428(param_1);
      }
    }
    else {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffa;
      FUN_00375d3c(local_58[3],local_58[3] + 0x208c,param_1,6);
      FUN_0037572c(DAT_0016b830,param_1);
      uVar13 = DAT_0016b834;
      *(undefined4 *)(param_1 + 0x9a8) = 0;
      uVar13 = FUN_003738a8(uVar13);
      *(undefined4 *)(param_1 + 0x6c) = uVar13;
      uVar13 = FUN_003738a8(DAT_0016b838);
      *(undefined4 *)(param_1 + 100) = uVar13;
      fVar14 = (float)FUN_003738a8(DAT_0016b83c);
      iVar8 = DAT_0016b844;
      uVar13 = DAT_0016b840;
      *(short *)(param_1 + 0x36) = (short)(int)fVar14;
      *(undefined4 *)(param_1 + 0x70) = uVar13;
      *(undefined2 *)(iVar8 + param_1) = 0x1e;
      *(undefined4 *)(param_1 + 0x9ac) = DAT_0016b848;
    }
  }
  return;
}
