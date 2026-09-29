// OoT3D decomp @ 001910e0  name=FUN_001910e0  size=184

void FUN_001910e0(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;

  uVar1 = DAT_0019119c;
  FUN_00373500(DAT_0019119c,DAT_0019119c,DAT_00191198,param_1 + 0x378);
  if (DAT_001911a0 <= *(int *)(param_1 + 0x378)) {
    *(undefined4 *)(param_1 + 0x378) = uVar1;
  }
  FUN_0034e418(param_1);
  if (((*(int *)(param_1 + 0x378) == 0x3f800000) &&
      (iVar2 = FUN_003769d8(param_2 + 0x28a0), iVar2 == 5)) &&
     (iVar2 = FUN_00346964(param_2), iVar2 != 0)) {
    *(undefined2 *)(param_1 + 0x2a0) = *(undefined2 *)(param_1 + 0x2a2);
    FUN_0036be34(param_2,*(undefined2 *)
                          (*(int *)(param_1 + (uint)*(byte *)(param_1 + 0x2fa) * 4 + 0x2a4) + 0x116)
                );
    return;
  }
  return;
}
