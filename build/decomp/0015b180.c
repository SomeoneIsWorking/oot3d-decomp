// OoT3D decomp @ 0015b180  name=FUN_0015b180  size=528

void FUN_0015b180(int param_1,int param_2)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  short sVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;

  iVar3 = FUN_0037571c(param_2);
  iVar5 = DAT_0015b398;
  fVar8 = DAT_0015b394;
  piVar1 = DAT_0015b390;
  if ((iVar3 != 0) &&
     (*(short **)(&DAT_000022dc + param_2 + *(short *)(param_1 + 0xe88) * 4) != (short *)0x0)) {
    sVar6 = **(short **)(&DAT_000022dc + param_2 + *(short *)(param_1 + 0xe88) * 4);
    if (sVar6 == 4) {
      FUN_0037572c(DAT_0015b3b4,param_1);
      uVar4 = DAT_0015b3c0;
      fVar2 = DAT_0015b3bc;
      *(undefined4 *)(param_1 + 0xe8c) = DAT_0015b3b8;
      fVar7 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x110),
                                         (byte)(in_fpscr >> 0x15) & 3);
      *(short *)(param_1 + 0xe86) = (short)(int)(fVar2 / fVar7 + fVar8);
      FUN_00375bcc(param_1,uVar4);
    }
    else if (sVar6 == 6) {
      uVar4 = FUN_0036ae14(param_1 + 0x1a4,
                           *(undefined4 *)(DAT_0015b398 + *(short *)(param_1 + 0x1c) * 4 + 0x20));
      uVar4 = VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00375c08(DAT_0015b3a4,DAT_0015b3a0,uVar4,DAT_0015b39c,param_1 + 0x1a4,
                   *(undefined4 *)(iVar5 + *(short *)(param_1 + 0x1c) * 4 + 0x20),2);
      fVar2 = DAT_0015b3ac;
      *(undefined4 *)(param_1 + 0xe8c) = DAT_0015b3a8;
      *(undefined4 *)(param_1 + 0xe94) =
           *(undefined4 *)(iVar5 + *(short *)(param_1 + 0x1c) * 4 + 0x18);
      fVar7 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x110),
                                         (byte)(in_fpscr >> 0x15) & 3);
      *(short *)(param_1 + 0xe86) = (short)(int)(fVar2 / fVar7 + fVar8);
      FUN_0036aa20(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                   *(undefined4 *)(param_1 + 0x30),param_2 + 0x208c,param_1,param_2,0xf5,0,0,0,
                   (int)(short)(*(short *)(param_1 + 0x1c) + 9));
      FUN_00375bcc(param_1,DAT_0015b3b0);
    }
    else {
      FUN_00353310(param_1,param_2);
      iVar5 = (int)*(short *)(param_1 + 0x36) -
              (int)*(short *)(*(int *)(&DAT_000022dc + param_2 + *(short *)(param_1 + 0xe88) * 4) +
                             8);
      if (iVar5 < 0) {
        iVar5 = -iVar5;
        sVar6 = 1;
      }
      else {
        sVar6 = -1;
      }
      if (0x7fff < iVar5) {
        iVar5 = 0x10000 - iVar5;
        sVar6 = -sVar6;
      }
      fVar8 = (float)VectorSignedToFloat(iVar5,(byte)(in_fpscr >> 0x15) & 3);
      sVar6 = (short)(int)(fVar8 * DAT_0015b3c4) * sVar6 + *(short *)(param_1 + 0x36);
      *(short *)(param_1 + 0x36) = sVar6;
      *(short *)(param_1 + 0xbe) = sVar6;
    }
    FUN_00373264(param_1,DAT_0015b3c8);
    return;
  }
  return;
}
