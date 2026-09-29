// OoT3D decomp @ 00307840  name=FUN_00307840  size=116

undefined4 FUN_00307840(int param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 local_10;

  iVar3 = *(int *)(param_1 + param_2 * 0x400 + param_3 * 4 + 0x418);
  if ((iVar3 != 0) &&
     (local_10 = param_4, iVar2 = FUN_00305980(param_1 + 0xc18,param_4,&local_10), iVar2 != 0)) {
    FUN_00305950(iVar3,iVar2,local_10);
    uVar1 = DAT_003078b4;
    if (param_5 != 0) {
      *(undefined1 *)(iVar3 + 0x14) = 1;
      *(undefined4 *)(iVar3 + 0x18) = uVar1;
    }
    return 1;
  }
  return 0;
}
