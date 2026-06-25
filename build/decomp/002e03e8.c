// OoT3D decomp @ 002e03e8  name=FUN_002e03e8  size=2656

int FUN_002e03e8(int param_1,int param_2,int param_3,uint param_4,int *param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int extraout_r1;
  int iVar4;
  int extraout_r1_00;
  int extraout_r1_01;
  undefined4 uVar5;
  uint uVar6;
  code *pcVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  undefined8 uVar11;
  uint local_4c;
  uint local_48;
  uint local_44;
  int local_3c;
  int local_38;
  int iStack_34;
  int iStack_30;
  int local_2c;
  uint local_28;
  
  iVar8 = 0;
  local_3c = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined *)(param_1 + 0x24) = 0;
  *(undefined *)(param_1 + 0x25) = 0;
  *(undefined *)(param_1 + 0x26) = 0;
  *(undefined *)(param_1 + 0x27) = 0;
  *(undefined *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined *)(param_1 + 0x28) = 0;
  uVar9 = 0;
  *(int *)(param_1 + 4) = param_3;
  iStack_34 = param_1;
  iStack_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;
  (**(code **)*param_5)(param_5,param_3,*(undefined *)(param_1 + 8));
  iVar3 = local_2c;
  if (local_28 != 0) {
    do {
      uVar11 = FUN_004c08c0(param_2,iVar3);
      local_38 = (int)uVar11;
      cVar1 = *(char *)(param_2 + 4);
      if (cVar1 == -1) {
        if (iVar8 == 0) {
          iVar8 = iVar3;
        }
        goto LAB_002e0ee8;
      }
      if (iVar8 != 0) {
        *(int *)(param_1 + 4) = iVar8;
        iVar2 = (int)*(char *)(param_1 + 0x27);
        if (iVar2 == 0) {
          if (*(char *)(param_1 + 0x28) == '\0') {
            (**(code **)(*param_5 + 8))(param_5,iVar8);
            iVar4 = extraout_r1;
          }
          else {
LAB_002e04f8:
            iVar4 = *(int *)(param_1 + 0x30);
            if (iVar4 == 0) {
              *(int *)(param_1 + 0x38) = iVar3 - iVar8;
              *(int *)(param_1 + 0x30) = iVar8;
            }
            else {
              *(int *)(param_1 + 0x3c) = iVar3 - iVar8;
              *(int *)(param_1 + 0x34) = iVar8;
            }
            bVar10 = iVar2 != 0;
            if (bVar10) {
              iVar2 = *(int *)(param_1 + 0x34);
            }
            if (bVar10 && iVar2 != 0) {
              (**(code **)(*param_5 + 0xc4))
                        (param_5,*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38),
                         iVar2,*(undefined4 *)(param_1 + 0x3c));
              iVar4 = extraout_r1_00;
            }
          }
        }
        else {
          if (*(char *)(param_1 + 0x28) != '\0') goto LAB_002e04f8;
          (**(code **)(*param_5 + 0x9c))(param_5,iVar8);
          iVar4 = extraout_r1_01;
        }
        iVar8 = 0;
        uVar11 = CONCAT44(iVar4,local_38);
        if (0 < *(int *)(param_1 + 0x20)) {
          *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
          uVar11 = CONCAT44(iVar4,local_38);
        }
      }
      iVar2 = (int)((ulonglong)uVar11 >> 0x20);
      local_38 = (int)uVar11;
      if (cVar1 == '\0') goto LAB_002e0f0c;
      *(int *)(param_1 + 4) = iVar3;
      switch(*(undefined *)(param_2 + 4)) {
      case 1:
        (**(code **)(*param_5 + 0x14))(param_5);
        iVar3 = 2;
        *(undefined4 *)(param_1 + 0x20) = 2;
        goto LAB_002e0ee0;
      case 2:
        (**(code **)(*param_5 + 0x18))(param_5,*(uint *)(param_2 + 8) & 0xff);
        break;
      case 3:
        (**(code **)(*param_5 + 0x1c))(param_5,*(uint *)(param_2 + 8) & 0xffff);
        *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 8);
        iVar3 = 2;
        *(undefined4 *)(param_1 + 0x20) = 2;
        goto LAB_002e0ee0;
      case 4:
        (**(code **)(*param_5 + 0x20))(param_5);
        *(undefined *)(param_1 + 0x24) = 1;
        break;
      case 5:
        (**(code **)(*param_5 + 0x24))(param_5);
        *(undefined *)(param_1 + 0x24) = 0;
        break;
      case 6:
        iVar3 = *(int *)(param_2 + 8);
        if (iVar3 != 0) {
          iVar3 = 1;
        }
        (**(code **)(*param_5 + 0x28))(param_5,iVar3);
        iVar3 = 2;
        *(undefined4 *)(param_1 + 0x20) = 2;
        goto LAB_002e0ee0;
      case 7:
        (**(code **)(*param_5 + 0x2c))(param_5);
        iVar3 = 2;
        *(undefined4 *)(param_1 + 0x20) = 2;
        goto LAB_002e0ee0;
      case 8:
        (**(code **)(*param_5 + 0x30))(param_5,*(uint *)(param_2 + 8) & 0xff);
        iVar3 = 2;
        *(undefined4 *)(param_1 + 0x20) = 2;
        goto LAB_002e0ee0;
      case 9:
        (**(code **)(*param_5 + 0x34))(param_5);
        break;
      case 10:
        (**(code **)(*param_5 + 0x38))(param_5,*(uint *)(param_2 + 8) & 0xff,DAT_002e0f3c);
        iVar3 = 2;
        *(undefined4 *)(param_1 + 0x20) = 2;
        goto LAB_002e0ee0;
      case 0xb:
        (**(code **)(*param_5 + 0x3c))(param_5);
        break;
      case 0xc:
        (**(code **)(*param_5 + 0x40))(param_5);
        break;
      case 0xd:
        iVar3 = 1 - *(uint *)(param_2 + 8);
        if (1 < *(uint *)(param_2 + 8)) {
          iVar3 = 0;
        }
        (**(code **)(*param_5 + 0x44))(param_5,iVar3,*(undefined4 *)(param_2 + 0xc));
        break;
      case 0xe:
        iVar3 = 1 - *(uint *)(param_2 + 8);
        if (1 < *(uint *)(param_2 + 8)) {
          iVar3 = 0;
        }
        (**(code **)(*param_5 + 0x48))(param_5,iVar3,*(undefined4 *)(param_2 + 0xc));
        break;
      case 0xf:
        pcVar7 = *(code **)(*param_5 + 0x4c);
        uVar6 = *(uint *)(param_2 + 8) & 0xff;
        goto LAB_002e0850;
      case 0x10:
        pcVar7 = *(code **)(*param_5 + 0x54);
        uVar6 = *(uint *)(param_2 + 8) & 0xff;
        goto LAB_002e0850;
      case 0x11:
        local_4c = *(uint *)(param_2 + 0x18) & 0xff;
        (**(code **)(*param_5 + 0x58))
                  (param_5,*(uint *)(param_2 + 8) & 0xffff,*(uint *)(param_2 + 0xc) & 0xff,
                   *(uint *)(param_2 + 0x10) & 0xff,*(uint *)(param_2 + 0x14) & 0xff);
        break;
      case 0x12:
        (**(code **)(*param_5 + 0x5c))(param_5);
        break;
      case 0x13:
        (**(code **)(*param_5 + 0x60))(param_5);
        break;
      case 0x14:
        (**(code **)(*param_5 + 100))(param_5);
        break;
      case 0x15:
        (**(code **)(*param_5 + 0x68))(param_5);
        break;
      case 0x16:
        (**(code **)(*param_5 + 0x6c))(param_5);
        break;
      case 0x17:
        (**(code **)(*param_5 + 0x70))(param_5);
        break;
      case 0x18:
        switch(*(undefined4 *)(param_2 + 8)) {
        case 0:
          (**(code **)(*param_5 + 0x74))(param_5);
          break;
        case 1:
          (**(code **)(*param_5 + 0x78))(param_5);
          break;
        case 2:
          (**(code **)(*param_5 + 0x7c))(param_5);
          break;
        case 3:
          (**(code **)(*param_5 + 0x80))(param_5);
          break;
        case 4:
          (**(code **)(*param_5 + 0x84))(param_5);
          break;
        case 6:
          (**(code **)(*param_5 + 0x88))(param_5);
        }
        break;
      case 0x19:
        (**(code **)(*param_5 + 0x8c))(param_5);
        break;
      case 0x1a:
        local_4c = *(uint *)(param_2 + 8);
        local_48 = *(uint *)(param_2 + 0xc);
        if (DAT_002e0f3c <= local_4c) {
          local_4c = 0xffffffff;
        }
        if (DAT_002e0f3c <= local_48) {
          local_48 = 0xffffffff;
        }
        (**(code **)(*param_5 + 0x90))(param_5,2,&local_4c);
        *(undefined4 *)(param_1 + 0x14) = 2;
        *(undefined4 *)(param_1 + 0x18) = 0;
        break;
      case 0x1b:
        local_4c = *(uint *)(param_2 + 8);
        local_48 = *(uint *)(param_2 + 0xc);
        local_44 = *(uint *)(param_2 + 0x10);
        if (DAT_002e0f3c <= local_4c) {
          local_4c = 0xffffffff;
        }
        if (DAT_002e0f3c <= local_48) {
          local_48 = 0xffffffff;
        }
        if (DAT_002e0f3c <= local_44) {
          local_44 = 0xffffffff;
        }
        (**(code **)(*param_5 + 0x90))(param_5,3,&local_4c);
        *(undefined4 *)(param_1 + 0x14) = 3;
        *(undefined4 *)(param_1 + 0x18) = 0;
        break;
      case 0x1c:
        if (*(int *)(param_1 + 0x20) == 0) {
          (**(code **)(*param_5 + 0xc))(param_5);
          *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
          iVar3 = *(int *)(param_1 + 0x18) + 1;
          *(int *)(param_1 + 0x18) = iVar3;
          if (*(int *)(param_1 + 0x14) <= iVar3) {
            *(undefined4 *)(param_1 + 0x14) = 0;
            *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
          }
          *(undefined *)(param_1 + 0x40) = 0;
        }
        break;
      case 0x1d:
        (**(code **)(*param_5 + 0x94))(param_5,*(uint *)(param_2 + 8) & 0xff);
        *(char *)(param_1 + 0x10) = (char)*(undefined4 *)(param_2 + 8);
        break;
      case 0x1e:
        (**(code **)(*param_5 + 0x98))(param_5);
        *(undefined *)(param_1 + 0x40) = 1;
        break;
      case 0x1f:
        (**(code **)(*param_5 + 0x50))(param_5);
        break;
      case 0x20:
        if (*(char *)(param_1 + 0x26) == '\0') {
          *(undefined *)(param_1 + 0x26) = 1;
          *(undefined *)(param_1 + 0x27) = 1;
        }
        break;
      case 0x21:
        cVar1 = *(char *)(param_1 + 0x26);
        bVar10 = cVar1 != '\0';
        if (bVar10) {
          cVar1 = *(char *)(param_1 + 0x27);
        }
        if (bVar10 && cVar1 != '\0') goto LAB_002e0e70;
        break;
      case 0x22:
        if ((*(char *)(param_1 + 0x26) != '\0') && (*(char *)(param_1 + 0x27) == '\0')) {
          (**(code **)(*param_5 + 0xa0))(param_5);
          *(undefined *)(param_1 + 0x26) = 0;
        }
        break;
      case 0x23:
        uVar6 = *(uint *)(param_2 + 8);
        pcVar7 = *(code **)(*param_5 + 0xa4);
        goto LAB_002e0850;
      case 0x24:
        pcVar7 = *(code **)(*param_5 + 0x10);
        uVar6 = *(uint *)(param_2 + 8) & 0xff;
LAB_002e0850:
        (*pcVar7)(param_5,uVar6);
        break;
      case 0x25:
        (**(code **)(*param_5 + 0x38))
                  (param_5,*(uint *)(param_2 + 8) & 0xff,*(uint *)(param_2 + 0xc) & 0xffff);
        iVar3 = 2;
        *(undefined4 *)(param_1 + 0x20) = 2;
        goto LAB_002e0ee0;
      case 0x26:
        if (*(char *)(param_1 + 0x28) == '\0') {
          uVar5 = *(undefined4 *)(param_2 + 8);
          *(undefined4 *)(param_1 + 0x34) = 0;
          *(undefined4 *)(param_1 + 0x2c) = uVar5;
          *(undefined4 *)(param_1 + 0x30) = 0;
          *(undefined4 *)(param_1 + 0x3c) = 0;
          *(undefined4 *)(param_1 + 0x38) = 0;
          *(undefined *)(param_1 + 0x28) = 1;
        }
        break;
      case 0x27:
        if (*(char *)(param_1 + 0x28) != '\0') {
          iVar2 = *(int *)(param_1 + 0x30);
joined_r0x002e0e28:
          if (iVar2 == 0) {
            *(undefined4 *)(param_1 + 0x38) = 0;
            *(int *)(param_1 + 0x30) = iVar3;
          }
        }
        break;
      case 0x28:
        bVar10 = *(char *)(param_1 + 0x28) != '\0';
        if (bVar10) {
          iVar2 = *(int *)(param_1 + 0x30);
        }
        if (bVar10 && iVar2 != 0) {
          if (*(int *)(param_1 + 0x34) == 0) {
            *(undefined4 *)(param_1 + 0x3c) = 0;
            *(int *)(param_1 + 0x34) = iVar3;
          }
          switch(*(undefined4 *)(param_1 + 0x2c)) {
          case 0:
            (**(code **)(*param_5 + 0xa8))
                      (param_5,iVar2,*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x34)
                       ,*(undefined4 *)(param_1 + 0x3c));
            break;
          case 1:
            (**(code **)(*param_5 + 0xac))
                      (param_5,iVar2,*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x34)
                       ,*(undefined4 *)(param_1 + 0x3c));
            break;
          case 2:
            (**(code **)(*param_5 + 0xb0))
                      (param_5,iVar2,*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x34)
                       ,*(undefined4 *)(param_1 + 0x3c));
            break;
          case 3:
            (**(code **)(*param_5 + 0xb4))
                      (param_5,iVar2,*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x34)
                       ,*(undefined4 *)(param_1 + 0x3c));
            break;
          case 4:
            (**(code **)(*param_5 + 0xb8))
                      (param_5,iVar2,*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x34)
                       ,*(undefined4 *)(param_1 + 0x3c));
            break;
          case 5:
            (**(code **)(*param_5 + 0xbc))
                      (param_5,iVar2,*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x34)
                       ,*(undefined4 *)(param_1 + 0x3c));
          }
