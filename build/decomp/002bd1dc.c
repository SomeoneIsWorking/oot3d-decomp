// OoT3D decomp @ 002bd1dc  name=FUN_002bd1dc  size=784

/* WARNING: Removing unreachable block (ram,0x002bd304) */
/* WARNING: Removing unreachable block (ram,0x002bd308) */
/* WARNING: Removing unreachable block (ram,0x002bd30c) */
/* WARNING: Removing unreachable block (ram,0x002bd310) */
/* WARNING: Removing unreachable block (ram,0x002bd314) */
/* WARNING: Removing unreachable block (ram,0x002bd33c) */
/* WARNING: Removing unreachable block (ram,0x002bd34c) */
/* WARNING: Removing unreachable block (ram,0x002bd328) */
/* WARNING: Removing unreachable block (ram,0x002bd330) */
/* WARNING: Removing unreachable block (ram,0x002bd334) */

void FUN_002bd1dc(undefined4 *param_1,uint param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  int iVar10;
  uint local_34;
  uint local_30;
  undefined4 *puStack_2c;
  uint uStack_28;
  undefined4 local_24;

  puVar2 = (undefined1 *)param_1[1];
  puVar8 = (undefined1 *)param_1[2];
  local_30 = (int)puVar8 - (int)puVar2;
  if (local_30 < param_2) {
    iVar10 = param_2 - local_30;
    if (iVar10 != 0) {
      local_30 = local_30 + iVar10;
      local_24._0_1_ = (undefined1)param_3;
      uVar1 = (undefined1)local_24;
      if ((uint)(param_1[3] - (int)puVar2) < local_30) {
        uVar4 = param_1[2] - param_1[1];
        local_34 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
        if (local_34 < uVar4 + 0x20) {
          local_34 = uVar4 + 0x20;
        }
        if (local_30 < local_34) {
          puVar6 = &local_34;
        }
        else {
          puVar6 = &local_30;
        }
        uVar4 = *puVar6;
        puStack_2c = param_1;
        uStack_28 = param_2;
        local_24 = param_3;
        puVar2 = (undefined1 *)(*(code *)**(undefined4 **)*param_1)((undefined4 *)*param_1,uVar4);
        if (puVar2 == (undefined1 *)0x0) {
          (**(code **)(*(int *)*param_1 + 8))
                    ((int *)*param_1,s_MoLiveAllocator__not_enough_memo_002bd4ec,uVar4);
        }
        puVar3 = puVar2;
        for (puVar9 = (undefined1 *)param_1[1]; puVar9 != puVar8; puVar9 = puVar9 + 1) {
          if (puVar3 != (undefined1 *)0x0) {
            *puVar3 = *puVar9;
          }
          puVar3 = puVar3 + 1;
        }
        puVar9 = puVar2 + ((int)puVar8 - param_1[1]);
        for (iVar5 = iVar10; iVar5 != 0; iVar5 = iVar5 + -1) {
          if (puVar9 != (undefined1 *)0x0) {
            *puVar9 = uVar1;
          }
          puVar9 = puVar9 + 1;
        }
        puVar3 = (undefined1 *)param_1[2];
        puVar9 = puVar2 + (int)(puVar8 + (iVar10 - param_1[1]));
        for (; puVar8 != puVar3; puVar8 = puVar8 + 1) {
          if (puVar9 != (undefined1 *)0x0) {
            *puVar9 = *puVar8;
          }
          puVar9 = puVar9 + 1;
        }
        iVar5 = param_1[2] - param_1[1];
        if (0 < iVar5) {
          for (iVar7 = iVar5 >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
          }
        }
        (**(code **)(*(int *)*param_1 + 4))();
        param_1[1] = puVar2;
        param_1[2] = puVar2 + iVar10 + iVar5;
        param_1[3] = puVar2 + uVar4;
        return;
      }
      param_1[2] = puVar8 + iVar10;
      if (puVar8 + iVar10 < puVar8) {
        puVar3 = puVar8 + -iVar10;
        puVar9 = puVar8;
        for (puVar2 = puVar3; puVar2 != puVar8; puVar2 = puVar2 + 1) {
          if (puVar9 != (undefined1 *)0x0) {
            *puVar9 = *puVar2;
          }
          puVar9 = puVar9 + 1;
        }
        uVar4 = (int)puVar3 - (int)puVar8;
        if (0 < (int)uVar4) {
          puVar2 = puVar8;
          if ((uVar4 & 1) != 0) {
            puVar3 = puVar3 + -1;
            puVar2 = puVar8 + -1;
            *puVar2 = *puVar3;
          }
          for (iVar5 = (int)uVar4 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
            puVar2[-1] = puVar3[-1];
            puVar3 = puVar3 + -2;
            puVar2 = puVar2 + -2;
            *puVar2 = *puVar3;
          }
        }
        uVar4 = (int)(puVar8 + iVar10) - (int)puVar8;
        if (0 < (int)uVar4) {
          puVar2 = puVar8 + -1;
          if ((uVar4 & 1) != 0) {
            *puVar8 = (undefined1)local_24;
            puVar2 = puVar8;
          }
          for (iVar10 = (int)uVar4 >> 1; iVar10 != 0; iVar10 = iVar10 + -1) {
            puVar2[1] = (undefined1)local_24;
            puVar2 = puVar2 + 2;
            *puVar2 = (undefined1)local_24;
          }
        }
      }
      else {
        for (; iVar10 != 0; iVar10 = iVar10 + -1) {
          if (puVar8 != (undefined1 *)0x0) {
            *puVar8 = (undefined1)local_24;
          }
          puVar8 = puVar8 + 1;
        }
      }
    }
  }
  else if ((local_30 != param_2) && (puVar2 != puVar8)) {
    iVar10 = (int)puVar8 - (int)(puVar2 + param_2);
    if (0 < iVar10) {
      for (iVar10 = iVar10 >> 1; iVar10 != 0; iVar10 = iVar10 + -1) {
      }
    }
    param_1[2] = puVar2 + param_2;
    return;
  }
  return;
}
