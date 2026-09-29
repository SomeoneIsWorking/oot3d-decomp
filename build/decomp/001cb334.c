// OoT3D decomp @ 001cb334  name=FUN_001cb334  size=664

void FUN_001cb334(int param_1,int param_2)

{
  short sVar1;
  uint uVar2;
  byte bVar3;
  float fVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_4c [4];
  float fStack_48;
  float fStack_44;
  float fStack_40;

  fVar11 = fRam001cb5d4;
  iVar6 = *(int *)(iRam001cb5cc + param_2);
  if ((*(int *)(param_1 + 0x94) < iRam001cb5d0) &&
     (in_fpscr = in_fpscr & 0xfffffff |
                 (uint)(*(float *)(param_1 + 0x2c) + fRam001cb5d4 <= *(float *)(iVar6 + 0x2c)) <<
                 0x1d, !SUB41(in_fpscr >> 0x1d,0))) {
    *(ushort *)(iVar6 + 0x90) = *(ushort *)(iVar6 + 0x90) | 0x100;
  }
  fVar4 = fRam001cb5e0;
  fVar10 = fRam001cb5dc;
  iVar6 = 0;
  *(float *)(param_1 + 100) = *(float *)(param_1 + 100) * fRam001cb5d8;
  if (*(char *)(param_1 + 0x1c0) != '\0') {
    *(char *)(param_1 + 0x1c0) = *(char *)(param_1 + 0x1c0) + -1;
  }
  fStack_48 = *(float *)(param_1 + 0x28) + fVar10;
  fStack_44 = *(float *)(param_1 + 0x2c) + fVar4;
  fStack_40 = *(float *)(param_1 + 0x30);
  fVar12 = *(float *)(param_1 + 0x84);
  do {
    fVar9 = (float)FUN_0036e81c(param_2 + 0xa98,param_1 + 0x7c,auStack_4c,param_1,&fStack_48);
    fVar9 = fVar9 - fVar11;
    iVar6 = iVar6 + 1;
    in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar9 <= fVar12) << 0x1d;
    if (!SUB41(in_fpscr >> 0x1d,0)) {
      fVar12 = fVar9;
    }
    fStack_48 = fStack_48 - fVar10;
  } while (iVar6 < 3);
  if (*(int *)(param_1 + 0x318) != 0) {
    fStack_48 = *(float *)(param_1 + 0x28);
    fStack_44 = *(float *)(param_1 + 0x2c) + fVar4;
    fStack_40 = *(float *)(param_1 + 0x30) - fVar10;
    fVar10 = (float)FUN_0036e81c(param_2 + 0xa98,param_1 + 0x7c,auStack_4c,param_1,&fStack_48);
    fVar10 = fVar10 - fVar11;
    in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar10 <= fVar12) << 0x1d;
    if (!SUB41(in_fpscr >> 0x1d,0)) {
      fVar12 = fVar10;
    }
  }
  iVar7 = FUN_003705a0(fVar12,*(undefined4 *)(param_1 + 100),param_1 + 0x2c);
  uVar5 = uRam001cb5e8;
  iVar6 = iRam001cb5e4;
  if (iVar7 != 0) {
    if ((iRam001cb5e4 < *(int *)(param_1 + 100)) &&
       (FUN_00375bcc(param_1,uRam001cb5ec), *(int *)(param_1 + 0x98) < iRam001cb5f0)) {
      uVar8 = FUN_0036f848(*(undefined4 *)(param_2 + *(short *)(param_2 + 0xa64) * 4 + 0xa54),3);
      FUN_0036f7c0(uVar8,uRam001cb5f4);
      FUN_0036f6b0(uVar8,8,0,0,0);
      FUN_0036f628(uVar8,4);
    }
    *(undefined4 *)(param_1 + 100) = uVar5;
  }
  if (iVar6 <= *(int *)(param_1 + 100)) {
    FUN_00373264(param_1,uRam001cb5f8);
  }
  if (*(char *)(param_1 + 0x1c0) == '\0') {
    *(undefined4 *)(param_1 + 100) = uVar5;
    *(undefined1 *)(param_1 + 0x1c0) = 0x2d;
    fVar11 = (float)VectorSignedToFloat((int)(short)(int)*(float *)(param_1 + 0x2c),
                                        (byte)(in_fpscr >> 0x15) & 3);
    sVar1 = (short)(int)(fVar11 + fRam001cb5fc);
    *(short *)(param_1 + 0x1c2) = sVar1;
    fVar10 = (float)VectorSignedToFloat((int)sVar1,(byte)(in_fpscr >> 0x15) & 3);
    fVar11 = *(float *)(param_1 + 0xc);
    uVar2 = in_fpscr & 0xfffffff | (uint)(fVar10 < fVar11) << 0x1f |
            (uint)(fVar10 == fVar11) << 0x1e;
    bVar3 = (byte)(uVar2 >> 0x18);
    if ((bool)(bVar3 >> 6 & 1) || (bool)(bVar3 >> 7) != (NAN(fVar10) || NAN(fVar11))) {
      fVar11 = (float)VectorSignedToFloat((int)sVar1,(byte)(uVar2 >> 0x15) & 3);
    }
    *(short *)(param_1 + 0x1c2) = (short)(int)fVar11;
    *(undefined4 *)(param_1 + 0x1bc) = uRam001cb600;
  }
  return;
}
