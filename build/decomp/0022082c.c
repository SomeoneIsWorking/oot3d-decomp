// OoT3D decomp @ 0022082c  name=FUN_0022082c  size=60

void FUN_0022082c(int param_1,undefined4 param_2)

{
  int iVar1;

  iVar1 = FUN_00357378(param_2);
  if (iVar1 != 0xd && iVar1 != 0x11) {
                    /* WARNING: Could not recover jumptable at 0x00220864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x1c0))(param_1,param_2);
    return;
  }
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  return;
}
