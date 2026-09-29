// OoT3D decomp @ 0048be78  name=FUN_0048be78  size=240

undefined4 FUN_0048be78(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;

  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x3c);
  uVar1 = param_2 >> 0x18;
  uVar4 = 0xffffffff;
  puVar5 = (undefined4 *)0x0;
  switch(uVar1) {
  default:
    goto switchD_00495654_caseD_0;
  case 1:
    if (uVar1 == 1) {
      puVar3 = (uint *)(iVar2 + *(int *)(iVar2 + 4));
      if ((param_2 & 0xffffff) < *puVar3) {
        puVar5 = (undefined4 *)((int)puVar3 + puVar3[(param_2 & 0xffffff) * 2 + 2]);
      }
    }
    break;
  case 3:
    if (uVar1 == 3) {
      puVar3 = (uint *)(iVar2 + *(int *)(iVar2 + 0x14));
      if ((param_2 & 0xffffff) < *puVar3) {
        puVar5 = (undefined4 *)((int)puVar3 + puVar3[(param_2 & 0xffffff) * 2 + 2]);
      }
    }
    break;
  case 5:
    if (uVar1 == 5) {
      puVar3 = (uint *)(iVar2 + *(int *)(iVar2 + 0x1c));
      if ((param_2 & 0xffffff) < *puVar3) {
        puVar5 = (undefined4 *)((int)puVar3 + puVar3[(param_2 & 0xffffff) * 2 + 2]);
      }
    }
    goto joined_r0x00495730;
  case 6:
    if (uVar1 == 6) {
      puVar3 = (uint *)(iVar2 + *(int *)(iVar2 + 0x24));
      if ((param_2 & 0xffffff) < *puVar3) {
        puVar5 = (undefined4 *)((int)puVar3 + puVar3[(param_2 & 0xffffff) * 2 + 2]);
      }
    }
joined_r0x00495730:
    if (puVar5 == (undefined4 *)0x0) {
      return 0xffffffff;
    }
    goto LAB_00495734;
  }
  if (puVar5 != (undefined4 *)0x0) {
LAB_00495734:
    uVar4 = *puVar5;
  }
switchD_00495654_caseD_0:
  return uVar4;
}
