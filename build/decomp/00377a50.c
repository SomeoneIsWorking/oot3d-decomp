// OoT3D decomp @ 00377a50  name=FUN_00377a50  size=696

/* WARNING: Type propagation algorithm not settling */

uint FUN_00377a50(uint param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  
  uVar6 = (uint)*(byte *)(DAT_00377d08 + param_1);
  uVar7 = uVar6;
  if (0x89 < param_1) {
    uVar7 = (uint)*(byte *)(DAT_00377d08 + *(short *)(DAT_00377d0c + param_1 * 2 + -0x114));
  }
  uVar5 = param_1 - 0x66;
  if (5 < uVar5) {
    uVar5 = param_1 - 0x6c;
  }
  if (uVar5 < 6) {
    return 0xff;
  }
  uVar5 = DAT_00377d10 + param_1 * 4;
  if (param_1 - 0x3b < 3) {
    if (param_1 == 0x3d) {
      return 0xff;
    }
    uVar6 = *(int *)(uVar5 - 0xec) << *DAT_00377d14;
  }
  else if (param_1 - 0x3e < 3) {
    uVar6 = *(int *)(uVar5 - 0xf8) << DAT_00377d14[1];
  }
  else if (param_1 - 0x41 < 3) {
    uVar6 = *(int *)(uVar5 - 0x104) << DAT_00377d14[2];
  }
  else {
    if (2 < param_1 - 0x44) {
      bVar9 = 0x73 < param_1;
      bVar8 = param_1 == 0x74;
      if (!bVar8) {
        bVar9 = 0x74 < param_1;
      }
      bVar3 = param_1 == 0x75;
      if (!bVar8 && !bVar3) {
        bVar9 = 0x75 < param_1;
      }
      bVar4 = param_1 == 0x76;
      if ((!bVar8 && !bVar3) && !bVar4) {
        bVar9 = 0x76 < param_1;
      }
      if (((!bVar8 && !bVar3) && !bVar4) && param_1 != 0x77) {
        uVar5 = param_1 - 6;
        bVar9 = 2 < uVar5;
      }
      if (!bVar9 || ((((bVar8 || bVar3) || bVar4) || param_1 == 0x77) || uVar5 == 3)) {
        return 0xff;
      }
      if (param_1 == 0x96 || param_1 == 0x97) {
        return 0xff;
      }
      if (param_1 == 0x4a || param_1 == 3) {
        iVar1 = (int)(*DAT_00377d1c & *(uint *)(DAT_00377d18 + 0xb8)) >> *DAT_00377d20;
      }
      else {
        if (((param_1 == 0x4b || param_1 == 0x4c) || param_1 == 0x48) || param_1 == 0x49) {
          return 0xff;
        }
        if (param_1 != 0x4d && param_1 != 2) {
          uVar5 = param_1 - 0x98;
          bVar8 = 2 < uVar5;
          bVar9 = uVar5 == 3;
          if (3 < uVar5) {
            bVar8 = 8 < param_1 - 0x4e;
            bVar9 = param_1 - 0x4e == 9;
          }
          if (!bVar8 || bVar9) {
            return 0xff;
          }
          if (param_1 == 0xb) {
            return 0xff;
          }
          if (param_1 == 0x58 || param_1 == 0x95) {
            if ((*(ushort *)(DAT_00377d24 + 10) & 8) == 0) {
              return 0xff;
            }
            return 0x58;
          }
          if (((param_1 == 0x10 || param_1 == 0x7a) || param_1 == 0x73) || param_1 == 0x72) {
            return 0xff;
          }
          if (param_1 == 0x83) {
            return 0x83;
          }
          if (param_1 == 0x78 || param_1 == 0x79) {
            if ((*(ushort *)(DAT_00377d24 + 0x42) & 0x100) == 0) {
              return 0xff;
            }
            return param_1;
          }
          if (param_1 - 0x84 < 6) {
            return 0xff;
          }
          if (param_1 == 0x14) {
            return 0xff;
          }
          if ((param_1 - 0x15 < 0xc) || (param_1 == 0x82)) {
            if (param_1 == 0x1a || param_1 == 0x1b) {
              uVar6 = DAT_00377d18 + uVar6;
              cVar2 = *(char *)(uVar6 + 0x8c);
              bVar9 = cVar2 != -1;
              if (bVar9) {
                cVar2 = *(char *)(uVar6 + 0x8d);
              }
              bVar8 = cVar2 != -1;
              if (bVar9 && bVar8) {
                cVar2 = *(char *)(uVar6 + 0x8e);
              }
              if ((bVar9 && bVar8) && cVar2 != -1) {
                uVar6 = (uint)*(byte *)(uVar6 + 0x8f);
              }
              if (((!bVar9 || !bVar8) || cVar2 == -1) || uVar6 == 0xff) {
                return 0xff;
              }
            }
            else {
              if (param_1 == 0x82) {
                uVar6 = (uint)*(byte *)(DAT_00377d08 + 0x1a);
              }
              uVar6 = DAT_00377d18 + uVar6;
              cVar2 = *(char *)(uVar6 + 0x8c);
              bVar9 = cVar2 != '\x14';
              if (bVar9) {
                cVar2 = *(char *)(uVar6 + 0x8d);
              }
              bVar8 = cVar2 != '\x14';
              if (bVar9 && bVar8) {
                cVar2 = *(char *)(uVar6 + 0x8e);
              }
              if ((bVar9 && bVar8) && cVar2 != '\x14') {
                uVar6 = (uint)*(byte *)(uVar6 + 0x8f);
              }
              if (((!bVar9 || !bVar8) || cVar2 == '\x14') || uVar6 == 0x14) {
                return 0xff;
              }
            }
          }
          else {
            if (param_1 - 0x21 < 0x17) {
              return 0xff;
            }
            if (param_1 == 0xf) {
              return 0xff;
            }
          }
          return (uint)*(byte *)(DAT_00377d18 + uVar7 + 0x8c);
        }
        iVar1 = (int)(DAT_00377d1c[1] & *(uint *)(DAT_00377d18 + 0xb8)) >> DAT_00377d20[1];
      }
      if (iVar1 != 0) {
        return 0;
      }
      return 0xff;
    }
    uVar6 = *(int *)(uVar5 - 0x110) << DAT_00377d14[3];
  }
  if ((*(ushort *)(DAT_00377d18 + 0xb6) & uVar6) != 0) {
    return param_1;
  }
  return 0xff;
}

