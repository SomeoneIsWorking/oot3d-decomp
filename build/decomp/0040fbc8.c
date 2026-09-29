// OoT3D decomp @ 0040fbc8  name=FUN_0040fbc8  size=104

void FUN_0040fbc8(int *param_1,undefined4 param_2)

{
  undefined1 auStack_9c [144];

  FUN_00371738(auStack_9c,DAT_0040fc30,0x90);
  if (*(ushort *)(*param_1 + 0x20) == 0) {
    FUN_00303ebc(param_2,0,auStack_9c);
    return;
  }
  FUN_00303ebc(param_2,1,auStack_9c + (uint)*(ushort *)(*param_1 + 0x20) * 0x24);
  return;
}
