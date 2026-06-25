// OoT3D decomp @ 004bebf4  name=FUN_004bebf4  size=476

void FUN_004bebf4(int param_1,int param_2)

{
  char cVar1;
  longlong lVar2;
  int *piVar3;
  float fVar4;
  uint *puVar5;
  uint *puVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  uint in_fpscr;
  int iVar10;
  float fVar11;
  float fVar12;
  
  fVar4 = DAT_004bedd4;
  piVar3 = DAT_004bedd0;
  cVar1 = *(char *)(param_1 + 0x2237);
  if (cVar1 < '\0') {
    iVar8 = FUN_0036b4ec(param_1 + 0x254,param_2);
    if (iVar8 != 0) {
      FUN_0036b2d4(DAT_004bedf8,param_1,param_2);
      iVar9 = (int)*(char *)(param_1 + 0x2488);
      fVar11 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      iVar10 = (int)(DAT_004bedfc / fVar11 + fVar4);
      iVar8 = -iVar10;
      if (iVar9 == iVar8 || iVar9 + iVar10 < 0 != SBORROW4(iVar9,iVar8)) {
        iVar8 = iVar9;
      }
      *(char *)(param_1 + 0x2488) = (char)iVar8;
      *(undefined *)(param_1 + 0x227b) = 0;
    }
  }
  else {
    if (cVar1 < '\x06') {
      *(char *)(param_1 + 0x2237) = cVar1 + '\x01';
    }
    puVar6 = DAT_004bede8;
    puVar5 = DAT_004bede4;
    fVar11 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    iVar8 = (int)(short)(*(short *)(param_1 + 0x2490) - *(short *)(DAT_004beddc + param_1));
    if (iVar8 < 0) {
      iVar8 = -iVar8;
    }
    fVar11 = DAT_004bedd8 / fVar11;
    fVar12 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x15) & 3);
    sVar7 = (short)(int)(ABS(*(float *)(param_1 + 0x29cc)) * fVar12 * DAT_004bede0) + 1 +
            *(short *)(param_1 + 0x2238);
    *(short *)(param_1 + 0x2238) = sVar7;
    if ((*(uint *)(*(int *)(param_1 + 0x29c8) + 4) & (*puVar5 | *puVar6)) != 0) {
      *(short *)(param_1 + 0x2238) = sVar7 + 5;
    }
    if ((int)(fVar11 + fVar4) < (int)*(short *)(param_1 + 0x2238)) {
      *(undefined *)(param_1 + 0x2237) = 0xff;
      FUN_004c1994(*(undefined4 *)(param_1 + 0x54),param_2,param_1 + 0x28);
      FUN_0036f59c(param_1,DAT_004bedec);
    }
    else {
      *(uint *)(param_1 + 0x1714) = *(uint *)(param_1 + 0x1714) | 0x4000;
    }
    lVar2 = (ulonglong)*(uint *)(DAT_004bedf0 + param_2) * (ulonglong)DAT_004bedf4;
    if (*(uint *)(DAT_004bedf0 + param_2) + (uint)((ulonglong)lVar2 >> 0x22) * -6 == 0) {
      FUN_0035daac(param_2,0xffffffff,(int)lVar2);
      return;
    }
  }
  return;
}

