// OoT3D decomp @ 00305754  name=FUN_00305754  size=52

void FUN_00305754(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  *(undefined4 *)(param_1 + 0x934) = 0xffffffff;
  uVar1 = DAT_0030578c;
  iVar2 = *(int *)(param_1 + 0x920);
  puVar3 = (undefined4 *)(DAT_00305788 + *(int *)(param_1 + 0x120) * 8);
  uVar4 = puVar3[1];
  *(undefined4 *)(iVar2 + 0x80) = *puVar3;
  *(undefined4 *)(iVar2 + 0x84) = uVar4;
  *(undefined4 *)(iVar2 + 0x88) = uVar1;
  return;
}

