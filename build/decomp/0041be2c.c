// OoT3D decomp @ 0041be2c  name=FUN_0041be2c  size=1148

void FUN_0041be2c(void)

{
  uint *puVar1;
  uint uVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  code *pcVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  char local_38 [4];
  int local_34;
  uint local_30;
  uint local_2c;
  uint local_28;

  FUN_00350820(&local_30,DAT_0041c194,4,3);
  uVar2 = DAT_0041c19c;
  puVar1 = DAT_0041c198;
  puVar11 = DAT_0041c198 + -2;
  local_30 = *DAT_0041c198;
  puVar10 = DAT_0041c198 + 1;
  local_2c = *puVar11;
  local_28 = *puVar10;
  if (*(char *)((int)DAT_0041c198 + -0x8f) == '\0') {
    puVar9 = DAT_0041c198 + -1;
    do {
      do {
        iVar5 = FUN_0030dbd4(&local_34,&local_30,3,0,0xffffffff,0xffffffff);
        if (iVar5 < 0) {
          FUN_0030e3ac(iVar5,&DAT_0041c1a0,0,&DAT_0041c1a0);
          FUN_002fb928(0);
        }
        if (*(char *)((int)puVar1 + -0x8f) != '\0') {
          return;
        }
        if (local_34 == 2) {
          iVar5 = FUN_0030b3ac(DAT_0041c1a4);
          if (iVar5 == 0) {
            software_interrupt(0x19);
            uVar7 = *puVar10 >> 0x1b;
            if ((*puVar10 & 0x80000000) != 0) {
              uVar7 = uVar7 - 0x20;
            }
            if ((uVar7 != 0xfffffff9 && uVar7 != 0) && uVar7 != 1) {
              FUN_003351b4();
            }
            uVar7 = 0xc;
LAB_0041c17c:
            puVar1[-0x20] = uVar7;
            FUN_00310148(DAT_0041c1a4);
          }
          else {
            FUN_0030e604((int)((ulonglong)uVar2 * 10),(int)((ulonglong)uVar2 * 10 >> 0x20));
            software_interrupt(0x18);
            uVar7 = *puVar10 >> 0x1b;
            if ((*puVar10 & 0x80000000) != 0) {
              uVar7 = uVar7 - 0x20;
            }
            if ((uVar7 != 0xfffffff9 && uVar7 != 0) && uVar7 != 1) goto code_r0x0041c2b4;
          }
          goto LAB_0041c2d8;
        }
        if (local_34 == 1) {
          iVar5 = FUN_0030b3ac(DAT_0041c1a4);
          if (iVar5 == 0) {
            software_interrupt(0x19);
            uVar7 = *puVar11 >> 0x1b;
            if ((*puVar11 & 0x80000000) != 0) {
              uVar7 = uVar7 - 0x20;
            }
            if ((uVar7 != 0xfffffff9 && uVar7 != 0) && uVar7 != 1) {
              FUN_003351b4();
            }
            if (((code *)puVar1[-0x23] == (code *)0x0) ||
               (iVar5 = (*(code *)puVar1[-0x23])(puVar1[-0x1f]), iVar5 != 0)) {
              FUN_00310148(DAT_0041c1a4);
            }
          }
          else {
            FUN_0030e604((int)((ulonglong)uVar2 * 10),(int)((ulonglong)uVar2 * 10 >> 0x20));
            software_interrupt(0x18);
            uVar7 = *puVar11 >> 0x1b;
            if ((*puVar11 & 0x80000000) != 0) {
              uVar7 = uVar7 - 0x20;
            }
            if ((uVar7 != 0xfffffff9 && uVar7 != 0) && uVar7 != 1) goto code_r0x0041c2b4;
          }
          goto LAB_0041c2d8;
        }
      } while (local_34 != 0);
      iVar5 = FUN_0030b3ac(DAT_0041c1a4);
      if (iVar5 != 0) {
        FUN_0030e604((int)((ulonglong)uVar2 * 10),(int)((ulonglong)uVar2 * 10 >> 0x20));
        software_interrupt(0x18);
        uVar7 = *DAT_0041c198 >> 0x1b;
        if ((*DAT_0041c198 & 0x80000000) != 0) {
          uVar7 = uVar7 - 0x20;
        }
        if ((uVar7 != 0xfffffff9 && uVar7 != 0) && uVar7 != 1) {
code_r0x0041c2b4:
          FUN_003351b4();
        }
        goto LAB_0041c2d8;
      }
      software_interrupt(0x19);
      uVar7 = *DAT_0041c198 >> 0x1b;
      if ((*DAT_0041c198 & 0x80000000) != 0) {
        uVar7 = uVar7 - 0x20;
      }
      if ((uVar7 != 0xfffffff9 && uVar7 != 0) && uVar7 != 1) {
        FUN_003351b4();
      }
      FUN_0030db4c();
      FUN_0030dab0();
      iVar5 = FUN_00423b74(puVar1[-4],local_38);
      FUN_0030da40();
      uVar6 = *puVar9;
      software_interrupt(0x14);
      uVar7 = uVar6 >> 0x1b;
      if ((uVar6 & 0x80000000) != 0) {
        uVar7 = uVar7 - 0x20;
      }
      if ((uVar7 != 0xfffffff9 && uVar7 != 0) && uVar7 != 1) {
        FUN_003351b4(uVar6);
      }
      if (iVar5 < 0) goto LAB_0041c2d8;
      switch(local_38[0]) {
      default:
        FUN_003123c0();
        break;
      case '\x01':
      case '\x02':
        if (*(char *)((int)puVar1 + -0xa6) == '\0') {
          uVar3 = 1;
          if (local_38[0] != '\x01') {
            uVar3 = 2;
          }
          *(undefined1 *)((int)puVar1 + -0xa6) = uVar3;
        }
        if (((code *)puVar1[-0x23] == (code *)0x0) ||
           (iVar5 = (*(code *)puVar1[-0x23])(puVar1[-0x1f]), iVar5 != 0)) {
          if (local_38[0] == '\x01') {
            uVar7 = 6;
          }
          else {
            uVar7 = 7;
          }
          goto LAB_0041c17c;
        }
        break;
      case '\x03':
      case '\x04':
      case '\x05':
      case '\x06':
        if (local_38[0] == '\x03') {
          cVar4 = '\x01';
LAB_0041c1d8:
          *(char *)((int)puVar1 + -0xa5) = cVar4;
        }
        else {
          cVar4 = local_38[0];
          if (local_38[0] == '\x04') goto LAB_0041c1d8;
          if (local_38[0] == '\x05') {
            cVar4 = '\x02';
            goto LAB_0041c1d8;
          }
          if (local_38[0] == '\x06') {
            cVar4 = '\x03';
            goto LAB_0041c1d8;
          }
        }
        pcVar8 = (code *)puVar1[-0x23];
        if (pcVar8 == (code *)0x0) break;
        goto LAB_0041c224;
      case '\a':
        *(undefined1 *)(puVar1 + -0x28) = 1;
        *(undefined1 *)(puVar1 + -0x29) = 1;
        *(undefined1 *)((int)puVar1 + -0xa2) = 1;
        pcVar8 = (code *)puVar1[-0x23];
        goto joined_r0x0041c220;
      case '\b':
        *(undefined1 *)((int)puVar1 + -0xa1) = 1;
        *(undefined1 *)((int)puVar1 + -0xa3) = 1;
        pcVar8 = (code *)puVar1[-0x23];
joined_r0x0041c220:
        if (pcVar8 != (code *)0x0) {
LAB_0041c224:
          (*pcVar8)(puVar1[-0x1f]);
        }
        break;
      case '\t':
        *(undefined1 *)((int)puVar1 + -0xa3) = 0;
        break;
      case '\n':
        FUN_0030db4c();
        FUN_0030dab0();
        iVar5 = FUN_00423b3c(0,0x40);
        if (iVar5 < 0) {
          FUN_0030e3ac(iVar5,&DAT_0041c1a0,0,&DAT_0041c1a0);
          FUN_002fb928(0);
        }
        FUN_0030da40();
        uVar6 = *puVar9;
        software_interrupt(0x14);
        uVar7 = uVar6 >> 0x1b;
        if ((uVar6 & 0x80000000) != 0) {
          uVar7 = uVar7 - 0x20;
        }
        if ((uVar7 != 0xfffffff9 && uVar7 != 0) && uVar7 != 1) goto code_r0x0041c2b4;
        break;
      case '\v':
        *(undefined1 *)((int)puVar1 + -0xa2) = 1;
      }
LAB_0041c2d8:
    } while (*(char *)((int)puVar1 + -0x8f) == '\0');
  }
  return;
}
