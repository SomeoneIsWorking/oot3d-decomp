// OoT3D decomp @ 001e06a4  name=FUN_001e06a4  size=140

void FUN_001e06a4(int param_1)

{
  undefined4 uVar1;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  if (*(int *)(param_1 + 0x1ac) != 0) {
    if (*(short *)(param_1 + 0x1c) == 0xb) {
      local_1c = *DAT_001e0730;
      uStack_18 = DAT_001e0730[1];
      uStack_14 = DAT_001e0730[2];
      uStack_10 = DAT_001e0730[3];
      uVar1 = FUN_003687a8(*(undefined4 *)(param_1 + 0x1ac));
      FUN_003589cc(uVar1,4);
      FUN_00358964(uVar1,4,&local_1c);
    }
    FUN_003721e0(*(undefined4 *)(param_1 + 0x1ac),param_1 + 0x148);
    *(undefined1 *)(*(int *)(param_1 + 0x1ac) + 0xac) = 1;
    FUN_00372170(*(undefined4 *)(param_1 + 0x1ac),0);
    return;
  }
  return;
}

