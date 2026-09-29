// OoT3D decomp @ 00372d94  name=FUN_00372d94  size=372

void FUN_00372d94(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int local_28;

  iVar1 = DAT_00372f08;
  param_1[1] = param_2;
  param_1[2] = iVar1;
  local_28 = param_4;
  FUN_003103a4(*param_1);
  iVar1 = *(int *)param_1[1] + *(int *)(*(int *)param_1[1] + 0x14);
  iVar1 = *(int *)(iVar1 + 0xc) + iVar1;
  iVar2 = 0;
  iVar3 = *(int *)(iVar1 + 4);
  if (0 < iVar3) {
    do {
      if (iVar2 < iVar3) {
        iVar3 = *(int *)(iVar1 + 8 + iVar2 * 4) + iVar1;
      }
      else {
        iVar3 = 0;
      }
      if (*(char *)(iVar3 + 4) == '\x02') {
        iVar3 = *(int *)(iVar3 + 8);
        iVar4 = *param_1;
        uVar5 = *(undefined4 *)(param_1[1] + 0x10);
        *(undefined4 *)(*(int *)(iVar4 + 4) + iVar3 * 0x124 + 0x11c) =
             *(undefined4 *)(param_1[1] + 0x14);
        *(undefined4 *)(*(int *)(iVar4 + 4) + iVar3 * 0x124 + 0x118) = uVar5;
        *(undefined4 *)(*(int *)(*param_1 + 4) + iVar3 * 0x124 + 0x120) =
             *(undefined4 *)(param_1[1] + 0x18);
      }
      iVar3 = *(int *)(iVar1 + 4);
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar3);
  }
  iVar2 = 0;
  if (0 < param_1[0x25]) {
    do {
      if ((int *)param_1[iVar2 + 5] != (int *)0x0) {
        (**(code **)(*(int *)param_1[iVar2 + 5] + 4))();
      }
      param_1[iVar2 + 5] = 0;
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_1[0x25]);
  }
  iVar2 = *(int *)(iVar1 + 4);
  param_1[0x25] = iVar2;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  param_1[0x25] = iVar2;
  iVar3 = 0;
  if (0 < iVar2) {
    do {
      if (iVar3 < *(int *)(iVar1 + 4)) {
        local_28 = *(int *)(iVar1 + 8 + iVar3 * 4) + iVar1;
      }
      else {
        local_28 = 0;
      }
      iVar2 = MaterialAnimationPlayer_004bdcd0(param_1,&local_28);
      iVar4 = iVar3 + 1;
      param_1[iVar3 + 5] = iVar2;
      iVar3 = iVar4;
    } while (iVar4 < param_1[0x25]);
  }
  return;
}
