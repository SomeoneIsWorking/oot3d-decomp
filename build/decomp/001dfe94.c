// OoT3D decomp @ 001dfe94  name=FUN_001dfe94  size=380

void FUN_001dfe94(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  iVar3 = DAT_001e0014;
  iVar4 = *(int *)(param_1 + 0x3f4);
  iVar2 = param_2;
  if (iVar4 != DAT_001e0014) {
    iVar2 = DAT_001e0018;
  }
  if (iVar4 != DAT_001e0014 && iVar4 != iVar2) {
    FUN_00370734(param_1 + 0x1a4);
  }
  FUN_00376340(DAT_001e001c,DAT_001e001c,DAT_001e001c,param_2,param_1,5);
  (**(code **)(param_1 + 0x3f4))(param_1,param_2);
  if (*(int *)(param_1 + 0x3f4) != iVar3) {
    FUN_0037632c(param_1,param_1 + 0x3f8);
    FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x3f8);
  }
  FUN_00375a18(param_1 + 0xbc,(int)*(short *)(param_1 + 0x34),10,1000,1);
  FUN_00375a18(param_1 + 0xbe,(int)*(short *)(param_1 + 0x36),10,1000,1);
  FUN_00375a18(param_1 + 0xc0,(int)*(short *)(param_1 + 0x38),10,1000,1);
  if ((*(int *)(param_1 + 0x1d4) == 1) && (*(int *)(param_1 + 0x1e0) < DAT_001e0020)) {
    *(undefined1 *)(param_1 + 0x45f) = 7;
    *(undefined1 *)(param_1 + 0x460) = 6;
    *(undefined2 *)(param_1 + 0x462) = 2;
    return;
  }
  if ((*(short *)(param_1 + 0x462) != 0) &&
     (sVar1 = *(short *)(param_1 + 0x462) + -1, *(short *)(param_1 + 0x462) = sVar1, sVar1 != 0)) {
    if (*(short *)(param_1 + 0x462) < 4) {
      *(short *)(param_1 + 0x464) = *(short *)(param_1 + 0x462);
    }
    else {
      *(undefined2 *)(param_1 + 0x464) = 0;
    }
    iVar2 = DAT_001e0024;
    *(undefined1 *)(param_1 + 0x45f) = *(undefined1 *)(DAT_001e0024 + *(short *)(param_1 + 0x464));
    *(undefined1 *)(param_1 + 0x460) = *(undefined1 *)(iVar2 + *(short *)(param_1 + 0x464));
    *(undefined1 *)(param_1 + 0x45e) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_003702c8(0x1e,10);
}
