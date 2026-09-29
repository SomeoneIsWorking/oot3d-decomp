// OoT3D decomp @ 001321a8  name=FUN_001321a8  size=276

void FUN_001321a8(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;

  uVar5 = DAT_0013239c;
  uVar4 = DAT_00132398;
  uVar3 = DAT_00132394;
  uVar2 = DAT_0013238c;
  FUN_0036e168(DAT_0013239c,DAT_00132398,DAT_00132394,DAT_0013238c,param_1 + 0x298);
  FUN_0036e168(uVar5,uVar4,uVar3,uVar2,param_1 + 0x29c);
  FUN_0036e168(DAT_001323a0,uVar4,uVar3,uVar2,param_1 + 0x288);
  FUN_0036e168(DAT_001323a4,uVar4,uVar3,uVar2,param_1 + 0x28c);
  *(float *)(param_1 + 0xc4) = (*(float *)(param_1 + 0x29c) + DAT_001323a8) * DAT_001323ac;
  if (*(short *)(param_1 + 0x282) != 0) {
    sVar1 = *(short *)(param_1 + 0x282) + -1;
    *(short *)(param_1 + 0x282) = sVar1;
    if (sVar1 != 0) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
