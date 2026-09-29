// OoT3D decomp @ 002da2a0  name=FUN_002da2a0  size=312

void FUN_002da2a0(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint in_fpscr;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 auStack_50 [48];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;

  uVar2 = DAT_002da3dc;
  puVar1 = DAT_002da3d8;
  local_20 = VectorSignedToFloat(*DAT_002da3d8,(byte)(in_fpscr >> 0x15) & 3);
  local_1c = VectorSignedToFloat(DAT_002da3d8[1],(byte)(in_fpscr >> 0x15) & 3);
  local_18 = DAT_002da3dc;
  iVar5 = *(int *)(param_1 + 0x128);
  *(undefined4 *)(iVar5 + 0x3c) = local_20;
  *(undefined4 *)(iVar5 + 0x40) = local_1c;
  *(undefined4 *)(iVar5 + 0x44) = uVar2;
  if (((*DAT_002da3e0 & 1) == 0) &&
     (iVar5 = FUN_003679b4(DAT_002da3e0), puVar4 = DAT_002da3e8, uVar3 = DAT_002da3e4, iVar5 != 0))
  {
    *DAT_002da3e8 = uVar2;
    puVar4[1] = uVar3;
    puVar4[2] = uVar3;
    puVar4[3] = uVar3;
    puVar4[4] = uVar3;
    puVar4[5] = uVar2;
    puVar4[6] = uVar3;
    puVar4[7] = uVar3;
    puVar4[8] = uVar3;
    puVar4[9] = uVar3;
    puVar4[10] = uVar2;
    puVar4[0xb] = uVar3;
  }
  FUN_00372224(auStack_50,DAT_002da3e8);
  local_5c = VectorSignedToFloat(*puVar1,(byte)(in_fpscr >> 0x15) & 3);
  local_58 = VectorSignedToFloat(puVar1[1],(byte)(in_fpscr >> 0x15) & 3);
  local_54 = uVar2;
  (**(code **)(**(int **)(param_1 + 0x128) + 8))
            (*(int **)(param_1 + 0x128),auStack_50,auStack_50,&local_5c);
  return;
}
