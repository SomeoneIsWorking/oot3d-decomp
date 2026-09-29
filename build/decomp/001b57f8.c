// OoT3D decomp @ 001b57f8  name=FUN_001b57f8  size=760

void FUN_001b57f8(int param_1,int param_2)

{
  ushort uVar1;
  int *piVar2;
  byte bVar3;
  int iVar4;
  ushort *puVar5;
  undefined4 uVar6;
  float *pfVar7;
  bool bVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fVar11;

  iVar4 = FUN_0037571c(param_2);
  fVar9 = DAT_001b5b54;
  piVar2 = DAT_001b5b50;
  puVar5 = (ushort *)0x0;
  if (iVar4 != 0) {
    puVar5 = *(ushort **)(DAT_001b5b58 + param_2);
  }
  if (iVar4 == 0 || puVar5 == (ushort *)0x0) {
    (**(code **)(param_1 + 0x944))(param_1,param_2);
    if (*(int *)(param_1 + 0x1f8) == 0x42240000) {
      FUN_00375bcc(param_1,DAT_001b5b7c);
    }
  }
  else {
    uVar1 = *puVar5;
    if (uVar1 == 1) {
      if ((*(ushort *)(param_1 + 0x952) & 2) != 0) {
        *(undefined1 *)(param_1 + 0x956) = 0;
                    /* WARNING: Subroutine does not return */
        FUN_003702c8(0x14);
      }
    }
    else if (uVar1 == 2) {
      uVar1 = *(ushort *)(param_1 + 0x952);
      *(ushort *)(param_1 + 0x952) = uVar1 | 1;
      if ((uVar1 & 8) == 0) {
        uVar6 = FUN_0036aa20(DAT_001b5b74,DAT_001b5b70,DAT_001b5b6c,param_2 + 0x208c,param_1,param_2
                             ,DAT_001b5b78,0,0,0,0);
        *(undefined4 *)(param_1 + 0x94c) = uVar6;
        *(ushort *)(param_1 + 0x952) = *(ushort *)(param_1 + 0x952) | 8;
      }
    }
    else {
      bVar8 = uVar1 == 3;
      if (bVar8) {
        uVar1 = *(ushort *)(param_1 + 0x952);
      }
      if (bVar8 && (uVar1 & 2) == 0) {
        *(undefined1 *)(param_1 + 0x956) = 0;
        *(undefined1 *)(param_1 + 0x957) = 0;
        *(undefined1 *)(param_1 + 0x958) = 1;
        *(undefined1 *)(param_1 + 0x959) = 0;
        *(ushort *)(param_1 + 0x952) = *(ushort *)(param_1 + 0x952) | 2;
      }
    }
    if ((*(ushort *)(param_1 + 0x952) & 1) != 0) {
      FUN_00375bcc(param_1,DAT_001b5b5c);
      if (DAT_001b5b60 <= *(short *)(param_1 + 0x950)) {
        fVar10 = (float)VectorSignedToFloat((int)*(short *)(*piVar2 + 0x110),
                                            (byte)(in_fpscr >> 0x15) & 3);
        *(short *)(param_1 + 0x950) =
             *(short *)(param_1 + 0x950) -
             (short)(int)(fVar9 + fVar10 * DAT_001b5b64 * DAT_001b5b68);
      }
    }
  }
  if (*(char *)(param_1 + 0x957) == '\0') {
    bVar3 = *(char *)(param_1 + 0x956) + 1;
    *(byte *)(param_1 + 0x956) = bVar3;
    if (3 < bVar3) {
      *(undefined1 *)(param_1 + 0x956) = 0;
      if (*(char *)(param_1 + 0x958) == '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_003702c8(0x14);
      }
      *(char *)(param_1 + 0x958) = *(char *)(param_1 + 0x958) + -1;
    }
  }
  else {
    *(char *)(param_1 + 0x957) = *(char *)(param_1 + 0x957) + -1;
  }
  FUN_003731e0(param_1 + 0x1bc);
  FUN_0037572c(DAT_001b5b84,param_1);
  iVar4 = *(int *)(param_1 + 0x234);
  pfVar7 = (float *)(iVar4 + 0x68);
  *(undefined4 *)(iVar4 + 0x6c) = 0;
  *pfVar7 = 1.0;
  *(undefined4 *)(iVar4 + 0x70) = 0;
  *(undefined4 *)(iVar4 + 0x78) = 0;
  *(undefined4 *)(iVar4 + 0x7c) = 0x3f800000;
  fVar10 = DAT_001b5b8c;
  *(undefined4 *)(iVar4 + 0x74) = *(undefined4 *)(iVar4 + 0x74);
  *(undefined4 *)(iVar4 + 0x80) = 0;
  *(undefined4 *)(iVar4 + 0x88) = 0;
  fVar9 = DAT_001b5b88;
  *(undefined4 *)(iVar4 + 0x84) = *(undefined4 *)(iVar4 + 0x84);
  *(undefined4 *)(iVar4 + 0x8c) = 0;
  *(undefined4 *)(iVar4 + 0x90) = 0x3f800000;
  *(undefined4 *)(iVar4 + 0x94) = *(undefined4 *)(iVar4 + 0x94);
  fVar11 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x950),(byte)(in_fpscr >> 0x15) & 3)
  ;
  fVar11 = fVar11 * fVar10;
  if (fVar11 != fVar9) {
    fVar9 = (float)FUN_003727f0(fVar11);
    fVar10 = (float)FUN_00372674(fVar11);
    fVar11 = *pfVar7;
    *pfVar7 = fVar11 * fVar10 + *(float *)(iVar4 + 0x6c) * fVar9;
    *(float *)(iVar4 + 0x6c) = *(float *)(iVar4 + 0x6c) * fVar10 - fVar11 * fVar9;
    fVar11 = *(float *)(iVar4 + 0x78);
    *(float *)(iVar4 + 0x78) = fVar11 * fVar10 + *(float *)(iVar4 + 0x7c) * fVar9;
    *(float *)(iVar4 + 0x7c) = *(float *)(iVar4 + 0x7c) * fVar10 - fVar11 * fVar9;
    fVar11 = *(float *)(iVar4 + 0x88);
    *(float *)(iVar4 + 0x88) = fVar11 * fVar10 + *(float *)(iVar4 + 0x8c) * fVar9;
    *(float *)(iVar4 + 0x8c) = *(float *)(iVar4 + 0x8c) * fVar10 - fVar11 * fVar9;
  }
  return;
}
