// OoT3D decomp @ 001bc314  name=FUN_001bc314  size=360

void FUN_001bc314(int param_1,undefined4 param_2)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint in_fpscr;

  uVar2 = DAT_001bc480;
  FUN_00376340(DAT_001bc480,DAT_001bc480,DAT_001bc480,param_2,param_1,5);
  (**(code **)(param_1 + 0xe8c))(param_1,param_2);
  iVar3 = FUN_003731e0(param_1 + 0x1a4);
  if (iVar3 == 0) goto LAB_001bc424;
  iVar3 = *(int *)(param_1 + 0xe94);
  if (iVar3 == -1) {
    FUN_003478b0(uVar2,param_1 + 0x1a4);
    goto LAB_001bc424;
  }
  if (iVar3 == 7 || iVar3 == 1) {
    if (*(short *)(param_1 + 0x1c) == 0) {
      FUN_00375bcc(param_1,DAT_001bc488);
    }
    else {
      FUN_00375bcc(param_1,DAT_001bc484);
    }
    iVar3 = *(int *)(param_1 + 0xe94);
LAB_001bc404:
    FUN_0036e734(param_1 + 0x1a4,iVar3);
  }
  else {
    if (iVar3 != 4) goto LAB_001bc404;
    *(undefined4 *)(param_1 + 0xe8c) = DAT_001bc48c;
    uVar4 = FUN_0036ae14(param_1 + 0x1a4,4);
    uVar4 = VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(DAT_001bc494,uVar2,uVar4,DAT_001bc490,param_1 + 0x1a4,4,0);
  }
  *(undefined4 *)(param_1 + 0xe94) = 0xffffffff;
LAB_001bc424:
  FUN_0037322c(uVar2,param_1);
  if ((*(short *)(param_1 + 0xe92) != 0) &&
     (sVar1 = *(short *)(param_1 + 0xe92) + -1, *(short *)(param_1 + 0xe92) = sVar1, sVar1 != 0)) {
    *(short *)(param_1 + 0xe90) = *(short *)(param_1 + 0xe92);
    if (2 < *(short *)(param_1 + 0xe92)) {
      *(undefined2 *)(param_1 + 0xe90) = 0;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_003702c8(0x3c);
}
