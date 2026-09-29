// OoT3D decomp @ 001c4c88  name=FUN_001c4c88  size=308

void FUN_001c4c88(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_30 [12];
  undefined1 auStack_24 [12];

  uVar1 = DAT_001c4dc0;
  iVar4 = DAT_001c4dbc;
  if (((*(uint *)(DAT_001c4dbc + 0x14) & 1) == 0) &&
     (iVar3 = FUN_003679b4(DAT_001c4dbc + 0x14), puVar2 = DAT_001c4dc8, iVar3 != 0)) {
    *DAT_001c4dc8 = DAT_001c4dc4;
    puVar2[1] = uVar1;
    puVar2[2] = uVar1;
  }
  if (((*(uint *)(iVar4 + 0x10) & 1) == 0) &&
     (iVar4 = FUN_003679b4(DAT_001c4dcc), puVar2 = DAT_001c4dd4, iVar4 != 0)) {
    *DAT_001c4dd4 = DAT_001c4dd0;
    puVar2[1] = uVar1;
    puVar2[2] = uVar1;
  }
  if ((*(int *)(param_4 + 0x6a0) == DAT_001c4dd8) && (param_2 == 2 || param_2 == 7)) {
    FUN_003735ac(auStack_24,param_4 + 0x148,DAT_001c4dc8);
    FUN_003735ac(auStack_30,param_4 + 0x148,DAT_001c4dd4);
    if (param_2 == 2) {
      iVar4 = param_4 + 0x6fc;
      iVar3 = param_4 + 0x6f0;
      param_4 = param_4 + 0x6b0;
    }
    else {
      iVar4 = param_4 + 0x77c;
      iVar3 = param_4 + 0x770;
      param_4 = param_4 + 0x730;
    }
    FUN_0035479c(param_4,auStack_30,auStack_24,iVar3,iVar4);
  }
  return;
}
