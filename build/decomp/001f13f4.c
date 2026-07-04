// OoT3D decomp @ 001f13f4  name=FUN_001f13f4  size=1108

void FUN_001f13f4(short *param_1,short *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  short *psVar5;
  int iVar6;
  undefined4 uVar7;
  float *pfVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  uint in_fpscr;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  bVar10 = param_1 != (short *)0x0;
  bVar11 = param_2 != (short *)0x0;
  psVar5 = param_1;
  if (bVar10 && bVar11) {
    psVar5 = *(short **)(param_2 + 0x28a);
  }
  bVar12 = psVar5 != (short *)0x0;
  if ((bVar10 && bVar11) && bVar12) {
    psVar5 = *(short **)(param_2 + 0x28c);
  }
  if (((bVar10 && bVar11) && bVar12) && psVar5 != (short *)0x0) {
    *param_1 = *param_2;
    fVar1 = fRam001f1720;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    *(undefined4 *)(param_1 + 0x286) = *(undefined4 *)(param_2 + 0x286);
    *(undefined4 *)(param_1 + 0x288) = *(undefined4 *)(param_2 + 0x288);
    *(undefined4 *)(param_1 + 0x28a) = *(undefined4 *)(param_2 + 0x28a);
    *(undefined4 *)(param_1 + 0x28c) = *(undefined4 *)(param_2 + 0x28c);
    *(char *)(param_1 + 0x28e) = (char)param_2[0x28e];
    *(undefined1 *)((int)param_1 + 0x51d) = *(undefined1 *)((int)param_2 + 0x51d);
    *(char *)(param_1 + 0x28f) = (char)param_2[0x28f];
    *(undefined1 *)((int)param_1 + 0x51f) = *(undefined1 *)((int)param_2 + 0x51f);
    *(char *)(param_1 + 0x290) = (char)param_2[0x290];
    *(undefined1 *)((int)param_1 + 0x521) = *(undefined1 *)((int)param_2 + 0x521);
    *(char *)(param_1 + 0x291) = (char)param_2[0x291];
    *(undefined1 *)((int)param_1 + 0x523) = *(undefined1 *)((int)param_2 + 0x523);
    *(char *)(param_1 + 0x292) = (char)param_2[0x292];
    *(undefined1 *)((int)param_1 + 0x525) = *(undefined1 *)((int)param_2 + 0x525);
    *(char *)(param_1 + 0x293) = (char)param_2[0x293];
    *(undefined1 *)((int)param_1 + 0x527) = *(undefined1 *)((int)param_2 + 0x527);
    *(char *)(param_1 + 0x294) = (char)param_2[0x294];
    *(undefined1 *)((int)param_1 + 0x529) = *(undefined1 *)((int)param_2 + 0x529);
    *(char *)(param_1 + 0x295) = (char)param_2[0x295];
    *(undefined1 *)((int)param_1 + 0x52b) = *(undefined1 *)((int)param_2 + 0x52b);
    *(char *)(param_1 + 0x296) = (char)param_2[0x296];
    *(undefined1 *)((int)param_1 + 0x52d) = *(undefined1 *)((int)param_2 + 0x52d);
    *(char *)(param_1 + 0x297) = (char)param_2[0x297];
    *(undefined1 *)((int)param_1 + 0x52f) = *(undefined1 *)((int)param_2 + 0x52f);
    *(char *)(param_1 + 0x298) = (char)param_2[0x298];
    *(undefined1 *)((int)param_1 + 0x531) = *(undefined1 *)((int)param_2 + 0x531);
    *(char *)(param_1 + 0x299) = (char)param_2[0x299];
    *(undefined1 *)((int)param_1 + 0x533) = *(undefined1 *)((int)param_2 + 0x533);
    *(char *)(param_1 + 0x29a) = (char)param_2[0x29a];
    *(undefined1 *)((int)param_1 + 0x535) = *(undefined1 *)((int)param_2 + 0x535);
    *(char *)(param_1 + 0x29b) = (char)param_2[0x29b];
    *(undefined1 *)((int)param_1 + 0x537) = *(undefined1 *)((int)param_2 + 0x537);
    *(char *)(param_1 + 0x29c) = (char)param_2[0x29c];
    fVar2 = fRam001f1728;
    *(undefined1 *)((int)param_1 + 0x539) = *(undefined1 *)((int)param_2 + 0x539);
    *(char *)(param_1 + 0x29d) = (char)param_2[0x29d];
    *(undefined1 *)((int)param_1 + 0x53b) = *(undefined1 *)((int)param_2 + 0x53b);
    fVar14 = (float)VectorSignedToFloat(*(undefined4 *)(param_2 + 0x2a0),
                                        (byte)(in_fpscr >> 0x15) & 3);
    fVar15 = (float)VectorSignedToFloat((int)*(short *)(*piRam001f1724 + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    *(int *)(param_1 + 0x2a0) = (int)((fVar14 * fVar1) / fVar15 + fVar2);
    iVar6 = *(int *)(param_1 + 0x28a) * *(int *)(param_1 + 0x28c) + 2;
    *(int *)(param_1 + 4) = iVar6;
    if ((iVar6 < 0x21) && (*(int *)(param_1 + 0x2a6) != 0)) {
      iVar6 = (**(code **)(*(int *)*puRam001f1768 + 0xc))
                        ((int *)*puRam001f1768,0x1b8,0x1f172c,uRam001f176c);
      uVar7 = 0;
      if (iVar6 != 0) {
        uVar7 = FUN_00348f34(iVar6,uRam001f1770);
      }
      *(undefined4 *)(param_1 + 0x2a4) = uVar7;
      FUN_00348be4();
      uVar7 = FUN_0033aaac(*(undefined4 *)(param_1 + 0x2a6),0x31);
      FUN_00348a64(*(undefined4 *)(param_1 + 0x2a4),0,uVar7,uRam001f1778,uRam001f1778,uRam001f1774,
                   uRam001f1774);
      fVar4 = fRam001f1790;
      fVar3 = fRam001f178c;
      fVar15 = fRam001f1788;
      fVar14 = fRam001f1784;
      fVar1 = fRam001f1780;
      iVar6 = iRam001f177c;
      iVar9 = 0;
      if (0 < *(int *)(param_1 + 4)) {
        do {
          pfVar8 = (float *)(param_1 + iVar9 * 0x14 + 6);
          uVar7 = VectorSignedToFloat((int)*param_1,(byte)(in_fpscr >> 0x15) & 3);
          *(undefined4 *)(param_1 + iVar9 * 0x14 + 0xc) = uVar7;
          uVar7 = VectorSignedToFloat((int)param_1[1],(byte)(in_fpscr >> 0x15) & 3);
          *(undefined4 *)(param_1 + iVar9 * 0x14 + 0xe) = uVar7;
          uVar7 = VectorSignedToFloat((int)param_1[2],(byte)(in_fpscr >> 0x15) & 3);
          *(undefined4 *)(param_1 + iVar9 * 0x14 + 0x10) = uVar7;
          fVar13 = (float)FUN_003759d0();
          *pfVar8 = fVar13 - fVar2;
          fVar13 = (float)FUN_003759d0();
          *(float *)(param_1 + iVar9 * 0x14 + 8) = fVar13 - fVar2;
          fVar13 = (float)FUN_003759d0();
          fVar13 = fVar13 - fVar2;
          *(float *)(param_1 + iVar9 * 0x14 + 10) = fVar13;
          fVar16 = *pfVar8;
          fVar13 = SQRT(fVar16 * fVar16 +
                        *(float *)(param_1 + iVar9 * 0x14 + 8) *
                        *(float *)(param_1 + iVar9 * 0x14 + 8) + fVar13 * fVar13);
          if ((int)ABS(fVar13) < iVar6) {
            *(float *)(param_1 + iVar9 * 0x14 + 10) = fVar14;
            *pfVar8 = fVar14;
            *(undefined4 *)(param_1 + iVar9 * 0x14 + 8) = *(undefined4 *)(param_1 + 0x286);
          }
          else {
            fVar13 = fVar1 / fVar13;
            *pfVar8 = fVar16 * *(float *)(param_1 + 0x286) * fVar13;
            *(float *)(param_1 + iVar9 * 0x14 + 8) =
                 *(float *)(param_1 + iVar9 * 0x14 + 8) * *(float *)(param_1 + 0x286) * fVar13;
            *(float *)(param_1 + iVar9 * 0x14 + 10) =
                 *(float *)(param_1 + iVar9 * 0x14 + 10) * *(float *)(param_1 + 0x286) * fVar13;
          }
          fVar13 = (float)FUN_003759d0();
          param_1[iVar9 * 0x14 + 0x12] = (short)(int)(fVar3 - fVar13 * fVar15);
          fVar13 = (float)FUN_003759d0();
          param_1[iVar9 * 0x14 + 0x13] = (short)(int)(fVar3 - fVar13 * fVar15);
          fVar13 = (float)FUN_003759d0();
          param_1[iVar9 * 0x14 + 0x14] = (short)(int)(fVar3 - fVar13 * fVar15);
          fVar13 = (float)FUN_003759d0();
          param_1[iVar9 * 0x14 + 0x15] = (short)(int)(fVar13 * fVar4);
          fVar13 = (float)FUN_003759d0();
          param_1[iVar9 * 0x14 + 0x16] = (short)(int)(fVar13 * fVar4);
          fVar13 = (float)FUN_003759d0();
          param_1[iVar9 * 0x14 + 0x17] = (short)(int)(fVar13 * fVar4);
          uVar7 = FUN_003759d0();
          *(undefined4 *)(param_1 + iVar9 * 0x14 + 0x18) = uVar7;
          iVar9 = iVar9 + 1;
        } while (iVar9 < *(int *)(param_1 + 4));
      }
      if (((*UNK_001f18bc & 1) == 0) && (iVar6 = FUN_003679b4(UNK_001f18bc), iVar6 != 0)) {
        FUN_0036788c(UNK_001f18c0);
      }
      uVar7 = FUN_00340d00(*(undefined4 *)(UNK_001f18cc + 0x47c),*(undefined4 *)(param_1 + 0x2a4),0)
      ;
      *(undefined4 *)(param_1 + 0x2a2) = uVar7;
      param_1[0x29e] = 0;
      param_1[0x29f] = 0;
    }
  }
  return;
}

