// OoT3D decomp @ 00145ca8  name=FUN_00145ca8  size=396

void FUN_00145ca8(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;

  uVar1 = DAT_00145e38;
  iVar6 = DAT_00145e34;
  if (((*(uint *)(DAT_00145e34 + 0x70) & 1) == 0) &&
     (iVar5 = FUN_003679b4(DAT_00145e34 + 0x70), puVar2 = DAT_00145e3c, iVar5 != 0)) {
    *DAT_00145e3c = uVar1;
    puVar2[1] = uVar1;
    puVar2[2] = uVar1;
  }
  if (((*(uint *)(iVar6 + 0x6c) & 1) == 0) &&
     (iVar6 = FUN_003679b4(DAT_00145e40), puVar2 = DAT_00145e4c, uVar4 = DAT_00145e48,
     uVar3 = DAT_00145e44, iVar6 != 0)) {
    *DAT_00145e4c = uVar1;
    puVar2[1] = uVar3;
    puVar2[2] = uVar4;
  }
  iVar6 = 0;
  if (param_2 == 0xe) {
    iVar6 = 1;
  }
  else if (param_2 == 5) {
    iVar6 = 2;
  }
  if (iVar6 != 1) {
    if (iVar6 == 2) {
      FUN_003735ac(param_4 + 0x4a8,param_3,DAT_00145e50);
      iVar6 = DAT_00145e50;
      FUN_003735ac(param_4 + 0x4b4,param_3,DAT_00145e50 + 0xc);
      FUN_003735ac(param_4 + 0x4c0,param_3,iVar6 + 0x18);
      FUN_003735ac(param_4 + 0x4cc,param_3,iVar6 + 0x24);
      FUN_003735ac(param_4 + 0x4d8,param_3,iVar6 + 0x30);
      return;
    }
    return;
  }
  FUN_003735ac(param_4 + 0x3c,param_3,DAT_00145e3c);
  FUN_003735ac(param_4 + 0x49c,param_3,DAT_00145e4c);
  return;
}
