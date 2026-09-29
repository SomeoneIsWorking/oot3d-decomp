// OoT3D decomp @ 003d51ec  name=FUN_003d51ec  size=140

void FUN_003d51ec(int param_1,int param_2)

{
  float fVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined4 uStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined4 uStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined4 uStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;

  sVar2 = *(short *)(param_1 + 0xb7a) + 1;
  *(short *)(param_1 + 0xb7a) = sVar2;
  if (sVar2 == 0x22) {
    FUN_0035e4f4(param_2,param_1 + 0x28,DAT_003d5268,1);
  }
  iVar4 = FUN_003731e0(param_1 + 0x1a4);
  fVar1 = fRam00198fb8;
  if (iVar4 != 0) {
    iVar4 = 7;
    fStack_34 = fRam00198fb8;
    fStack_30 = fRam00198fb8;
    fStack_2c = fRam00198fb8;
    *(short *)(param_1 + 0xb78) = (short)DAT_00198fbc;
    *(undefined4 *)(param_1 + 0x9a8) = 2;
    do {
      iVar3 = param_1 + iVar4 * 0xc;
      FUN_0036aa20(*(undefined4 *)(iVar3 + 0x9b4),*(undefined4 *)(iVar3 + 0x9b8),
                   *(undefined4 *)(iVar3 + 0x9bc),param_2 + 0x208c,param_1,param_2,0xde,0,0,0,
                   (int)(short)(*(short *)(param_1 + 0x1c) + 3));
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0xe);
    fVar11 = *(float *)(param_1 + 0x9b4) - *(float *)(param_1 + 0x28);
    fVar7 = *(float *)(param_1 + 0x9bc) - *(float *)(param_1 + 0x30);
    sVar2 = FUN_003758b0(SQRT(fVar11 * fVar11 + fVar7 * fVar7),
                         *(float *)(param_1 + 0x2c) - *(float *)(param_1 + 0x9b8));
    FUN_00375a18(param_1 + 0xbe,(int)*(short *)(param_1 + 0x92),1,(int)*(short *)(param_1 + 0xb78),0
                );
    FUN_00375a18(param_1 + 0xbc,(int)(short)(sVar2 + -0x8000),1,(int)*(short *)(param_1 + 0xb78),0);
    FUN_003713fc(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                 *(undefined4 *)(param_1 + 0x30),&fStack_64,0);
    FUN_0036e88c(&fStack_64,(int)(short)(*(short *)(param_1 + 0xbc) + -0x8000),
                 (int)*(short *)(param_1 + 0xbe),0,1);
    FUN_003735ac((float *)(param_1 + 0x9b4),&fStack_64,uRam00198fc0);
    fVar7 = fRam00198fc4;
    iVar4 = 5;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
    do {
      iVar5 = param_1 + iVar4 * 6;
      FUN_00375a18(iVar5 + 0xb04,(int)*(short *)(param_1 + 0xb22),1,(int)*(short *)(param_1 + 0xb78)
                   ,0);
      FUN_00375a18(iVar5 + 0xb06,(int)*(short *)(param_1 + 0xb24),1,(int)*(short *)(param_1 + 0xb78)
                   ,0);
      iVar3 = param_1 + iVar4 * 0xc;
      uStack_58 = *(undefined4 *)(iVar3 + 0x9b4);
      uStack_48 = *(undefined4 *)(iVar3 + 0x9b8);
      uStack_38 = *(undefined4 *)(iVar3 + 0x9bc);
      fStack_5c = 0.0;
      fStack_60 = 0.0;
      fStack_64 = 1.0;
      fStack_54 = 0.0;
      fStack_50 = 1.0;
      fStack_40 = 0.0;
      fStack_3c = 1.0;
      fStack_4c = 0.0;
      fStack_44 = 0.0;
      iVar6 = (int)(short)(*(short *)(iVar5 + 0xb04) + -0x8000);
      if (*(short *)(iVar5 + 0xb06) != 0) {
        fVar11 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0xb06),
                                            (byte)(in_fpscr >> 0x15) & 3);
        fVar11 = fVar11 * fVar7;
        in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar11 == fVar1) << 0x1e;
        if (!SUB41(in_fpscr >> 0x1e,0)) {
          fVar8 = (float)FUN_003727f0(fVar11);
          fVar11 = (float)FUN_00372674(fVar11);
          fVar12 = fStack_64 * fVar8;
          fStack_64 = fStack_64 * fVar11 - fStack_5c * fVar8;
          fStack_5c = fVar12 + fStack_5c * fVar11;
          fVar12 = fStack_54 * fVar8;
          fStack_54 = fStack_54 * fVar11 - fStack_4c * fVar8;
          fStack_4c = fVar12 + fStack_4c * fVar11;
          fVar12 = fStack_44 * fVar8;
          fStack_44 = fStack_44 * fVar11 - fStack_3c * fVar8;
          fStack_3c = fVar12 + fStack_3c * fVar11;
        }
      }
      if (iVar6 != 0) {
        fVar11 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
        fVar11 = fVar11 * fVar7;
        in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar11 == fVar1) << 0x1e;
        if (!SUB41(in_fpscr >> 0x1e,0)) {
          fVar9 = (float)FUN_003727f0(fVar11);
          fVar10 = (float)FUN_00372674(fVar11);
          fVar11 = fStack_5c * fVar9;
          fStack_5c = fStack_5c * fVar10 - fStack_60 * fVar9;
          fVar8 = fStack_4c * fVar9;
          fStack_4c = fStack_4c * fVar10 - fStack_50 * fVar9;
          fVar12 = fStack_3c * fVar9;
          fStack_3c = fStack_3c * fVar10 - fStack_40 * fVar9;
          fStack_60 = fStack_60 * fVar10 + fVar11;
          fStack_50 = fStack_50 * fVar10 + fVar8;
          fStack_40 = fStack_40 * fVar10 + fVar12;
        }
      }
      FUN_003735ac(iVar3 + 0x9c0,&fStack_64,&fStack_34);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0xd);
    *(undefined2 *)(param_1 + 0xb76) = 0x17;
    *(undefined4 *)(param_1 + 0x9ac) = uRam00198fc8;
    return;
  }
  return;
}
