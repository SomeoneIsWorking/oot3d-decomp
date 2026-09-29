// OoT3D decomp @ 00341268  name=FUN_00341268  size=356

void FUN_00341268(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5,undefined1 param_6,int param_7,undefined4 param_8)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;

  FUN_0030f964();
  *(char *)(param_1 + 0x1d) = (char)*(undefined4 *)(**(int **)(param_4 + 0x18) + 8);
  puVar1 = DAT_003413cc;
  param_1[1] = param_2;
  if (((*puVar1 & 1) == 0) && (iVar4 = FUN_003679b4(DAT_003413cc), iVar4 != 0)) {
    FUN_0036788c(DAT_003413d0);
  }
  iVar4 = (**(code **)(**(int **)(DAT_003413d0 + 0x17c) + 8))
                    (*(int **)(DAT_003413d0 + 0x17c),param_4,0);
  uVar2 = DAT_003413dc;
  param_1[10] = iVar4;
  *(undefined4 *)(iVar4 + 0x40) = uVar2;
  *(undefined4 *)(iVar4 + 0x44) = uVar2;
  *(undefined4 *)(iVar4 + 0x48) = uVar2;
  FUN_0030fd98(DAT_003413e0,param_1[10]);
  uVar3 = DAT_003413e4;
  iVar4 = param_1[10];
  *(undefined4 *)(iVar4 + 0x24) = DAT_003413e4;
  *(undefined4 *)(iVar4 + 0x28) = uVar3;
  *(undefined4 *)(iVar4 + 0x2c) = uVar3;
  *param_1 = 0;
  *(undefined1 *)((int)param_1 + 0x51) = param_6;
  if (param_7 == 0) {
    uVar5 = FUN_0035010c((short)(ushort)*(byte *)(param_1 + 0x1d) * 0x34);
    param_1[0x1e] = uVar5;
    uVar5 = FUN_0035010c((short)(ushort)*(byte *)(param_1 + 0x1d) * 0x34);
    param_1[0x1f] = uVar5;
  }
  else {
    param_1[0x1e] = param_7;
    param_1[0x1f] = param_8;
  }
  FUN_00360190(uVar2,uVar3,uVar3,uVar3,param_1,param_3,param_5,1);
  *(int *)(DAT_003413e8 + 8) = *(int *)(DAT_003413e8 + 8) + 1;
  return;
}
