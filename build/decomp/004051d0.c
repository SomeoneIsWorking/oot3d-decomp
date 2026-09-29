// OoT3D decomp @ 004051d0  name=FUN_004051d0  size=108

void FUN_004051d0(int param_1)

{
  undefined4 uVar1;

  if (*(char *)(param_1 + 0x4ba) != '\0') {
    *(undefined1 *)(param_1 + 0x4ba) = 0;
    if (*(char *)(param_1 + 0x4b8) != '\0') {
      uVar1 = FUN_0030c8bc();
      FUN_0030ab78(uVar1,param_1 + 0x200);
      FUN_0030b304(param_1 + 0x20c);
    }
    FUN_0030afc0(param_1);
    FUN_00405604(param_1 + 600);
                    /* WARNING: Subroutine does not return */
    FUN_0030c9b8(*(undefined4 *)(param_1 + 0x1f0),param_1 + 0xd4);
  }
  return;
}
