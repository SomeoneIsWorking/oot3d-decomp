// OoT3D decomp @ 00190e98  name=FUN_00190e98  size=552

void FUN_00190e98(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;

  uVar1 = DAT_001910c4;
  FUN_00373500(DAT_001910c4,DAT_001910c4,DAT_001910c0,param_1 + 0x378);
  if (DAT_001910c8 <= *(int *)(param_1 + 0x378)) {
    *(undefined4 *)(param_1 + 0x378) = uVar1;
  }
  FUN_0034e418(param_1);
  if ((*(int *)(param_1 + 0x378) == 0x3f800000) &&
     (iVar2 = FUN_003769d8(param_2 + 0x28a0), iVar2 == 4)) {
    if ((*(uint *)(param_2 + 0x18) & *DAT_001910cc) != 0) {
LAB_00190f54:
      *(undefined2 *)(param_1 + 0x2a0) = *(undefined2 *)(param_1 + 0x2a2);
      FUN_0036be34(param_2,*(undefined2 *)
                            (*(int *)(param_1 + (uint)*(byte *)(param_1 + 0x2fa) * 4 + 0x2a4) +
                            0x116));
      return;
    }
    iVar2 = FUN_00346964(param_2);
    if (iVar2 != 0) {
      iVar2 = FUN_00369f3c(param_2);
      if (iVar2 == 0) {
        iVar3 = *(int *)(param_1 + (uint)*(byte *)(param_1 + 0x2fa) * 4 + 0x2a4);
        iVar2 = (**(code **)(iVar3 + 0x1d0))(param_2,iVar3);
        uVar1 = DAT_001910d0;
        if (iVar2 == 0) {
          FUN_0034e37c(param_2,param_1);
          *(undefined1 *)(param_1 + 0x2f9) = 0;
          *(undefined4 *)(param_1 + 0x378) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00191038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(iVar3 + 0x1c0))(param_2,iVar3);
          return;
        }
        if (iVar2 == 1) {
          (**(code **)(iVar3 + 0x1d4))(param_2,iVar3);
          FUN_0036be34(param_2,0x9a);
          *(undefined2 *)(param_1 + 0x2a0) = 0x17;
          *(undefined1 *)(param_1 + 0x2f9) = 0;
          *(undefined4 *)(param_1 + 0x378) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00191080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(iVar3 + 0x1c0))(param_2,iVar3);
          return;
        }
        if (iVar2 == 2) {
          FUN_0037547c(DAT_001910d4,0,4,DAT_001910dc,DAT_001910dc,DAT_001910d8);
          FUN_0036be34(param_2,0x9d);
          *(undefined2 *)(param_1 + 0x2a0) = 0xe;
          return;
        }
        if (iVar2 == 4) {
          FUN_0037547c(DAT_001910d4,0,4,DAT_001910dc,DAT_001910dc,DAT_001910d8);
          FUN_0036be34(param_2,0x85);
          *(undefined2 *)(param_1 + 0x2a0) = 0xe;
        }
      }
      else if (iVar2 == 1) goto LAB_00190f54;
    }
  }
  return;
}
