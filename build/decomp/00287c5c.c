// OoT3D decomp @ 00287c5c  name=FUN_00287c5c  size=64

/* WARNING: Removing unreachable block (ram,0x003729d0) */

void FUN_00287c5c(int param_1,undefined4 param_2)

{
  int iVar1;

  iVar1 = DAT_00372a5c;
  if (*DAT_00287c9c != 0) {
    *(undefined1 *)(param_1 + 0xa15) = 0x18;
    *(undefined4 *)(param_1 + 0x9ac) = *(undefined4 *)(iVar1 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x003729cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_caseD_0_00372a34)();
    return;
  }
  FUN_0035dd04(param_1);
  FUN_0036bb28(param_1,param_2);
  return;
}
