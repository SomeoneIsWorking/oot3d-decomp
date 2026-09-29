// OoT3D decomp @ 0029d868  name=FUN_0029d868  size=128

void FUN_0029d868(int param_1,int param_2)

{
  int iVar1;

  FUN_00376168(param_2,param_2 + 0x5c78,param_1 + 0x1c4);
  FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x1c4);
  iVar1 = FUN_0036e864(param_2,(int)*(short *)(param_1 + 0x1c));
  if (iVar1 != 0) {
    FUN_00373264(param_1,DAT_0029d8e8);
  }
  if (*(char *)(DAT_0029d8ec + param_2) != *(char *)(param_1 + 3)) {
    *(undefined1 *)(DAT_0029d8f0 + param_2) = 0xff;
  }
  *(short *)(param_1 + 0x1a6) = *(short *)(param_1 + 0x1a6) + 1;
  return;
}
