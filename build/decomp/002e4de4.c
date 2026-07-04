// OoT3D decomp @ 002e4de4  name=FUN_002e4de4  size=168

undefined4 FUN_002e4de4(undefined4 param_1,undefined4 param_2,byte *param_3)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 extraout_r1;
  undefined8 uVar5;
  
  puVar2 = UNK_002e4e90;
  iVar1 = UNK_002e4e8c;
  uVar4 = param_2;
  do {
    uVar3 = (uint)*param_3;
    if (uVar3 == 0x14) {
      return 1;
    }
    if (uVar3 < 0x1a) {
      uVar5 = (**(code **)(iVar1 + uVar3 * 4))(param_1,param_2,param_3);
      uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
      if ((int)uVar5 == 0) {
        return 0;
      }
    }
    param_3 = param_3 + 8;
    if ((*puVar2 & 1) == 0) {
      uVar5 = FUN_003679b4(UNK_002e4e90);
      uVar4 = (int)((ulonglong)uVar5 >> 0x20);
      if ((int)uVar5 != 0) {
        FUN_0031ff30(UNK_002e4e94);
        uVar4 = UNK_002e4e9c;
      }
    }
    FUN_0031fe84(UNK_002e4e94,uVar4);
    uVar4 = extraout_r1;
  } while( true );
}

