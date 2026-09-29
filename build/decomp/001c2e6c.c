// OoT3D decomp @ 001c2e6c  name=FUN_001c2e6c  size=96

void FUN_001c2e6c(int param_1,int param_2)

{
  int iVar1;

  iVar1 = FUN_003769d8(param_2 + 0x28a0);
  if ((iVar1 == 5) && (iVar1 = FUN_00346964(param_2), iVar1 != 0)) {
    *(undefined2 *)(param_1 + 0x2a0) = *(undefined2 *)(param_1 + 0x2a2);
    FUN_0036be34(param_2,*(undefined2 *)
                          (*(int *)(param_1 + (uint)*(byte *)(param_1 + 0x2fa) * 4 + 0x2a4) + 0x116)
                );
    return;
  }
  return;
}
