// OoT3D decomp @ 00485fdc  name=FUN_00485fdc  size=576

undefined4 FUN_00485fdc(int param_1,undefined4 param_2,undefined1 *param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int local_54;
  int local_50;
  int local_4c;
  int local_40;
  undefined1 *local_38;
  int iStack_34;
  undefined4 local_30;
  undefined1 *puStack_2c;
  int local_28;

  puVar5 = param_3 + param_4;
  local_38 = param_3;
  iStack_34 = param_1;
  local_30 = param_2;
  puStack_2c = param_3;
  local_28 = param_4;
  iVar2 = FUN_0048a674(param_1,param_2,&local_38,puVar5);
  if (iVar2 != 0) {
    iVar2 = FUN_0048c138(local_30,&local_54);
    if (iVar2 == 0) {
LAB_004861fc:
      *(undefined4 *)(param_1 + 4) = local_30;
      *(undefined1 **)(param_1 + 0x9c) = param_3;
      *(int *)(param_1 + 0xa0) = local_28;
      return 1;
    }
    puVar6 = (undefined1 *)((uint)(local_38 + local_54 * DAT_0048621c + 3) & 0xfffffffc);
    if ((int)puVar6 - (int)puVar5 < 1) {
      uVar4 = 0;
      uVar1 = (uint)((ulonglong)(uint)(local_54 * DAT_0048621c) * (ulonglong)DAT_00486220 >> 0x2a);
      puVar3 = local_38;
      if (uVar1 != 0) {
        do {
          if (puVar3 == (undefined1 *)0x0) {
            iVar2 = 0;
          }
          else {
            iVar2 = FUN_0048a868(puVar3,param_1 + 0x28);
          }
          FUN_0030cab0(param_1 + 0x34,param_1 + 0x38,iVar2 + 0xd4);
          uVar4 = uVar4 + 1;
          puVar3 = puVar3 + 0x4bc;
        } while (uVar4 < uVar1);
      }
      puVar3 = (undefined1 *)((uint)(puVar6 + local_40 * DAT_00486224 + 3) & 0xfffffffc);
      if ((int)puVar3 - (int)puVar5 < 1) {
        uVar4 = 0;
        uVar1 = (uint)((ulonglong)DAT_00486228 * (ulonglong)(uint)(local_40 * DAT_00486224) +
                       (ulonglong)DAT_00486228 >> 0x2a);
        local_38 = puVar6;
        if (uVar1 != 0) {
          do {
            if (puVar6 == (undefined1 *)0x0) {
              iVar2 = 0;
            }
            else {
              iVar2 = FUN_0048b028(puVar6,param_1 + 0x40);
            }
            FUN_0030cab0(param_1 + 0x4c,param_1 + 0x50,iVar2 + 0xd4);
            uVar4 = uVar4 + 1;
            puVar6 = puVar6 + 0x44c;
          } while (uVar4 < uVar1);
        }
        puVar6 = (undefined1 *)((uint)(puVar3 + local_4c * DAT_0048622c + 3) & 0xfffffffc);
        if ((int)puVar6 - (int)puVar5 < 1) {
          uVar4 = 0;
          uVar1 = (uint)((ulonglong)(uint)(local_4c * DAT_0048622c) * (ulonglong)DAT_00486230 >>
                        0x2b);
          local_38 = puVar3;
          if (uVar1 != 0) {
            do {
              if (puVar3 == (undefined1 *)0x0) {
                iVar2 = 0;
              }
              else {
                iVar2 = FUN_0048a804(puVar3,param_1 + 0x58);
              }
              FUN_0030cab0(param_1 + 100,param_1 + 0x68,iVar2 + 0xd4);
              uVar4 = uVar4 + 1;
              puVar3 = &DAT_000022e0 + (int)puVar3;
            } while (uVar4 < uVar1);
          }
          if ((int)(puVar6 + (local_50 * 0xcc - (int)puVar5)) < 1) {
            local_38 = puVar6;
            FUN_002ea044(param_1 + 0x74,puVar6);
            goto LAB_004861fc;
          }
        }
      }
    }
  }
  return 0;
}
