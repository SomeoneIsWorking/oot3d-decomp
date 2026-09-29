// OoT3D decomp @ 004651f4  name=FUN_004651f4  size=212

void FUN_004651f4(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;

  uVar3 = FUN_0047e408(DAT_004652c8);
  uVar4 = (**(code **)(*param_3 + 8))(param_3,uVar3);
  FUN_0047e370(DAT_004652c8,param_2,uVar4,uVar3);
  uVar4 = DAT_004652d0;
  uVar3 = DAT_004652cc;
  iVar1 = DAT_004652c8;
  *(undefined4 *)(DAT_004652c8 + 0x1c) = 0x20;
  *(undefined4 *)(iVar1 + 0x24) = uVar3;
  FUN_0030cab0(iVar1 + 0xc,iVar1 + 0x10,uVar4);
  uVar3 = DAT_004652d4;
  *(undefined4 *)(DAT_004652d8 + 0x4c) = DAT_004652d4;
  *(undefined4 *)(DAT_004652d8 + 0x50) = uVar3;
  *(undefined4 *)(DAT_004652d8 + 0x48) = uVar3;
  iVar1 = DAT_004652dc;
  iVar5 = 0;
  do {
    FUN_0047e2d0(iVar1 + iVar5 * 0xa0,param_1,DAT_004652c8);
    iVar2 = DAT_004652e0;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x20);
  *(undefined4 *)(DAT_004652e0 + 8) = param_1;
  *(undefined4 *)(iVar2 + 0x14) = 0;
  return;
}
