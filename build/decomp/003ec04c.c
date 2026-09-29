// OoT3D decomp @ 003ec04c  name=FUN_003ec04c  size=296

void FUN_003ec04c(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  uint in_fpscr;
  undefined4 uVar4;
  undefined8 uVar5;

  if ((*(short *)(param_1 + 1000) == 0) ||
     (sVar1 = *(short *)(param_1 + 1000) + -1, *(short *)(param_1 + 1000) = sVar1, sVar1 == 0)) {
    iVar2 = FUN_00370734(param_1 + 0x1a4);
    uVar3 = DAT_003ec1dc;
    if (iVar2 == 0) {
      iVar2 = (uint)*(byte *)(param_1 + 0x3ea) + *(char *)(param_1 + 0x3ee) * 4;
      uVar4 = VectorUnsignedToFloat
                        ((uint)*(byte *)(DAT_003ec1d8 + iVar2),(byte)(in_fpscr >> 0x15) & 3);
      uVar5 = FUN_0036e5e0(uVar4,DAT_003ec1dc,param_1 + 0x1a4);
      if ((int)uVar5 == 0) {
        uVar4 = VectorUnsignedToFloat
                          ((uint)*(byte *)(DAT_003ec1fc + iVar2),(byte)(in_fpscr >> 0x15) & 3);
        uVar5 = FUN_0036e5e0(uVar4,uVar3,param_1 + 0x1a4);
        if ((int)uVar5 != 0) {
          sVar1 = *(short *)(param_2 + 0x104);
          uVar3 = (int)((ulonglong)uVar5 >> 0x20);
          if ((sVar1 == 7 || sVar1 == 8) || sVar1 == 4) {
            uVar3 = DAT_003ec200;
          }
          if ((sVar1 != 7 && sVar1 != 8) && sVar1 != 4) {
            uVar3 = DAT_003ec204;
          }
          FUN_00375bcc(param_1,uVar3);
          return;
        }
      }
      else {
        sVar1 = *(short *)(param_2 + 0x104);
        uVar3 = (int)((ulonglong)uVar5 >> 0x20);
        if ((sVar1 == 7 || sVar1 == 8) || sVar1 == 4) {
          uVar3 = DAT_003ec1e0;
        }
        if ((sVar1 != 7 && sVar1 != 8) && sVar1 != 4) {
          uVar3 = DAT_003ec1e4;
        }
        FUN_00375bcc(param_1,uVar3);
        if (*(int *)(param_1 + 0x1e4) < 0x3f800000) {
                    /* WARNING: Subroutine does not return */
          FUN_003759d0();
        }
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x3e4) = DAT_003ec1d4;
      *(undefined1 *)(param_1 + 0x3eb) = 0;
    }
  }
  return;
}
