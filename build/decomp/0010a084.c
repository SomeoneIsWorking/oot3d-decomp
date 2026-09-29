// OoT3D decomp @ 0010a084  name=FUN_0010a084  size=604

void FUN_0010a084(int param_1)

{
  short sVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint in_fpscr;
  float fVar6;
  uint uVar7;
  uint uVar8;

  uVar4 = DAT_0010a338;
  fVar2 = DAT_0010a334;
  iVar3 = *(int *)(param_1 + 0x124);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(iVar3 + 0x9c8);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(iVar3 + 0x9cc);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(iVar3 + 0x9d0);
  uVar5 = DAT_0010a358;
  if (*(char *)(iVar3 + 0x7b2) == '\0') {
    FUN_0036e168(param_1 + 0x54);
    fVar6 = (float)FUN_0036e168(param_1 + 0x1e4);
    if (fVar6 == fVar2) {
      FUN_00374428(param_1);
      return;
    }
  }
  else {
    fVar6 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0010a344 + 0x110),
                                       (byte)(in_fpscr >> 0x15) & 3);
    if ((int)*(short *)(param_1 + 0x1ac) < (int)(DAT_0010a348 / fVar6 + DAT_0010a34c)) {
      FUN_0036e168(DAT_0010a358,DAT_0010a354,DAT_0010a350,fVar2,param_1 + 0x1e4);
      FUN_0036e168(uVar5,uVar4,DAT_0010a35c,fVar2,param_1 + 0x1e8);
      FUN_0036e168(DAT_0010a364,uVar4,DAT_0010a360,fVar2,param_1 + 0x1ec);
    }
    if ((*(short *)(param_1 + 0x1ac) == 0) ||
       (sVar1 = *(short *)(param_1 + 0x1ac) + -1, *(short *)(param_1 + 0x1ac) = sVar1, sVar1 == 0))
    {
      FUN_0036e168(fVar2,uVar4,DAT_0010a368,fVar2,param_1 + 0x54);
      FUN_0036e168(fVar2,uVar4,DAT_0010a36c,fVar2,param_1 + 0x1e8);
      uVar5 = DAT_0010a370;
      FUN_0036e168(fVar2,uVar4,DAT_0010a370,fVar2,param_1 + 0x1ec);
      fVar6 = (float)FUN_0036e168(fVar2,uVar4,uVar5,fVar2,param_1 + 0x1e4);
      if (fVar6 == fVar2) {
        FUN_00374428(param_1);
      }
    }
    FUN_0037572c(*(undefined4 *)(param_1 + 0x54),param_1);
    uVar7 = VectorFloatToUnsigned(*(undefined4 *)(param_1 + 0x1ec),3);
    uVar8 = VectorFloatToUnsigned(*(undefined4 *)(param_1 + 0x1e8),3);
    FUN_0036e140(param_1 + 0x22c,uVar8 & 0xff,uVar7 & 0xff,0,300,0);
    uVar7 = (uint)*(short *)(param_1 + 0x1b6);
    if ((uVar7 & 1) == 0) {
      iVar3 = (int)((longlong)(int)uVar7 * (longlong)DAT_0010a374 + ((ulonglong)uVar7 << 0x20) >>
                   0x20);
      uVar4 = *(undefined4 *)(param_1 + 0x2c);
      uVar5 = *(undefined4 *)(param_1 + 0x30);
      iVar3 = param_1 + ((int)(uVar7 + ((iVar3 >> 5) - (iVar3 >> 0x1f)) * -0x3c) / 2) * 0x14;
      *(undefined4 *)(iVar3 + 0x250) = *(undefined4 *)(param_1 + 0x28);
      *(undefined4 *)(iVar3 + 0x254) = uVar4;
      *(undefined4 *)(iVar3 + 600) = uVar5;
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
    *(short *)(param_1 + 0x1b6) = *(short *)(param_1 + 0x1b6) + 1;
  }
  return;
}
