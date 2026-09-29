// OoT3D decomp @ 002bb57c  name=FUN_002bb57c  size=404

undefined4
FUN_002bb57c(float param_1,short *param_2,short param_3,int *param_4,undefined4 *param_5,
            int *param_6)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  byte bVar4;
  float fVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint in_fpscr;
  float fVar13;
  float fVar14;
  undefined1 auStack_38 [12];

  uVar6 = DAT_002bb714;
  fVar5 = DAT_002bb710;
  iVar11 = *(int *)(*param_4 + 0x18);
  iVar12 = *(int *)(*param_4 + 0x1c);
  do {
    iVar10 = iVar12 + *param_2 * 0x14;
    if ((*(ushort *)(*(int *)(*param_4 + 0x1c) + *param_2 * 0x14 + 2) & param_3 << 0xd) == 0) {
      fVar13 = (float)param_5[1] + param_1;
      fVar14 = (float)VectorSignedToFloat((int)*(short *)(iVar11 + (*(ushort *)(iVar10 + 2) &
                                                                   0xffff1fff) * 6 + 2),
                                          (byte)(in_fpscr >> 0x15) & 3);
      uVar1 = in_fpscr & 0xfffffff;
      uVar2 = uVar1 | (uint)(fVar14 < fVar13) << 0x1f | (uint)(fVar14 == fVar13) << 0x1e;
      in_fpscr = uVar2 | (uint)(NAN(fVar14) || NAN(fVar13)) << 0x1c;
      bVar4 = (byte)(uVar2 >> 0x18);
      if (!(bool)(bVar4 >> 6 & 1) && bVar4 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
        fVar14 = (float)VectorSignedToFloat((int)*(short *)(iVar11 + (*(ushort *)(iVar10 + 4) &
                                                                     0xffff1fff) * 6 + 2),
                                            (byte)(in_fpscr >> 0x15) & 3);
        uVar2 = uVar1 | (uint)(fVar14 < fVar13) << 0x1f | (uint)(fVar14 == fVar13) << 0x1e;
        in_fpscr = uVar2 | (uint)(NAN(fVar14) || NAN(fVar13)) << 0x1c;
        bVar4 = (byte)(uVar2 >> 0x18);
        if (!(bool)(bVar4 >> 6 & 1) && bVar4 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
          fVar14 = (float)VectorSignedToFloat((int)*(short *)(iVar11 + (uint)*(ushort *)(iVar10 + 6)
                                                                       * 6 + 2),
                                              (byte)(in_fpscr >> 0x15) & 3);
          uVar1 = uVar1 | (uint)(fVar14 < fVar13) << 0x1f | (uint)(fVar14 == fVar13) << 0x1e;
          in_fpscr = uVar1 | (uint)(NAN(fVar14) || NAN(fVar13)) << 0x1c;
          bVar4 = (byte)(uVar1 >> 0x18);
          if (!(bool)(bVar4 >> 6 & 1) && bVar4 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
            return 0;
          }
        }
      }
      FUN_002bfcb4(iVar10,iVar11,DAT_002bb718);
      iVar7 = DAT_002bb718;
      fVar13 = (float)VectorSignedToFloat((int)*(short *)(iVar10 + 10),(byte)(in_fpscr >> 0x15) & 3)
      ;
      *(float *)(DAT_002bb718 + 0x24) = fVar13 * fVar5;
      fVar13 = (float)VectorSignedToFloat((int)*(short *)(iVar10 + 0xc),(byte)(in_fpscr >> 0x15) & 3
                                         );
      *(float *)(iVar7 + 0x28) = fVar13 * fVar5;
      fVar13 = (float)VectorSignedToFloat((int)*(short *)(iVar10 + 0xe),(byte)(in_fpscr >> 0x15) & 3
                                         );
      *(float *)(iVar7 + 0x2c) = fVar13 * fVar5;
      *(undefined4 *)(iVar7 + 0x30) = *(undefined4 *)(iVar10 + 0x10);
      uVar8 = param_5[1];
      uVar9 = param_5[2];
      *(undefined4 *)(iVar7 + -0x10) = *param_5;
      *(undefined4 *)(iVar7 + -0xc) = uVar8;
      *(undefined4 *)(iVar7 + -8) = uVar9;
      *(float *)(iVar7 + -4) = param_1;
      iVar7 = FUN_0031e230((undefined4 *)(iVar7 + -0x10),iVar7,auStack_38);
      if (iVar7 != 0) {
        *param_6 = iVar10;
        return 1;
      }
      uVar3 = param_2[1];
    }
    else {
      uVar3 = param_2[1];
    }
    if (uVar3 == uVar6) {
      return 0;
    }
    param_2 = (short *)(param_4[0x12] + (uint)uVar3 * 4);
  } while( true );
}
