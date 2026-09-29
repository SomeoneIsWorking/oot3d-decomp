// OoT3D decomp @ 001ff184  name=FUN_001ff184  size=276

void FUN_001ff184(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_28 [4];
  undefined4 local_24;
  float local_20;
  undefined4 local_1c;
  undefined1 auStack_18 [4];

  FUN_003510b0(param_1,DAT_001ff298);
  FUN_00353dd0(param_2,param_1 + 0x1ac);
  FUN_00353d24(param_2,param_1 + 0x1ac,param_1,DAT_001ff29c);
  FUN_0037632c(param_1,param_1 + 0x1ac);
  FUN_00350d20(param_1 + 0xa0,0,DAT_001ff2a0);
  local_24 = *(undefined4 *)(param_1 + 0x28);
  local_20 = *(float *)(param_1 + 0x2c) + DAT_001ff2a4;
  local_1c = *(undefined4 *)(param_1 + 0x30);
  uVar2 = FUN_0036e81c(param_2 + 0xa98,auStack_18,auStack_28,param_1,&local_24);
  if (uVar2 < DAT_001ff2a8) {
    *(uint *)(param_1 + 0x2c) = uVar2;
    FUN_0036df4c(param_1 + 8,param_1 + 0x28);
    cVar1 = FUN_00363c10(param_2 + 0x3a58,
                         (int)*(short *)(DAT_001ff2ac +
                                        ((uint)(int)*(short *)(param_1 + 0x1c) >> 7 & 2)));
    *(char *)(param_1 + 0x204) = cVar1;
    if (-1 < cVar1) {
      *(undefined4 *)(param_1 + 0x1a4) = DAT_001ff2b0;
      *(undefined4 *)(param_1 + 0x1a8) = 0;
      *(undefined1 *)(param_1 + 0x19b) = 1;
      return;
    }
  }
  FUN_00374428(param_1);
  return;
}
