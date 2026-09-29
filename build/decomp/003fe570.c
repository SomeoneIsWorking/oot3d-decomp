// OoT3D decomp @ 003fe570  name=FUN_003fe570  size=364

void FUN_003fe570(undefined4 *param_1)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  bool bVar4;
  uint in_fpscr;
  uint uVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;

  if (*(char *)(param_1 + 2) != '\0') {
    iVar1 = FUN_0036c5bc(*param_1,0xffffffff);
    psVar2 = (short *)(param_1[1] + *(char *)((int)param_1 + 9) * 6);
    iVar3 = (int)*psVar2;
    bVar4 = iVar3 < 0;
    if (bVar4) {
      iVar3 = (int)-*psVar2;
    }
    FUN_00367c54(iVar1);
    if (*(short *)((int)param_1 + 10) < iVar3) {
      fVar6 = (float)VectorSignedToFloat(iVar3 - *(short *)(param_1 + 3),
                                         (byte)(in_fpscr >> 0x15) & 3);
      uVar5 = in_fpscr & 0xfffffff | (uint)(fVar6 == DAT_003fe6dc) << 0x1e;
      if (!SUB41(uVar5 >> 0x1e,0)) {
        fVar8 = (float)VectorSignedToFloat((int)psVar2[1],(byte)(uVar5 >> 0x15) & 3);
        fVar9 = (float)VectorSignedToFloat((int)psVar2[2],(byte)(uVar5 >> 0x15) & 3);
        fVar9 = ((fVar9 - (float)param_1[7]) / fVar6) * DAT_003fe6e0 * DAT_003fe6e4;
        uVar7 = VectorSignedToFloat((int)psVar2[1],(byte)(uVar5 >> 0x15) & 3);
        FUN_003705a0(uVar7,ABS(((fVar8 - (float)param_1[6]) / fVar6) * DAT_003fe6e0 * DAT_003fe6e4),
                     param_1 + 4);
        uVar7 = VectorSignedToFloat((int)psVar2[2],(byte)(uVar5 >> 0x15) & 3);
        FUN_003705a0(uVar7,ABS(fVar9),param_1 + 5);
      }
    }
    else {
      uVar7 = VectorSignedToFloat((int)psVar2[1],(byte)(in_fpscr >> 0x15) & 3);
      param_1[4] = uVar7;
      param_1[6] = uVar7;
      uVar7 = VectorSignedToFloat((int)psVar2[2],(byte)(in_fpscr >> 0x15) & 3);
      param_1[5] = uVar7;
      param_1[7] = uVar7;
      *(short *)(param_1 + 3) = *(short *)((int)param_1 + 10);
      if (!bVar4) {
        *(char *)((int)param_1 + 9) = *(char *)((int)param_1 + 9) + '\x01';
      }
    }
    FUN_00367c60(param_1[4],iVar1);
    *(undefined4 *)(iVar1 + 0x144) = param_1[5];
    *(short *)((int)param_1 + 10) = *(short *)((int)param_1 + 10) + 1;
  }
  return;
}
