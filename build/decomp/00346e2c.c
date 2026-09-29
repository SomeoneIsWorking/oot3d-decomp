// OoT3D decomp @ 00346e2c  name=FUN_00346e2c  size=380

short * FUN_00346e2c(float param_1,float param_2,int param_3,short *param_4)

{
  uint uVar1;
  byte bVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  ushort uVar6;
  short *psVar7;
  bool bVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  undefined1 auStack_48 [12];
  undefined1 auStack_3c [12];
  float local_30;
  float local_2c;
  float local_28;

  uVar4 = DAT_00346fac;
  fVar3 = DAT_00346fa8;
  psVar7 = *(short **)(param_3 + 0x20d4);
  do {
    if (psVar7 == (short *)0x0) {
      return (short *)0x0;
    }
    iVar5 = (int)*psVar7;
    if ((iVar5 == 0x66 || iVar5 == 0x16) && (psVar7 != param_4)) {
      bVar8 = iVar5 == 0x66;
      if (bVar8) {
        iVar5 = 0x280;
      }
      uVar6 = 0;
      if (bVar8) {
        uVar6 = *(ushort *)(iVar5 + (int)psVar7);
      }
      else if (iVar5 == 0x16) {
        uVar6 = (ushort)*(byte *)(psVar7 + 0x182);
      }
      fVar9 = SQRT((*(float *)(psVar7 + 0x14) - *(float *)(param_4 + 0x14)) *
                   (*(float *)(psVar7 + 0x14) - *(float *)(param_4 + 0x14)) +
                   (*(float *)(psVar7 + 0x16) - *(float *)(param_4 + 0x16)) *
                   (*(float *)(psVar7 + 0x16) - *(float *)(param_4 + 0x16)) +
                   (*(float *)(psVar7 + 0x18) - *(float *)(param_4 + 0x18)) *
                   (*(float *)(psVar7 + 0x18) - *(float *)(param_4 + 0x18)));
      uVar1 = in_fpscr & 0xfffffff | (uint)(fVar9 < param_1) << 0x1f |
              (uint)(fVar9 == param_1) << 0x1e;
      in_fpscr = uVar1 | (uint)(NAN(fVar9) || NAN(param_1)) << 0x1c;
      bVar2 = (byte)(uVar1 >> 0x18);
      if (((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) && (uVar6 != 0))
      {
        fVar9 = (float)FUN_002cfca0((int)psVar7[0x1b]);
        fVar13 = *(float *)(psVar7 + 0x36);
        fVar15 = *(float *)(psVar7 + 0x32);
        fVar10 = *(float *)(psVar7 + 0x38);
        fVar11 = (float)FUN_00338f60((int)psVar7[0x1b]);
        local_30 = *(float *)(psVar7 + 0x14) + fVar9 * param_2 * fVar13 * fVar3;
        local_2c = *(float *)(psVar7 + 0x16) + fVar15 + fVar10 * fVar3;
        local_28 = *(float *)(psVar7 + 0x18) + fVar11 * param_2 * *(float *)(psVar7 + 0x36) * fVar3;
        uVar14 = VectorSignedToFloat((int)param_4[0x59],(byte)(in_fpscr >> 0x15) & 3);
        uVar12 = VectorSignedToFloat((int)param_4[0x58],(byte)(in_fpscr >> 0x15) & 3);
        iVar5 = FUN_002a0048(uVar12,uVar14,uVar4,param_4 + 0x14,psVar7 + 0x14,&local_30,auStack_3c,
                             auStack_48);
        if (iVar5 != 0) {
          return psVar7;
        }
      }
    }
    psVar7 = *(short **)(psVar7 + 0x98);
  } while( true );
}
