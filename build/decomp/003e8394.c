// OoT3D decomp @ 003e8394  name=FUN_003e8394  size=472

void FUN_003e8394(short *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  short *psVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;
  float fVar12;
  float local_30;
  undefined4 local_2c;
  float local_28;

  iVar2 = DAT_003e8578;
  iVar5 = DAT_003e8574;
  iVar9 = DAT_003e8570;
  if (((char)param_1[0xe1] != '\0') ||
     ((*(char *)(param_2 + 0x208e) != '\0' && (*(int *)(param_1 + 0x4a) < DAT_003e856c)))) {
    iVar7 = 0;
    iVar8 = DAT_003e8578 + -4;
    do {
      psVar4 = *(short **)(&DAT_000020cc + param_2);
      if (psVar4 != (short *)0x0) {
        pfVar6 = (float *)(iVar2 + iVar7 * 0xc);
        do {
          if ((psVar4 != param_1) && (*psVar4 == iVar9)) {
            fVar12 = ABS((*(float *)(psVar4 + 0x14) - *(float *)(param_1 + 0x14)) + *pfVar6);
            iVar1 = (int)fVar12 - iVar5;
            if ((int)fVar12 < iVar5) {
              fVar12 = ABS(*(float *)(psVar4 + 0x16) - *(float *)(param_1 + 0x16));
              iVar1 = (int)fVar12 - iVar5;
            }
            bVar11 = SBORROW4((int)fVar12,iVar5);
            bVar10 = iVar1 < 0;
            if (bVar10 != bVar11) {
              fVar12 = ABS((*(float *)(psVar4 + 0x18) - *(float *)(param_1 + 0x18)) + pfVar6[2]);
              bVar11 = SBORROW4((int)fVar12,iVar5);
              bVar10 = (int)fVar12 - iVar5 < 0;
            }
            if (bVar10 != bVar11) {
              *(byte *)(psVar4 + 0xe2) = *(byte *)(psVar4 + 0xe2) | *(byte *)(iVar8 + iVar7);
              break;
            }
          }
          psVar4 = *(short **)(psVar4 + 0x98);
        } while (psVar4 != (short *)0x0);
      }
      uVar3 = DAT_003e857c;
      iVar7 = (int)(short)((short)iVar7 + 1);
    } while (iVar7 < 4);
    iVar9 = 0;
    do {
      pfVar6 = (float *)(iVar2 + iVar9 * 0xc);
      local_30 = *(float *)(param_1 + 0x14) + *pfVar6;
      local_2c = *(undefined4 *)(param_1 + 0x16);
      local_28 = *(float *)(param_1 + 0x18) + pfVar6[2];
      iVar5 = FUN_0034c3b8(uVar3,param_2 + 0xa98,&local_30);
      if (iVar5 != 0) {
        *(byte *)((int)param_1 + 0x1c3) = *(byte *)((int)param_1 + 0x1c3) | *(byte *)(iVar8 + iVar9)
        ;
      }
      iVar9 = (int)(short)((short)iVar9 + 1);
    } while (iVar9 < 4);
    *(undefined4 *)(param_1 + 0xde) = DAT_003e8580;
    *(undefined1 *)(param_1 + 0xe1) = 1;
    param_1[0xe0] = 0x1e;
    *(undefined1 *)(param_1 + 0xe3) = 1;
    uVar3 = DAT_003e8584;
    *(undefined1 *)((int)param_1 + 0x1c5) = 0;
    *(undefined4 *)(param_1 + 0xe6) = uVar3;
    *(undefined4 *)(param_1 + 0xe8) = uVar3;
    *(undefined4 *)(param_1 + 0xea) = uVar3;
    *(undefined4 *)(param_1 + 0xec) = uVar3;
    *(undefined4 *)(param_1 + 0xee) = uVar3;
    *(undefined4 *)(param_1 + 0xf0) = DAT_003e8588;
  }
  return;
}
