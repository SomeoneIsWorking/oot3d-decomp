// OoT3D decomp @ 002da47c  name=FUN_002da47c  size=152

void FUN_002da47c(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = UNK_002da518;
  if (param_2 != 0x3b) {
    if (param_2 < 0x18) {
      iVar2 = UNK_002da514 + param_2 * UNK_002da51c * 4;
      *(undefined1 *)(iVar2 + 4) = 0;
                    /* WARNING: Could not recover jumptable at 0x002da4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar1 + 8))(iVar2 + 8);
      return;
    }
    if (param_2 + -0x18 < 0x19) {
      iVar2 = UNK_002da514 + (param_2 + -0x18) * 0x28c;
      *(undefined1 *)(UNK_002da520 + iVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x002da4e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar1 + 0x1c))(iVar2 + 0x7fe8);
      return;
    }
    if (param_2 + -0x31 < 10) {
      iVar2 = UNK_002da514 + (param_2 + -0x31) * 0x1e0;
      *(undefined1 *)(UNK_002da524 + iVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x002da50c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar1 + 0x44))(iVar2 + 0xbf94);
      return;
    }
  }
  return;
}

