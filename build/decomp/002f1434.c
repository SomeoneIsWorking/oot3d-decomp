// OoT3D decomp @ 002f1434  name=FUN_002f1434  size=12

short * FUN_002f1434(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  short *psVar3;
  short *extraout_r1;
  short *psVar4;
  uint uVar5;
  uint uVar6;
  short *psVar7;

  puVar2 = DAT_002f1440;
  uVar6 = param_1 + 0xfU & 0xfffffff0;
  psVar7 = (short *)0x0;
  FUN_002ff560(DAT_002f1440);
  iVar1 = DAT_002eacd8;
  psVar4 = extraout_r1;
  if (puVar2 != (undefined4 *)0x0) {
    psVar4 = (short *)*puVar2;
  }
  psVar3 = (short *)0x0;
  if ((puVar2 != (undefined4 *)0x0 && psVar4 != (short *)0x0) && (*psVar4 == DAT_002eacd8)) {
    do {
      psVar3 = psVar4;
      psVar4 = *(short **)(psVar3 + 4);
      if ((psVar4 == (short *)0x0) || (*psVar4 != DAT_002eacd8)) {
        psVar4 = (short *)0x0;
      }
    } while (psVar4 != (short *)0x0);
  }
  do {
    if (psVar3 == (short *)0x0) {
LAB_002eacc8:
      FUN_002ff508(puVar2);
      return psVar7;
    }
    if ((psVar3[1] != 0) && (uVar5 = *(uint *)(psVar3 + 2), uVar6 <= uVar5)) {
      psVar4 = psVar3;
      if (uVar6 + 0x10 < uVar5) {
        psVar7 = *(short **)(psVar3 + 4);
        psVar4 = (short *)((int)psVar3 + (uVar5 - uVar6));
        if ((psVar7 == (short *)0x0) || (*psVar7 != DAT_002eacd8)) {
          psVar7 = (short *)0x0;
        }
        *(short **)(psVar4 + 6) = psVar3;
        *(short **)(psVar4 + 4) = psVar7;
        *(uint *)(psVar4 + 2) = uVar6;
        *psVar4 = (short)iVar1;
        *(short **)(psVar3 + 4) = psVar4;
        *(uint *)(psVar3 + 2) = *(int *)(psVar3 + 2) - (uVar6 + 0x10);
        psVar7 = *(short **)(psVar4 + 4);
        if ((psVar7 == (short *)0x0) || (*psVar7 != iVar1)) {
          psVar7 = (short *)0x0;
        }
        if (psVar7 != (short *)0x0) {
          *(short **)(psVar7 + 6) = psVar4;
        }
      }
      psVar7 = psVar4 + 8;
      psVar4[1] = 0;
      goto LAB_002eacc8;
    }
    psVar3 = *(short **)(psVar3 + 6);
    if ((psVar3 == (short *)0x0) || (*psVar3 != DAT_002eacd8)) {
      psVar3 = (short *)0x0;
    }
  } while( true );
}
