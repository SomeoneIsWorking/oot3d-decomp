// OoT3D decomp @ 003d526c  name=FUN_003d526c  size=288

void FUN_003d526c(int param_1,undefined4 param_2)

{
  FUN_003731e0(param_1 + 0x1d4);
  FUN_003705a0(DAT_003d5390,DAT_003d538c,param_1 + 0x6c);
  *(undefined2 *)(param_1 + 0x11a) = 0x28;
  if ((*(uint *)(param_1 + 4) & 0x8000) == 0) {
    if ((*(uint *)(param_1 + 0x11c) & 0x400000) != 0) {
      if (*(char *)(param_1 + 0x614) == '\0') {
        FUN_00370378(param_1 + 0xbc,0x4000,0x200);
        *(short *)(param_1 + 0xc0) = *(short *)(param_1 + 0xc0) + 0x1780;
      }
      else {
        *(short *)(param_1 + 0xbe) = *(short *)(param_1 + 0xbe) + 0x1780;
      }
    }
    if (((*(ushort *)(param_1 + 0x90) & 1) != 0) || (*(int *)(param_1 + 0x84) == -0x39060000)) {
      FUN_003642f4(param_2,param_1 + 0x28,DAT_003d5398,DAT_003d5398,
                   (int)(short)(int)(*(float *)(param_1 + 0x54) * DAT_003d5394),0,0xff,0xff,0xff,
                   0xff,0xff,0,0,1,0xb,1);
      *(undefined2 *)(param_1 + 0x11a) = 0;
      *(undefined4 *)(param_1 + 0x598) = DAT_003d539c;
    }
  }
  return;
}
