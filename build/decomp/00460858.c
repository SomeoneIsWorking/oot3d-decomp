// OoT3D decomp @ 00460858  name=FUN_00460858  size=504

void FUN_00460858(void)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  char *pcVar6;
  int iVar7;
  byte bVar8;
  char cVar9;
  uint uVar10;
  uint extraout_r1;
  uint extraout_r1_00;
  uint uVar11;
  bool bVar12;
  
  FUN_0047d758(DAT_00460a50);
  iVar3 = DAT_00460a54;
  *(undefined4 *)(DAT_00460a54 + 0xd8) = *(undefined4 *)(DAT_00460a54 + 0xbc);
  cVar9 = *(char *)(iVar3 + 0x15);
  if (cVar9 != '\0') {
    cVar1 = *(char *)(iVar3 + 0x14);
    if (cVar1 == '\x01') {
      cVar9 = *(char *)(iVar3 + 0x13);
    }
    if (cVar1 == '\x01' && cVar9 == '\0') {
      *(undefined4 *)(iVar3 + 0xe4) = *(undefined4 *)(iVar3 + 0xdc);
      *(undefined4 *)(iVar3 + 0xdc) = *(undefined4 *)(iVar3 + 0xd4);
      puVar4 = DAT_00460a58;
      sVar2 = *(short *)(iVar3 + 0x4a);
      if (sVar2 < 0x41) {
        if (sVar2 < -0x40) {
          *DAT_00460a58 = 0xc0;
        }
        else {
          *DAT_00460a58 = (char)sVar2;
        }
      }
      else {
        *DAT_00460a58 = 0x40;
      }
      sVar2 = *(short *)(iVar3 + 0x4c);
      if (sVar2 < 0x41) {
        if (sVar2 < -0x40) {
          puVar4[1] = 0xc0;
        }
        else {
          puVar4[1] = (char)sVar2;
        }
      }
      else {
        puVar4[1] = 0x40;
      }
      *(undefined1 *)(iVar3 + 0x13) = 1;
    }
    if (*(char *)(iVar3 + 0x1d) == '\0' && cVar1 == '\x01') {
      FUN_002d6798(0);
    }
    if (*(uint *)(iVar3 + 0x94) != 0) {
      if ((*(uint *)(iVar3 + 0x94) & 0x4000) == 0) {
        FUN_0047bd10();
      }
      else {
        FUN_0047af90();
      }
    }
    FUN_004779fc();
    *(undefined4 *)(iVar3 + 0xa4) = *(undefined4 *)(iVar3 + 0xd8);
    uVar11 = extraout_r1;
    if (*(char *)(iVar3 + 0x1d) == '\0') {
      FUN_00476d24();
      uVar11 = extraout_r1_00;
    }
    bVar12 = *(int *)(iVar3 + 0x94) != 0;
    uVar10 = 0;
    if (bVar12) {
      uVar10 = (uint)*(byte *)(iVar3 + 0x17);
      uVar11 = (uint)*(byte *)(iVar3 + 0x16);
    }
    if (bVar12 && uVar10 != uVar11) {
      *(undefined1 *)(iVar3 + 0x2d) = 1;
    }
    *(undefined1 *)(iVar3 + 0x17) = *(undefined1 *)(iVar3 + 0x16);
  }
  pbVar5 = DAT_00460a5c;
  *DAT_00460a5c = *(byte *)(iVar3 + 0x18) & 0x3f;
  if (*(char *)(iVar3 + 0x2b) == '\0') {
    if (*(int *)(iVar3 + 0x94) == 0) {
      bVar8 = 0xff;
    }
    else {
      bVar8 = 0xfe;
    }
  }
  else {
    bVar8 = *(char *)(iVar3 + 0x2b) - 1;
    *(undefined1 *)(iVar3 + 0x2b) = 0;
  }
  pbVar5[1] = bVar8;
  pcVar6 = DAT_00460a60;
  bVar8 = *(byte *)(iVar3 + 0x3e);
  pbVar5[2] = bVar8;
  uVar11 = *(byte *)(iVar3 + 0x1e) & 0x3f;
  if (uVar11 < 0x10) {
    cVar9 = *(char *)(DAT_00460a64 + uVar11);
    if (cVar9 == '\x05') {
      if ((*(byte *)(iVar3 + 0x1e) & 0x80) == 0) {
        cVar9 = '\x03';
      }
      else {
        cVar9 = '\x02';
      }
    }
    *pcVar6 = cVar9;
  }
  iVar7 = DAT_00460a68;
  pcVar6[1] = *(char *)(iVar3 + 0x1d);
  uVar11 = (uint)*(ushort *)(iVar3 + 0x44);
  if (*(int *)(iVar3 + 0xa8) == iVar7) {
    if (uVar11 == 0) {
      pcVar6[2] = '\0';
      goto LAB_00460a28;
    }
    uVar11 = (int)(uVar11 - 1) % 8 + 1;
  }
  pcVar6[2] = (char)uVar11;
LAB_00460a28:
  iVar7 = DAT_00460a6c;
  cVar9 = *(char *)(iVar3 + 0x24);
  *(char *)(DAT_00460a6c + 1) = cVar9;
  *(byte *)(iVar7 + 2) = bVar8;
  if (cVar9 == -1) {
    *(undefined1 *)(iVar3 + 0x24) = 0;
  }
  *(int *)(iVar3 + 0xbc) = *(int *)(iVar3 + 0xbc) + 2;
  return;
}

