// OoT3D decomp @ 0013ec58  name=FUN_0013ec58  size=1320

void FUN_0013ec58(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  undefined4 uVar8;
  uint in_fpscr;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;

  *(undefined1 *)(param_1 + 0x1a5) = 0;
  FUN_00370734(param_1 + 0x26c);
  fVar6 = DAT_0013f068;
  fVar5 = DAT_0013f064;
  piVar4 = DAT_0013f060;
  fVar10 = DAT_0013f05c;
  uVar3 = DAT_0013f058;
  uVar13 = DAT_0013f054;
  uVar2 = DAT_0013f050;
  uVar8 = DAT_0013f04c;
  if (*(short *)(param_1 + 0x22c) == 0) {
    uVar9 = VectorUnsignedToFloat((uint)*(byte *)(param_2 + 0xa82),(byte)(in_fpscr >> 0x15) & 3);
    FUN_00373500(uVar9,DAT_0013f058,DAT_0013f050,param_1 + 0x240);
    uVar9 = VectorUnsignedToFloat((uint)*(byte *)(param_2 + 0xa82),(byte)(in_fpscr >> 0x15) & 3);
    FUN_00373500(uVar9,uVar3,uVar2,param_1 + 0x244);
    uVar9 = VectorUnsignedToFloat((uint)*(byte *)(param_2 + 0xa82),(byte)(in_fpscr >> 0x15) & 3);
    FUN_00373500(uVar9,uVar3,uVar2,param_1 + 0x248);
    FUN_00373500(fVar6,uVar3,uVar13,param_1 + 0x24c);
    fVar11 = (float)VectorSignedToFloat((int)*(short *)(*piVar4 + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    if ((int)(DAT_0013f084 / fVar11 + fVar5) == (int)*(short *)(param_1 + 0x22e)) {
      FUN_00375bcc(param_1,DAT_0013f088);
      FUN_00375bcc(param_1,DAT_0013f08c);
    }
    if (*(short *)(param_1 + 0x236) == 0) {
      fVar11 = (float)VectorSignedToFloat((int)*(short *)(*piVar4 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      if ((int)(DAT_0013f090 / fVar11 + fVar5) == (int)*(short *)(param_1 + 0x22e)) {
        FUN_0036aa20(*(undefined4 *)(param_1 + 0x28),*(float *)(param_1 + 0x2c) + DAT_0013f094,
                     *(undefined4 *)(param_1 + 0x30),param_2 + 0x208c,param_1,param_2,0x6d,0,0,0,1);
      }
      fVar11 = (float)VectorSignedToFloat((int)*(short *)(*piVar4 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      if ((int)(DAT_0013f098 / fVar11 + fVar5) == (int)*(short *)(param_1 + 0x22e)) {
        FUN_00362a4c(fVar6,param_1 + 0x26c,DAT_0013f09c);
      }
      fVar11 = DAT_0013f0a4;
      iVar7 = *piVar4;
      fVar12 = (float)VectorSignedToFloat((int)*(short *)(iVar7 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      if ((int)(DAT_0013f0a0 / fVar12 + fVar5) == (int)*(short *)(param_1 + 0x22e)) {
        *(undefined1 *)(param_1 + 0x1a4) = 3;
      }
      fVar12 = (float)VectorSignedToFloat((int)*(short *)(iVar7 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      if ((int)(fVar11 / fVar12 + fVar5) == (int)*(short *)(param_1 + 0x22e)) {
        FUN_0035a49c(fVar6,param_1 + 0x26c,DAT_0013f0a8);
        *(undefined1 *)(param_1 + 0x1a4) = 4;
      }
    }
    FUN_00373500(uVar8,uVar3,DAT_0013f0ac,param_1 + 0x5c);
    FUN_00373500(*(undefined4 *)(param_1 + 0x1e4),uVar3,*(undefined4 *)(param_1 + 0x1f0),
                 param_1 + 0x28);
    FUN_00373500(fVar10,DAT_0013f0b0,uVar3,param_1 + 0x2c);
    uVar13 = *(undefined4 *)(param_1 + 500);
    uVar8 = *(undefined4 *)(param_1 + 0x1ec);
    iVar7 = param_1 + 0x30;
  }
  else {
    FUN_00373500(DAT_0013f04c,DAT_0013f058,DAT_0013f06c,param_1 + 0x5c);
    iVar7 = *piVar4;
    fVar11 = (float)VectorSignedToFloat((int)*(short *)(iVar7 + 0x110),(byte)(in_fpscr >> 0x15) & 3)
    ;
    if ((int)(DAT_0013f070 / fVar11 + fVar5) == (int)*(short *)(param_1 + 0x22c)) {
      *(undefined1 *)(param_1 + 0x1a4) = 1;
      uVar8 = DAT_0013f078;
      fVar11 = (float)VectorSignedToFloat((int)*(short *)(iVar7 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(short *)(param_1 + 0x22e) = (short)(int)(DAT_0013f074 / fVar11 + fVar5);
      FUN_0035a49c(fVar6,param_1 + 0x26c,uVar8);
    }
    uVar8 = DAT_0013f07c;
    FUN_00373500(DAT_0013f07c,uVar3,uVar2,param_1 + 0x240);
    FUN_00373500(uVar8,uVar3,uVar2,param_1 + 0x244);
    FUN_00373500(uVar8,uVar3,uVar2,param_1 + 0x248);
    iVar7 = param_1 + 0x24c;
    uVar8 = DAT_0013f080;
  }
  FUN_00373500(uVar8,uVar3,uVar13,iVar7);
  iVar7 = DAT_0013f204;
  fVar11 = (float)VectorSignedToFloat((int)*(short *)(*piVar4 + 0x110),(byte)(in_fpscr >> 0x15) & 3)
  ;
  if ((int)(fVar10 / fVar11 + fVar5) == (int)*(short *)(param_1 + 0x236)) {
    *(undefined4 *)(param_1 + 0x254) = DAT_0013f0b4;
    uVar8 = DAT_0013f0b8;
    *(undefined2 *)(param_1 + 0x220) = 0;
    FUN_0048961c(uVar8);
    FUN_0048961c(DAT_0013f0bc);
    uVar8 = FUN_0036ae14(param_1 + 0x26c,5);
    uVar8 = VectorSignedToFloat(uVar8,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(DAT_0013f0c4,fVar6,uVar8,DAT_0013f0c0,param_1 + 0x26c,5,2);
    *(undefined4 *)(param_1 + 0x1f8) = uVar3;
    fVar10 = (float)VectorSignedToFloat((int)*(short *)(*piVar4 + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    *(short *)(param_1 + 0x22c) = (short)(int)(DAT_0013f1fc / fVar10 + fVar5);
    *(undefined1 *)(param_1 + 0x1a4) = 4;
  }
  else {
    fVar11 = *(float *)(param_1 + 0x28) - *(float *)(param_1 + 0x1e4);
    fVar10 = *(float *)(param_1 + 0x30) - *(float *)(param_1 + 0x1ec);
    fVar10 = SQRT(fVar11 * fVar11 + fVar10 * fVar10);
    if ((int)fVar10 < DAT_0013f200) {
      *(undefined1 *)(param_1 + 0x1a5) = 1;
    }
    if (((int)fVar10 < iVar7) && (*(short *)(param_1 + 0x220) == 0)) {
      *(undefined2 *)(param_1 + 0x220) = 1;
      FUN_0036aa20(*(float *)(param_1 + 0x1e4),*(float *)(param_1 + 0x2c) + DAT_0013f208,
                   param_2 + 0x208c,param_1,param_2,0x6d,0,(int)*(short *)(param_1 + 0xbe),0,0x28);
      *(undefined1 *)(param_1 + 0x1a7) = 1;
    }
    uVar8 = DAT_0013f214;
    uVar1 = in_fpscr & 0xfffffff | (uint)(fVar10 == fVar6) << 0x1e;
    if (SUB41(uVar1 >> 0x1e,0)) {
      fVar10 = (float)VectorSignedToFloat((int)*(short *)(*piVar4 + 0x110),(byte)(uVar1 >> 0x15) & 3
                                         );
      *(short *)(param_1 + 0x22c) = (short)(int)(DAT_0013f20c / fVar10 + fVar5);
      *(undefined4 *)(param_1 + 0x254) = DAT_0013f210;
      FUN_00362a4c(param_1 + 0x26c,uVar8);
      *(undefined1 *)(param_1 + 0x1a4) = 5;
      return;
    }
  }
  return;
}
