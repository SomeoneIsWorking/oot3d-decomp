// OoT3D decomp @ 0044827c  name=FUN_0044827c  size=96

undefined4 FUN_0044827c(undefined2 *param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)FUN_002e5ba0();
  iVar2 = *piVar1;
  if (*(char *)(iVar2 + 0x101) != '\x01') {
    if (*(char *)(iVar2 + param_2) == '\0') {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = 1;
      *param_1 = (short)param_2;
    }
    return uVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x004482c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*(code *)(iVar2 + *(int *)(iVar2 + 0x103) + 0x103))(param_1,param_2,param_3);
  return uVar3;
}

