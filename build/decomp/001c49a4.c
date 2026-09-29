// OoT3D decomp @ 001c49a4  name=FUN_001c49a4  size=344

void FUN_001c49a4(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;

  uVar1 = DAT_001c4b00;
  iVar5 = DAT_001c4afc;
  if (((*(uint *)(DAT_001c4afc + 8) & 1) == 0) &&
     (iVar4 = FUN_003679b4(DAT_001c4afc + 8), puVar2 = DAT_001c4b04, iVar4 != 0)) {
    *DAT_001c4b04 = uVar1;
    puVar2[1] = uVar1;
    puVar2[2] = uVar1;
  }
  if (((*(uint *)(iVar5 + 4) & 1) == 0) &&
     (iVar5 = FUN_003679b4(DAT_001c4b08), puVar2 = DAT_001c4b14, uVar3 = DAT_001c4b10, iVar5 != 0))
  {
    *DAT_001c4b14 = DAT_001c4b0c;
    puVar2[1] = uVar3;
    puVar2[2] = uVar1;
  }
  if (param_2 == 3) {
    FUN_003735ac(param_4 + 0x6f4,param_3,DAT_001c4b14);
  }
  else if (param_2 == 5) {
    FUN_003735ac(param_4 + 0x6d0,param_3,DAT_001c4b14);
  }
  else if (param_2 == 7) {
    FUN_003735ac(param_4 + 0x6e8,param_3,DAT_001c4b14);
  }
  else if (param_2 == 9) {
    FUN_003735ac(param_4 + 0x6dc,param_3,DAT_001c4b14);
  }
  FUN_0034f184(param_4 + 0x640,param_2,0,9,10,param_3);
  return;
}
