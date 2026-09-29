// OoT3D decomp @ 002f7b44  name=FUN_002f7b44  size=1516

void FUN_002f7b44(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  bool bVar10;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54 [4];
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;

  iVar4 = DAT_002f7e84;
  uVar3 = DAT_002f7e80;
  iVar2 = DAT_002f7e7c;
  iVar1 = DAT_002f7e78;
  uVar7 = 0;
  puVar8 = (undefined4 *)(DAT_002f7e7c + 0x7c);
  puVar9 = (undefined4 *)(DAT_002f7e7c + 0x6c);
  do {
    iVar5 = FUN_002e9d78(uVar7);
    if (uVar7 == 0x1a) {
LAB_002f7c7c:
      if (uVar7 - 3 < 3) {
        if (iVar5 == 0) goto LAB_002f8050;
        uVar6 = *(uint *)(iVar4 + 0x20);
        bVar10 = uVar6 != uVar7;
        if (!bVar10) {
          uVar6 = *(uint *)(iVar4 + 0x50);
        }
        if (bVar10 || uVar6 != 0) {
          local_64 = 0x2a;
          FUN_002f8d40(*(undefined4 *)(iVar4 + 0x10),uVar7,*(undefined4 *)(iVar2 + (uVar7 - 3) * 4),
                       0x39,0x2a);
        }
        else {
          local_64 = 0x32;
          local_60 = 0xfffffffc;
          local_5c = 0xfffffffc;
          FUN_002eb3d8(*(undefined4 *)(iVar4 + 0x10),uVar7,*(undefined4 *)(iVar2 + (uVar7 - 3) * 4),
                       0x39,0x32);
        }
      }
      else if (uVar7 - 6 < 3) {
        if (iVar5 == 0) goto LAB_002f8050;
        uVar6 = *(uint *)(iVar4 + 0x20);
        bVar10 = uVar6 != uVar7;
        if (!bVar10) {
          uVar6 = *(uint *)(iVar4 + 0x50);
        }
        if (bVar10 || uVar6 != 0) {
          local_64 = 0x2a;
          FUN_002f8d40(*(undefined4 *)(iVar4 + 0x10),uVar7,*(undefined4 *)(iVar2 + (uVar7 - 6) * 4),
                       0x69,0x2a);
        }
        else {
          local_64 = 0x32;
          local_60 = 0xfffffffc;
          local_5c = 0xfffffffc;
          FUN_002eb3d8(*(undefined4 *)(iVar4 + 0x10),uVar7,*(undefined4 *)(iVar2 + (uVar7 - 6) * 4),
                       0x69,0x32);
        }
      }
      else if (uVar7 - 9 < 6) {
        if (iVar5 == 0) goto LAB_002f8050;
        local_64 = 0x18;
        FUN_002f8d40(*(undefined4 *)(iVar4 + 0x10),uVar7,
                     *(undefined4 *)(DAT_002f7e90 + -0x18 + (uVar7 - 9) * 4),
                     *(undefined4 *)(DAT_002f7e90 + (uVar7 - 9) * 4),0x18);
      }
      else if (uVar7 - 0xf < 3) {
        if (iVar5 == 0) goto LAB_002f8050;
        local_64 = 0x18;
        FUN_002f8d40(*(undefined4 *)(iVar4 + 0x10),uVar7,
                     *(undefined4 *)(DAT_002f7e94 + -0xc + (uVar7 - 0xf) * 4),
                     *(undefined4 *)(DAT_002f7e94 + (uVar7 - 0xf) * 4),0x18);
      }
      else if (uVar7 == 0x12) {
        if (iVar5 == 0) goto LAB_002f8050;
        FUN_002f8d74(*(undefined4 *)(iVar4 + 0x10),0x12,iVar5);
        local_64 = 0x2a;
        FUN_002f8d40(*(undefined4 *)(iVar4 + 0x10),0x12,9,0x69,0x2a);
      }
      else if (uVar7 - 0x13 < 2) {
        if (iVar5 == 0) goto LAB_002f8050;
        local_64 = 0x20;
        FUN_002f8d40(*(undefined4 *)(iVar4 + 0x10),uVar7,
                     *(undefined4 *)(DAT_002f8150 + -0xc + (uVar7 - 0x13) * 4),
                     *(undefined4 *)(DAT_002f8150 + (uVar7 - 0x13) * 4),0x20);
      }
      else if (uVar7 == 0x15) {
        if (iVar5 == 0) goto LAB_002f8050;
        local_64 = 0x20;
        FUN_002f8d40(*(undefined4 *)(iVar4 + 0x10),0x15,0x53,0x9e,0x20);
      }
      else if (uVar7 == 0x16) {
        if (iVar5 == 0) goto LAB_002f8050;
        FUN_002f8d74(*(undefined4 *)(iVar4 + 0x10),0x16,iVar5);
        local_64 = 0x20;
        FUN_002f8d40(*(undefined4 *)(iVar4 + 0x10),0x16,*puVar9,*puVar8,0x20);
      }
      else if (uVar7 == 0x17) {
        if (iVar5 == 0) goto LAB_002f8050;
        FUN_002f8d74(*(undefined4 *)(iVar4 + 0x10),0x17,iVar5);
        local_64 = 0x20;
        FUN_002f8d40(*(undefined4 *)(iVar4 + 0x10),0x17,*(undefined4 *)(iVar2 + 0x70),
                     *(undefined4 *)(iVar2 + 0x80),0x20);
      }
      else if (uVar7 == 0x18) {
        if (iVar5 == 0) goto LAB_002f8050;
        FUN_002f8d74(*(undefined4 *)(iVar4 + 0x10),0x18,iVar5);
        local_64 = 0x20;
        FUN_002f8d40(*(undefined4 *)(iVar4 + 0x10),0x18,*(undefined4 *)(iVar2 + 0x74),
                     *(undefined4 *)(iVar2 + 0x84),0x20);
      }
      else if (uVar7 == 0x19) {
        if (iVar5 == 0) goto LAB_002f8050;
        FUN_002f8d74(*(undefined4 *)(iVar4 + 0x10),0x19,iVar5);
        local_64 = 0x20;
        FUN_002f8d40(*(undefined4 *)(iVar4 + 0x10),0x19,*(undefined4 *)(iVar2 + 0x78),
                     *(undefined4 *)(iVar2 + 0x88),0x20);
      }
      else if (uVar7 == 0x1a) {
        local_54[0] = *DAT_002f8154;
        local_54[1] = DAT_002f8154[1];
        local_54[2] = DAT_002f8154[2];
        local_54[3] = DAT_002f8154[3];
        uStack_44 = DAT_002f8154[4];
        local_40 = DAT_002f8154[5];
        uStack_3c = DAT_002f8154[6];
        uStack_38 = DAT_002f8154[7];
        uStack_34 = DAT_002f8154[8];
        uStack_30 = DAT_002f8154[9];
        local_5c = *(undefined4 *)(DAT_002f8158 + 8);
        local_58 = *(undefined4 *)(DAT_002f8158 + 0xc);
        if (iVar5 == 0) {
          local_60 = uVar3;
          local_64 = uVar3;
          FUN_002fc534(*(undefined4 *)(iVar4 + 0xc),&local_5c,&local_64,1,0x1c);
        }
        else {
          local_60 = DAT_002f815c;
          local_64 = DAT_002f815c;
          FUN_002fc534(*(undefined4 *)(iVar4 + 0xc),&local_5c,&local_64,1,0x1c);
          FUN_002fc40c(*(undefined4 *)(iVar4 + 0xc),local_54 + iVar5 * 2,&local_64,1,0x1c);
        }
      }
    }
    else {
      if (uVar7 == 2) {
        if (*(char *)(iVar1 + 0x52) == '\0') {
          if ((*(uint *)(DAT_002f7e88 + 0xc) & (uint)*(ushort *)(iVar1 + 0xb6)) == 0)
          goto LAB_002f7be0;
          FUN_002f8d74(*(undefined4 *)(iVar4 + 0x10),2,0x55);
        }
        else {
          FUN_002f8d74(*(undefined4 *)(iVar4 + 0x10),2,0x7b);
        }
      }
      else {
LAB_002f7be0:
        FUN_002f8d74(*(undefined4 *)(iVar4 + 0x10),uVar7,*(undefined4 *)(DAT_002f7e8c + uVar7 * 4));
        if (2 < uVar7) goto LAB_002f7c7c;
      }
      if (iVar5 == 0) {
LAB_002f8050:
        local_64 = 0;
        FUN_002f8d40(*(undefined4 *)(iVar4 + 0x10),uVar7,0,0,0);
      }
      else {
        uVar6 = *(uint *)(iVar4 + 0x20);
        bVar10 = uVar6 != uVar7;
        if (!bVar10) {
          uVar6 = *(uint *)(iVar4 + 0x50);
        }
        if (bVar10 || uVar6 != 0) {
          local_64 = 0x2a;
          FUN_002f8d40(*(undefined4 *)(iVar4 + 0x10),uVar7,*(undefined4 *)(iVar2 + uVar7 * 4),9,0x2a
                      );
        }
        else {
          local_64 = 0x32;
          local_60 = 0xfffffffc;
          local_5c = 0xfffffffc;
          FUN_002eb3d8(*(undefined4 *)(iVar4 + 0x10),uVar7,*(undefined4 *)(iVar2 + uVar7 * 4),9,0x32
                      );
        }
      }
    }
    uVar7 = uVar7 + 1;
    if (0x1a < (int)uVar7) {
      return;
    }
  } while( true );
}
