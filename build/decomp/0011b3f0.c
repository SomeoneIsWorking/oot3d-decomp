// OoT3D decomp @ 0011b3f0  name=FUN_0011b3f0  size=528

void FUN_0011b3f0(int param_1,int param_2)

{
  char cVar1;
  short sVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  bool bVar7;
  uint in_fpscr;
  float fVar8;

  fVar5 = DAT_0011b608;
  fVar4 = DAT_0011b604;
  piVar3 = DAT_0011b600;
  fVar8 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0011b600 + 0x110),
                                     (byte)(in_fpscr >> 0x15) & 3);
  if ((int)(DAT_0011b604 / fVar8 + DAT_0011b608) - 1U == (uint)*(ushort *)(param_1 + 0x1a4)) {
    FUN_003667b0(param_2,5);
  }
  sVar2 = *(short *)(param_2 + 0x309c);
  bVar7 = sVar2 == 0;
  if (bVar7) {
    sVar2 = *(short *)(DAT_0011b60c + param_2);
  }
  if (((((bVar7 && sVar2 == 0) && (iVar6 = FUN_00366748(param_2), iVar6 == 0)) &&
       (iVar6 = FUN_00366738(param_2), iVar6 == 0)) &&
      ((*(char *)(DAT_0011b610 + param_2) == '\0' || (*(int *)(DAT_0011b614 + 0x4e4) != 0)))) ||
     (fVar8 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0x110),
                                         (byte)(in_fpscr >> 0x15) & 3),
     (int)(DAT_0011b618 / fVar8 + fVar5) <= (int)(uint)*(ushort *)(param_1 + 0x1a4))) {
    cVar1 = *(char *)(param_2 + 0x31b0);
    bVar7 = cVar1 == '\0';
    if (bVar7) {
      cVar1 = *(char *)(param_2 + 0x31b1);
    }
    if (!bVar7 || cVar1 != '\x01') {
      *(short *)(param_1 + 0x1a4) = *(short *)(param_1 + 0x1a4) + -1;
    }
    fVar8 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0x110),(byte)(in_fpscr >> 0x15) & 3
                                      );
    if ((int)(fVar4 / fVar8 + fVar5) == (uint)*(ushort *)(param_1 + 0x1a4)) {
      FUN_00366704(param_2,5);
    }
  }
  if (*DAT_0011b61c == '\0') {
    if (*(short *)(param_1 + 0x1a4) != 0) {
      return;
    }
  }
  else {
    *(undefined2 *)(param_1 + 0x1a4) = 0;
  }
  *(undefined1 *)(param_2 + 0x3272) = 0;
  iVar6 = FUN_0037571c(param_2);
  if (iVar6 == 0) {
    FUN_003666a0(param_2);
  }
  else {
    iVar6 = FUN_00366684(0);
    if (iVar6 == -1) {
      FUN_003665fc(0xf,1,0);
      FUN_003665fc(0xe,1,0);
    }
  }
  cVar1 = *DAT_0011b620;
  bVar7 = cVar1 == '\0';
  if (bVar7) {
    cVar1 = *(char *)(param_2 + 0x325d);
  }
  if (bVar7 && cVar1 == '\x01') {
    *(undefined1 *)(param_2 + 0x325d) = 2;
  }
  else {
    *(undefined1 *)(param_2 + 0x325d) = 0;
    *(undefined1 *)(param_2 + 0x325e) = 0;
  }
  *(undefined1 *)(param_2 + 0x325f) = 2;
  FUN_00374428(param_1);
  return;
}
