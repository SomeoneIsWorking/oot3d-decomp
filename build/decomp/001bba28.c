// OoT3D decomp @ 001bba28  name=FUN_001bba28  size=168

void FUN_001bba28(int param_1,undefined4 param_2)

{
  int iVar1;

  if ((*(short *)(param_1 + 0x1c) != 2) &&
     (iVar1 = FUN_00369334(DAT_001bbaec,param_2,param_1,2,5), iVar1 == 0)) {
    FUN_00373d0c(param_2);
  }
  FUN_0034f0f4(param_2,*(undefined4 *)(param_1 + 0x1c8c));
  FUN_003504d0(param_1,param_1 + 0x1c74);
  FUN_003508b8(param_1,*(undefined4 *)(param_1 + 0x1dc0),0);
                    /* WARNING: Subroutine does not return */
  FUN_00350be0(param_1 + 0x1e0);
}
