// OoT3D decomp @ 00404890  name=FUN_00404890  size=68

void FUN_00404890(int param_1)

{
  if (*(char *)(param_1 + 0x22de) != '\0') {
    *(undefined1 *)(param_1 + 0x22de) = 0;
    FUN_0030afc0(param_1);
                    /* WARNING: Subroutine does not return */
    FUN_0030c9b8(*(undefined4 *)(param_1 + 0x2094),param_1 + 0xd4);
  }
  return;
}
