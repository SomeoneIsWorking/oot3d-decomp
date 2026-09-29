// OoT3D decomp @ 001cf908  name=FUN_001cf908  size=136

void FUN_001cf908(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;

  FUN_0036055c(param_1,param_2,DAT_001cf990,0);
  if ((*(short *)(param_1 + 0x104) == 0x57) && (3 < *(int *)(DAT_001cf994 + 0x4e8))) {
    *(undefined1 *)(DAT_001cf998 + param_2) = 1;
  }
  uVar2 = DAT_001cf9a0;
  uVar1 = DAT_001cf99c;
  *(uint *)(param_2 + 0x1710) = *(uint *)(param_2 + 0x1710) | 0x20000000;
  FUN_00360190(uVar1,uVar2,DAT_001cf9a4,param_2 + 0x254,param_1,0x46,2);
  *(float *)(param_2 + 0x2c) = *(float *)(param_2 + 0x2c) + DAT_001cf9a8;
  return;
}