switchD_002e0c4c_caseD_6:
          *(undefined4 *)(param_1 + 0x2c) = 0;
          *(undefined4 *)(param_1 + 0x34) = 0;
          *(undefined4 *)(param_1 + 0x30) = 0;
          *(undefined4 *)(param_1 + 0x3c) = 0;
          *(undefined4 *)(param_1 + 0x38) = 0;
          *(undefined *)(param_1 + 0x28) = 0;
        }
        break;
      case 0x29:
        if (*(char *)(param_1 + 0x28) == '\0') {
LAB_002e0d6c:
          *(undefined4 *)(param_1 + 0x34) = 0;
          *(undefined4 *)(param_1 + 0x30) = 0;
          *(undefined4 *)(param_1 + 0x3c) = 0;
          *(undefined4 *)(param_1 + 0x38) = 0;
          *(undefined *)(param_1 + 0x28) = 1;
        }
        break;
      case 0x2a:
        if (*(char *)(param_1 + 0x28) != '\0') {
          iVar2 = *(int *)(param_1 + 0x30);
          goto joined_r0x002e0e28;
        }
        break;
      case 0x2b:
        bVar10 = *(char *)(param_1 + 0x28) != '\0';
        if (bVar10) {
          iVar2 = *(int *)(param_1 + 0x30);
        }
        if (bVar10 && iVar2 != 0) {
          if (*(int *)(param_1 + 0x34) == 0) {
            *(undefined4 *)(param_1 + 0x3c) = 0;
            *(int *)(param_1 + 0x34) = iVar3;
          }
          (**(code **)(*param_5 + 0xc0))
                    (param_5,iVar2,*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x34),
                     *(undefined4 *)(param_1 + 0x3c));
          goto switchD_002e0c4c_caseD_6;
        }
        break;
      case 0x2c:
        cVar1 = *(char *)(param_1 + 0x28);
        bVar10 = cVar1 == '\0';
        if (bVar10) {
          cVar1 = *(char *)(param_1 + 0x26);
        }
        if (bVar10 && cVar1 == '\0') {
          *(undefined *)(param_1 + 0x26) = 1;
          *(undefined *)(param_1 + 0x27) = 1;
          goto LAB_002e0d6c;
        }
        break;
      case 0x2d:
        if (*(char *)(param_1 + 0x28) != '\0') {
          iVar2 = *(int *)(param_1 + 0x30);
          goto joined_r0x002e0e28;
        }
        break;
      case 0x2e:
        if (*(int *)(param_1 + 0x34) == 0) {
          *(undefined4 *)(param_1 + 0x3c) = 0;
          *(int *)(param_1 + 0x34) = iVar3;
        }
        *(undefined4 *)(param_1 + 0x2c) = 0;
        *(undefined4 *)(param_1 + 0x34) = 0;
        *(undefined4 *)(param_1 + 0x30) = 0;
        *(undefined4 *)(param_1 + 0x3c) = 0;
        *(undefined4 *)(param_1 + 0x38) = 0;
        *(undefined *)(param_1 + 0x28) = 0;
LAB_002e0e70:
        *(undefined *)(param_1 + 0x27) = 0;
        break;
      case 0x2f:
        if ((*(char *)(param_1 + 0x26) != '\0') && (*(char *)(param_1 + 0x27) == '\0')) {
          (**(code **)(*param_5 + 200))(param_5);
          *(undefined *)(param_1 + 0x26) = 0;
        }
        break;
      default:
        (**(code **)(*param_5 + 0xcc))(param_5);
      }
      iVar3 = *(int *)(param_1 + 0x20);
      if (0 < iVar3) {
LAB_002e0ee0:
        *(int *)(param_1 + 0x20) = iVar3 + -1;
      }
LAB_002e0ee8:
      uVar9 = uVar9 + 1;
      iVar3 = local_38;
    } while (uVar9 < local_28);
    if (local_3c != 0) goto LAB_002e0f0c;
  }
  *(undefined *)(param_1 + 0x25) = 1;
LAB_002e0f0c:
  iVar8 = 1 - (uint)*(byte *)(param_1 + 0x25);
  if (1 < *(byte *)(param_1 + 0x25)) {
    iVar8 = 0;
  }
  (**(code **)(*param_5 + 4))(param_5,iVar8);
  return local_38 - local_2c;
}

