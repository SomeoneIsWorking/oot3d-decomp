// OoT3D decomp @ 0016d1f4  name=FUN_0016d1f4  size=136

void FUN_0016d1f4(int param_1,int param_2)

{
  int iVar1;

  iVar1 = FUN_003769d8(param_2 + 0x28a0);
  if ((iVar1 == 5) && (iVar1 = FUN_00346964(param_2), iVar1 != 0)) {
    *(undefined4 *)(param_1 + 0x378) = DAT_0016d27c;
    FUN_0034e418(param_1);
    (**(code **)(*(int *)(param_1 + (uint)*(byte *)(param_1 + 0x2fa) * 4 + 0x2a4) + 0x1c4))(param_2)
    ;
    *(undefined2 *)(param_1 + 0x2a0) = *(undefined2 *)(param_1 + 0x2a2);
    FUN_0036be34(param_2,*(undefined2 *)
                          (*(int *)(param_1 + (uint)*(byte *)(param_1 + 0x2fa) * 4 + 0x2a4) + 0x116)
                );
    return;
  }
  return;
}
