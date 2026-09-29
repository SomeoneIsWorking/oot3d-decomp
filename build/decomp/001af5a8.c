// OoT3D decomp @ 001af5a8  name=FUN_001af5a8  size=392

void FUN_001af5a8(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int extraout_r1;
  int iVar3;
  short *psVar4;
  short *psVar5;
  bool bVar6;
  bool bVar7;
  float fVar8;
  float fVar9;

  *(undefined1 *)(param_1 + 0x19a) = 1;
  if (param_1 != -0x3cc) {
    FUN_00342968();
  }
  psVar4 = DAT_001af730;
  FUN_003510b0(param_1,DAT_001af730 + -4);
  iVar2 = (int)*(short *)(param_2 + 0x104);
  bVar6 = iVar2 != *psVar4;
  iVar3 = extraout_r1;
  if (bVar6) {
    psVar4 = psVar4 + 3;
    iVar3 = (int)*psVar4;
  }
  bVar7 = iVar2 != iVar3;
  if (bVar6 && bVar7) {
    psVar4 = psVar4 + 3;
    iVar3 = (int)*psVar4;
  }
  psVar5 = psVar4;
  if (((bVar6 && bVar7) && iVar2 != iVar3) && (psVar5 = psVar4 + 3, iVar2 != *psVar5)) {
    psVar5 = psVar4 + 6;
    iVar3 = FUN_00363c10(param_2 + 0x3a58,2);
    if (-1 < iVar3) {
      psVar5 = psVar4 + 9;
    }
  }
  *(char *)(param_1 + 0x3ee) = (char)psVar5[1];
  iVar3 = FUN_00363c10(param_2 + 0x3a58,(int)psVar5[2]);
  if (-1 < iVar3) {
    *(char *)(param_1 + 0x3ed) = (char)iVar3;
    if (*(char *)(param_1 + 0x1e) == (char)iVar3) {
      FUN_0015b568(param_1,param_2);
    }
    else {
      *(undefined4 *)(param_1 + 0x3e4) = DAT_001af734;
    }
    if ((*(ushort *)(param_1 + 0x1c) & 0x40) != 0) {
      fVar8 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbe));
      fVar1 = DAT_001af738;
      fVar8 = fVar8 * DAT_001af738;
      fVar9 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
      iVar3 = FUN_0036aa20(*(float *)(param_1 + 0x28) + fVar8,*(undefined4 *)(param_1 + 0x2c),
                           *(float *)(param_1 + 0x30) - fVar9 * fVar1,param_2 + 0x208c,param_1,
                           param_2,9);
      if (iVar3 != 0) {
        *(undefined1 *)(iVar3 + 0x3ec) = 1;
      }
      *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) - fVar8;
      *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) + fVar9 * fVar1;
    }
    FUN_0037322c(DAT_001af73c,param_1);
    return;
  }
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  return;
}
