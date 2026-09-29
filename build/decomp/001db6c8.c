// OoT3D decomp @ 001db6c8  name=FUN_001db6c8  size=76

void FUN_001db6c8(int param_1,int param_2)

{
  ushort uVar1;

  uVar1 = *(ushort *)(param_1 + 0x1c) & 3;
  FUN_00350b88(param_2,param_1 + 0x1a4);
  if ((uVar1 == 2 || uVar1 == 3) && (0 < *(short *)(param_2 + 0x7f5a))) {
    *(short *)(param_2 + 0x7f5a) = *(short *)(param_2 + 0x7f5a) + -1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00350be0(param_1 + 0x214);
}
