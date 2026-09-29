// OoT3D decomp @ 00229628  name=FUN_00229628  size=276

void FUN_00229628(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;

  uVar1 = DAT_00229740;
  iVar2 = DAT_0022973c;
  iVar4 = 0;
  do {
    puVar3 = (undefined4 *)(iVar2 + iVar4 * 0xc);
    iVar5 = param_1 + iVar4 * 0xc;
    uVar6 = puVar3[1];
    uVar7 = puVar3[2];
    *(undefined4 *)(iVar5 + 0x1b8) = *puVar3;
    *(undefined4 *)(iVar5 + 0x1bc) = uVar6;
    *(undefined4 *)(iVar5 + 0x1c0) = uVar7;
    uVar6 = FUN_0036aa20(*(undefined4 *)(iVar5 + 0x1b8),*(undefined4 *)(iVar5 + 0x1bc),
                         *(undefined4 *)(iVar5 + 0x1c0),param_2 + 0x208c,param_1,param_2,uVar1,0,0,0
                         ,(int)(short)((short)iVar4 + 1));
    iVar5 = iVar4 * 4;
    iVar4 = iVar4 + 1;
    *(undefined4 *)(param_1 + iVar5 + 0x230) = uVar6;
    uVar6 = DAT_00229748;
  } while (iVar4 < 9);
  *(undefined4 *)(param_1 + 0x224) = DAT_00229744;
  uVar1 = DAT_0022974c;
  *(undefined4 *)(param_1 + 0x228) = uVar6;
  *(undefined4 *)(param_1 + 0x22c) = uVar1;
  uVar8 = FUN_0036aa20(param_2 + 0x208c,param_1,param_2,DAT_00229750,0,0,0,0);
  iVar4 = (int)uVar8;
  iVar2 = (int)((ulonglong)uVar8 >> 0x20);
  if (iVar4 != 0) {
    iVar2 = DAT_00229754;
  }
  *(int *)(param_1 + 0x254) = iVar4;
  if (iVar4 != 0) {
    *(undefined2 *)(iVar2 + param_1) = 0;
  }
  uVar1 = DAT_00229758;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  *(undefined4 *)(param_1 + 0x1a4) = uVar1;
  return;
}
