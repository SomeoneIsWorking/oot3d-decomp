// OoT3D decomp @ 0047f958  name=FUN_0047f958  size=804

void FUN_0047f958(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;

  if (*(char *)(param_1 + 0xc6) != '\0') {
    if (*(char *)(param_1 + 0xc5) != '\0') {
      param_2 = 0;
    }
    if (*(ushort *)(param_1 + 0x114) < *(ushort *)(param_1 + 0x112)) {
      *(ushort *)(param_1 + 0x114) = *(ushort *)(param_1 + 0x114) + 1;
    }
    uVar6 = (uint)*(ushort *)(param_1 + 0x112);
    if (*(ushort *)(param_1 + 0x114) < uVar6) {
      bVar1 = *(byte *)(param_1 + 0x110);
      uVar20 = FUN_00368d94(((uint)*(byte *)(param_1 + 0x111) - (uint)bVar1) *
                            (uint)*(ushort *)(param_1 + 0x114));
      uVar6 = (uint)((ulonglong)uVar20 >> 0x20);
      uVar2 = (int)uVar20 + (uint)bVar1 & 0xff;
    }
    else {
      uVar2 = (uint)*(byte *)(param_1 + 0x111);
    }
    fVar17 = *(float *)(param_1 + 0xcc);
    uVar3 = (uint)*(byte *)(param_1 + 0x90);
    fVar9 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
    fVar9 = fVar9 * DAT_0047fc7c;
    fVar13 = *(float *)(param_1 + 0x100);
    if ((uVar3 == 4) &&
       (uVar3 = FUN_002cde90(param_1 + 0x90), uVar6 = DAT_0047fc80, DAT_0047fc80 < uVar3)) {
      if (*(int *)(param_1 + 0x134) != 0) {
        FUN_0030a474();
        FUN_0030a40c(*(undefined4 *)(param_1 + 0x134));
        *(undefined4 *)(param_1 + 0x134) = 0;
        *(undefined1 *)(param_1 + 0xc5) = 0;
        *(undefined1 *)(param_1 + 0xc6) = 0;
        if (*(code **)(param_1 + 300) != (code *)0x0) {
          (**(code **)(param_1 + 300))(param_1,0,*(undefined4 *)(param_1 + 0x130));
        }
        if (*(char *)(param_1 + 199) != '\0') {
          *(undefined1 *)(param_1 + 199) = 0;
          uVar4 = FUN_0030c758();
          FUN_00308d10(uVar4,param_1);
          return;
        }
      }
    }
    else {
      fVar14 = *(float *)(param_1 + 0xf4);
      bVar8 = NAN(fVar14) || NAN(DAT_0047fc84);
      uVar2 = in_fpscr & 0xfffffff | (uint)(fVar14 < DAT_0047fc84) << 0x1f |
              (uint)(fVar14 == DAT_0047fc84) << 0x1e;
      bVar1 = (byte)(uVar2 >> 0x18);
      bVar7 = (bool)(bVar1 >> 7);
      if (!(bool)(bVar1 >> 6 & 1)) {
        uVar3 = *(uint *)(param_1 + 0xfc);
        uVar6 = *(uint *)(param_1 + 0xf8);
        bVar8 = SBORROW4(uVar6,uVar3);
        bVar7 = (int)(uVar6 - uVar3) < 0;
      }
      fVar15 = DAT_0047fc84;
      if (bVar7 != bVar8) {
        fVar10 = (float)VectorSignedToFloat(uVar3 - uVar6,(byte)(uVar2 >> 0x15) & 3);
        fVar15 = (float)VectorSignedToFloat(uVar3,(byte)(uVar2 >> 0x15) & 3);
        fVar15 = (fVar10 * fVar14) / fVar15;
      }
      fVar14 = (float)VectorSignedToFloat((uint)*(byte *)(param_1 + 0x126) -
                                          (uint)*(byte *)(param_1 + 0x127),(byte)(uVar2 >> 0x15) & 3
                                         );
      fVar14 = fVar15 + fVar14 + *(float *)(param_1 + 0xf0);
      if (*(char *)(param_1 + 0xc4) == '\0') {
        fVar15 = (float)FUN_002cddd4(param_1 + 0xac);
        fVar14 = fVar15 + fVar14;
      }
      if (*(float *)(param_1 + 0x118) == fVar14) {
        fVar15 = *(float *)(param_1 + 0x11c);
      }
      else {
        fVar15 = (float)FUN_00486864((int)(fVar14 * DAT_0047fc88));
        *(float *)(param_1 + 0x118) = fVar14;
        *(float *)(param_1 + 0x11c) = fVar15;
      }
      fVar14 = *(float *)(param_1 + 0x10c);
      fVar10 = *(float *)(param_1 + 0xd0);
      fVar18 = *(float *)(param_1 + 0x104) + *(float *)(param_1 + 0xd4);
      if (*(char *)(param_1 + 0xc4) == '\x02') {
        fVar11 = (float)FUN_002cddd4(param_1 + 0xac);
        fVar18 = fVar11 + fVar18;
      }
      fVar11 = *(float *)(param_1 + 0x108);
      fVar16 = *(float *)(param_1 + 0xd8);
      if (param_2 != 0) {
        if (*(char *)(param_1 + 200) != '\0') {
          iVar5 = *(int *)(param_1 + 0xf8) + 5;
          *(int *)(param_1 + 0xf8) = iVar5;
          if (*(int *)(param_1 + 0xfc) < iVar5) {
            iVar5 = *(int *)(param_1 + 0xfc);
          }
          *(int *)(param_1 + 0xf8) = iVar5;
        }
        FUN_004879a0(param_1 + 0xac,5);
        FUN_00486620(param_1 + 0x90,5);
      }
      fVar19 = *(float *)(param_1 + 0xdc) + DAT_0047fc8c;
      FUN_002cde90(param_1 + 0x90);
      fVar12 = (float)FUN_002cdd7c();
      fVar12 = fVar12 * fVar9 * fVar13 * fVar17;
      if (*(char *)(param_1 + 0xc4) == '\x01') {
        fVar9 = (float)FUN_002cddd4(param_1 + 0xac);
        fVar9 = (float)FUN_002cdd7c(fVar9 * DAT_0047fc90);
        fVar12 = fVar9 * fVar12;
      }
      if (*(int *)(param_1 + 0x134) != 0) {
        FUN_00309600(fVar12);
        FUN_003095dc(fVar14 * fVar10 * fVar15,*(undefined4 *)(param_1 + 0x134));
        FUN_003094a8(fVar18,*(undefined4 *)(param_1 + 0x134));
        FUN_00309484(fVar11 + fVar16,*(undefined4 *)(param_1 + 0x134));
        FUN_003095b8(fVar19,*(undefined4 *)(param_1 + 0x134));
        FUN_0030954c(*(undefined4 *)(param_1 + 0xe0),*(undefined4 *)(param_1 + 0x134),
                     *(undefined1 *)(param_1 + 0xcb));
        FUN_00309508(*(undefined4 *)(param_1 + 0xe4),*(undefined4 *)(param_1 + 0x134));
        uVar6 = 0;
        do {
          FUN_003094cc(*(undefined4 *)(param_1 + uVar6 * 4 + 0xe8),*(undefined4 *)(param_1 + 0x134),
                       uVar6 & 0xff);
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 < 2);
      }
    }
  }
  return;
}
