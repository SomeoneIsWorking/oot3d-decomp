// OoT3D decomp @ 003f1fd8  name=FUN_003f1fd8  size=340

void FUN_003f1fd8(int param_1,int param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  int *piVar3;
  float fVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  short *psVar8;
  uint in_fpscr;
  float fVar9;

  iVar6 = FUN_0037571c(param_2);
  iVar7 = 0;
  if (iVar6 != 0) {
    iVar7 = *(int *)(&DAT_000022dc + param_2);
  }
  if (iVar6 == 0 || iVar7 == 0) {
    iVar6 = FUN_0037571c(param_2);
    iVar7 = 0;
    if (iVar6 != 0) {
      iVar7 = *(int *)(&DAT_000022e0 + param_2);
    }
    if (iVar6 == 0 || iVar7 == 0) goto LAB_003f2098;
  }
  fVar4 = DAT_003f2134;
  piVar3 = DAT_003f212c;
  fVar9 = (float)VectorSignedToFloat((int)*(short *)(*DAT_003f212c + 0x110),
                                     (byte)(in_fpscr >> 0x15) & 3);
  if ((int)(DAT_003f2130 / fVar9 + DAT_003f2134) == (uint)*(ushort *)(param_2 + 0x22b8)) {
    FUN_003674e4(9);
  }
  fVar9 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
  if ((int)(DAT_003f2138 / fVar9 + fVar4) == (uint)*(ushort *)(param_2 + 0x22b8)) {
    FUN_003674e4(8);
  }
LAB_003f2098:
  iVar7 = FUN_0037571c(param_2);
  psVar8 = (short *)0x0;
  if (iVar7 != 0) {
    psVar8 = *(short **)(&DAT_000022dc + param_2);
  }
  uVar2 = (undefined2)DAT_003f213c;
  if (iVar7 != 0 && psVar8 != (short *)0x0) {
    uVar1 = *(ushort *)(param_1 + 0x1a4);
    if (*psVar8 == 2) {
      uVar5 = uVar1 | 1;
      if ((uVar1 & 1) == 0) {
        *(undefined2 *)(param_1 + 0x1a6) = uVar2;
      }
    }
    else {
      uVar5 = uVar1 & 0xfffe;
    }
    *(ushort *)(param_1 + 0x1a4) = uVar5;
  }
  iVar7 = FUN_0037571c(param_2);
  psVar8 = (short *)0x0;
  if (iVar7 != 0) {
    psVar8 = *(short **)(&DAT_000022e0 + param_2);
  }
  if (iVar7 != 0 && psVar8 != (short *)0x0) {
    uVar1 = *(ushort *)(param_1 + 0x1a4);
    if (*psVar8 == 2) {
      uVar5 = uVar1 | 2;
      if ((uVar1 & 2) == 0) {
        *(undefined2 *)(param_1 + 0x1a6) = uVar2;
      }
    }
    else {
      uVar5 = uVar1 & 0xfffd;
    }
    *(ushort *)(param_1 + 0x1a4) = uVar5;
  }
  *(short *)(param_1 + 0x1a6) = *(short *)(param_1 + 0x1a6) + 1;
  return;
}
