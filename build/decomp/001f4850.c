// OoT3D decomp @ 001f4850  name=FUN_001f4850  size=136

void FUN_001f4850(int param_1,undefined4 param_2)

{
  undefined4 uVar1;

  FUN_00372f38(param_1,param_2,param_1 + 0x2d4,0,0);
  FUN_00372d4c(DAT_001f4a10,DAT_001f4a08,param_1 + 0xbc,DAT_001f4a0c);
  FUN_00350eb8(param_2,param_1 + 0x1a8);
  FUN_00350d48(param_2,param_1 + 0x1a8,param_1,DAT_001f4a14,param_1 + 0x1c8);
  uVar1 = FUN_0035011c(9);
  FUN_00350318(param_1 + 0xa0,uVar1,DAT_001f4a18);
  *(undefined1 *)(param_1 + 0x123) = 0x16;
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
