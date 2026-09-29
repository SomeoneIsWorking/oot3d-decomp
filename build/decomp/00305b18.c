// OoT3D decomp @ 00305b18  name=FUN_00305b18  size=648

void FUN_00305b18(int param_1,ushort *param_2,uint param_3,ushort *param_4,uint param_5,
                 undefined4 param_6)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ushort *puVar8;
  uint uVar9;
  bool bVar10;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int local_2c;
  int local_28;

  local_38 = *DAT_00305da0;
  uStack_34 = DAT_00305da0[1];
  uStack_30 = DAT_00305da0[2];
  cVar2 = *(char *)((int)&local_38 + *(int *)(param_1 + 0xe4));
  FUN_00306318(param_1,&local_28);
  iVar5 = FUN_0040c048(*(undefined4 *)(param_1 + 0xe4),param_6);
  if (iVar5 == 0) {
    param_5 = param_3;
    param_4 = param_2;
  }
  if (param_4 != (ushort *)0x0 && param_5 != 0) {
    if (cVar2 == '\0') {
      uVar9 = param_5 >> 1;
      goto LAB_00305c34;
    }
    if (cVar2 == '\x01') {
      uVar9 = 0;
      uVar7 = 0;
      puVar8 = param_4;
      if (param_5 != 0) {
        do {
          uVar6 = param_5 - uVar7;
          if (puVar8 == (ushort *)0x0 || param_5 == uVar7) {
LAB_00305c14:
            iVar5 = 0;
          }
          else {
            bVar3 = (byte)*puVar8;
            if (bVar3 < 0x80) {
              iVar5 = 1;
            }
            else {
              bVar10 = uVar6 == 2;
              if (1 < uVar6) {
                bVar10 = (bVar3 & 0xe0) == 0xc0;
              }
              if (bVar10) {
                iVar5 = 2;
              }
              else {
                bVar10 = uVar6 == 3;
                if (2 < uVar6) {
                  bVar10 = (bVar3 & 0xf0) == 0xe0;
                }
                if (bVar10) {
                  iVar5 = 3;
                }
                else {
                  bVar10 = uVar6 == 4;
                  if (3 < uVar6) {
                    bVar10 = (bVar3 & 0xf8) == 0xf0;
                  }
                  if (!bVar10) goto LAB_00305c14;
                  iVar5 = 4;
                }
              }
            }
          }
          uVar7 = uVar7 + iVar5;
          puVar8 = (ushort *)((int)puVar8 + iVar5);
          uVar9 = uVar9 + 1;
        } while (uVar7 < param_5);
      }
      goto LAB_00305c34;
    }
  }
  uVar9 = 0;
LAB_00305c34:
  iVar5 = *(int *)(param_1 + 0xe0);
  uVar7 = (uVar9 * 2 + 3 & 0xfffffffc) + iVar5;
  if (uVar7 < 0x4001) {
    *(uint *)(param_1 + 0xe0) = uVar7;
    iVar5 = *(int *)(param_1 + 0xdc) + iVar5;
  }
  else {
    iVar5 = 0;
  }
  if (iVar5 != 0) {
    uVar7 = 0;
    if (uVar9 != 0) {
      do {
        if (param_4 == (ushort *)0x0 || param_5 == 0) {
LAB_00305d64:
          uVar4 = 0;
          local_2c = 0;
        }
        else if (cVar2 == '\0') {
          local_2c = 2;
          uVar4 = *param_4;
        }
        else {
          if (cVar2 != '\x01') goto LAB_00305d64;
          bVar3 = (byte)*param_4;
          if (bVar3 < 0x80) {
            local_2c = 1;
            uVar4 = (ushort)(byte)*param_4;
          }
          else {
            bVar10 = param_5 == 2;
            if (1 < param_5) {
              bVar10 = (bVar3 & 0xe0) == 0xc0;
            }
            if (bVar10) {
              local_2c = 2;
              uVar4 = *(byte *)((int)param_4 + 1) & 0x3f | ((byte)*param_4 & 0x1f) << 6;
            }
            else {
              bVar10 = param_5 == 3;
              if (2 < param_5) {
                bVar10 = (bVar3 & 0xf0) == 0xe0;
              }
              if (bVar10) {
                local_2c = 3;
                uVar4 = (byte)param_4[1] & 0x3f |
                        (ushort)(((uint)(byte)*param_4 << 0x1c) >> 0x10) |
                        (*(byte *)((int)param_4 + 1) & 0x3f) << 6;
              }
              else {
                bVar10 = param_5 == 4;
                if (3 < param_5) {
                  bVar10 = (bVar3 & 0xf8) == 0xf0;
                }
                if (!bVar10) goto LAB_00305d64;
                local_2c = 4;
                uVar4 = *(byte *)((int)param_4 + 3) & 0x3f |
                        (ushort)*(byte *)((int)param_4 + 1) << 0xc | ((byte)param_4[1] & 0x3f) << 6;
              }
            }
          }
        }
        param_4 = (ushort *)((int)param_4 + local_2c);
        iVar1 = uVar7 * 2;
        uVar7 = uVar7 + 1;
        *(ushort *)(iVar5 + iVar1) = uVar4;
      } while (uVar7 < uVar9);
    }
    *(undefined1 *)(local_28 + 5) = 0;
    *(int *)(local_28 + 8) = iVar5;
    *(uint *)(local_28 + 0xc) = uVar9;
  }
  return;
}
