// OoT3D decomp @ 002953d8  name=FUN_002953d8  size=204

void FUN_002953d8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  short sVar2;
  float fVar3;

  if (*(short *)(param_1 + 0x5d8) != 0) {
    *(short *)(param_1 + 0x5d8) = *(short *)(param_1 + 0x5d8) + -1;
  }
  FUN_0037322c(*(undefined4 *)(param_1 + 0x5e4),param_1);
  FUN_0036bcc8(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),
               *(undefined4 *)(param_1 + 0x44),param_2,param_1,param_1 + 0x5f4,param_1 + 0x5fa,
               0x4300);
  if ((*(short *)(param_1 + 0x5d8) == 0) &&
     (sVar2 = *(short *)(param_1 + 0x5d6) + 1, *(short *)(param_1 + 0x5d6) = sVar2,
     uVar1 = DAT_002954a4, 1 < sVar2)) {
    *(undefined2 *)(param_1 + 0x5d6) = 0;
    fVar3 = (float)FUN_00371e50(uVar1);
    *(short *)(param_1 + 0x5d8) = (short)(int)fVar3 + 0x14;
  }
  *(short *)(param_1 + 0x5da) = *(short *)(param_1 + 0x5da) + 1;
                    /* WARNING: Could not recover jumptable at 0x002954a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x5d0))(param_1,param_2);
  return;
}
