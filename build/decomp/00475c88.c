// OoT3D decomp @ 00475c88  name=FUN_00475c88  size=4236

/* WARNING: Type propagation algorithm not settling */

void FUN_00475c88(int param_1)

{
  char cVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  undefined8 uVar20;

  iVar5 = DAT_00476c8c;
  iVar4 = DAT_00476c84;
  bVar19 = false;
  iVar11 = *(int *)(param_1 + 0x20ac);
  if ((DAT_00476c88 <= *(int *)(DAT_00476c84 + 8)) &&
     (*(short *)(param_1 + 0x104) != 99 || *(int *)(DAT_00476c84 + 8) != DAT_00476c88)) {
    return;
  }
  *(undefined1 *)(DAT_00476c8c + 0x576) = 0;
  uVar12 = *(uint *)(iVar11 + 0x1710);
  if (((uVar12 & 0x800000) == 0) && (*(char *)(param_1 + 0x5c74) < '\x02')) {
    if (*(short *)(param_1 + 0x104) == 0x4b) {
      uVar20 = FUN_0036e864(param_1,0x38);
      uVar12 = (uint)((ulonglong)uVar20 >> 0x20);
      if ((int)uVar20 != 0) goto LAB_00475d4c;
    }
    if (*(short *)(param_1 + 0x104) == 0x44) {
      if (*(short *)(iVar5 + 0x57a) == 1) goto LAB_00476c24;
      *(undefined2 *)(iVar5 + 0x578) = 1;
      *(undefined2 *)(iVar5 + 0x57a) = 1;
    }
    else {
      if (*(short *)(param_1 + 0x104) == 0x49) {
        *(undefined1 *)(iVar5 + 0x576) = 2;
        *(undefined1 *)(iVar5 + 0x573) = 0xff;
        *(undefined1 *)(iVar5 + 0x572) = 0xff;
        *(undefined1 *)(iVar5 + 0x571) = 0xff;
        *(undefined1 *)(iVar5 + 0x570) = 0xff;
        cVar1 = *(char *)(iVar4 + 0x80);
        if (*(char *)(param_1 + 0x2e40) == '\0') {
          if (cVar1 == 'Y') {
            *(char *)(iVar4 + 0x80) = *(char *)(iVar5 + 0x56f);
            *(undefined1 *)(iVar5 + 0x56f) = 0xff;
            uVar7 = 0x32;
            *(undefined1 *)(iVar5 + 0x575) = 0xff;
          }
          else {
            if (*(char *)(iVar5 + 0x56f) == '\0') {
              *(undefined2 *)(iVar5 + 0x57a) = 0;
            }
            *(undefined1 *)(iVar5 + 0x56f) = 0xff;
            *(undefined1 *)(iVar5 + 0x575) = 0xff;
            uVar7 = 0x32;
            if (*(short *)(iVar5 + 0x57a) == 0x32) goto LAB_00476c24;
          }
        }
        else if (cVar1 == 'Y') {
          if (*(short *)(iVar5 + 0x57a) == 0xc) goto LAB_00476c24;
          uVar7 = 0xc;
        }
        else {
          *(char *)(iVar5 + 0x56f) = cVar1;
          *(undefined1 *)(iVar4 + 0x80) = 0x59;
          uVar7 = 0xc;
        }
      }
      else {
        iVar8 = FUN_00366748(param_1);
        if (iVar8 != 0) goto LAB_00476c24;
        iVar8 = FUN_002d7a78(param_1);
        if ((iVar8 < 2) || (iVar8 = FUN_002d7a78(param_1), 4 < iVar8)) {
          uVar12 = *(uint *)(iVar11 + 0x1710);
          if (((uVar12 & 0x200000) == 0) &&
             ((*(uint *)(iVar11 + 0x1714) & 0x40000) == 0 && (uVar12 & 0x2000) == 0)) {
            if ((*(ushort *)(iVar5 + 0x58a) & 0xf) == 1) {
              cVar1 = *(char *)(iVar4 + 0x80);
              if ((uVar12 & 0x800000) == 0) {
                if (cVar1 == -1 || cVar1 == '\x03') {
                  uVar6 = *(undefined1 *)(iVar5 + 0x56f);
LAB_004761c8:
                  *(undefined1 *)(iVar4 + 0x80) = uVar6;
                }
              }
              else if (cVar1 != -1 && cVar1 != '\x03') {
                if (*(char *)(iVar4 + 0x8f) != -1) {
                  uVar6 = 3;
                  goto LAB_004761c8;
                }
                *(undefined1 *)(iVar4 + 0x80) = 0xff;
              }
              if (*(char *)(iVar4 + 0x81) == '\a' || *(char *)(iVar4 + 0x81) == '\b') {
                bVar14 = *(char *)(iVar5 + 0x570) != -1;
                *(undefined1 *)(iVar5 + 0x570) = 0;
              }
              else {
                bVar14 = *(char *)(iVar5 + 0x570) != '\0';
                *(undefined1 *)(iVar5 + 0x570) = 0xff;
              }
              if (*(char *)(iVar4 + 0x82) == '\a' || *(char *)(iVar4 + 0x82) == '\b') {
                bVar15 = *(char *)(iVar5 + 0x571) != -1;
                *(undefined1 *)(iVar5 + 0x571) = 0;
              }
              else {
                bVar15 = *(char *)(iVar5 + 0x571) != '\0';
                *(undefined1 *)(iVar5 + 0x571) = 0xff;
              }
              if (*(char *)(iVar4 + 0x83) == '\a' || *(char *)(iVar4 + 0x83) == '\b') {
                bVar16 = *(char *)(iVar5 + 0x572) != -1;
                *(undefined1 *)(iVar5 + 0x572) = 0;
              }
              else {
                bVar16 = *(char *)(iVar5 + 0x572) != '\0';
                *(undefined1 *)(iVar5 + 0x572) = 0xff;
              }
              if (*(char *)(iVar4 + 0x84) == '\a' || *(char *)(iVar4 + 0x84) == '\b') {
                bVar17 = *(char *)(iVar5 + 0x573) != -1;
                *(undefined1 *)(iVar5 + 0x573) = 0;
              }
              else {
                bVar17 = *(char *)(iVar5 + 0x573) != '\0';
                *(undefined1 *)(iVar5 + 0x573) = 0xff;
              }
              bVar18 = *(char *)(iVar5 + 0x575) == -1;
              bVar19 = bVar18 || (!bVar17 || (!bVar16 || (!bVar15 || !bVar14)));
              if (bVar18) {
                *(undefined1 *)(iVar5 + 0x575) = 0;
              }
              else if (bVar17 && (bVar16 && (bVar15 && bVar14))) {
                sVar3 = *(short *)(iVar5 + 0x57a);
                goto joined_r0x004762bc;
              }
              goto LAB_004762ac;
            }
            if (*(char *)(param_1 + 0x2e43) == '\0') {
              cVar1 = *(char *)(iVar4 + 0x80);
              if ((cVar1 == '\x06' || cVar1 == '\x03') || cVar1 == '\t') {
LAB_00476348:
                bVar19 = true;
                *(undefined1 *)(iVar4 + 0x80) = *(undefined1 *)(iVar5 + 0x56f);
              }
              else if (cVar1 == -1) {
                sVar3 = *(short *)(DAT_00476c90 + 0x4a);
joined_r0x00476344:
                if (sVar3 == 0) goto LAB_00476348;
              }
              else if (*(char *)(iVar5 + 0x56f) == -1) {
                bVar19 = true;
                *(undefined1 *)(iVar5 + 0x56f) = 0;
              }
            }
            else if (*(char *)(param_1 + 0x2e43) == '\x01') {
              cVar1 = *(char *)(iVar4 + 0x80);
              if ((cVar1 == '\x06' || cVar1 == '\x03') || cVar1 == '\t') goto LAB_00476348;
              if (cVar1 == -1) {
                sVar3 = *(short *)(DAT_00476c90 + 0x4a);
                goto joined_r0x00476344;
              }
              cVar1 = *(char *)(iVar5 + 0x56f);
              *(undefined1 *)(iVar5 + 0x56f) = 0xff;
              if (cVar1 == '\0') {
                bVar19 = true;
              }
            }
            uVar12 = *(byte *)(iVar4 + 0x81) - 0x14;
            if (*(char *)(param_1 + 0x2e45) == '\0') {
              if ((uVar12 < 0xd) &&
                 (cVar1 = *(char *)(iVar5 + 0x570), *(undefined1 *)(iVar5 + 0x570) = 0, cVar1 == -1)
                 ) {
                bVar19 = true;
              }
              if ((*(byte *)(iVar4 + 0x82) - 0x14 < 0xd) &&
                 (cVar1 = *(char *)(iVar5 + 0x571), *(undefined1 *)(iVar5 + 0x571) = 0, cVar1 == -1)
                 ) {
                bVar19 = true;
              }
              if ((*(byte *)(iVar4 + 0x83) - 0x14 < 0xd) &&
                 (cVar1 = *(char *)(iVar5 + 0x572), *(undefined1 *)(iVar5 + 0x572) = 0, cVar1 == -1)
                 ) {
                bVar19 = true;
              }
              if ((*(byte *)(iVar4 + 0x84) - 0x14 < 0xd) &&
                 (cVar1 = *(char *)(iVar5 + 0x573), *(undefined1 *)(iVar5 + 0x573) = 0, cVar1 == -1)
                 ) {
                bVar19 = true;
              }
            }
            else {
              if ((uVar12 < 0xd) &&
                 (cVar1 = *(char *)(iVar5 + 0x570), *(undefined1 *)(iVar5 + 0x570) = 0xff,
                 cVar1 == '\0')) {
                bVar19 = true;
              }
              if ((*(byte *)(iVar4 + 0x82) - 0x14 < 0xd) &&
                 (cVar1 = *(char *)(iVar5 + 0x571), *(undefined1 *)(iVar5 + 0x571) = 0xff,
                 cVar1 == '\0')) {
                bVar19 = true;
              }
              if ((*(byte *)(iVar4 + 0x83) - 0x14 < 0xd) &&
                 (cVar1 = *(char *)(iVar5 + 0x572), *(undefined1 *)(iVar5 + 0x572) = 0xff,
                 cVar1 == '\0')) {
                bVar19 = true;
              }
              if ((*(byte *)(iVar4 + 0x84) - 0x14 < 0xd) &&
                 (cVar1 = *(char *)(iVar5 + 0x573), *(undefined1 *)(iVar5 + 0x573) = 0xff,
                 cVar1 == '\0')) {
                bVar19 = true;
              }
            }
            uVar12 = *(byte *)(iVar4 + 0x81) - 0x21;
            if (*(char *)(param_1 + 0x2e46) == '\0') {
              if ((uVar12 < 0x17) &&
                 (cVar1 = *(char *)(iVar5 + 0x570), *(undefined1 *)(iVar5 + 0x570) = 0, cVar1 == -1)
                 ) {
                bVar19 = true;
              }
              if ((*(byte *)(iVar4 + 0x82) - 0x21 < 0x17) &&
                 (cVar1 = *(char *)(iVar5 + 0x571), *(undefined1 *)(iVar5 + 0x571) = 0, cVar1 == -1)
                 ) {
                bVar19 = true;
              }
              if ((*(byte *)(iVar4 + 0x83) - 0x21 < 0x17) &&
                 (cVar1 = *(char *)(iVar5 + 0x572), *(undefined1 *)(iVar5 + 0x572) = 0, cVar1 == -1)
                 ) {
                bVar19 = true;
              }
              if ((*(byte *)(iVar4 + 0x84) - 0x21 < 0x17) &&
                 (cVar1 = *(char *)(iVar5 + 0x573), *(undefined1 *)(iVar5 + 0x573) = 0, cVar1 == -1)
                 ) {
                bVar19 = true;
              }
            }
            else {
              if ((uVar12 < 0x17) &&
                 (cVar1 = *(char *)(iVar5 + 0x570), *(undefined1 *)(iVar5 + 0x570) = 0xff,
                 cVar1 == '\0')) {
                bVar19 = true;
              }
              if ((*(byte *)(iVar4 + 0x82) - 0x21 < 0x17) &&
                 (cVar1 = *(char *)(iVar5 + 0x571), *(undefined1 *)(iVar5 + 0x571) = 0xff,
                 cVar1 == '\0')) {
                bVar19 = true;
              }
              if ((*(byte *)(iVar4 + 0x83) - 0x21 < 0x17) &&
                 (cVar1 = *(char *)(iVar5 + 0x572), *(undefined1 *)(iVar5 + 0x572) = 0xff,
                 cVar1 == '\0')) {
                bVar19 = true;
              }
              if ((*(byte *)(iVar4 + 0x84) - 0x21 < 0x17) &&
                 (cVar1 = *(char *)(iVar5 + 0x573), *(undefined1 *)(iVar5 + 0x573) = 0xff,
                 cVar1 == '\0')) {
                bVar19 = true;
              }
            }
            cVar1 = *(char *)(iVar4 + 0x81);
            if (*(char *)(param_1 + 0x2e47) == '\0') {
              if ((cVar1 == '\n' || cVar1 == '\v') &&
                 (cVar1 = *(char *)(iVar5 + 0x570), *(undefined1 *)(iVar5 + 0x570) = 0, cVar1 == -1)
                 ) {
                bVar19 = true;
              }
              if ((*(char *)(iVar4 + 0x82) == '\n' || *(char *)(iVar4 + 0x82) == '\v') &&
                 (cVar1 = *(char *)(iVar5 + 0x571), *(undefined1 *)(iVar5 + 0x571) = 0, cVar1 == -1)
                 ) {
                bVar19 = true;
              }
              if ((*(char *)(iVar4 + 0x83) == '\n' || *(char *)(iVar4 + 0x83) == '\v') &&
                 (cVar1 = *(char *)(iVar5 + 0x572), *(undefined1 *)(iVar5 + 0x572) = 0, cVar1 == -1)
                 ) {
                bVar19 = true;
              }
              if ((*(char *)(iVar4 + 0x84) == '\n' || *(char *)(iVar4 + 0x84) == '\v') &&
                 (cVar1 = *(char *)(iVar5 + 0x573), *(undefined1 *)(iVar5 + 0x573) = 0, cVar1 == -1)
                 ) {
                bVar19 = true;
              }
            }
            else {
              if ((cVar1 == '\n' || cVar1 == '\v') &&
                 (cVar1 = *(char *)(iVar5 + 0x570), *(undefined1 *)(iVar5 + 0x570) = 0xff,
                 cVar1 == '\0')) {
                bVar19 = true;
              }
              if ((*(char *)(iVar4 + 0x82) == '\n' || *(char *)(iVar4 + 0x82) == '\v') &&
                 (cVar1 = *(char *)(iVar5 + 0x571), *(undefined1 *)(iVar5 + 0x571) = 0xff,
                 cVar1 == '\0')) {
                bVar19 = true;
              }
              if ((*(char *)(iVar4 + 0x83) == '\n' || *(char *)(iVar4 + 0x83) == '\v') &&
                 (cVar1 = *(char *)(iVar5 + 0x572), *(undefined1 *)(iVar5 + 0x572) = 0xff,
                 cVar1 == '\0')) {
                bVar19 = true;
              }
              if ((*(char *)(iVar4 + 0x84) == '\n' || *(char *)(iVar4 + 0x84) == '\v') &&
                 (cVar1 = *(char *)(iVar5 + 0x573), *(undefined1 *)(iVar5 + 0x573) = 0xff,
                 cVar1 == '\0')) {
                bVar19 = true;
              }
            }
            cVar1 = *(char *)(iVar4 + 0x81);
            if (*(char *)(param_1 + 0x2e48) == '\0') {
              if ((cVar1 == '\a' || cVar1 == '\b') &&
                 (cVar1 = *(char *)(iVar5 + 0x570), *(undefined1 *)(iVar5 + 0x570) = 0, cVar1 == -1)
                 ) {
                bVar19 = true;
              }
              if ((*(char *)(iVar4 + 0x82) == '\a' || *(char *)(iVar4 + 0x82) == '\b') &&
                 (cVar1 = *(char *)(iVar5 + 0x571), *(undefined1 *)(iVar5 + 0x571) = 0, cVar1 == -1)
                 ) {
                bVar19 = true;
              }
              if ((*(char *)(iVar4 + 0x83) == '\a' || *(char *)(iVar4 + 0x83) == '\b') &&
                 (cVar1 = *(char *)(iVar5 + 0x572), *(undefined1 *)(iVar5 + 0x572) = 0, cVar1 == -1)
                 ) {
                bVar19 = true;
              }
              if ((*(char *)(iVar4 + 0x84) == '\a' || *(char *)(iVar4 + 0x84) == '\b') &&
                 (cVar1 = *(char *)(iVar5 + 0x573), *(undefined1 *)(iVar5 + 0x573) = 0, cVar1 == -1)
                 ) {
                bVar19 = true;
              }
              cVar1 = *(char *)(iVar5 + 0x575);
              *(undefined1 *)(iVar5 + 0x575) = 0;
              if (cVar1 == -1) {
                bVar19 = true;
              }
            }
            else {
              if ((cVar1 == '\a' || cVar1 == '\b') &&
                 (cVar1 = *(char *)(iVar5 + 0x570), *(undefined1 *)(iVar5 + 0x570) = 0xff,
                 cVar1 == '\0')) {
                bVar19 = true;
              }
              if ((*(char *)(iVar4 + 0x82) == '\a' || *(char *)(iVar4 + 0x82) == '\b') &&
                 (cVar1 = *(char *)(iVar5 + 0x571), *(undefined1 *)(iVar5 + 0x571) = 0xff,
                 cVar1 == '\0')) {
                bVar19 = true;
              }
              if ((*(char *)(iVar4 + 0x83) == '\a' || *(char *)(iVar4 + 0x83) == '\b') &&
                 (cVar1 = *(char *)(iVar5 + 0x572), *(undefined1 *)(iVar5 + 0x572) = 0xff,
                 cVar1 == '\0')) {
                bVar19 = true;
              }
              if ((*(char *)(iVar4 + 0x84) == '\a' || *(char *)(iVar4 + 0x84) == '\b') &&
                 (cVar1 = *(char *)(iVar5 + 0x573), *(undefined1 *)(iVar5 + 0x573) = 0xff,
                 cVar1 == '\0')) {
                bVar19 = true;
              }
              cVar1 = *(char *)(iVar5 + 0x575);
              *(undefined1 *)(iVar5 + 0x575) = 0xff;
              if (cVar1 == '\0') {
                bVar19 = true;
              }
            }
            if (*(char *)(param_1 + 0x2e4b) == '\0') {
              if ((*(char *)(iVar4 + 0x81) == '\r') &&
                 (cVar1 = *(char *)(iVar5 + 0x570), *(undefined1 *)(iVar5 + 0x570) = 0, cVar1 == -1)
                 ) {
                bVar19 = true;
              }
              if ((*(char *)(iVar4 + 0x82) == '\r') &&
                 (cVar1 = *(char *)(iVar5 + 0x571), *(undefined1 *)(iVar5 + 0x571) = 0, cVar1 == -1)
                 ) {
                bVar19 = true;
              }
              if ((*(char *)(iVar4 + 0x83) == '\r') &&
                 (cVar1 = *(char *)(iVar5 + 0x572), *(undefined1 *)(iVar5 + 0x572) = 0, cVar1 == -1)
                 ) {
                bVar19 = true;
              }
              if ((*(char *)(iVar4 + 0x84) == '\r') &&
                 (cVar1 = *(char *)(iVar5 + 0x573), *(undefined1 *)(iVar5 + 0x573) = 0, cVar1 == -1)
                 ) {
                bVar19 = true;
              }
            }
            else {
              if ((*(char *)(iVar4 + 0x81) == '\r') &&
                 (cVar1 = *(char *)(iVar5 + 0x570), *(undefined1 *)(iVar5 + 0x570) = 0xff,
                 cVar1 == '\0')) {
                bVar19 = true;
              }
              if ((*(char *)(iVar4 + 0x82) == '\r') &&
                 (cVar1 = *(char *)(iVar5 + 0x571), *(undefined1 *)(iVar5 + 0x571) = 0xff,
                 cVar1 == '\0')) {
                bVar19 = true;
              }
              if ((*(char *)(iVar4 + 0x83) == '\r') &&
                 (cVar1 = *(char *)(iVar5 + 0x572), *(undefined1 *)(iVar5 + 0x572) = 0xff,
                 cVar1 == '\0')) {
                bVar19 = true;
              }
              if ((*(char *)(iVar4 + 0x84) == '\r') &&
                 (cVar1 = *(char *)(iVar5 + 0x573), *(undefined1 *)(iVar5 + 0x573) = 0xff,
                 cVar1 == '\0')) {
                bVar19 = true;
              }
            }
            cVar1 = *(char *)(iVar4 + 0x81);
            if (*(char *)(param_1 + 0x2e4c) == '\0') {
              if ((cVar1 == '\x05' || cVar1 == '\x13') &&
                 (cVar1 = *(char *)(iVar5 + 0x570), *(undefined1 *)(iVar5 + 0x570) = 0, cVar1 == -1)
                 ) {
                bVar19 = true;
              }
              if ((*(char *)(iVar4 + 0x82) == '\x05' || *(char *)(iVar4 + 0x82) == '\x13') &&
                 (cVar1 = *(char *)(iVar5 + 0x571), *(undefined1 *)(iVar5 + 0x571) = 0, cVar1 == -1)
                 ) {
                bVar19 = true;
              }
              if ((*(char *)(iVar4 + 0x83) == '\x05' || *(char *)(iVar4 + 0x83) == '\x13') &&
                 (cVar1 = *(char *)(iVar5 + 0x572), *(undefined1 *)(iVar5 + 0x572) = 0, cVar1 == -1)
                 ) {
                bVar19 = true;
              }
              if ((*(char *)(iVar4 + 0x84) == '\x05' || *(char *)(iVar4 + 0x84) == '\x13') &&
                 (cVar1 = *(char *)(iVar5 + 0x573), *(undefined1 *)(iVar5 + 0x573) = 0, cVar1 == -1)
                 ) {
                bVar19 = true;
              }
            }
            else {
              if ((cVar1 == '\x05' || cVar1 == '\x13') &&
                 (cVar1 = *(char *)(iVar5 + 0x570), *(undefined1 *)(iVar5 + 0x570) = 0xff,
                 cVar1 == '\0')) {
                bVar19 = true;
              }
              if ((*(char *)(iVar4 + 0x82) == '\x05' || *(char *)(iVar4 + 0x82) == '\x13') &&
                 (cVar1 = *(char *)(iVar5 + 0x571), *(undefined1 *)(iVar5 + 0x571) = 0xff,
                 cVar1 == '\0')) {
                bVar19 = true;
              }
              if ((*(char *)(iVar4 + 0x83) == '\x05' || *(char *)(iVar4 + 0x83) == '\x13') &&
                 (cVar1 = *(char *)(iVar5 + 0x572), *(undefined1 *)(iVar5 + 0x572) = 0xff,
                 cVar1 == '\0')) {
                bVar19 = true;
              }
              if ((*(char *)(iVar4 + 0x84) == '\x05' || *(char *)(iVar4 + 0x84) == '\x13') &&
                 (cVar1 = *(char *)(iVar5 + 0x573), *(undefined1 *)(iVar5 + 0x573) = 0xff,
                 cVar1 == '\0')) {
                bVar19 = true;
              }
            }
            uVar12 = (uint)*(byte *)(iVar4 + 0x81);
            if (*(char *)(param_1 + 0x2e4d) == '\0') {
              if ((((((uVar12 != 5 && uVar12 != 10) && uVar12 != 0xb) && uVar12 != 0xd) &&
                   uVar12 != 0x13) && uVar12 != 7) && uVar12 != 8) {
                bVar14 = 0xc < uVar12 - 0x14;
                if (bVar14) {
                  uVar12 = uVar12 - 0x21;
                }
                if ((bVar14 && 0x16 < uVar12) &&
                   (cVar1 = *(char *)(iVar5 + 0x570), *(undefined1 *)(iVar5 + 0x570) = 0,
                   cVar1 == -1)) {
                  bVar19 = true;
                }
              }
              uVar12 = (uint)*(byte *)(iVar4 + 0x82);
              if ((((((uVar12 != 5 && uVar12 != 10) && uVar12 != 0xb) && uVar12 != 0xd) &&
                   uVar12 != 0x13) && uVar12 != 7) && uVar12 != 8) {
                bVar14 = 0xc < uVar12 - 0x14;
                if (bVar14) {
                  uVar12 = uVar12 - 0x21;
                }
                if ((bVar14 && 0x16 < uVar12) &&
                   (cVar1 = *(char *)(iVar5 + 0x571), *(undefined1 *)(iVar5 + 0x571) = 0,
                   cVar1 == -1)) {
                  bVar19 = true;
                }
              }
              uVar12 = (uint)*(byte *)(iVar4 + 0x83);
              if ((((((uVar12 != 5 && uVar12 != 10) && uVar12 != 0xb) && uVar12 != 0xd) &&
                   uVar12 != 0x13) && uVar12 != 7) && uVar12 != 8) {
                bVar14 = 0xc < uVar12 - 0x14;
                if (bVar14) {
                  uVar12 = uVar12 - 0x21;
                }
                if ((bVar14 && 0x16 < uVar12) &&
                   (cVar1 = *(char *)(iVar5 + 0x572), *(undefined1 *)(iVar5 + 0x572) = 0,
                   cVar1 == -1)) {
                  bVar19 = true;
                }
              }
              uVar12 = (uint)*(byte *)(iVar4 + 0x84);
              if ((((((uVar12 == 5 || uVar12 == 10) || uVar12 == 0xb) || uVar12 == 0xd) ||
                   uVar12 == 0x13) || uVar12 == 7) || uVar12 == 8) goto LAB_00476c24;
              bVar14 = 0xc < uVar12 - 0x14;
              if (bVar14) {
                uVar12 = uVar12 - 0x21;
              }
              if (!bVar14 || uVar12 < 0x17) goto LAB_00476c24;
              cVar1 = *(char *)(iVar5 + 0x573);
            }
            else {
              if (uVar12 != 7 && uVar12 != 8) {
                uVar9 = uVar12 - 0x14;
                bVar14 = 0xc < uVar9;
                if (bVar14) {
                  uVar9 = uVar12 - 0x21;
                }
                if (bVar14 && 0x16 < uVar9) {
                  if (*(short *)(param_1 + 0x104) == 0x10 && uVar12 == 0xf) {
                    if (*(char *)(iVar5 + 0x570) == -1) {
                      bVar19 = true;
                    }
                    *(undefined1 *)(iVar5 + 0x570) = 0;
                  }
                  else {
                    if (*(char *)(iVar5 + 0x570) == '\0') {
                      bVar19 = true;
                    }
                    *(undefined1 *)(iVar5 + 0x570) = 0xff;
                  }
                }
              }
              uVar12 = (uint)*(byte *)(iVar4 + 0x82);
              if (uVar12 != 7 && uVar12 != 8) {
                uVar9 = uVar12 - 0x14;
                bVar14 = 0xc < uVar9;
                if (bVar14) {
                  uVar9 = uVar12 - 0x21;
                }
                if (bVar14 && 0x16 < uVar9) {
                  if (*(short *)(param_1 + 0x104) == 0x10 && uVar12 == 0xf) {
                    if (*(char *)(iVar5 + 0x571) == -1) {
                      bVar19 = true;
                    }
                    *(undefined1 *)(iVar5 + 0x571) = 0;
                  }
                  else {
                    if (*(char *)(iVar5 + 0x571) == '\0') {
                      bVar19 = true;
                    }
                    *(undefined1 *)(iVar5 + 0x571) = 0xff;
                  }
                }
              }
              uVar12 = (uint)*(byte *)(iVar4 + 0x83);
              if (uVar12 != 7 && uVar12 != 8) {
                uVar9 = uVar12 - 0x14;
                bVar14 = 0xc < uVar9;
                if (bVar14) {
                  uVar9 = uVar12 - 0x21;
                }
                if (bVar14 && 0x16 < uVar9) {
                  if (*(short *)(param_1 + 0x104) == 0x10 && uVar12 == 0xf) {
                    if (*(char *)(iVar5 + 0x572) == -1) {
                      bVar19 = true;
                    }
                    *(undefined1 *)(iVar5 + 0x572) = 0;
                  }
                  else {
                    if (*(char *)(iVar5 + 0x572) == '\0') {
                      bVar19 = true;
                    }
                    *(undefined1 *)(iVar5 + 0x572) = 0xff;
                  }
                }
              }
              uVar12 = (uint)*(byte *)(iVar4 + 0x84);
              if (uVar12 == 7 || uVar12 == 8) goto LAB_00476c24;
              uVar9 = uVar12 - 0x14;
              bVar14 = 0xc < uVar9;
              if (bVar14) {
                uVar9 = uVar12 - 0x21;
              }
              if (!bVar14 || uVar9 < 0x17) goto LAB_00476c24;
              cVar1 = *(char *)(iVar5 + 0x573);
              if (*(short *)(param_1 + 0x104) != 0x10 || uVar12 != 0xf) {
                if (cVar1 == '\0') {
                  bVar19 = true;
                }
                *(undefined1 *)(iVar5 + 0x573) = 0xff;
                goto LAB_00476c24;
              }
            }
            if (cVar1 == -1) {
              bVar19 = true;
            }
            *(undefined1 *)(iVar5 + 0x573) = 0;
            goto LAB_00476c24;
          }
          cVar1 = *(char *)(iVar5 + 0x56f);
          bVar14 = cVar1 == -1;
          if (bVar14) {
            cVar1 = *(char *)(iVar5 + 0x575);
          }
          if (bVar14 && cVar1 == -1) goto LAB_00476c24;
          *(undefined1 *)(iVar5 + 0x56f) = 0xff;
          *(undefined1 *)(iVar5 + 0x570) = 0xff;
          *(undefined1 *)(iVar5 + 0x571) = 0xff;
          *(undefined1 *)(iVar5 + 0x572) = 0xff;
          *(undefined1 *)(iVar5 + 0x573) = 0xff;
          uVar7 = 0x32;
          *(undefined1 *)(iVar5 + 0x575) = 0xff;
        }
        else {
          cVar1 = *(char *)(iVar5 + 0x56f);
          *(undefined1 *)(iVar5 + 0x56f) = 0xff;
          iVar8 = 1;
          bVar19 = cVar1 != -1;
          *(undefined1 *)(iVar5 + 0x575) = 0xff;
          do {
            iVar10 = FUN_002d7a78(param_1);
            if (iVar10 == 2) {
              iVar13 = iVar4 + iVar8;
              cVar1 = *(char *)(iVar13 + 0x80);
              iVar10 = iVar13 + 0x1000;
              cVar2 = *(char *)(iVar13 + 0x156f);
              if ((((cVar1 != '\n' && cVar1 != '\v') && cVar1 != 'D') && cVar1 != 'E') &&
                  cVar1 != 'F') goto joined_r0x004760cc;
joined_r0x004760dc:
              if (cVar2 == -1) {
                bVar19 = true;
              }
              *(undefined1 *)(iVar10 + 0x56f) = 0;
            }
            else {
              iVar13 = iVar4 + iVar8;
              cVar1 = *(char *)(iVar13 + 0x80);
              iVar10 = iVar13 + 0x1000;
              cVar2 = *(char *)(iVar13 + 0x156f);
              if ((cVar1 == 'D' || cVar1 == 'E') || cVar1 == 'F') goto joined_r0x004760dc;
joined_r0x004760cc:
              if (cVar2 == '\0') {
                bVar19 = true;
              }
              *(undefined1 *)(iVar10 + 0x56f) = 0xff;
            }
            iVar8 = (int)(short)((short)iVar8 + 1);
          } while (iVar8 < 5);
          if (bVar19) {
LAB_004762ac:
            *(undefined2 *)(iVar5 + 0x57a) = 0;
          }
          else {
            sVar3 = *(short *)(iVar5 + 0x57a);
joined_r0x004762bc:
            if (sVar3 == 0x32) goto LAB_00476c24;
          }
          uVar7 = 0x32;
        }
      }
      *(undefined2 *)(iVar5 + 0x578) = uVar7;
      *(undefined2 *)(iVar5 + 0x57a) = uVar7;
    }
    *(undefined2 *)(iVar5 + 0x57c) = 1;
    goto LAB_00476c24;
  }
LAB_00475d4c:
  cVar1 = *(char *)(iVar4 + 0x80);
  if (cVar1 == -1) {
    uVar9 = *(uint *)(iVar11 + 0x1710);
    bVar14 = (uVar9 & 0x800000) != 0;
    if (bVar14) {
      uVar12 = (uint)*(ushort *)(iVar5 + 0x57a);
      uVar9 = 0xc;
    }
    if (bVar14 && uVar12 != 0xc) {
      *(short *)(iVar5 + 0x578) = (short)uVar9;
      *(short *)(iVar5 + 0x57a) = (short)uVar9;
      *(undefined2 *)(iVar5 + 0x57c) = 1;
    }
    goto LAB_00476c24;
  }
  *(undefined1 *)(iVar5 + 0x576) = 1;
  uVar12 = (uint)*(byte *)(iVar5 + 0x56f);
  if (uVar12 == 0xff) {
    *(undefined1 *)(iVar5 + 0x573) = 0;
    *(undefined1 *)(iVar5 + 0x572) = 0;
    *(undefined1 *)(iVar5 + 0x571) = 0;
    *(undefined1 *)(iVar5 + 0x570) = 0;
    *(undefined1 *)(iVar5 + 0x56f) = 0;
    *(undefined1 *)(iVar5 + 0x575) = 0;
  }
  if ((cVar1 != '\x06' && cVar1 != '\x03') && cVar1 != '\t') {
    *(char *)(iVar5 + 0x56f) = cVar1;
    if ((*(short *)(param_1 + 0x104) == 0x4b) && (iVar8 = FUN_0036e864(param_1,0x38), iVar8 != 0)) {
      uVar6 = 9;
LAB_00475de4:
      *(undefined1 *)(iVar4 + 0x80) = uVar6;
    }
    else {
      *(undefined1 *)(iVar4 + 0x80) = 3;
      if (*(char *)(param_1 + 0x5c74) < '\x02') {
        if (*(char *)(iVar4 + 0x8f) == -1) {
          *(undefined1 *)(iVar4 + 0x80) = 0xff;
        }
      }
      else if (*(int *)(iVar4 + 4) != 0) {
        uVar6 = 6;
        goto LAB_00475de4;
      }
    }
    *(undefined1 *)(iVar5 + 0x573) = 0xff;
    *(undefined1 *)(iVar5 + 0x572) = 0xff;
    *(undefined1 *)(iVar5 + 0x571) = 0xff;
    *(undefined1 *)(iVar5 + 0x570) = 0xff;
    *(undefined1 *)(iVar5 + 0x575) = 0xff;
    uVar12 = (uint)*(ushort *)(iVar5 + 0x57a);
    if (uVar12 != 6) {
      *(undefined2 *)(iVar5 + 0x578) = 6;
      *(undefined2 *)(iVar5 + 0x57a) = 6;
      *(undefined2 *)(iVar5 + 0x57c) = 1;
    }
  }
  if (*(char *)(param_1 + 0x7f12) == '\0') {
    if (*(short *)(iVar5 + 0x594) == 1) {
      sVar3 = *(short *)(iVar5 + 0x57a);
    }
    else {
      if (*(char *)(param_1 + 0x5c74) < '\x02') {
        if (*(short *)(param_1 + 0x104) == 0x4b) {
          uVar20 = FUN_0036e864(param_1,0x38);
          uVar12 = (uint)((ulonglong)uVar20 >> 0x20);
          if ((int)uVar20 != 0) {
            sVar3 = *(short *)(iVar5 + 0x57a);
            goto joined_r0x00475ec0;
          }
        }
        uVar9 = *(uint *)(iVar11 + 0x1710);
        bVar14 = (uVar9 & 0x800000) != 0;
        if (bVar14) {
          uVar12 = (uint)*(ushort *)(iVar5 + 0x57a);
          uVar9 = 0xc;
        }
        if (!bVar14 || uVar12 == 0xc) goto LAB_00476c24;
        *(short *)(iVar5 + 0x578) = (short)uVar9;
        *(short *)(iVar5 + 0x57a) = (short)uVar9;
        goto LAB_00475e8c;
      }
      sVar3 = *(short *)(iVar5 + 0x57a);
    }
joined_r0x00475ec0:
    if (sVar3 == 8) goto LAB_00476c24;
    *(undefined2 *)(iVar5 + 0x578) = 8;
    *(undefined2 *)(iVar5 + 0x57a) = 8;
  }
  else {
    if (*(short *)(iVar5 + 0x57a) == 1) goto LAB_00476c24;
    *(undefined2 *)(iVar5 + 0x578) = 1;
    *(undefined2 *)(iVar5 + 0x57a) = 1;
  }
LAB_00475e8c:
  *(undefined2 *)(iVar5 + 0x57c) = 1;
LAB_00476c24:
  uVar12 = *(uint *)(iVar11 + 0x1710);
  if (((uVar12 & 0x200000) == 0) &&
     (((*(uint *)(iVar11 + 0x1714) & 0x40000) == 0 && (uVar12 & 0x2000) == 0) &&
      (uVar12 & 0x800000) == 0)) {
    if ((*(byte *)(iVar4 + 0x81) - 0x44 < 3) &&
       (cVar1 = *(char *)(iVar5 + 0x570), *(undefined1 *)(iVar5 + 0x570) = 0, cVar1 == -1)) {
      bVar19 = true;
    }
    if (*(byte *)(iVar4 + 0x82) - 0x44 < 3) {
      if (*(char *)(iVar5 + 0x571) == -1) {
        bVar19 = true;
      }
      *(undefined1 *)(iVar5 + 0x571) = 0;
    }
    if ((*(byte *)(iVar4 + 0x83) - 0x44 < 3) &&
       (cVar1 = *(char *)(iVar5 + 0x572), *(undefined1 *)(iVar5 + 0x572) = 0, cVar1 == -1)) {
      bVar19 = true;
    }
    if ((*(byte *)(iVar4 + 0x84) - 0x44 < 3) &&
       (cVar1 = *(char *)(iVar5 + 0x573), *(undefined1 *)(iVar5 + 0x573) = 0, cVar1 == -1)) {
      bVar19 = true;
    }
  }
  if (bVar19) {
    *(undefined2 *)(iVar5 + 0x57a) = 0;
    cVar1 = *(char *)(param_1 + 0x5c2d);
    bVar19 = cVar1 == '\0';
    if (bVar19) {
      cVar1 = *(char *)(param_1 + 0x7f12);
    }
    if (bVar19 && cVar1 == '\0') {
      *(undefined2 *)(iVar5 + 0x578) = 0x32;
      *(undefined2 *)(iVar5 + 0x57a) = 0x32;
      *(undefined2 *)(iVar5 + 0x57c) = 1;
    }
  }
  return;
}
