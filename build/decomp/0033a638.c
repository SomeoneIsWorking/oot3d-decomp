// OoT3D decomp @ 0033a638  name=FUN_0033a638  size=280

void FUN_0033a638(int *param_1,uint param_2,undefined4 param_3,undefined4 *param_4)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 local_30;
  undefined4 local_2c [3];

  if ((uint)*(ushort *)(param_1 + 1) < (uint)*(ushort *)((int)param_1 + 6)) {
    uVar2 = 0;
    iVar4 = *(int *)(*param_1 + (uint)*(ushort *)(param_1 + 1) * 4);
    local_2c[0] = *DAT_0033a750;
    local_2c[1] = DAT_0033a750[1];
    local_2c[2] = DAT_0033a750[2];
    do {
      if (param_2 == uVar2) {
        FUN_0037266c();
      }
      else {
        FUN_0036932c(iVar4,local_2c[uVar2]);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 3);
    iVar3 = *(int *)(iVar4 + 0x10);
    if (iVar3 != 0) {
      FUN_00331094(iVar3,0,5,&local_30);
      local_30 = *param_4;
      local_2c[0] = param_4[1];
      local_2c[1] = param_4[2];
      local_2c[2] = param_4[3];
      FUN_003688a8(iVar3,0,5,&local_30);
      *(undefined1 *)(*(int *)(iVar3 + 4) + 0xf) = 1;
    }
    *(undefined1 *)(iVar4 + 0xac) = 1;
    FUN_003721e0(iVar4,param_3);
    uVar1 = *(ushort *)(param_1 + 1);
    *(ushort *)(param_1 + 1) = uVar1 + 1;
    FUN_00372170(*(undefined4 *)(*param_1 + (uint)uVar1 * 4),0);
    return;
  }
  return;
}
