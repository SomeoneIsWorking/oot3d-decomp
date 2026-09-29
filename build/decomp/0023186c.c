// OoT3D decomp @ 0023186c  name=FUN_0023186c  size=56

void FUN_0023186c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;

  iVar1 = FUN_0037571c(param_2);
  uVar2 = DAT_002318a4;
  if (iVar1 == 0) {
    uVar2 = DAT_002318a8;
  }
  *(undefined4 *)(param_1 + 0x1dc) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x002318a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x1a4))(param_1,param_2);
  return;
}
