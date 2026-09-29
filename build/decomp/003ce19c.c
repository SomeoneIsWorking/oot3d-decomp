// OoT3D decomp @ 003ce19c  name=FUN_003ce19c  size=636

void FUN_003ce19c(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  short *psVar9;
  float fVar10;
  bool bVar11;
  bool bVar12;
  uint in_fpscr;
  int iVar13;
  float fVar14;

  fVar10 = DAT_003ce430;
  uVar5 = DAT_003ce42c;
  uVar4 = DAT_003ce428;
  uVar3 = DAT_003ce424;
  iVar8 = 0;
  if (*(short *)(param_1 + 0xb74) == 0) {
    iVar7 = FUN_003158ac(param_1);
    if (iVar7 == 0) {
      iVar7 = FUN_0036bc98(param_1,param_2);
      if (iVar7 == 0) {
        if ((*(short *)(param_1 + 0xbb0) == 0) ||
           (sVar1 = *(short *)(param_1 + 0xbb0) + -1, *(short *)(param_1 + 0xbb0) = sVar1,
           sVar1 == 0)) {
          uVar6 = FUN_0036ae14(param_1 + 0x1a4,1);
          uVar6 = VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
          FUN_00375c08(uVar5,uVar4,uVar6,uVar3,param_1 + 0x1a4,0);
                    /* WARNING: Subroutine does not return */
          FUN_003702c8(0xf0);
        }
      }
      else {
        *(undefined2 *)(param_1 + 0xbb0) = 0;
        *(undefined2 *)(param_1 + 0xb74) = 1;
        iVar8 = (int)(short)(*(short *)(param_1 + 0x92) -
                            (*(short *)(param_1 + 0xbe) - *(short *)(param_1 + 0xbb2)));
      }
      goto LAB_003ce3d8;
    }
    *(undefined2 *)(param_1 + 0xbb0) = 0;
    sVar1 = *(short *)(param_1 + 0x92) - (*(short *)(param_1 + 0xbe) - *(short *)(param_1 + 0xbb2));
  }
  else {
    sVar1 = *(short *)(param_1 + 0x92) - (*(short *)(param_1 + 0xbe) - *(short *)(param_1 + 0xbb2));
    if (*(short *)(param_1 + 0xb74) == 2) {
      uVar6 = FUN_0036ae14(param_1 + 0x1a4,3);
      uVar6 = VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00375c08(uVar5,uVar4,uVar6,uVar3,param_1 + 0x1a4,3,0);
      iVar7 = DAT_003ce43c;
      iVar8 = DAT_003ce438;
      psVar9 = *(short **)(DAT_003ce434 + param_2);
      if (psVar9 != (short *)0x0) {
        fVar10 = (float)(DAT_003ce43c + -0x1000000);
        do {
          if ((*psVar9 == iVar8) && (*(short **)(param_1 + 0xba4) != psVar9)) {
            fVar14 = *(float *)(psVar9 + 0x16) - *(float *)(param_1 + 0x84);
            iVar13 = FUN_00357eac(param_1,psVar9);
            bVar12 = SBORROW4(iVar13,iVar7);
            iVar2 = iVar13 - iVar7;
            bVar11 = iVar13 == iVar7;
            if (iVar13 <= iVar7) {
              bVar12 = SBORROW4((int)fVar14,(int)fVar10);
              iVar2 = (int)fVar14 - (int)fVar10;
              bVar11 = fVar14 == fVar10;
            }
            if (bVar11 || iVar2 < 0 != bVar12) {
              *(short **)(param_1 + 0xba4) = psVar9;
              if (-1 < psVar9[0xe]) {
                *(undefined1 *)(param_1 + 0xb9c) = 1;
              }
              break;
            }
          }
          psVar9 = *(short **)(psVar9 + 0x98);
        } while (psVar9 != (short *)0x0);
      }
      uVar3 = DAT_003ce440;
      *(undefined2 *)(param_1 + 0xb74) = 0;
      *(undefined4 *)(param_1 + 0xb18) = uVar3;
      return;
    }
  }
  iVar8 = (int)sVar1;
  FUN_00342714(*(float *)(param_1 + 0xb5c) + fVar10,param_2,param_1,param_1 + 0xb74,DAT_003ce448,
               DAT_003ce444);
LAB_003ce3d8:
  iVar7 = -iVar8;
  iVar2 = DAT_003ce450;
  if ((iVar7 < DAT_003ce450) ||
     (iVar2 = DAT_003ce454, -DAT_003ce454 != iVar8 && DAT_003ce454 <= iVar7)) {
    iVar7 = iVar2;
  }
  FUN_00375a18(param_1 + 0xbba,(int)(short)iVar7,6,1000,1);
  return;
}
