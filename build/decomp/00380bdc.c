// OoT3D decomp @ 00380bdc  name=FUN_00380bdc  size=576

void FUN_00380bdc(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;

  FUN_00320db4();
  FUN_00322e80(param_1);
  FUN_0037632c(param_1);
  FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x108c);
  fVar9 = DAT_00380f78;
  FUN_00376340(DAT_00380f7c,DAT_00380f78,DAT_00380f78,param_2,param_1,5);
  FUN_00325fbc(param_1);
  FUN_00370734(param_1 + 0x1a4);
  iVar4 = DAT_00380fa4;
  iVar6 = DAT_00380fa0;
  uVar3 = DAT_00380f9c;
  fVar11 = DAT_00380f94;
  uVar2 = DAT_00380f90;
  iVar5 = *DAT_00380f80;
  pfVar7 = (float *)(param_1 + 0x10ec);
  fVar8 = *pfVar7;
  fVar10 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x1478),(byte)(in_fpscr >> 0x15) & 3);
  in_fpscr = in_fpscr & 0xfffffff;
  uVar1 = in_fpscr | (uint)(fVar8 == (fVar10 + DAT_00380f84) * DAT_00380f88 * DAT_00380f8c) << 0x1e;
  if (SUB41(uVar1 >> 0x1e,0)) {
    *pfVar7 = fVar8 + DAT_00380f94;
    FUN_00341188(uVar2,param_1,0x2b,0);
    FUN_0036beac(param_2,*(undefined4 *)(param_1 + 0x10e4));
    return;
  }
  fVar10 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x147a),(byte)(uVar1 >> 0x15) & 3);
  uVar1 = in_fpscr | (uint)(fVar8 == (fVar10 + DAT_00380f98) * DAT_00380f88 * DAT_00380f8c) << 0x1e;
  if (SUB41(uVar1 >> 0x1e,0)) {
    *pfVar7 = fVar8 + DAT_00380f94;
    *(short *)(iVar6 + param_1) = (short)uVar3;
    FUN_00367c7c(param_2,uVar3,0);
    FUN_00341188(uVar2,param_1,0xc,0);
    return;
  }
  fVar10 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x147a),(byte)(uVar1 >> 0x15) & 3);
  in_fpscr = in_fpscr |
             (uint)(fVar8 == DAT_00380f94 + (fVar10 + DAT_00380f98) * DAT_00380f88 * DAT_00380f8c)
             << 0x1e;
  if (!SUB41(in_fpscr >> 0x1e,0)) {
    fVar11 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x147c),(byte)(in_fpscr >> 0x15) & 3
                                       );
    if (fVar8 < (fVar11 + fVar9) * DAT_00380f88 * DAT_00380f8c) {
      fVar9 = fVar8 + DAT_00380f94;
    }
    else {
      *(undefined4 *)(param_1 + 0xf60) = 0x1c;
      FUN_0036ae48(*(undefined4 *)(param_2 + *(short *)(iVar4 + param_2) * 4 + 0xa54));
      FUN_00341188(uVar2,param_1,0x34,0);
      fVar9 = DAT_00380fa8;
    }
    *pfVar7 = fVar9;
    return;
  }
  iVar6 = FUN_003769d8(param_2 + 0x28a0);
  if (iVar6 != 2) {
    return;
  }
  *pfVar7 = *pfVar7 + fVar11;
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
