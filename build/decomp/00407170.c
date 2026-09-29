// OoT3D decomp @ 00407170  name=FUN_00407170  size=312

void FUN_00407170(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int extraout_r1;
  int *piVar3;
  bool bVar4;

  if (*(char *)((int)param_1 + 0x82) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00407194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x14))(param_1);
    return;
  }
  piVar3 = (int *)param_1[0x40];
  if ((piVar3 != param_1 + 0x40) && (param_2 = *piVar3, (char)piVar3[-0x14] == '\x03')) {
                    /* WARNING: Subroutine does not return */
    FUN_0030c9b8(param_1 + 0x3f,piVar3);
  }
  if (*(char *)((int)param_1 + 9) != '\0') {
    iVar1 = 0;
    if (0 < param_1[0x386]) {
      do {
        param_2 = param_1[iVar1 * 0x88 + 0x393];
        if (param_2 == 0) {
          (**(code **)(*param_1 + 0x14))(param_1);
          *(undefined1 *)((int)param_1 + 0xb) = 1;
          return;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < param_1[0x386]);
    }
    iVar1 = 0;
    if (0 < param_1[0x385]) {
      do {
        FUN_00406998(param_1,param_1 + iVar1 * 8 + 0x7c7);
        iVar1 = iVar1 + 1;
        param_2 = extraout_r1;
      } while (iVar1 < param_1[0x385]);
    }
  }
  if (*(char *)((int)param_1 + 0x85) != '\0') {
    uVar2 = param_1[0x3f];
    bVar4 = uVar2 == 0;
    if (bVar4) {
      uVar2 = (uint)*DAT_004072e8;
    }
    if (bVar4 && uVar2 == 0) {
      *(undefined1 *)((int)param_1 + 0x85) = 0;
      FUN_00309854(param_1,param_2);
    }
  }
  if (*(char *)((int)param_1 + 0x83) != '\0') {
    *(undefined1 *)((int)param_1 + 0x83) = 0;
  }
  return;
}
