// OoT3D decomp @ 00497f9c  name=FUN_00497f9c  size=232

void FUN_00497f9c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;

  if (*(char *)(param_2 + 0x1a) == '\0') {
    iVar1 = 0;
    if (0 < *(int *)(param_2 + 8)) {
      do {
        iVar3 = *(int *)(param_2 + iVar1 * 4);
        if (iVar3 != 0) {
          if (iVar3 != param_1) {
            FUN_002c016c(iVar3,1);
            FUN_00308e24(iVar3);
          }
          *(undefined4 *)(param_2 + iVar1 * 4) = 0;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(param_2 + 8));
    }
  }
  else {
    *(undefined1 *)(param_2 + 0x1b) = 1;
    iVar1 = 0;
    if (0 < *(int *)(param_2 + 8)) {
      do {
        if (*(int *)(param_2 + iVar1 * 4) == param_1) {
          *(undefined4 *)(param_2 + iVar1 * 4) = 0;
          return;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(param_2 + 8));
    }
  }
  *(undefined1 *)(param_2 + 0x17) = 0;
  *(undefined1 *)(param_2 + 0x15) = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  uVar2 = FUN_0030c6e0();
  FUN_0030ca84(uVar2,param_2);
  *(undefined1 *)(param_2 + 0x14) = 0;
  if (*(code **)(param_2 + 0xc) == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00498080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0xc))(param_2,3,*(undefined4 *)(param_2 + 0x10));
  return;
}
