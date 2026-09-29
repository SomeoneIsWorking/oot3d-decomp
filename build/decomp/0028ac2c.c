// OoT3D decomp @ 0028ac2c  name=FUN_0028ac2c  size=408

void FUN_0028ac2c(int param_1)

{
  int iVar1;
  undefined1 auStack_94 [48];
  undefined1 auStack_64 [12];
  undefined1 auStack_58 [12];
  undefined1 auStack_4c [12];
  undefined1 auStack_40 [48];

  FUN_00372224(auStack_40,param_1 + 0x148);
  if (*(short *)(param_1 + 0x1c) == 0) {
    if (*(int *)(param_1 + 0x354) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x354) + 0xac) = 1;
      FUN_003721e0(*(undefined4 *)(param_1 + 0x354),auStack_40);
      FUN_00372170(*(undefined4 *)(param_1 + 0x354),0);
    }
  }
  else if (*(int *)(param_1 + 0x358) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x358) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x358),auStack_40);
    FUN_00372170(*(undefined4 *)(param_1 + 0x358),0);
  }
  if (*(int *)(param_1 + 0x1bc) == DAT_0028adc4) {
    FUN_00372224(auStack_94,param_1 + 0x148);
    iVar1 = DAT_0028adc8;
    FUN_003735ac(auStack_64,auStack_94,DAT_0028adc8 + 0x18);
    FUN_003735ac(auStack_58,auStack_94,iVar1 + 0x24);
    FUN_003735ac(auStack_4c,auStack_94,iVar1 + 0x30);
    FUN_00362434(param_1 + 0x1c4,0,auStack_64,auStack_58,auStack_4c);
    FUN_003735ac(auStack_58,auStack_94,iVar1 + 0x6c);
    FUN_00362434(param_1 + 0x1c4,1,auStack_64,auStack_4c,auStack_58);
    FUN_003735ac(auStack_64,auStack_94,iVar1 + 0x90);
    FUN_003735ac(auStack_58,auStack_94,iVar1 + 0x9c);
    FUN_003735ac(auStack_4c,auStack_94,iVar1 + 0xa8);
    FUN_00362434(param_1 + 0x1c4,2,auStack_64,auStack_58,auStack_4c);
    FUN_003735ac(auStack_4c,auStack_94,iVar1 + 0xd8);
    FUN_00362434(param_1 + 0x1c4,3,auStack_64,auStack_4c,auStack_58);
  }
  return;
}
