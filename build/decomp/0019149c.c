// OoT3D decomp @ 0019149c  name=FUN_0019149c  size=204

void FUN_0019149c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;

  uVar1 = DAT_00191570;
  FUN_00373500(DAT_00191570,DAT_0019156c,DAT_00191568,param_1 + 0x37c);
  if (DAT_00191574 < *(uint *)(param_1 + 0x37c)) {
    FUN_0034e32c(uVar1,param_1,param_2);
  }
  FUN_0034e32c(*(undefined4 *)(param_1 + 0x37c),param_1,param_2);
  if (DAT_00191578 <= *(uint *)(param_1 + 0x37c)) {
    FUN_0034e32c(uVar1,param_1,param_2);
    FUN_0034e27c(param_2,param_1);
    *(undefined2 *)(param_1 + 0x2a0) = 7;
    FUN_0036be34(param_2,*(undefined2 *)
                          (*(int *)(param_1 + (uint)*(byte *)(param_1 + 0x2fa) * 4 + 0x2a4) + 0x116)
                );
    return;
  }
  *(undefined4 *)(param_1 + 0x2c8) = 0;
  return;
}
