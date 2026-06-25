// OoT3D decomp @ 002bbf74  name=FUN_002bbf74  size=492

float FUN_002bbf74(float param_1,undefined4 param_2,int *param_3,int param_4,ushort *param_5_00,
                  int *param_6,undefined4 *param_5,uint param_8)

{
  uint uVar1;
  ushort uVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  short *psVar8;
  byte bVar9;
  bool bVar10;
  byte bVar11;
  uint in_fpscr;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float local_40;
  
  fVar3 = DAT_002bc160;
  if (*param_5_00 == 0xffff) {
    return param_1;
  }
  psVar8 = (short *)(param_3[0x12] + (uint)*param_5_00 * 4);
  while( true ) {
    iVar4 = (int)*psVar8;
    iVar5 = *(int *)(*param_3 + 0x1c);
    uVar7 = (uint)*(ushort *)(iVar5 + iVar4 * 0x14 + 2);
    if (((uVar7 & param_4 << 0xd) == 0) &&
       (((param_8 & 1) == 0 || (-1 < *(short *)(iVar5 + iVar4 * 0x14 + 0xc))))) {
      iVar6 = *(int *)(*param_3 + 0x18);
      fVar13 = (float)VectorSignedToFloat((int)*(short *)(iVar6 + (uVar7 & 0xffff1fff) * 6 + 2),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar12 = (float)param_5[1];
      uVar7 = in_fpscr & 0xfffffff;
      uVar1 = uVar7 | (uint)(fVar13 < fVar12) << 0x1f | (uint)(fVar13 == fVar12) << 0x1e;
      in_fpscr = uVar1 | (uint)(NAN(fVar13) || NAN(fVar12)) << 0x1c;
      bVar11 = (byte)(uVar1 >> 0x18);
      if (!(bool)(bVar11 >> 6 & 1) && bVar11 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
        fVar13 = (float)VectorSignedToFloat((int)*(short *)(iVar6 + (*(ushort *)
                                                                      (iVar5 + iVar4 * 0x14 + 4) &
                                                                    0xffff1fff) * 6 + 2),
                                            (byte)(in_fpscr >> 0x15) & 3);
        uVar1 = uVar7 | (uint)(fVar13 < fVar12) << 0x1f | (uint)(fVar13 == fVar12) << 0x1e;
        in_fpscr = uVar1 | (uint)(NAN(fVar13) || NAN(fVar12)) << 0x1c;
        bVar11 = (byte)(uVar1 >> 0x18);
        if (!(bool)(bVar11 >> 6 & 1) && bVar11 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
          fVar13 = (float)VectorSignedToFloat((int)*(short *)(iVar6 + (uint)*(ushort *)
                                                                             (iVar5 + iVar4 * 0x14 +
                                                                                      6) * 6 + 2),
                                              (byte)(in_fpscr >> 0x15) & 3);
          uVar7 = uVar7 | (uint)(fVar13 < fVar12) << 0x1f | (uint)(fVar13 == fVar12) << 0x1e;
          in_fpscr = uVar7 | (uint)(NAN(fVar13) || NAN(fVar12)) << 0x1c;
          bVar11 = (byte)(uVar7 >> 0x18);
          if (!(bool)(bVar11 >> 6 & 1) && bVar11 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
            return param_1;
          }
        }
      }
      iVar5 = iVar5 + iVar4 * 0x14;
      uVar15 = *param_5;
      uVar16 = param_5[2];
      FUN_002bfcb4(iVar5,iVar6,DAT_002bc164);
      fVar12 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 10),(byte)(in_fpscr >> 0x15) & 3);
      fVar13 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0xc),(byte)(in_fpscr >> 0x15) & 3)
      ;
      fVar14 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0xe),(byte)(in_fpscr >> 0x15) & 3)
      ;
      iVar5 = FUN_002bfc24(fVar12 * fVar3,fVar13 * fVar3,fVar14 * fVar3,
                           *(undefined4 *)(iVar5 + 0x10),uVar16,uVar15,param_2,DAT_002bc164,
                           DAT_002bc164 + 0xc,DAT_002bc164 + 0x18,&local_40);
      if (iVar5 == 1) {
        fVar12 = (float)param_5[1];
        uVar7 = in_fpscr & 0xfffffff;
        uVar1 = uVar7 | (uint)(fVar12 < local_40) << 0x1f | (uint)(fVar12 == local_40) << 0x1e;
        in_fpscr = uVar1 | (uint)(NAN(fVar12) || NAN(local_40)) << 0x1c;
        bVar11 = (byte)(uVar1 >> 0x18);
        bVar9 = bVar11 >> 7;
        bVar10 = (bool)(bVar11 >> 6 & 1);
        bVar11 = (byte)(in_fpscr >> 0x1c) & 1;
        if (!bVar10 && bVar9 == bVar11) {
          in_fpscr = uVar7 | (uint)(local_40 < param_1) << 0x1f |
                     (uint)(local_40 == param_1) << 0x1e |
                     (uint)(NAN(local_40) || NAN(param_1)) << 0x1c;
          bVar11 = (byte)(in_fpscr >> 0x18);
          bVar9 = bVar11 >> 7;
          bVar10 = (bool)(bVar11 >> 6 & 1);
          bVar11 = bVar11 >> 4 & 1;
        }
        if (!bVar10 && bVar9 == bVar11) {
          *param_6 = *(int *)(*param_3 + 0x1c) + iVar4 * 0x14;
          param_1 = local_40;
        }
      }
      uVar2 = psVar8[1];
    }
    else {
      uVar2 = psVar8[1];
    }
    if (uVar2 == 0xffff) break;
    psVar8 = (short *)(param_3[0x12] + (uint)uVar2 * 4);
  }
  return param_1;
}

