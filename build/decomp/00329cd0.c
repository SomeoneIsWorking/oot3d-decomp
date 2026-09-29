// OoT3D decomp @ 00329cd0  name=FUN_00329cd0  size=60

void FUN_00329cd0(int param_1,int param_2)

{
  short *psVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  short sVar9;
  int iVar10;
  int iVar11;
  int extraout_r1;
  uint uVar12;
  uint in_fpscr;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  int iStack_70;

  FUN_0032a5d0();
  FUN_0032ae1c(param_1,param_2,2);
  FUN_0032a998(param_1,2);
  fVar3 = DAT_0032a108;
  piVar2 = DAT_0032a100;
  iStack_70 = param_2 + 0x2298;
  fVar16 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0032a100 + 0x110),
                                      (byte)(in_fpscr >> 0x15) & 3);
  if (((int)(DAT_0032a104 / fVar16 + DAT_0032a108) <= (int)(uint)*(ushort *)(param_2 + 0x22b8)) &&
     (fVar16 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0032a100 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3),
     (int)(uint)*(ushort *)(param_2 + 0x22b8) <= (int)(DAT_0032a10c / fVar16 + DAT_0032a108))) {
    uVar17 = *(undefined4 *)(param_1 + 0x28);
    uVar18 = *(undefined4 *)(param_1 + 0x30);
    fVar16 = *(float *)(param_1 + 0x2c) + DAT_0032a110;
    iVar10 = *(int *)(param_2 + 0x7fb0);
    if (iVar10 == 0) {
      FUN_0037547c(DAT_0032a11c,0,4,DAT_0032a118,DAT_0032a118,DAT_0032a114);
      uVar17 = z_actor_003738d0(uVar17,fVar16,uVar18,param_2 + 0x208c,param_2,0xe5,0,0,0,2,1);
      *(undefined4 *)(param_2 + 0x7fb0) = uVar17;
    }
    else {
      *(undefined4 *)(iVar10 + 0x28) = uVar17;
      *(float *)(iVar10 + 0x2c) = fVar16;
      *(undefined4 *)(iVar10 + 0x30) = uVar18;
    }
  }
  fVar4 = DAT_0032a138;
  uVar17 = DAT_0032a134;
  fVar15 = DAT_0032a130;
  fVar16 = DAT_0032a12c;
  iVar10 = DAT_0032a128;
  iStack_88 = DAT_0032a120;
  iStack_84 = DAT_0032a124;
  iStack_80 = DAT_0032a128;
  fVar13 = (float)VectorSignedToFloat((int)*(short *)(*piVar2 + 0x110),(byte)(in_fpscr >> 0x15) & 3)
  ;
  if (((int)(DAT_0032a12c / fVar13 + fVar3) <= (int)(uint)*(ushort *)(iStack_70 + 0x20)) &&
     (fVar13 = (float)VectorSignedToFloat((int)*(short *)(*piVar2 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3),
     (int)(uint)*(ushort *)(iStack_70 + 0x20) <= (int)(DAT_0032a13c / fVar13 + fVar3))) {
    fStack_7c = *(float *)(param_1 + 0x28) + DAT_0032a138;
    fStack_78 = *(float *)(param_1 + 0x2c) + DAT_0032a130;
    fStack_74 = *(float *)(param_1 + 0x30) - DAT_0032a140;
    FUN_00330768(DAT_0032a134,param_2,&fStack_7c,&iStack_88,6,1,0x23);
  }
  uVar7 = DAT_0032a158;
  puVar6 = DAT_0032a154;
  uVar18 = DAT_0032a150;
  psVar1 = DAT_0032a14c;
  fVar5 = DAT_0032a148;
  fVar13 = DAT_0032a144;
  piVar2 = DAT_0032a100;
  uVar12 = (uint)*(ushort *)(iStack_70 + 0x20);
  fVar14 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0032a100 + 0x110),
                                      (byte)(in_fpscr >> 0x15) & 3);
  if (((int)(DAT_0032a144 / fVar14 + fVar3) <= (int)uVar12) &&
     (fVar14 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0032a100 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3),
     (int)uVar12 <= (int)(DAT_0032a148 / fVar14 + fVar3))) {
    fStack_7c = *(float *)(param_1 + 0x28);
    fStack_78 = *(float *)(param_1 + 0x2c);
    fStack_74 = *(float *)(param_1 + 0x30);
    if (((*(uint *)(DAT_0032a14c + 0xc) & 1) == 0) &&
       (iVar11 = FUN_003679b4(DAT_0032a14c + 0xc), iVar11 != 0)) {
      *puVar6 = uVar7;
      puVar6[1] = uVar18;
      puVar6[2] = uVar7;
    }
    puVar8 = DAT_0032a15c;
    if (((*(uint *)(psVar1 + 10) & 1) == 0) && (iVar11 = FUN_003679b4(DAT_0032a160), iVar11 != 0)) {
      *puVar8 = uVar7;
      puVar8[1] = uVar7;
      puVar8[2] = uVar7;
    }
    iVar11 = *piVar2;
    fVar14 = (float)VectorSignedToFloat((int)*(short *)(iVar11 + 0x110),(byte)(in_fpscr >> 0x15) & 3
                                       );
    if ((int)(fVar13 / fVar14 + fVar3) == uVar12) {
      *puVar6 = uVar7;
      puVar6[1] = uVar18;
      puVar6[2] = uVar7;
      *puVar8 = uVar7;
      puVar8[1] = uVar7;
      uVar18 = DAT_0032a164;
      puVar8[2] = uVar7;
      *(undefined4 *)(psVar1 + 0xe) = uVar18;
      *(undefined4 *)(psVar1 + 0x10) = DAT_0032a168;
      psVar1[0x12] = 0xb;
      psVar1[0x13] = 0;
      psVar1[0x14] = 1;
      psVar1[0x15] = 0;
      *psVar1 = 3;
    }
    fStack_78 = fStack_78 + DAT_0032a16c;
    iVar11 = (int)*(short *)(iVar11 + 0x110);
    fVar13 = (float)VectorSignedToFloat(iVar11,(byte)(in_fpscr >> 0x15) & 3);
    if ((int)(fVar5 / fVar13 + fVar3) == uVar12) {
      puVar6[1] = (float)puVar6[1] + DAT_0032a170;
    }
    else {
      fVar13 = (float)VectorSignedToFloat(iVar11,(byte)(in_fpscr >> 0x15) & 3);
      if ((int)(DAT_0032a174 / fVar13 + fVar3) == uVar12) {
        puVar8[1] = (float)puVar8[1] + DAT_0032a170;
      }
    }
    iStack_88 = *(int *)(psVar1 + 0x12);
    iStack_84 = *(int *)(psVar1 + 0x14);
    iStack_80 = (int)*psVar1;
    iVar11 = FUN_00366738(param_2);
    if (iVar11 == 0) {
      iVar11 = iStack_84;
      if (0 < iStack_84) {
        iVar11 = iStack_88;
      }
      if (0 < iVar11) {
        iVar11 = *(int *)(param_2 + 0x5bf4);
        if (iVar11 < 0) {
          iVar11 = -iVar11;
        }
        FUN_00368d94(iVar11,iStack_84);
        FUN_00368d94(0x10000,iStack_88);
        sVar9 = FUN_00368d94(extraout_r1 << 0x10,iStack_88);
        if (extraout_r1 < iStack_88) {
          FUN_002cfca0(DAT_0032a588,(int)sVar9);
          FUN_00338f60((int)sVar9);
                    /* WARNING: Subroutine does not return */
          FUN_003759d0();
        }
      }
    }
  }
  piVar2 = DAT_0032a100;
  iStack_88 = iVar10;
  iStack_84 = DAT_0032a5b8;
  iStack_80 = DAT_0032a5b8;
  fVar13 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0032a100 + 0x110),
                                      (byte)(in_fpscr >> 0x15) & 3);
  if ((int)(DAT_0032a5bc / fVar13 + fVar3) <= (int)(uint)*(ushort *)(iStack_70 + 0x20)) {
    fStack_7c = *(float *)(param_1 + 0x28) + DAT_0032a5c0;
    fStack_78 = *(float *)(param_1 + 0x2c) + fVar15;
    fStack_74 = *(float *)(param_1 + 0x30) + DAT_0032a5c0;
    FUN_00330768(uVar17,param_2,&fStack_7c,&iStack_88,6,0,0x23);
  }
  fVar15 = (float)VectorSignedToFloat((int)*(short *)(*piVar2 + 0x110),(byte)(in_fpscr >> 0x15) & 3)
  ;
  if ((int)(fVar16 / fVar15 + fVar3) == (uint)*(ushort *)(iStack_70 + 0x20)) {
    fStack_7c = *(float *)(param_1 + 0x28) + fVar4;
    fStack_78 = *(float *)(param_1 + 0x2c) + DAT_0032a5c4;
    fStack_74 = *(float *)(param_1 + 0x30) - DAT_0032a5c8;
    FUN_003308a4(DAT_0032a5cc,param_2,&fStack_7c);
  }
  return;
}
