// OoT3D decomp @ 00190c68  name=FUN_00190c68  size=88

void FUN_00190c68(int param_1,undefined4 param_2)

{
  int iVar1;

  iVar1 = FUN_00371e40();
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x124) = 0;
    *(undefined2 *)(param_1 + 0x2a0) = 0x10;
    return;
  }
  FUN_003724dc(DAT_00190cc0,DAT_00190cc0,param_1,param_2,
               *(undefined4 *)
                (*(int *)(param_1 + (uint)*(byte *)(param_1 + 0x2fa) * 4 + 0x2a4) + 0x1b8));
  return;
}
