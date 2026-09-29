// OoT3D decomp @ 00408664  name=FUN_00408664  size=96

void FUN_00408664(int param_1)

{
  undefined4 uVar1;

  if (*(char *)(param_1 + 0x44a) != '\0') {
    *(undefined1 *)(param_1 + 0x44a) = 0;
    if (*(char *)(param_1 + 0x448) != '\0') {
      uVar1 = FUN_0030c8bc();
      FUN_0030ab78(uVar1,param_1 + 0x198);
      FUN_0030b304(param_1 + 0x1a4);
    }
    FUN_0030afc0(param_1);
                    /* WARNING: Subroutine does not return */
    FUN_0030c9b8(*(undefined4 *)(param_1 + 0x194),param_1 + 0xd4);
  }
  return;
}
