// OoT3D decomp @ 0011093c  name=FUN_0011093c  size=92

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0011093c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;

  iVar1 = FUN_00373074(param_2 + 0x3a58,(int)*(char *)(param_1 + 0x284));
  if (iVar1 != 0) {
    *(undefined2 *)(param_1 + 0x1a8) = 0;
    *(undefined4 *)(param_1 + 0x1a4) = _LAB_0011099a_2;
    *(undefined4 *)(param_1 + 0x140) = DAT_001109a0;
    uVar2 = FUN_0036a924(param_1,param_2,0x163,0);
    *(undefined4 *)(param_1 + 0x288) = uVar2;
  }
  return;
}
