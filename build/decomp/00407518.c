// OoT3D decomp @ 00407518  name=FUN_00407518  size=528

void FUN_00407518(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  float fVar5;
  int extraout_r1;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  uint in_fpscr;
  uint uVar14;
  float fVar15;
  undefined8 uVar16;

  fVar2 = DAT_00407734;
  uVar11 = DAT_00407730;
  fVar1 = DAT_0040772c;
  fVar5 = DAT_00407728;
  fVar15 = (float)VectorUnsignedToFloat
                            ((uint)*(byte *)(param_1 + 0x6e) * (uint)*(ushort *)(param_1 + 0x70),
                             (byte)(in_fpscr >> 0x15) & 3);
  fVar15 = fVar15 * *(float *)(param_1 + 0x5c) * DAT_00407728;
  uVar14 = in_fpscr & 0xfffffff | (uint)(fVar15 == DAT_0040772c) << 0x1e;
  if (!SUB41(uVar14 >> 0x1e,0)) {
    uVar12 = 0;
    uVar16 = FUN_0030918c((*(float *)(param_1 + 0x60) * DAT_00407734) / fVar15);
    while( true ) {
      uVar10 = (uint)((ulonglong)uVar16 >> 0x20);
      uVar9 = (uint)uVar16;
      iVar6 = uVar10 - (uVar12 + (uVar11 > uVar9));
      if (uVar12 < uVar10 || uVar10 - uVar12 < (uint)(uVar11 <= uVar9)) {
        fVar5 = (float)FUN_002dbc5c(uVar9 - uVar11,uVar10 - (uVar12 + (uVar9 < uVar11)));
        *(float *)(param_1 + 0x60) = fVar5 * fVar15 * DAT_00407738;
        return;
      }
      bVar13 = uVar11 < uVar9;
      uVar11 = uVar11 - uVar9;
      uVar12 = uVar12 - (uVar10 + bVar13);
      uVar10 = 0;
      iVar7 = 0;
      do {
        if (iVar7 < 0x10) {
          iVar8 = *(int *)(param_1 + iVar7 * 4 + 0x84);
        }
        else {
          iVar8 = 0;
        }
        if (iVar8 != 0) {
          FUN_00309100(iVar8,iVar6);
          uVar16 = FUN_00309000(iVar8,1);
          iVar6 = (int)((ulonglong)uVar16 >> 0x20);
          if ((int)uVar16 < 0) {
            if (iVar7 < 0x10) {
              iVar3 = *(int *)(param_1 + iVar7 * 4 + 0x84);
            }
            else {
              iVar3 = 0;
            }
            if (iVar3 != 0) {
              FUN_00308f94();
              iVar6 = param_1 + iVar7 * 4;
              (**(code **)(**(int **)(param_1 + 0x78) + 0xc))
                        (*(int **)(param_1 + 0x78),*(undefined4 *)(iVar6 + 0x84));
              *(undefined4 *)(iVar6 + 0x84) = 0;
              iVar6 = extraout_r1;
            }
          }
          if (*(char *)(iVar8 + 5) != '\0') {
            uVar10 = 1;
          }
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < 0x10);
      iVar6 = 1 - uVar10;
      if (1 < uVar10) {
        iVar6 = 0;
      }
      if (iVar6 != 0) {
        if (*(char *)(param_1 + 9) != '\0') {
          uVar4 = FUN_0030c7cc();
          FUN_00309bdc(uVar4,param_1 + 0x48);
          *(undefined1 *)(param_1 + 9) = 0;
        }
        iVar6 = 0;
        do {
          if (iVar6 < 0x10) {
            iVar7 = *(int *)(param_1 + iVar6 * 4 + 0x84);
          }
          else {
            iVar7 = 0;
          }
          if (iVar7 != 0) {
            FUN_00308f94();
            iVar7 = param_1 + iVar6 * 4;
            (**(code **)(**(int **)(param_1 + 0x78) + 0xc))
                      (*(int **)(param_1 + 0x78),*(undefined4 *)(iVar7 + 0x84));
            *(undefined4 *)(iVar7 + 0x84) = 0;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < 0x10);
        *(undefined1 *)(param_1 + 0xb) = 1;
        return;
      }
      *(int *)(param_1 + 0xe4) = *(int *)(param_1 + 0xe4) + 1;
      fVar15 = (float)VectorUnsignedToFloat
                                ((uint)*(byte *)(param_1 + 0x6e) * (uint)*(ushort *)(param_1 + 0x70)
                                 ,(byte)(uVar14 >> 0x15) & 3);
      fVar15 = fVar15 * fVar5 * *(float *)(param_1 + 0x5c);
      uVar14 = uVar14 & 0xfffffff | (uint)(fVar15 == fVar1) << 0x1e;
      if (SUB41(uVar14 >> 0x1e,0)) break;
      uVar16 = FUN_0030918c(fVar2 / fVar15);
    }
  }
  return;
}
