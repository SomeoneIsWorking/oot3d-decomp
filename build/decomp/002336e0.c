// OoT3D decomp @ 002336e0  name=FUN_002336e0  size=444

void FUN_002336e0(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;

  uVar3 = DAT_002338ac;
  uVar2 = DAT_002338a8;
  uVar1 = DAT_002338a4;
  iVar7 = DAT_002338a0;
  if ((param_2 == 0) && (*(short *)(DAT_0023389c + param_4) != 0)) {
    if (((*(uint *)(DAT_002338a0 + 0x14) & 1) == 0) &&
       (iVar6 = FUN_003679b4(DAT_002338a0 + 0x14), puVar4 = DAT_002338b0, iVar6 != 0)) {
      *DAT_002338b0 = uVar1;
      puVar4[1] = uVar2;
      puVar4[2] = uVar3;
    }
    if (((*(uint *)(iVar7 + 0x10) & 1) == 0) &&
       (iVar6 = FUN_003679b4(DAT_002338b4), puVar4 = DAT_002338bc, iVar6 != 0)) {
      *DAT_002338bc = DAT_002338b8;
      puVar4[1] = uVar3;
      puVar4[2] = uVar3;
    }
    uVar5 = DAT_002338c0;
    if (((*(uint *)(iVar7 + 0xc) & 1) == 0) &&
       (iVar6 = FUN_003679b4(DAT_002338c4), puVar4 = DAT_002338c8, iVar6 != 0)) {
      *DAT_002338c8 = uVar1;
      puVar4[1] = uVar2;
      puVar4[2] = uVar5;
    }
    if (((*(uint *)(iVar7 + 8) & 1) == 0) &&
       (iVar7 = FUN_003679b4(DAT_002338cc), puVar4 = DAT_002338d4, iVar7 != 0)) {
      *DAT_002338d4 = DAT_002338d0;
      puVar4[1] = uVar3;
      puVar4[2] = uVar5;
    }
    FUN_003735ac(param_4 + 0x570,param_3,DAT_002338b0);
    FUN_003735ac(param_4 + 0x564,param_3,DAT_002338bc);
    FUN_003735ac(param_4 + 0x588,param_3,DAT_002338c8);
    FUN_003735ac(param_4 + 0x57c,param_3,DAT_002338d4);
    FUN_0035479c(param_4 + 0x524,param_4 + 0x564,param_4 + 0x570,param_4 + 0x57c,param_4 + 0x588);
  }
  return;
}
