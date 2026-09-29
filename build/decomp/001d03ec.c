// OoT3D decomp @ 001d03ec  name=FUN_001d03ec  size=248

void FUN_001d03ec(int param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint in_fpscr;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  undefined1 auStack_44 [48];

  if (param_3 == 0) {
    return;
  }
  FUN_00368944(param_1,param_4,0);
  FUN_00372224(auStack_44,param_2);
  FUN_003713fc(DAT_001d04e4,DAT_001d04e8,DAT_001d04e4,auStack_44,1);
  local_54 = (float)VectorUnsignedToFloat(0xff - param_3,(byte)(in_fpscr >> 0x15) & 3);
  local_54 = local_54 * DAT_001d04ec;
  if ((int)local_54 < 0x3f800000) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x194) + 0x10);
    local_50 = local_54;
    local_4c = local_54;
    local_48 = local_54;
    FUN_003688a8(iVar2,0,4,&local_54);
    *(undefined1 *)(*(int *)(iVar2 + 4) + 0xe) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x194),auStack_44);
    *(undefined1 *)(*(int *)(param_1 + 0x194) + 0xac) = 1;
    FUN_003687a8(*(undefined4 *)(param_1 + 0x194));
    FUN_0036879c();
    uVar1 = FUN_003687a8(*(undefined4 *)(param_1 + 0x194));
    FUN_00368704(*(undefined4 *)(DAT_001d04f0 + param_4),uVar1);
    FUN_00372170(*(undefined4 *)(param_1 + 0x194),0);
  }
  return;
}
