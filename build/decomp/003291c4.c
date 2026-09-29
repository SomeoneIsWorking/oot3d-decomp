// OoT3D decomp @ 003291c4  name=FUN_003291c4  size=48

void FUN_003291c4(int param_1,int param_2)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined4 uVar6;
  float *pfVar7;
  uint uVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;

  FUN_0032ae1c(param_1,param_2,3);
  FUN_0032a998(param_1,3);
  uVar6 = DAT_003295d4;
  fVar2 = DAT_003295d0;
  piVar1 = DAT_003295c8;
  fVar10 = (float)VectorSignedToFloat((int)*(short *)(*DAT_003295c8 + 0x110),
                                      (byte)(in_fpscr >> 0x15) & 3);
  if (((int)(DAT_003295cc / fVar10 + DAT_003295d0) <= (int)(uint)*(ushort *)(param_2 + 0x22b8)) &&
     (fVar10 = (float)VectorSignedToFloat((int)*(short *)(*DAT_003295c8 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3),
     (int)(uint)*(ushort *)(param_2 + 0x22b8) <= (int)(DAT_003295d8 / fVar10 + DAT_003295d0))) {
    iVar5 = *(int *)(param_2 + 0x7fb4);
    uVar14 = *(undefined4 *)(param_1 + 0x28);
    fVar10 = *(float *)(param_1 + 0x2c) + DAT_003295dc;
    uVar15 = *(undefined4 *)(param_1 + 0x30);
    if (iVar5 == 0) {
      FUN_0037547c(DAT_003295d4,0,4,DAT_003295e4,DAT_003295e4,DAT_003295e0);
      uVar14 = z_actor_003738d0(uVar14,fVar10,uVar15,param_2 + 0x208c,param_2,0xe5,0,0,0,3,1);
      *(undefined4 *)(param_2 + 0x7fb4) = uVar14;
    }
    else {
      *(undefined4 *)(iVar5 + 0x28) = uVar14;
      *(float *)(iVar5 + 0x2c) = fVar10;
      *(undefined4 *)(iVar5 + 0x30) = uVar15;
    }
  }
  fVar10 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x110),(byte)(in_fpscr >> 0x15) & 3)
  ;
  if (((int)(DAT_003295e8 / fVar10 + fVar2) <= (int)(uint)*(ushort *)(param_2 + 0x22b8)) &&
     (fVar10 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3),
     (int)(uint)*(ushort *)(param_2 + 0x22b8) <= (int)(DAT_003295ec / fVar10 + fVar2))) {
    iVar5 = *(int *)(param_2 + 0x7fb8);
    uVar14 = *(undefined4 *)(param_1 + 8);
    fVar10 = *(float *)(param_1 + 0xc) + DAT_003295f0;
    uVar15 = *(undefined4 *)(param_1 + 0x10);
    if (iVar5 == 0) {
      FUN_0037547c(uVar6,0,4,DAT_003295e4,DAT_003295e4,DAT_003295e0);
      uVar6 = z_actor_003738d0(uVar14,fVar10,uVar15,param_2 + 0x208c,param_2,0xe5,0,0,0,4,1);
      *(undefined4 *)(param_2 + 0x7fb8) = uVar6;
    }
    else {
      *(undefined4 *)(iVar5 + 0x28) = uVar14;
      *(float *)(iVar5 + 0x2c) = fVar10;
      *(undefined4 *)(iVar5 + 0x30) = uVar15;
    }
  }
  fVar12 = DAT_003295fc;
  fVar10 = DAT_003295f4;
  fStack_64 = DAT_003295f4;
  fStack_60 = DAT_003295f4;
  fStack_5c = (float)DAT_003295f8;
  if (*(ushort *)(param_2 + 0x22b8) - 0x6e < 0x1e) {
    fStack_58 = *(float *)(param_1 + 0x28) - DAT_00329600;
    fStack_54 = *(float *)(param_1 + 0x2c) + DAT_003295fc;
    fStack_50 = *(float *)(param_1 + 0x30) - DAT_00329604;
    FUN_00330768(DAT_00329608,param_2,&fStack_58,&fStack_64,3,0,0x14);
  }
  uVar14 = DAT_00329624;
  fVar4 = DAT_00329620;
  fVar3 = DAT_0032961c;
  fVar13 = DAT_00329618;
  uVar6 = DAT_00329610;
  fVar9 = DAT_0032960c;
  fStack_64 = DAT_0032960c;
  fStack_60 = (float)DAT_00329610;
  fStack_5c = fVar10;
  fVar11 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x110),(byte)(in_fpscr >> 0x15) & 3)
  ;
  if (((int)(DAT_00329614 / fVar11 + fVar2) <= (int)(uint)*(ushort *)(param_2 + 0x22b8)) &&
     (fVar11 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3),
     (int)(uint)*(ushort *)(param_2 + 0x22b8) <= (int)(fVar12 / fVar11 + fVar2))) {
    fStack_58 = *(float *)(param_1 + 0x28) + DAT_0032961c;
    fStack_54 = *(float *)(param_1 + 0x2c) - DAT_00329618;
    fStack_50 = *(float *)(param_1 + 0x30) - DAT_00329620;
    FUN_00330768(DAT_00329624,param_2,&fStack_58,&fStack_64,6,1,0x23);
  }
  fStack_64 = fVar9;
  fStack_60 = (float)uVar6;
  fStack_5c = fVar10;
  fVar12 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x110),(byte)(in_fpscr >> 0x15) & 3)
  ;
  if ((int)(DAT_00329628 / fVar12 + fVar2) <= (int)(uint)*(ushort *)(param_2 + 0x22b8)) {
    fStack_58 = *(float *)(param_1 + 0x28) + fVar3;
    fStack_54 = *(float *)(param_1 + 0x2c) - fVar13;
    fStack_50 = *(float *)(param_1 + 0x30) - fVar4;
    FUN_00330768(uVar14,param_2,&fStack_58,&fStack_64,6,1,0x23);
  }
  fVar12 = DAT_0032997c;
  uVar6 = DAT_00329974;
  fStack_64 = fVar9;
  fStack_60 = (float)DAT_00329974;
  fStack_5c = (float)DAT_00329974;
  fVar13 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x110),(byte)(in_fpscr >> 0x15) & 3)
  ;
  if ((int)(DAT_00329978 / fVar13 + fVar2) <= (int)(uint)*(ushort *)(param_2 + 0x22b8)) {
    fStack_58 = *(float *)(param_1 + 0x28) + DAT_00329980;
    fStack_54 = *(float *)(param_1 + 0x2c) + DAT_0032997c;
    fStack_50 = *(float *)(param_1 + 0x30) + DAT_00329984;
    FUN_00330768(uVar14,param_2,&fStack_58,&fStack_64,6,2,0x23);
  }
  fVar11 = DAT_00329994;
  fVar13 = DAT_00329990;
  fStack_64 = DAT_00329988;
  fStack_60 = (float)DAT_0032998c;
  fStack_5c = fVar10;
  fVar10 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x110),(byte)(in_fpscr >> 0x15) & 3)
  ;
  if (((int)(DAT_00329990 / fVar10 + fVar2) <= (int)(uint)*(ushort *)(param_2 + 0x22b8)) &&
     (fVar10 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3),
     (int)(uint)*(ushort *)(param_2 + 0x22b8) <= (int)(DAT_00329998 / fVar10 + fVar2))) {
    fStack_58 = *(float *)(param_1 + 8) + DAT_0032999c;
    fStack_54 = *(float *)(param_1 + 0xc) - DAT_003299a0;
    fStack_50 = *(float *)(param_1 + 0x10) + DAT_00329994;
    FUN_00330768(uVar14,param_2,&fStack_58,&fStack_64,6,4,0x23);
  }
  fStack_64 = fVar9;
  fStack_60 = (float)uVar6;
  fStack_5c = (float)uVar6;
  fVar10 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x110),(byte)(in_fpscr >> 0x15) & 3)
  ;
  if ((int)(DAT_003299a4 / fVar10 + fVar2) <= (int)(uint)*(ushort *)(param_2 + 0x22b8)) {
    fStack_58 = *(float *)(param_1 + 0x28) + DAT_003299a8;
    fStack_54 = *(float *)(param_1 + 0x2c) + fVar12;
    fStack_50 = *(float *)(param_1 + 0x30) + fVar3;
    FUN_00330768(uVar14,param_2,&fStack_58,&fStack_64,6,3,0x23);
  }
  fStack_64 = fVar9;
  fStack_60 = (float)uVar6;
  fStack_5c = (float)uVar6;
  fVar10 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x110),(byte)(in_fpscr >> 0x15) & 3)
  ;
  if ((int)(DAT_003299ac / fVar10 + fVar2) <= (int)(uint)*(ushort *)(param_2 + 0x22b8)) {
    fStack_58 = *(float *)(param_1 + 0x28) + DAT_003299b0;
    fStack_54 = *(float *)(param_1 + 0x2c) + DAT_003299b4;
    fStack_50 = *(float *)(param_1 + 0x30) - DAT_003299b8;
    FUN_00330768(uVar14,param_2,&fStack_58,&fStack_64,6,0,0x23);
  }
  uVar8 = (uint)*(ushort *)(param_2 + 0x22b8);
  iVar5 = (int)*(short *)(*piVar1 + 0x110);
  pfVar7 = (float *)(param_1 + 0x28);
  fVar10 = (float)VectorSignedToFloat(iVar5,(byte)(in_fpscr >> 0x15) & 3);
  if ((int)(DAT_003299bc / fVar10 + fVar2) == uVar8) {
    fStack_58 = *pfVar7 + DAT_003299c4;
    fStack_54 = *(float *)(param_1 + 0x2c) - fVar11;
    fStack_50 = *(float *)(param_1 + 0x30) + DAT_003299c8;
    FUN_003308a4(DAT_003299c0,param_2,&fStack_58);
  }
  else {
    fVar10 = (float)VectorSignedToFloat(iVar5,(byte)(in_fpscr >> 0x15) & 3);
    if ((int)(fVar4 / fVar10 + fVar2) == uVar8) {
      fStack_58 = *pfVar7 + DAT_00329c88;
      fStack_54 = *(float *)(param_1 + 0x2c) + DAT_00329c8c;
      fStack_50 = *(float *)(param_1 + 0x30) - DAT_00329c90;
      FUN_003308a4(DAT_00329c94,param_2,&fStack_58);
    }
    else {
      fVar10 = (float)VectorSignedToFloat(iVar5,(byte)(in_fpscr >> 0x15) & 3);
      if ((int)(DAT_00329c98 / fVar10 + fVar2) == uVar8) {
        fStack_58 = *pfVar7 - DAT_00329c9c;
        fStack_54 = *(float *)(param_1 + 0x2c) + DAT_00329ca0;
        fStack_50 = *(float *)(param_1 + 0x30) - DAT_00329ca4;
        FUN_003308a4(DAT_003299c0,param_2,&fStack_58);
      }
    }
  }
  fVar10 = DAT_00329cb0;
  fVar9 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
  if ((int)(fVar13 / fVar9 + fVar2) == (uint)*(ushort *)(param_2 + 0x22b8)) {
    fStack_58 = *(float *)(param_1 + 0x28) + DAT_00329ca8;
    fStack_54 = *(float *)(param_1 + 0x2c) + fVar12;
    fStack_50 = *(float *)(param_1 + 0x30) + DAT_00329cac;
    fStack_64 = (float)FUN_002cfca0(0);
    fStack_64 = fStack_64 * fVar10;
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  return;
}
