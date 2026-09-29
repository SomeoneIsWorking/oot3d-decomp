// OoT3D decomp @ 004c0178  name=FUN_004c0178  size=336

void FUN_004c0178(int param_1,undefined4 param_2)

{
  short sVar1;
  int *piVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  uint in_fpscr;
  float fVar8;

  FUN_0036b4ec(param_1 + 0x254);
  fVar3 = DAT_004c02cc;
  piVar2 = DAT_004c02c8;
  if (-1 < *(char *)(param_1 + 0x2488)) {
    fVar8 = (float)VectorSignedToFloat((int)*(short *)(*DAT_004c02c8 + 0x110),
                                       (byte)(in_fpscr >> 0x15) & 3);
    if ((int)*(char *)(param_1 + 0x2488) < (int)(DAT_004c02d0 / fVar8 + DAT_004c02cc)) {
      fVar8 = (float)VectorSignedToFloat((int)*(short *)(*DAT_004c02c8 + 0x110),
                                         (byte)(in_fpscr >> 0x15) & 3);
      *(char *)(param_1 + 0x2488) = (char)(int)(DAT_004c02d0 / fVar8 + DAT_004c02cc);
    }
  }
  iVar5 = (int)((ulonglong)((longlong)DAT_004c02d4 * (longlong)(int)*(short *)(param_1 + 0x2238)) >>
               0x20);
  uVar4 = ((iVar5 >> 3) - (iVar5 >> 0x1f)) * -0x19 + (int)*(short *)(param_1 + 0x2238);
  bVar6 = uVar4 == 0;
  if (bVar6) {
    uVar4 = (uint)*(byte *)(param_1 + 0x2488);
  }
  bVar7 = bVar6 && uVar4 == 0;
  if (bVar6 && uVar4 == 0) {
    bVar7 = *(char *)(param_1 + 2) == '\x02';
  }
  if (((!bVar7) || (iVar5 = FUN_00352dbc(param_2,0xffffffff), iVar5 != 0)) &&
     ((*(short *)(param_1 + 0x2238) == 0 ||
      (sVar1 = *(short *)(param_1 + 0x2238) + -1, *(short *)(param_1 + 0x2238) = sVar1, sVar1 == 0))
     )) {
    FUN_0036b2d4(DAT_004c02d8,param_1,param_2);
  }
  iVar5 = DAT_004c02e4;
  fVar8 = (float)VectorSignedToFloat((int)*(short *)(*piVar2 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
  *(char *)(param_1 + 0x227d) = (char)(int)(DAT_004c02dc / fVar8 + fVar3);
  FUN_0034a928(param_1,iVar5 + (uint)*(ushort *)(*(int *)(DAT_004c02e0 + param_1) + 0xf4));
  return;
}
