// OoT3D decomp @ 001ca970  name=FUN_001ca970  size=132

void FUN_001ca970(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if ((*(byte *)(param_1 + 0x1d5) & 2) != 0) {
    *(undefined2 *)(param_1 + 0x29c) = 0x1e;
    FUN_00375c10(param_2,*(undefined1 *)(param_1 + 0x29e));
    FUN_00372244(param_2 + 0x5fcc,0x2d,DAT_001ca9f4);
    *(undefined4 *)(param_1 + 0x1bc) = DAT_001ca9f8;
    FUN_00371808(param_2,0xbc2,0x32,param_1,0);
    return;
  }
  FUN_00376168(param_2,param_2 + 0x5c78,param_1 + 0x1c4,param_4);
  return;
}
