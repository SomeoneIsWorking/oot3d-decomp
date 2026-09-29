// OoT3D decomp @ 00120ad0  name=FUN_00120ad0  size=76

void FUN_00120ad0(int param_1,int param_2)

{
  int iVar1;

  iVar1 = FUN_00370734(param_1 + 0x1a4);
  if (iVar1 != 0) {
    if (*(char *)(param_1 + 0xb7) == '\0') {
      iVar1 = 0;
      do {
        z_actor_003738d0(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                         *(undefined4 *)(param_1 + 0x30),param_2 + 0x208c,param_2,0x34,0);
        iVar1 = iVar1 + 1;
        *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x36) + 0x5555;
      } while (iVar1 < 3);
      FUN_00374444(param_2,param_1,param_1 + 0x28,0x50);
                    /* WARNING: Subroutine does not return */
      FUN_003702c8(10);
    }
    FUN_00373d40(param_1 + 0x1a4,3);
    *(undefined4 *)(param_1 + 0x6a0) = DAT_00120b1c;
  }
  return;
}
