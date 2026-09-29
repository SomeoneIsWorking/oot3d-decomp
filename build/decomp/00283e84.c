// OoT3D decomp @ 00283e84  name=FUN_00283e84  size=244

void FUN_00283e84(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;

  iVar4 = FUN_0036aa20(DAT_00283f80,DAT_00283f7c,DAT_00283f78,param_2 + 0x208c,param_1,param_2,0xc1,
                       0,0xffffc000,0,0);
  *(int *)(param_1 + 0x224) = iVar4;
  uVar3 = DAT_00283f88;
  iVar2 = DAT_00283f84;
  if (iVar4 != 0) {
    iVar4 = 0;
    iVar7 = DAT_00283f84 + -0x14;
    while( true ) {
      puVar5 = (undefined4 *)(iVar2 + iVar4 * 0xc);
      iVar6 = FUN_0036aa20(*puVar5,puVar5[1],puVar5[2],param_2 + 0x208c,param_1,param_2,uVar3,0,0,0,
                           4);
      *(int *)(param_1 + iVar4 * 4 + 500) = iVar6;
      if (iVar6 == 0) break;
      iVar1 = iVar4 * 2;
      iVar4 = iVar4 + 1;
      *(undefined2 *)(iVar6 + 0x1a8) = *(undefined2 *)(iVar7 + iVar1);
      if (9 < iVar4) {
        *(undefined4 *)(param_1 + 0x1a4) = DAT_00283f8c;
        return;
      }
    }
  }
  FUN_00374428(param_1);
  return;
}
