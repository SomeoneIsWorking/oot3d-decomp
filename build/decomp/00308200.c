// OoT3D decomp @ 00308200  name=FUN_00308200  size=136

uint FUN_00308200(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 uStack_8;

  local_10 = *DAT_00308288;
  uStack_c = DAT_00308288[1];
  uStack_8 = DAT_00308288[2];
  uVar1 = 0;
  if (param_1 != 0) {
    return (uint)(param_2 == 0xde1 || param_2 == 0x6e00);
  }
  while( true ) {
    if (*(ushort *)((int)&local_10 + uVar1 * 2) == param_2) {
      return uVar1;
    }
    if (*(ushort *)((int)&local_10 + uVar1 * 2 + 2) == param_2) break;
    uVar1 = uVar1 + 2;
    if (9 < (int)uVar1) {
      return 5;
    }
  }
  return uVar1 + 1;
}
