// OoT3D decomp @ 003413ec  name=FUN_003413ec  size=412

void FUN_003413ec(int *param_1,int param_2,int param_3,undefined4 param_4,int param_5,
                 undefined4 param_6,undefined1 param_7,int param_8,int param_9)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_r3;
  int *piVar5;

  FUN_0030f964();
  *param_1 = extraout_r3;
  *(char *)(param_1 + 0x1d) = (char)*(undefined4 *)(**(int **)(extraout_r3 + 0x18) + 8);
  puVar1 = DAT_00341588;
  param_1[1] = param_2;
  if (((*puVar1 & 1) == 0) && (iVar4 = FUN_003679b4(DAT_00341588), iVar4 != 0)) {
    FUN_0036788c(DAT_0034158c);
  }
  piVar5 = *(int **)(DAT_0034158c + 0x17c);
  piVar5[2] = param_5;
  iVar4 = (**(code **)(*piVar5 + 8))(piVar5,*param_1,1);
  uVar2 = DAT_00341598;
  param_1[10] = iVar4;
  piVar5[2] = 0;
  iVar4 = param_1[10];
  *(undefined4 *)(iVar4 + 0x40) = uVar2;
  *(undefined4 *)(iVar4 + 0x44) = uVar2;
  *(undefined4 *)(iVar4 + 0x48) = uVar2;
  FUN_0030fd98(DAT_0034159c,param_1[10]);
  uVar3 = DAT_003415a0;
  iVar4 = param_1[10];
  *(undefined4 *)(iVar4 + 0x24) = DAT_003415a0;
  *(undefined4 *)(iVar4 + 0x28) = uVar3;
  *(undefined4 *)(iVar4 + 0x2c) = uVar3;
  param_1[3] = 0;
  param_1[4] = param_3;
  param_1[5] = (int)param_1;
  param_1[8] = (int)(param_1 + 2);
  if (param_1[10] != 0) {
    FUN_00347774();
  }
  *(undefined1 *)((int)param_1 + 0x51) = param_7;
  if (param_8 == 0) {
    iVar4 = FUN_0035010c((short)(ushort)*(byte *)(param_1 + 0x1d) * 0x34);
    param_1[0x1e] = iVar4;
    iVar4 = FUN_0035010c((short)(ushort)*(byte *)(param_1 + 0x1d) * 0x34);
    param_1[0x1f] = iVar4;
    *(undefined1 *)((int)param_1 + 0x82) = 1;
  }
  else {
    param_1[0x1e] = param_8;
    param_1[0x1f] = param_9;
  }
  FUN_00360190(uVar2,uVar3,uVar3,uVar3,param_1,param_3,param_6,1);
  *(int *)(DAT_003415a4 + 8) = *(int *)(DAT_003415a4 + 8) + 1;
  return;
}
