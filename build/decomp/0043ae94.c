// OoT3D decomp @ 0043ae94  name=FUN_0043ae94  size=3340

void FUN_0043ae94(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  uint in_fpscr;
  undefined8 uVar14;
  ulonglong uVar15;
  char local_58 [4];
  undefined1 auStack_54 [4];
  undefined1 auStack_50 [4];
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;

  FUN_002f9484(auStack_50,auStack_54,local_58);
  iVar10 = DAT_0043b204;
  puVar4 = DAT_0043b200;
  uVar3 = DAT_0043b1fc;
  uVar2 = DAT_0043b1f8;
  uVar12 = DAT_0043b1f4;
  uVar11 = DAT_0043b1f0;
  uVar8 = DAT_0043b1ec;
  iVar1 = DAT_0043b1e8;
  local_40 = DAT_0043b208;
  switch(*(undefined4 *)(DAT_0043b1e8 + 0x3c)) {
  case 0:
    if (local_58[0] == '\0') {
      *(undefined4 *)(DAT_0043b1e8 + 0x3c) = 2;
    }
    break;
  case 1:
    iVar10 = 0x2b;
    do {
      local_48 = VectorSignedToFloat((4 - *(int *)(iVar1 + 0x2c)) * 0x50,
                                     (byte)(in_fpscr >> 0x15) & 3);
      local_44 = uVar3;
      FUN_002f9430(*(undefined4 *)(iVar1 + 8),&local_48,1,iVar10);
      do {
        if (iVar10 - 0x40U < 8) {
          local_48 = uVar3;
          local_44 = VectorSignedToFloat((4 - *(int *)(iVar1 + 0x2c)) * 0x10,
                                         (byte)(in_fpscr >> 0x15) & 3);
          FUN_002f9430(*(undefined4 *)(iVar1 + 8),&local_48,1,iVar10);
        }
        iVar10 = iVar10 + 1;
        if (0x4d < iVar10) {
          if (*(int *)(iVar1 + 0x2c) == 4) {
            *(undefined4 *)(iVar1 + 0x3c) = 2;
          }
          *(int *)(iVar1 + 0x2c) = *(int *)(iVar1 + 0x2c) + 1;
          goto switchD_0043aee8_default;
        }
      } while (0x3f < iVar10);
    } while( true );
  case 2:
    iVar9 = 0;
    do {
      uVar13 = iVar9 * 0x30 + 0x19;
      iVar7 = FUN_0033f428(0x98,uVar13 & 0xffff,0x11c,0x30,1);
      if (iVar7 != 0) {
        *(int *)(iVar1 + 0x3c) = iVar9 + 4;
        *(int *)(iVar1 + 0x30) = iVar9;
        break;
      }
      iVar7 = FUN_0033f428(10,uVar13 & 0xffff,0x11c,0x30,1);
      if (iVar7 != 0) {
        if (iVar9 != *(int *)(iVar1 + 0x30)) {
          FUN_0037547c(DAT_0043b224,0,4,DAT_0043b220,DAT_0043b220,DAT_0043b21c);
        }
        *(int *)(iVar1 + 0x30) = iVar9;
        break;
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < 3);
    uVar14 = FUN_0033f428(0xdc,0xcc,0x60,0x20,0);
    if ((int)uVar14 == 0) {
      uVar14 = FUN_0033f428(4,0xcc,0x60,0x20,0);
      puVar6 = DAT_0043bc04;
      if ((int)uVar14 != 0) {
        uVar8 = (int)((ulonglong)uVar14 >> 0x20);
        if ((*DAT_0043b20c & 1) == 0) {
          uVar14 = FUN_003679b4(DAT_0043b20c);
          uVar8 = (int)((ulonglong)uVar14 >> 0x20);
          if ((int)uVar14 != 0) {
            FUN_0036788c(DAT_0043b210);
            uVar8 = DAT_0043b218;
          }
        }
        FUN_002e9a1c(local_40,uVar8);
        *(undefined4 *)(iVar1 + 0x3c) = 8;
        *(undefined4 *)(iVar1 + 0x30) = 3;
        uVar8 = *puVar6;
        *puVar4 = uVar8;
        uVar11 = puVar6[1];
        puVar4[1] = uVar11;
        uVar12 = puVar6[2];
        puVar4[2] = uVar12;
        *(char *)(iVar10 + 0x2d) = (char)uVar8;
        *(char *)(iVar10 + 0x13d8) = (char)uVar11;
        *(char *)(iVar10 + 0xf) = (char)uVar12;
        break;
      }
      if (*(int *)(iVar1 + 0x30) < 3) {
        uVar13 = FUN_0033b5d0();
        if (((uVar13 & 0x20) != 0) || (uVar13 = FUN_0033b5d0(), (uVar13 & 0x10) != 0)) {
          FUN_0037547c(DAT_0043bc08,0,4,DAT_0043b220,DAT_0043b220,DAT_0043b21c);
          puVar4[*(int *)(iVar1 + 0x30)] = puVar4[*(int *)(iVar1 + 0x30)] ^ 1;
          *(undefined4 *)(iVar1 + 0x40) = 0xfffffffe;
          *(char *)(iVar10 + 0x2d) = (char)*puVar4;
          *(char *)(iVar10 + 0x13d8) = (char)puVar4[1];
          *(char *)(iVar10 + 0xf) = (char)puVar4[2];
          FUN_002e9658();
        }
      }
      else {
        uVar13 = FUN_0033b5d0();
        if ((uVar13 & 0x20) == 0) {
          uVar13 = FUN_0033b5d0();
          if (((uVar13 & 0x10) != 0) && (*(int *)(iVar1 + 0x30) == 3)) {
            FUN_0037547c(DAT_0043b224,0,4,DAT_0043b220,DAT_0043b220,DAT_0043b21c);
            *(undefined4 *)(iVar1 + 0x30) = 4;
          }
        }
        else if (*(int *)(iVar1 + 0x30) == 4) {
          FUN_0037547c(DAT_0043b224,0,4,DAT_0043b220,DAT_0043b220,DAT_0043b21c);
          *(undefined4 *)(iVar1 + 0x30) = 3;
        }
      }
      uVar15 = FUN_0033b5d0();
      if ((uVar15 & 0x80) == 0) {
        uVar13 = FUN_0033b5d0();
        if ((uVar13 & 0x40) == 0) {
          uVar13 = FUN_0033b5ec();
          if ((uVar13 & 1) == 0) {
            uVar13 = FUN_0033b5ec();
            if ((uVar13 & 2) == 0) {
              uVar15 = FUN_0033b5ec();
              puVar5 = DAT_0043b20c;
              if ((uVar15 & 8) != 0) {
                *(undefined4 *)(iVar1 + 0x30) = 4;
                uVar8 = (int)(uVar15 >> 0x20);
                if ((*puVar5 & 1) == 0) {
                  uVar14 = FUN_003679b4(DAT_0043b20c);
                  uVar8 = (int)((ulonglong)uVar14 >> 0x20);
                  if ((int)uVar14 != 0) {
                    FUN_0036788c(DAT_0043b210);
                    uVar8 = DAT_0043b218;
                  }
                }
                FUN_002e9a1c(local_40,uVar8);
                FUN_0037547c(DAT_0043b224,0,4,DAT_0043b220,DAT_0043b220,DAT_0043b21c);
              }
              break;
            }
            FUN_0037547c(DAT_0043bc0c,0,4,DAT_0043b220,DAT_0043b220,DAT_0043b21c);
          }
          else {
            FUN_0037547c(DAT_0043bc08,0,4,DAT_0043b220,DAT_0043b220,DAT_0043b21c);
            iVar9 = *(int *)(iVar1 + 0x30);
            if (iVar9 < 3) {
              puVar4[iVar9] = puVar4[iVar9] ^ 1;
              *(char *)(iVar10 + 0x2d) = (char)*puVar4;
              *(char *)(iVar10 + 0x13d8) = (char)puVar4[1];
              *(char *)(iVar10 + 0xf) = (char)puVar4[2];
              FUN_002e9658();
              *(undefined4 *)(iVar1 + 0x40) = 0xfffffffe;
              break;
            }
            if (iVar9 != 3) goto LAB_0043b5e0;
          }
          uVar8 = *puVar6;
          *puVar4 = uVar8;
          uVar11 = puVar6[1];
          puVar4[1] = uVar11;
          uVar12 = puVar6[2];
          puVar4[2] = uVar12;
          *(char *)(iVar10 + 0x2d) = (char)uVar8;
          *(char *)(iVar10 + 0x13d8) = (char)uVar11;
          *(char *)(iVar10 + 0xf) = (char)uVar12;
          goto LAB_0043b5e0;
        }
        if (*(int *)(iVar1 + 0x30) < 3) {
          if (*(int *)(iVar1 + 0x30) < 1) break;
          FUN_0037547c(DAT_0043b224,0,4,DAT_0043b220,DAT_0043b220,DAT_0043b21c);
          iVar10 = *(int *)(iVar1 + 0x30) + -1;
        }
        else {
          FUN_0037547c(DAT_0043b224,0,4,DAT_0043b220,DAT_0043b220,DAT_0043b21c);
          iVar10 = 2;
        }
        *(int *)(iVar1 + 0x30) = iVar10;
        break;
      }
      if (*(int *)(iVar1 + 0x30) != 2) {
        if (*(int *)(iVar1 + 0x30) < 2) {
          FUN_0037547c(DAT_0043b224,0,4,DAT_0043b220,DAT_0043b220,DAT_0043b21c);
          *(int *)(iVar1 + 0x30) = *(int *)(iVar1 + 0x30) + 1;
        }
        break;
      }
      uVar8 = (int)(uVar15 >> 0x20);
      if ((*DAT_0043b20c & 1) == 0) {
        uVar14 = FUN_003679b4(DAT_0043b20c);
        uVar8 = (int)((ulonglong)uVar14 >> 0x20);
        if ((int)uVar14 != 0) {
          FUN_0036788c(DAT_0043b210);
          uVar8 = DAT_0043b218;
        }
      }
      FUN_002e9a1c(local_40,uVar8);
      FUN_0037547c(DAT_0043b224,0,4,DAT_0043b220,DAT_0043b220,DAT_0043b21c);
    }
    else {
      uVar8 = (int)((ulonglong)uVar14 >> 0x20);
      if ((*DAT_0043b20c & 1) == 0) {
        uVar14 = FUN_003679b4(DAT_0043b20c);
        uVar8 = (int)((ulonglong)uVar14 >> 0x20);
        if ((int)uVar14 != 0) {
          FUN_0036788c(DAT_0043b210);
          uVar8 = DAT_0043b218;
        }
      }
      FUN_002e9a1c(local_40,uVar8);
      *(undefined4 *)(iVar1 + 0x3c) = 7;
    }
    *(undefined4 *)(iVar1 + 0x30) = 4;
    break;
  case 3:
    iVar10 = 0x2b;
    do {
      local_48 = VectorSignedToFloat(*(int *)(iVar1 + 0x2c) * -0x50,(byte)(in_fpscr >> 0x15) & 3);
      local_44 = uVar3;
      FUN_002f9430(*(undefined4 *)(iVar1 + 8),&local_48,1,iVar10);
      uVar8 = extraout_r1;
      do {
        if (iVar10 - 0x40U < 8) {
          local_48 = uVar3;
          local_44 = VectorSignedToFloat(*(int *)(iVar1 + 0x2c) << 4,(byte)(in_fpscr >> 0x15) & 3);
          FUN_002f9430(*(undefined4 *)(iVar1 + 8),&local_48,1,iVar10);
          uVar8 = extraout_r1_00;
        }
        iVar10 = iVar10 + 1;
        if (0x4d < iVar10) {
          if (*(int *)(iVar1 + 0x2c) != 4) {
            *(int *)(iVar1 + 0x2c) = *(int *)(iVar1 + 0x2c) + 1;
            return;
          }
          if ((*DAT_0043b20c & 1) == 0) {
            uVar14 = FUN_003679b4(DAT_0043b20c);
            uVar8 = (int)((ulonglong)uVar14 >> 0x20);
            if ((int)uVar14 != 0) {
              FUN_0036788c(DAT_0043b210);
              uVar8 = DAT_0043b218;
            }
          }
          FUN_002e9a1c(local_40,uVar8);
          *(undefined4 *)(iVar1 + 0x28) = 1;
          goto switchD_0043aee8_default;
        }
      } while (0x3f < iVar10);
    } while( true );
  case 4:
    iVar9 = FUN_0033f428(0x98,0x19,0x11c,0x30,2);
    if (iVar9 != 0) {
      FUN_0037547c(DAT_0043bc08,0,4,DAT_0043b220,DAT_0043b220,DAT_0043b21c);
      puVar4[*(int *)(iVar1 + 0x30)] = puVar4[*(int *)(iVar1 + 0x30)] ^ 1;
      *(undefined4 *)(iVar1 + 0x40) = 0xfffffffe;
      *(char *)(iVar10 + 0x2d) = (char)*puVar4;
      *(char *)(iVar10 + 0x13d8) = (char)puVar4[1];
      *(char *)(iVar10 + 0xf) = (char)puVar4[2];
      FUN_002e9658();
    }
    if (local_58[0] != '\0') break;
    goto LAB_0043b868;
  case 5:
    iVar9 = FUN_0033f428(0x98,0x49,0x11c,0x30,2);
    if (iVar9 != 0) {
      FUN_0037547c(DAT_0043bc08,0,4,DAT_0043b220,DAT_0043b220,DAT_0043b21c);
      puVar4[*(int *)(iVar1 + 0x30)] = puVar4[*(int *)(iVar1 + 0x30)] ^ 1;
      *(undefined4 *)(iVar1 + 0x40) = 0xfffffffe;
      *(char *)(iVar10 + 0x2d) = (char)*puVar4;
      *(char *)(iVar10 + 0x13d8) = (char)puVar4[1];
      *(char *)(iVar10 + 0xf) = (char)puVar4[2];
      FUN_002e9658();
    }
    goto joined_r0x0043b864;
  case 6:
    iVar9 = FUN_0033f428(0x98,0x79,0x11c,0x30,2);
    if (iVar9 != 0) {
      FUN_0037547c(DAT_0043bc08,0,4,DAT_0043b220,DAT_0043b220,DAT_0043b21c);
      puVar4[*(int *)(iVar1 + 0x30)] = puVar4[*(int *)(iVar1 + 0x30)] ^ 1;
      *(undefined4 *)(iVar1 + 0x40) = 0xfffffffe;
      *(char *)(iVar10 + 0x2d) = (char)*puVar4;
      *(char *)(iVar10 + 0x13d8) = (char)puVar4[1];
      *(char *)(iVar10 + 0xf) = (char)puVar4[2];
      FUN_002e9658();
    }
joined_r0x0043b864:
    if (local_58[0] == '\0') {
LAB_0043b868:
      *(undefined4 *)(iVar1 + 0x3c) = 0;
    }
    break;
  case 7:
    iVar10 = FUN_0033f428(0xdc,0xcc,0x60,0x20,2);
    if (iVar10 != 0) {
      FUN_0037547c(DAT_0043bc08,0,4,DAT_0043b220,DAT_0043b220,DAT_0043b21c);
      local_48 = uVar8;
      local_44 = uVar3;
      FUN_002f9430(*(undefined4 *)(iVar1 + 8),&local_48,1,0x4b);
      FUN_002f9430(*(undefined4 *)(iVar1 + 8),&local_48,1,0x4c);
      FUN_002f9430(*(undefined4 *)(iVar1 + 8),&local_48,1,0x4d);
      local_4c = uVar11;
      FUN_002fcdec(*(undefined4 *)(iVar1 + 8),&local_4c,1,0x47);
LAB_0043b5e0:
      *(undefined4 *)(iVar1 + 0x2c) = 0;
      *(undefined4 *)(iVar1 + 0x3c) = 3;
      return;
    }
    local_48 = uVar3;
    if (local_58[0] == '\0') {
      local_44 = uVar3;
      FUN_002f9430(*(undefined4 *)(iVar1 + 8),&local_48,1,0x47);
      local_4c = uVar11;
      FUN_002fcdec(*(undefined4 *)(iVar1 + 8),&local_4c,1,0x47);
      local_48 = uVar8;
      local_44 = uVar3;
      FUN_002f9430(*(undefined4 *)(iVar1 + 8),&local_48,1,0x4b);
      FUN_002f9430(*(undefined4 *)(iVar1 + 8),&local_48,1,0x4c);
      FUN_002f9430(*(undefined4 *)(iVar1 + 8),&local_48,1,0x4d);
      *(undefined4 *)(iVar1 + 0x3c) = 0;
    }
    else {
      local_44 = uVar12;
      FUN_002f9430(*(undefined4 *)(iVar1 + 8),&local_48,1,0x47);
      local_4c = uVar2;
      FUN_002fcdec(*(undefined4 *)(iVar1 + 8),&local_4c,1,0x47);
      local_48 = uVar3;
      local_44 = uVar3;
      FUN_002f9430(*(undefined4 *)(iVar1 + 8),&local_48,1,0x4b);
      FUN_002f9430(*(undefined4 *)(iVar1 + 8),&local_48,1,0x4c);
      FUN_002f9430(*(undefined4 *)(iVar1 + 8),&local_48,1,0x4d);
    }
    break;
  case 8:
    iVar10 = FUN_0033f428(4,0xcc,0x60,0x20,2);
    if (iVar10 != 0) {
      FUN_0037547c(DAT_0043bc0c,0,4,DAT_0043b220,DAT_0043b220,DAT_0043b21c);
      local_48 = uVar8;
      local_44 = uVar3;
      FUN_002f9430(*(undefined4 *)(iVar1 + 8),&local_48,1,0x48);
      FUN_002f9430(*(undefined4 *)(iVar1 + 8),&local_48,1,0x49);
      FUN_002f9430(*(undefined4 *)(iVar1 + 8),&local_48,1,0x4a);
      local_4c = uVar11;
      FUN_002fcdec(*(undefined4 *)(iVar1 + 8),&local_4c,1,0x43);
      goto LAB_0043b5e0;
    }
    local_48 = uVar3;
    if (local_58[0] == '\0') {
      local_44 = uVar3;
      FUN_002f9430(*(undefined4 *)(iVar1 + 8),&local_48,1,0x43);
      local_4c = uVar11;
      FUN_002fcdec(*(undefined4 *)(iVar1 + 8),&local_4c,1,0x43);
      local_48 = uVar8;
      local_44 = uVar3;
      FUN_002f9430(*(undefined4 *)(iVar1 + 8),&local_48,1,0x48);
      FUN_002f9430(*(undefined4 *)(iVar1 + 8),&local_48,1,0x49);
      FUN_002f9430(*(undefined4 *)(iVar1 + 8),&local_48,1,0x4a);
      *(undefined4 *)(iVar1 + 0x3c) = 0;
    }
    else {
      local_44 = uVar12;
      FUN_002f9430(*(undefined4 *)(iVar1 + 8),&local_48,1,0x43);
      local_4c = uVar2;
      FUN_002fcdec(*(undefined4 *)(iVar1 + 8),&local_4c,1,0x43);
      local_48 = uVar3;
      local_44 = uVar3;
      FUN_002f9430(*(undefined4 *)(iVar1 + 8),&local_48,1,0x48);
      FUN_002f9430(*(undefined4 *)(iVar1 + 8),&local_48,1,0x49);
      FUN_002f9430(*(undefined4 *)(iVar1 + 8),&local_48,1,0x4a);
    }
  }
switchD_0043aee8_default:
  FUN_002e9768();
  FUN_0044b5a0();
  return;
}
