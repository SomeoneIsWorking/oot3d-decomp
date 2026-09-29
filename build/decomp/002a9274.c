// OoT3D decomp @ 002a9274  name=FUN_002a9274  size=532

void FUN_002a9274(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;

  uVar1 = DAT_002a948c;
  iVar4 = DAT_002a9488;
  if (((*(uint *)(DAT_002a9488 + 0x14) & 1) == 0) &&
     (iVar3 = FUN_003679b4(DAT_002a9488 + 0x14), puVar2 = DAT_002a9490, iVar3 != 0)) {
    *DAT_002a9490 = uVar1;
    puVar2[1] = uVar1;
    puVar2[2] = uVar1;
  }
  if (((*(uint *)(iVar4 + 0x10) & 1) == 0) &&
     (iVar3 = FUN_003679b4(DAT_002a9494), puVar2 = DAT_002a9498, iVar3 != 0)) {
    *DAT_002a9498 = uVar1;
    puVar2[1] = uVar1;
    puVar2[2] = uVar1;
  }
  if (((*(uint *)(iVar4 + 0xc) & 1) == 0) &&
     (iVar3 = FUN_003679b4(DAT_002a949c), puVar2 = DAT_002a94a0, iVar3 != 0)) {
    *DAT_002a94a0 = uVar1;
    puVar2[1] = uVar1;
    puVar2[2] = uVar1;
  }
  if (((*(uint *)(iVar4 + 8) & 1) == 0) &&
     (iVar4 = FUN_003679b4(DAT_002a94a4), puVar2 = DAT_002a94a8, iVar4 != 0)) {
    *DAT_002a94a8 = uVar1;
    puVar2[1] = uVar1;
    puVar2[2] = uVar1;
  }
  if (param_2 == 0x20) {
    FUN_003735ac(param_4 + 0x2fc,param_3,DAT_002a9490);
  }
  else if (param_2 == 0x1d) {
    FUN_003735ac(param_4 + 0x308,param_3,DAT_002a9490);
  }
  else if (param_2 == 0x17) {
    FUN_003735ac(param_4 + 0x3c,param_3,DAT_002a94a0);
  }
  else if (param_2 == 0x14) {
    FUN_003735ac(param_4 + 0x314,param_3,DAT_002a9498);
  }
  else if (param_2 == 0xe) {
    FUN_003735ac(param_4 + 800,param_3,DAT_002a9498);
  }
  if (*(short *)(param_4 + 0x254) == 2) {
    FUN_003735ac(param_4 + param_2 * 0xc + 0x344,param_3,DAT_002a9498);
  }
  FUN_00357750(param_2,param_4 + 0xb78,param_3);
  return;
}
